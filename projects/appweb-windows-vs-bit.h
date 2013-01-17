/*
    bit.h -- Build It Configuration Header for windows-x86

    This header is generated by Bit during configuration. To change settings, re-run
    configure or define variables in your Makefile to override these default values.
 */


/* Settings */
#ifndef BIT_BIT
    #define BIT_BIT "2.3.0"
#endif
#ifndef BIT_BUILD_NUMBER
    #define BIT_BUILD_NUMBER "0"
#endif
#ifndef BIT_COMPANY
    #define BIT_COMPANY "Embedthis"
#endif
#ifndef BIT_DEPTH
    #define BIT_DEPTH 1
#endif
#ifndef BIT_DISCOVER
    #define BIT_DISCOVER "cgi,dir,doxygen,dsi,ejs,esp,man,man2html,openssl,pmaker,php,sqlite,utest,zip"
#endif
#ifndef BIT_EJS_ONE_MODULE
    #define BIT_EJS_ONE_MODULE 1
#endif
#ifndef BIT_ESP_MDB
    #define BIT_ESP_MDB 1
#endif
#ifndef BIT_ESP_SDB
    #define BIT_ESP_SDB 0
#endif
#ifndef BIT_EST_CAMELLIA
    #define BIT_EST_CAMELLIA 0
#endif
#ifndef BIT_EST_DES
    #define BIT_EST_DES 0
#endif
#ifndef BIT_EST_GEN_PRIME
    #define BIT_EST_GEN_PRIME 0
#endif
#ifndef BIT_EST_PADLOCK
    #define BIT_EST_PADLOCK 0
#endif
#ifndef BIT_EST_ROM_TABLES
    #define BIT_EST_ROM_TABLES 0
#endif
#ifndef BIT_EST_SSL_CLIENT
    #define BIT_EST_SSL_CLIENT 0
#endif
#ifndef BIT_EST_TEST_CERTS
    #define BIT_EST_TEST_CERTS 0
#endif
#ifndef BIT_EST_XTEA
    #define BIT_EST_XTEA 0
#endif
#ifndef BIT_HAS_DYN_LOAD
    #define BIT_HAS_DYN_LOAD 1
#endif
#ifndef BIT_HAS_LIB_EDIT
    #define BIT_HAS_LIB_EDIT 0
#endif
#ifndef BIT_HAS_LIB_RT
    #define BIT_HAS_LIB_RT 0
#endif
#ifndef BIT_HAS_MMU
    #define BIT_HAS_MMU 1
#endif
#ifndef BIT_HAS_UNNAMED_UNIONS
    #define BIT_HAS_UNNAMED_UNIONS 1
#endif
#ifndef BIT_HTTP_PAM
    #define BIT_HTTP_PAM 1
#endif
#ifndef BIT_HTTP_STEALTH
    #define BIT_HTTP_STEALTH 1
#endif
#ifndef BIT_MPR_LOGGING
    #define BIT_MPR_LOGGING 1
#endif
#ifndef BIT_MPR_MANAGER
    #define BIT_MPR_MANAGER "appman"
#endif
#ifndef BIT_OPTIONAL
    #define BIT_OPTIONAL ""
#endif
#ifndef BIT_PACKS
    #define BIT_PACKS "bits/packs"
#endif
#ifndef BIT_PLATFORMS
    #define BIT_PLATFORMS "local"
#endif
#ifndef BIT_PRODUCT
    #define BIT_PRODUCT "appweb"
#endif
#ifndef BIT_REQUIRED
    #define BIT_REQUIRED "winsdk,compiler,lib,link,dumpbin,rc,bit,pcre"
#endif
#ifndef BIT_STATIC
    #define BIT_STATIC 0
#endif
#ifndef BIT_SYNC
    #define BIT_SYNC "bitos,est,http,mpr,pcre,sqlite"
#endif
#ifndef BIT_TITLE
    #define BIT_TITLE "Embedthis Appweb"
#endif
#ifndef BIT_VERSION
    #define BIT_VERSION "4.3.0"
#endif
#ifndef BIT_WITHOUT_ALL
    #define BIT_WITHOUT_ALL "cgi,dir,doxygen,dsi,ejs,ejscript,esp,man,man2html,openssl,pmaker,php,sqlite"
#endif
#ifndef BIT_WITHOUT_DEFAULT
    #define BIT_WITHOUT_DEFAULT "cgi,dir,doxygen,dsi,ejs,ejscript,esp,man,man2html,openssl,pmaker,php,sqlite"
