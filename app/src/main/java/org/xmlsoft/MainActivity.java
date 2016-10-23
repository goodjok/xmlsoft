package org.xmlsoft;
import android.support.v7.app.AppCompatActivity;

import android.os.Bundle;
import android.util.Log;

import org.xmlsoft.jaxp.SAXParserFactoryImpl;
import org.xmlsoft.system.DocumentItem;

import java.io.BufferedInputStream;
import java.io.InputStream;
import java.util.Map;

import javax.xml.parsers.SAXParser;
public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        InputStream is=getResources().openRawResource(R.raw.metadata);
        BufferedInputStream buf = new BufferedInputStream(is);
        try {
            parse(buf);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    private static Map<String, DocumentItem> parse(InputStream is) throws Exception {


        SAXParserFactoryImpl spf = new SAXParserFactoryImpl();


        SAXParser saxParser = spf.newSAXParser();
        XMLContentHandler handler = new XMLContentHandler();


        Log.e("-----------xxxx------", "xml start");
        saxParser.parse(is, handler);
        Log.e("-----------xxxx------", "xml end");
        return handler.sliderPPTMap;

    }
}
