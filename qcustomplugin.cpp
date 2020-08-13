#include "qcustomplugin.h"
#include "qlightbuttonplugin.h"
#include "qpercentringplugin.h"
#include "qbuttonpropertybrowserplugin.h"
#include "qgroupboxpropertybrowserplugin.h"
#include "qtreepropertybrowserplugin.h"

QCustomPlugin::QCustomPlugin(QObject *parent)
    : QObject(parent)
{
    m_widgets.append(new QButtonPropertyBrowserPlugin(this));
    m_widgets.append(new QGroupBoxPropertyBrowserPlugin(this));
    m_widgets.append(new QTreePropertyBrowserPlugin(this));

}

QList<QDesignerCustomWidgetInterface*> QCustomPlugin::customWidgets() const
{
    return m_widgets;
}

#if QT_VERSION < 0x050000
Q_EXPORT_PLUGIN2(qcustompluginplugin, QCustomPlugin)
#endif // QT_VERSION < 0x050000
