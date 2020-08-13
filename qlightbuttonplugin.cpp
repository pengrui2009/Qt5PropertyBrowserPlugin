#include "qlightbutton.h"
#include "qlightbuttonplugin.h"

#include <QtPlugin>

QLightButtonPlugin::QLightButtonPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void QLightButtonPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;

    // Add extension registrations, etc. here

    m_initialized = true;
}

bool QLightButtonPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *QLightButtonPlugin::createWidget(QWidget *parent)
{
    return new QLightButton(parent);
}

QString QLightButtonPlugin::name() const
{
    return QLatin1String("QLightButton");
}

QString QLightButtonPlugin::group() const
{
    return QLatin1String("");
}

QIcon QLightButtonPlugin::icon() const
{
    return QIcon();
}

QString QLightButtonPlugin::toolTip() const
{
    return QLatin1String("");
}

QString QLightButtonPlugin::whatsThis() const
{
    return QLatin1String("");
}

bool QLightButtonPlugin::isContainer() const
{
    return false;
}

QString QLightButtonPlugin::domXml() const
{
    return QLatin1String("<widget class=\"QLightButton\" name=\"qLightButton\">\n</widget>\n");
}

QString QLightButtonPlugin::includeFile() const
{
    return QLatin1String("qlightbutton.h");
}

