
TARGET = linktest
CONFIG += odababins
include (../../projects.pri)
DESTDIR = .

LIBS = -L../../../lib/
LIBS +=      -ldl -lodaba_zlib -lodaba_greta


HEADERS +=
SOURCES += main.cpp