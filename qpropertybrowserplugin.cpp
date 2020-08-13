#include "qttreepropertybrowser.h"
#include "qpropertybrowserplugin.h"

#include <QtPlugin>

QPropertyBrowserPlugin::QPropertyBrowserPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void QPropertyBrowserPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;

    // Add extension registrations, etc. here

    m_initialized = true;
}

bool QPropertyBrowserPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *QPropertyBrowserPlugin::createWidget(QWidget *parent)
{
    return new QtTreePropertyBrowser(parent);
}

QString QPropertyBrowserPlugin::name() const
{
    return QLatin1String("QPropertyBrowser");
}

QString QPropertyBrowserPlugin::group() const
{
    return QLatin1String("QPropertyBrowser");
}

QIcon QPropertyBrowserPlugin::icon() const
{
    return QIcon();
}

QString QPropertyBrowserPlugin::toolTip() const
{
    return QLatin1String("QPropertyBrowser");
}

QString QPropertyBrowserPlugin::whatsThis() const
{
    return QLatin1String("QPropertyBrowser");
}

bool QPropertyBrowserPlugin::isContainer() const
{
    return true;
}

QString QPropertyBrowserPlugin::domXml() const
{
    return QLatin1String("<widget class=\"QPropertyBrowser\" name=\"qPropertyBrowser\">\n</widget>\n");
}

QString QPropertyBrowserPlugin::includeFile() const
{
    return QLatin1String("qpropertybrowser.h");
}

