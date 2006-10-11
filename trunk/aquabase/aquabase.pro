# File generated by kdevelop's qmake manager. 
# ------------------------------------------- 
# Subdir relative project main directory: .
# Target is an application:  

TEMPLATE = lib
DESTDIR = lib
TARGET = aquabase
INCLUDEPATH += inc \
../odaba/src/opa/h \
../odaba/src/sos/h \
../odaba/src/opi/h
LIBS *= -L../odaba/lib/
LIBS += -lodaba_server  -lodaba_greta  -lodaba_sos  -lodaba_zlib


HEADERS +=  src/AquaBase.h \
                     src/ab_connection.h \
                     src/ab_error.h \
                     src/ab_dictionary.h \
                     src/ab_datasource.h

SOURCES +=  src/ab_connection.cpp \
                     src/ab_error.cpp \
                     src/ab_dictionary.cpp \
                     src/ab_datasource.cpp
                     

HEADERSA +=  inc/odabaclient.h \
            inc/odabadbobjecthandle.h \
            inc/odaba_namespace.h \
            inc/odabaerror.h \
            
            
SOURCESB +=  src/odabaclient.cpp \
            src/odabadbobjecthandle.cpp \
            src/odabaerror.cpp \


CONFIG(debug){
  DEFINES += DEBUG
  MOC_DIR = .moc
  UI_DIR = .ui
  OBJECTS_DIR = .obj
}
else{
  SOURCES += odabadbobjecthandle.cpp 
  DEFINES += NDEBUG
  MOC_DIR = .rmoc
  UI_DIR = .rui
  OBJECTS_DIR = .robj
}
