TARGET = _if_CTX_DBBase
CONFIG += odabalibs
include (../projects.pri)
macx: LIBS += -L../../lib  -lodaba_greta -lodaba_zlib -lodaba_sos
macx: LIBS += -lodaba_server

# Input
SOURCES += qlib/_if_CTX_DBBase.cpp
