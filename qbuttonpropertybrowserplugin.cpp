#include "qbuttonpropertybrowserplugin.h"
#include "qtbuttonpropertybrowser.h"

#include <QtPlugin>

QButtonPropertyBrowserPlugin::QButtonPropertyBrowserPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void QButtonPropertyBrowserPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;

    // Add extension registrations, etc. here

    m_initialized = true;
}

bool QButtonPropertyBrowserPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *QButtonPropertyBrowserPlugin::createWidget(QWidget *parent)
{
    return new QtButtonPropertyBrowser(parent);
}

QString QButtonPropertyBrowserPlugin::name() const
{
    return QLatin1String("QtButtonPropertyBrowser");
}

QString QButtonPropertyBrowserPlugin::group() const
{
    return QLatin1String("QtPropertyBrowser");
}

QIcon QButtonPropertyBrowserPlugin::icon() const
{
    return QIcon();
}

QString QButtonPropertyBrowserPlugin::toolTip() const
{
    return QLatin1String("QtButtonPropertyBrowser");
}

QString QButtonPropertyBrowserPlugin::whatsThis() const
{
    return QLatin1String("QtButtonPropertyBrowser");
}

bool QButtonPropertyBrowserPlugin::isContainer() const
{
    return true;
}

QString QButtonPropertyBrowserPlugin::domXml() const
{
    return QLatin1String("<widget class=\"QtButtonPropertyBrowser\" name=\"qButtonPropertyBrowser\">\n</widget>\n");
}

QString QButtonPropertyBrowserPlugin::includeFile() const
{
    return QLatin1String("qtbuttonpropertybrowser.h");
}
