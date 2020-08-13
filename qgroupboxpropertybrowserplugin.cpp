#include "qgroupboxpropertybrowserplugin.h"
#include "qtbuttonpropertybrowser.h"

#include <QtPlugin>


QGroupBoxPropertyBrowserPlugin::QGroupBoxPropertyBrowserPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void QGroupBoxPropertyBrowserPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;

    // Add extension registrations, etc. here

    m_initialized = true;
}

bool QGroupBoxPropertyBrowserPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *QGroupBoxPropertyBrowserPlugin::createWidget(QWidget *parent)
{
    return new QtButtonPropertyBrowser(parent);
}

QString QGroupBoxPropertyBrowserPlugin::name() const
{
    return QLatin1String("QtGroupBoxPropertyBrowser");
}

QString QGroupBoxPropertyBrowserPlugin::group() const
{
    return QLatin1String("QtPropertyBrowser");
}

QIcon QGroupBoxPropertyBrowserPlugin::icon() const
{
    return QIcon();
}

QString QGroupBoxPropertyBrowserPlugin::toolTip() const
{
    return QLatin1String("QtGroupBoxPropertyBrowser");
}

QString QGroupBoxPropertyBrowserPlugin::whatsThis() const
{
    return QLatin1String("QtButtonPropertyBrowser");
}

bool QGroupBoxPropertyBrowserPlugin::isContainer() const
{
    return true;
}

QString QGroupBoxPropertyBrowserPlugin::domXml() const
{
    return QLatin1String("<widget class=\"QtGroupBoxPropertyBrowser\" name=\"qGroupBoxPropertyBrowser\">\n</widget>\n");
}

QString QGroupBoxPropertyBrowserPlugin::includeFile() const
{
    return QLatin1String("qtgroupboxpropertybrowser.h");
}
