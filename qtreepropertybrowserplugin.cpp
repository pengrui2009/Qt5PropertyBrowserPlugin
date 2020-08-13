#include "qtreepropertybrowserplugin.h"
#include "qttreepropertybrowser.h"

#include <QtPlugin>

QTreePropertyBrowserPlugin::QTreePropertyBrowserPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void QTreePropertyBrowserPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;

    // Add extension registrations, etc. here

    m_initialized = true;
}

bool QTreePropertyBrowserPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *QTreePropertyBrowserPlugin::createWidget(QWidget *parent)
{
    return new QtTreePropertyBrowser(parent);
}

QString QTreePropertyBrowserPlugin::name() const
{
    return QLatin1String("QtTreePropertyBrowser");
}

QString QTreePropertyBrowserPlugin::group() const
{
    return QLatin1String("QtPropertyBrowser");
}

QIcon QTreePropertyBrowserPlugin::icon() const
{
    return QIcon();
}

QString QTreePropertyBrowserPlugin::toolTip() const
{
    return QLatin1String("QtTreePropertyBrowser");
}

QString QTreePropertyBrowserPlugin::whatsThis() const
{
    return QLatin1String("QtTreePropertyBrowser");
}

bool QTreePropertyBrowserPlugin::isContainer() const
{
    return true;
}

QString QTreePropertyBrowserPlugin::domXml() const
{
    return QLatin1String("<widget class=\"QtTreePropertyBrowser\" name=\"qTreePropertyBrowser\">\n</widget>\n");
}

QString QTreePropertyBrowserPlugin::includeFile() const
{
    return QLatin1String("qttreepropertybrowser.h");
}
