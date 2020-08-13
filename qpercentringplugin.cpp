#include "qpercentring.h"
#include "qpercentringplugin.h"

#include <QtPlugin>

QPercentRingPlugin::QPercentRingPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void QPercentRingPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;

    // Add extension registrations, etc. here

    m_initialized = true;
}

bool QPercentRingPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *QPercentRingPlugin::createWidget(QWidget *parent)
{
    return new QPercentRing(parent);
}

QString QPercentRingPlugin::name() const
{
    return QLatin1String("QPercentRing");
}

QString QPercentRingPlugin::group() const
{
    return QLatin1String("");
}

QIcon QPercentRingPlugin::icon() const
{
    return QIcon();
}

QString QPercentRingPlugin::toolTip() const
{
    return QLatin1String("");
}

QString QPercentRingPlugin::whatsThis() const
{
    return QLatin1String("");
}

bool QPercentRingPlugin::isContainer() const
{
    return false;
}

QString QPercentRingPlugin::domXml() const
{
    return QLatin1String("<widget class=\"QPercentRing\" name=\"qPercentRing\">\n</widget>\n");
}

QString QPercentRingPlugin::includeFile() const
{
    return QLatin1String("qpercentring.h");
}

