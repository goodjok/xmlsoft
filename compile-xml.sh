#! /usr/bin/env bash
#
# Copyright (C) 2013-2014 Zhang Rui <bbcallen@gmail.com>
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

if [ -z "$ANDROID_NDK" -o -z "$ANDROID_NDK" ]; then
    echo "You must define ANDROID_NDK, ANDROID_SDK before starting."
    echo "They must point to your NDK and SDK directories.\n"
    exit 1
fi

REQUEST_TARGET=$1
REQUEST_SUB_CMD=$2 
ACT_ABI_ALL="armv7a arm64 x86 x86_64 mips mips64"
UNAME_S=$(uname -s)

FF_MAKEFLAGS=
if which nproc >/dev/null
then
    FF_MAKEFLAGS=-j`nproc`
elif [ "$UNAME_S" = "Darwin" ] && which sysctl >/dev/null
then
    FF_MAKEFLAGS=-j`sysctl -n machdep.cpu.thread_count`
fi

do_sub_cmd () {
    SUB_CMD=$1 

    case $SUB_CMD in
        prof)
            $ANDROID_NDK/ndk-build $FF_MAKEFLAGS
        ;;
        clean)
            $ANDROID_NDK/ndk-build clean
        ;;
        rebuild)
            $ANDROID_NDK/ndk-build clean
            $ANDROID_NDK/ndk-build $FF_MAKEFLAGS
        ;;
        *)
            $ANDROID_NDK/ndk-build $FF_MAKEFLAGS
        ;;
    esac
}

do_ndk_build () {
    PARAM_TARGET=$1
    PARAM_SUB_CMD=$2


    cd "xmlsoft-${PARAM_TARGET}/src/main/jni"
    do_sub_cmd $PARAM_SUB_CMD
    cd -
 
}


case "$REQUEST_TARGET" in
    "")
        do_ndk_build armv7a;
    ;;
    armv7a|arm64|x86|x86_64|mips|mips64)
        do_ndk_build $REQUEST_TARGET $REQUEST_SUB_CMD;
    ;; 
    all)
        for ABI in $ACT_ABI_ALL
        do
            do_ndk_build "$ABI" $REQUEST_SUB_CMD;
        done
    ;;
    clean)
        for ABI in $ACT_ABI_ALL
        do
            do_ndk_build "$ABI" clean;
        done
    ;;
    *)
        echo "Usage:"
        echo "  compile-ijk.sh armv7a|arm64|x86|x86_64|mips|mips64"
        echo "  compile-ijk.sh all" 
        echo "  compile-ijk.sh clean"
    ;;
esac