#endif

/* Prefixes */
#ifndef BIT_CFG_PREFIX
    #define BIT_CFG_PREFIX "C:/Program Files (x86)/Embedthis Appweb"
#endif
#ifndef BIT_BIN_PREFIX
    #define BIT_BIN_PREFIX "C:/Program Files (x86)/Embedthis Appweb/bin"
#endif
#ifndef BIT_INC_PREFIX
    #define BIT_INC_PREFIX "C:/Program Files (x86)/Embedthis Appweb/inc"
#endif
#ifndef BIT_LOG_PREFIX
    #define BIT_LOG_PREFIX "C:/Program Files (x86)/Embedthis Appweb/logs"
#endif
#ifndef BIT_PRD_PREFIX
    #define BIT_PRD_PREFIX "C:/Program Files (x86)/Embedthis Appweb"
#endif
#ifndef BIT_SPL_PREFIX
    #define BIT_SPL_PREFIX "C:/Program Files (x86)/Embedthis Appweb/tmp"
#endif
#ifndef BIT_SRC_PREFIX
    #define BIT_SRC_PREFIX "C:/Program Files (x86)/Embedthis Appweb/src"
#endif
#ifndef BIT_VER_PREFIX
    #define BIT_VER_PREFIX "C:/Program Files (x86)/Embedthis Appweb"
#endif
#ifndef BIT_WEB_PREFIX
    #define BIT_WEB_PREFIX "C:/Program Files (x86)/Embedthis Appweb/web"
#endif

/* Suffixes */
#ifndef BIT_EXE
    #define BIT_EXE ".exe"
#endif
#ifndef BIT_SHLIB
    #define BIT_SHLIB ".lib"
#endif
#ifndef BIT_SHOBJ
    #define BIT_SHOBJ ".dll"
#endif
#ifndef BIT_LIB
    #define BIT_LIB ".lib"
#endif
#ifndef BIT_OBJ
    #define BIT_OBJ ".obj"
#endif

/* Profile */
#ifndef BIT_CONFIG_CMD
    #define BIT_CONFIG_CMD "bit -d -q -platform windows-x86 -without default -profile vs -configure . -gen vs"
#endif
#ifndef BIT_APPWEB_PRODUCT
    #define BIT_APPWEB_PRODUCT 1
#endif
#ifndef BIT_PROFILE
    #define BIT_PROFILE "vs"
#endif

/* Miscellaneous */
#ifndef BIT_MAJOR_VERSION
    #define BIT_MAJOR_VERSION 4
#endif
#ifndef BIT_MINOR_VERSION
    #define BIT_MINOR_VERSION 3
#endif
#ifndef BIT_PATCH_VERSION
    #define BIT_PATCH_VERSION 0
#endif
#ifndef BIT_VNUM
    #define BIT_VNUM 400030000
#endif

/* Packs */
#ifndef BIT_PACK_BIT
    #define BIT_PACK_BIT 1
#endif
#ifndef BIT_PACK_CGI
    #define BIT_PACK_CGI 1
#endif
#ifndef BIT_PACK_CC
    #define BIT_PACK_CC 1
#endif
#ifndef BIT_PACK_DEFAULT
    #define BIT_PACK_DEFAULT 0
#endif
#ifndef BIT_PACK_DIR
    #define BIT_PACK_DIR 1
#endif
#ifndef BIT_PACK_DOXYGEN
    #define BIT_PACK_DOXYGEN 1
#endif
#ifndef BIT_PACK_DSI
    #define BIT_PACK_DSI 1
#endif
#ifndef BIT_PACK_DUMPBIN
    #define BIT_PACK_DUMPBIN 0
#endif
#ifndef BIT_PACK_EJS
    #define BIT_PACK_EJS 1
#endif
#ifndef BIT_PACK_EJSCRIPT
    #define BIT_PACK_EJSCRIPT 0
#endif
#ifndef BIT_PACK_ESP
    #define BIT_PACK_ESP 1
#endif
#ifndef BIT_PACK_EST
    #define BIT_PACK_EST 0
#endif
#ifndef BIT_PACK_HTTP
    #define BIT_PACK_HTTP 1
#endif
#ifndef BIT_PACK_LIB
    #define BIT_PACK_LIB 1
#endif
#ifndef BIT_PACK_LINK
    #define BIT_PACK_LINK 1
