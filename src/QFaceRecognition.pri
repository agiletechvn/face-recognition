


contains( QT, multimedia){
DEFINES += QFACERECOGNITION_MEDIA

HEADERS +=  \
$$PWD/qfacerecognitionfilter.h

SOURCES +=  \
$$PWD/qfacerecognitionfilter.cpp
}

contains( QT, quick ){
DEFINES += QFACERECOGNITION_QML
}

HEADERS += $$PWD/qfacerecognition.hpp \
    $$PWD/imageconvertor.hpp \
    $$PWD/facerecognitiontypes.hpp
SOURCES += $$PWD/qfacerecognition.cpp \
    $$PWD/imageconvertor.cpp


INCLUDEPATH += $$PWD/
DEPENDPATH += $$PWD/

INCLUDEPATH += /usr/local/include
DEPENDPATH += /usr/local/include

#INCLUDEPATH += $$PWD/../dlib
#DEPENDPATH += $$PWD/../dlib

#LIBS += -L/Users/thanhtu/MyProjects/CPlusplus/QFaceRecognition/lib -ldlib

#LIBS += -L/opt/X11/lib -lX11

LIBS += -L/usr/local/lib -ldlib \
     -lcblas \
     -llapack
