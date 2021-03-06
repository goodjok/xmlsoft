/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_xmlsoft_Document */

#ifndef _Included_org_xmlsoft_Document
#define _Included_org_xmlsoft_Document
#ifdef __cplusplus
extern "C" {
#endif
#undef org_xmlsoft_Document_TYPE_ELEMENT
#define org_xmlsoft_Document_TYPE_ELEMENT 1L
#undef org_xmlsoft_Document_TYPE_ATTRIBUTE
#define org_xmlsoft_Document_TYPE_ATTRIBUTE 2L
#undef org_xmlsoft_Document_TYPE_TEXT
#define org_xmlsoft_Document_TYPE_TEXT 3L
#undef org_xmlsoft_Document_TYPE_CDATA
#define org_xmlsoft_Document_TYPE_CDATA 4L
#undef org_xmlsoft_Document_TYPE_ENTITY_REF
#define org_xmlsoft_Document_TYPE_ENTITY_REF 5L
#undef org_xmlsoft_Document_TYPE_ENTITY
#define org_xmlsoft_Document_TYPE_ENTITY 6L
#undef org_xmlsoft_Document_TYPE_PI
#define org_xmlsoft_Document_TYPE_PI 7L
#undef org_xmlsoft_Document_TYPE_COMMENT
#define org_xmlsoft_Document_TYPE_COMMENT 8L
#undef org_xmlsoft_Document_TYPE_DOCUMENT
#define org_xmlsoft_Document_TYPE_DOCUMENT 9L
#undef org_xmlsoft_Document_TYPE_DOCUMENT_TYPE
#define org_xmlsoft_Document_TYPE_DOCUMENT_TYPE 10L
#undef org_xmlsoft_Document_TYPE_DOCUMENT_FRAG
#define org_xmlsoft_Document_TYPE_DOCUMENT_FRAG 11L
#undef org_xmlsoft_Document_TYPE_NOTATION
#define org_xmlsoft_Document_TYPE_NOTATION 12L
#undef org_xmlsoft_Document_TYPE_DTD
#define org_xmlsoft_Document_TYPE_DTD 14L
/*
 * Class:     org_xmlsoft_Document
 * Method:    getRootElementImpl
 * Signature: ()Lorg/xmlsoft/Node;
 */
JNIEXPORT jobject JNICALL Java_org_xmlsoft_Document_getRootElementImpl
  (JNIEnv *, jobject);

/*
 * Class:     org_xmlsoft_Document
 * Method:    setVersionImpl
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_xmlsoft_Document_setVersionImpl
  (JNIEnv *, jobject, jstring);

/*
 * Class:     org_xmlsoft_Document
 * Method:    getVersionImpl
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_xmlsoft_Document_getVersionImpl
  (JNIEnv *, jobject);

/*
 * Class:     org_xmlsoft_Document
 * Method:    createXPathContextImpl
 * Signature: ()Lorg/xmlsoft/XPathContext;
 */
JNIEXPORT jobject JNICALL Java_org_xmlsoft_Document_createXPathContextImpl
  (JNIEnv *, jobject);

/*
 * Class:     org_xmlsoft_Document
 * Method:    disposeImpl
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_xmlsoft_Document_disposeImpl
  (JNIEnv *, jobject);

/*
 * Class:     org_xmlsoft_Document
 * Method:    createElementImpl
 * Signature: (Lorg/xmlsoft/Namespace;Ljava/lang/String;)Lorg/xmlsoft/Node;
 */
JNIEXPORT jobject JNICALL Java_org_xmlsoft_Document_createElementImpl
  (JNIEnv *, jobject, jobject, jstring);

/*
 * Class:     org_xmlsoft_Document
 * Method:    createTextImpl
 * Signature: (Ljava/lang/String;)Lorg/xmlsoft/Node;
 */
JNIEXPORT jobject JNICALL Java_org_xmlsoft_Document_createTextImpl
  (JNIEnv *, jobject, jstring);

/*
 * Class:     org_xmlsoft_Document
 * Method:    createCommentImpl
 * Signature: (Ljava/lang/String;)Lorg/xmlsoft/Node;
 */
JNIEXPORT jobject JNICALL Java_org_xmlsoft_Document_createCommentImpl
  (JNIEnv *, jobject, jstring);

/*
 * Class:     org_xmlsoft_Document
 * Method:    createCDataImpl
 * Signature: (Ljava/lang/String;)Lorg/xmlsoft/Node;
 */
JNIEXPORT jobject JNICALL Java_org_xmlsoft_Document_createCDataImpl
  (JNIEnv *, jobject, jstring);

/*
 * Class:     org_xmlsoft_Document
 * Method:    createPIImpl
 * Signature: (Ljava/lang/String;Ljava/lang/String;)Lorg/xmlsoft/Node;
 */
JNIEXPORT jobject JNICALL Java_org_xmlsoft_Document_createPIImpl
  (JNIEnv *, jobject, jstring, jstring);

/*
 * Class:     org_xmlsoft_Document
 * Method:    createDocumentImpl
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_xmlsoft_Document_createDocumentImpl
  (JNIEnv *, jclass, jstring);

/*
 * Class:     org_xmlsoft_Document
 * Method:    saveImpl
 * Signature: (Ljava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_xmlsoft_Document_saveImpl
  (JNIEnv *, jobject, jstring, jstring);

/*
 * Class:     org_xmlsoft_Document
 * Method:    saveStreamImpl
 * Signature: (Ljava/io/OutputStream;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_xmlsoft_Document_saveStreamImpl
  (JNIEnv *, jobject, jobject, jstring);

/*
 * Class:     org_xmlsoft_Document
 * Method:    saveWriterImpl
 * Signature: (Ljava/io/Writer;Ljava/lang/String;Ljava/nio/charset/Charset;)V
 */
JNIEXPORT void JNICALL Java_org_xmlsoft_Document_saveWriterImpl
  (JNIEnv *, jobject, jobject, jstring, jobject);

#ifdef __cplusplus
}
#endif
#endif
