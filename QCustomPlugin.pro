CONFIG      += plugin debug_and_release
TARGET      = $$qtLibraryTarget(qcustompluginplugin)
TEMPLATE    = lib

HEADERS     =   \
                qcustomplugin.h \
                qtreepropertybrowserplugin.h \
                qbuttonpropertybrowserplugin.h \
                qgroupboxpropertybrowserplugin.h
SOURCES     =   \
                qcustomplugin.cpp \
                qtreepropertybrowserplugin.cpp \
                qgroupboxpropertybrowserplugin.cpp \
                qbuttonpropertybrowserplugin.cpp
RESOURCES   = icons.qrc
LIBS        += -L. 

greaterThan(QT_MAJOR_VERSION, 4) {
    QT += designer
} else {
    CONFIG += designer
}

target.path = $$[QT_INSTALL_PLUGINS]/designer
INSTALLS    += target

include(QPropertyBrowser/qtpropertybrowser.pri)