#endif
#ifndef BIT_PACK_MAN
    #define BIT_PACK_MAN 1
#endif
#ifndef BIT_PACK_MAN2HTML
    #define BIT_PACK_MAN2HTML 1
#endif
#ifndef BIT_PACK_MATRIXSSL
    #define BIT_PACK_MATRIXSSL 0
#endif
#ifndef BIT_PACK_MOCANA
    #define BIT_PACK_MOCANA 0
#endif
#ifndef BIT_PACK_OPENSSL
    #define BIT_PACK_OPENSSL 0
#endif
#ifndef BIT_PACK_PCRE
    #define BIT_PACK_PCRE 1
#endif
#ifndef BIT_PACK_PHP
    #define BIT_PACK_PHP 0
#endif
#ifndef BIT_PACK_PMAKER
    #define BIT_PACK_PMAKER 0
#endif
#ifndef BIT_PACK_RC
    #define BIT_PACK_RC 1
#endif
#ifndef BIT_PACK_SQLITE
    #define BIT_PACK_SQLITE 1
#endif
#ifndef BIT_PACK_UTEST
    #define BIT_PACK_UTEST 1
#endif
#ifndef BIT_PACK_WINSDK
    #define BIT_PACK_WINSDK 1
#endif
#ifndef BIT_PACK_ZIP
    #define BIT_PACK_ZIP 1
#endif
#ifndef BIT_PACK_BIT_PATH
    #define BIT_PACK_BIT_PATH "/Users/mob/git/ejs/macosx-x64-debug/bin/bit"
#endif
#ifndef BIT_PACK_CGI_PATH
    #define BIT_PACK_CGI_PATH "/Users/mob/git/appweb/src/modules/cgiHandler.c"
#endif
#ifndef BIT_PACK_COMPILER_PATH
    #define BIT_PACK_COMPILER_PATH "cl.exe"
#endif
#ifndef BIT_PACK_DIR_PATH
    #define BIT_PACK_DIR_PATH "/Users/mob/git/appweb/src/dirHandler.c"
#endif
#ifndef BIT_PACK_DOXYGEN_PATH
    #define BIT_PACK_DOXYGEN_PATH "/usr/local/bin/doxygen"
#endif
#ifndef BIT_PACK_DSI_PATH
    #define BIT_PACK_DSI_PATH "/opt/bin/dsi"
#endif
#ifndef BIT_PACK_EJS_PATH
    #define BIT_PACK_EJS_PATH "/Users/mob/git/ejs/macosx-x64-debug/bin/ejs"
#endif
#ifndef BIT_PACK_ESP_PATH
    #define BIT_PACK_ESP_PATH "/Users/mob/git/appweb/src/esp/espHandler.c"
#endif
#ifndef BIT_PACK_HTTP_PATH
    #define BIT_PACK_HTTP_PATH "${BIN}/http"
#endif
#ifndef BIT_PACK_LIB_PATH
    #define BIT_PACK_LIB_PATH "lib.exe"
#endif
#ifndef BIT_PACK_LINK_PATH
    #define BIT_PACK_LINK_PATH "link.exe"
#endif
#ifndef BIT_PACK_MAN_PATH
    #define BIT_PACK_MAN_PATH "/usr/bin/man"
#endif
#ifndef BIT_PACK_MAN2HTML_PATH
    #define BIT_PACK_MAN2HTML_PATH "/opt/bin/man2html"
#endif
#ifndef BIT_PACK_PCRE_PATH
    #define BIT_PACK_PCRE_PATH "/Users/mob/git/appweb/src/deps/pcre"
#endif
#ifndef BIT_PACK_RC_PATH
    #define BIT_PACK_RC_PATH "rc.exe"
#endif
#ifndef BIT_PACK_SQLITE_PATH
    #define BIT_PACK_SQLITE_PATH "/Users/mob/git/appweb/src/deps/sqlite"
#endif
#ifndef BIT_PACK_UTEST_PATH
    #define BIT_PACK_UTEST_PATH "/Users/mob/git/ejs/macosx-x64-debug/bin/utest"
#endif
#ifndef BIT_PACK_WINSDK_PATH
    #define BIT_PACK_WINSDK_PATH "$(SDK)"
#endif
#ifndef BIT_PACK_ZIP_PATH
    #define BIT_PACK_ZIP_PATH "/usr/bin/zip"
#endif
