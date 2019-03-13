#include <QtQml/qqmlprivate.h>
#include <QtCore/qdir.h>
#include <QtCore/qurl.h>

static const unsigned char qt_resource_tree[] = {
0,
0,0,0,0,2,0,0,0,2,0,0,0,1,0,0,0,
8,0,2,0,0,0,1,0,0,0,26,0,0,0,48,0,
2,0,0,0,15,0,0,0,3,0,0,0,88,0,2,0,
0,0,1,0,0,0,25,0,0,1,198,0,2,0,0,0,
3,0,0,0,22,0,0,2,82,0,2,0,0,0,3,0,
0,0,19,0,0,1,0,0,0,0,0,0,1,0,0,0,
0,0,0,1,144,0,0,0,0,0,1,0,0,0,0,0,
0,0,196,0,2,0,0,0,1,0,0,0,18,0,0,1,
122,0,0,0,0,0,1,0,0,0,0,0,0,3,4,0,
0,0,0,0,1,0,0,0,0,0,0,1,32,0,0,0,
0,0,1,0,0,0,0,0,0,0,60,0,0,0,0,0,
1,0,0,0,0,0,0,1,100,0,0,0,0,0,1,0,
0,0,0,0,0,1,70,0,0,0,0,0,1,0,0,0,
0,0,0,0,164,0,0,0,0,0,1,0,0,0,0,0,
0,1,166,0,0,0,0,0,1,0,0,0,0,0,0,0,
132,0,0,0,0,0,1,0,0,0,0,0,0,0,214,0,
0,0,0,0,1,0,0,0,0,0,0,2,114,0,0,0,
0,0,1,0,0,0,0,0,0,2,162,0,0,0,0,0,
1,0,0,0,0,0,0,2,212,0,0,0,0,0,1,0,
0,0,0,0,0,1,214,0,0,0,0,0,1,0,0,0,
0,0,0,2,14,0,0,0,0,0,1,0,0,0,0,0,
0,2,50,0,0,0,0,0,1,0,0,0,0,0,0,0,
102,0,0,0,0,0,1,0,0,0,0,0,0,0,18,0,
0,0,0,0,1,0,0,0,0};
static const unsigned char qt_resource_names[] = {
0,
1,0,0,0,47,0,47,0,2,0,0,7,19,0,106,0,
115,0,12,8,145,73,179,0,106,0,115,0,99,0,111,0,
110,0,115,0,111,0,108,0,101,0,46,0,106,0,115,0,
3,0,0,120,60,0,113,0,109,0,108,0,11,9,249,35,
28,0,66,0,108,0,117,0,101,0,66,0,111,0,120,0,
46,0,113,0,109,0,108,0,4,0,7,184,181,0,116,0,
114,0,101,0,101,0,12,4,187,37,188,0,84,0,114,0,
101,0,101,0,86,0,105,0,101,0,119,0,46,0,113,0,
109,0,108,0,13,15,72,148,92,0,71,0,111,0,111,0,
103,0,108,0,101,0,77,0,97,0,112,0,46,0,113,0,
109,0,108,0,13,12,212,158,92,0,74,0,83,0,67,0,
111,0,110,0,115,0,111,0,108,0,101,0,46,0,113,0,
109,0,108,0,6,6,166,68,94,0,99,0,111,0,109,0,
109,0,111,0,110,0,18,11,197,95,92,0,83,0,99,0,
114,0,111,0,108,0,108,0,76,0,105,0,115,0,116,0,
86,0,105,0,101,0,119,0,46,0,113,0,109,0,108,0,
13,3,149,136,124,0,65,0,99,0,99,0,111,0,114,0,
100,0,105,0,111,0,110,0,46,0,113,0,109,0,108,0,
16,8,215,31,28,0,83,0,116,0,114,0,101,0,97,0,
109,0,80,0,108,0,97,0,121,0,101,0,114,0,46,0,
113,0,109,0,108,0,12,12,169,36,252,0,84,0,114,0,
101,0,101,0,80,0,97,0,103,0,101,0,46,0,113,0,
109,0,108,0,8,12,66,97,124,0,68,0,101,0,109,0,
111,0,46,0,113,0,109,0,108,0,8,8,1,90,92,0,
109,0,97,0,105,0,110,0,46,0,113,0,109,0,108,0,
8,6,56,97,220,0,72,0,111,0,109,0,101,0,46,0,
113,0,109,0,108,0,13,14,37,225,156,0,86,0,105,0,
100,0,101,0,111,0,80,0,97,0,103,0,101,0,46,0,
113,0,109,0,108,0,5,0,122,121,37,0,116,0,97,0,
98,0,108,0,101,0,25,8,48,137,60,0,86,0,101,0,
114,0,116,0,105,0,99,0,97,0,108,0,76,0,105,0,
110,0,101,0,68,0,114,0,97,0,103,0,103,0,97,0,
98,0,108,0,101,0,46,0,113,0,109,0,108,0,15,10,
147,245,188,0,84,0,97,0,98,0,108,0,101,0,67,0,
111,0,108,0,117,0,109,0,110,0,46,0,113,0,109,0,
108,0,13,11,60,4,220,0,84,0,97,0,98,0,108,0,
101,0,86,0,105,0,101,0,119,0,46,0,113,0,109,0,
108,0,13,3,95,62,115,0,110,0,111,0,116,0,105,0,
102,0,105,0,99,0,97,0,116,0,105,0,111,0,110,0,
115,0,21,7,93,113,188,0,78,0,111,0,116,0,105,0,
102,0,105,0,99,0,97,0,116,0,105,0,111,0,110,0,
84,0,97,0,98,0,108,0,101,0,46,0,113,0,109,0,
108,0,22,10,95,49,220,0,84,0,97,0,98,0,108,0,
101,0,67,0,111,0,108,0,117,0,109,0,110,0,67,0,
111,0,110,0,116,0,101,0,110,0,116,0,46,0,113,0,
109,0,108,0,21,15,229,205,252,0,84,0,97,0,98,0,
108,0,101,0,67,0,111,0,108,0,117,0,109,0,110,0,
72,0,101,0,97,0,100,0,101,0,114,0,46,0,113,0,
109,0,108,0,19,8,151,13,220,0,69,0,102,0,102,0,
101,0,99,0,116,0,73,0,109,0,97,0,103,0,101,0,
86,0,105,0,101,0,119,0,46,0,113,0,109,0,108};
static const unsigned char qt_resource_empty_payout[] = { 0, 0, 0, 0, 0 };
QT_BEGIN_NAMESPACE
extern Q_CORE_EXPORT bool qRegisterResourceData(int, const unsigned char *, const unsigned char *, const unsigned char *);
QT_END_NAMESPACE
namespace QmlCacheGeneratedCode {
namespace _qml_EffectImageView_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_notifications_TableColumnHeader_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_table_TableView_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_VideoPage_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_notifications_TableColumnContent_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_table_TableColumn_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_Home_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_main_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_Demo_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_TreePage_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_notifications_NotificationTable_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _js_jsconsole_js { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_StreamPlayer_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_Accordion_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_table_VerticalLineDraggable_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_common_ScrollListView_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_JSConsole_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_GoogleMap_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_tree_TreeView_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_BlueBox_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}

}
namespace {
struct Registry {
    Registry();
    QHash<QString, const QQmlPrivate::CachedQmlUnit*> resourcePathToCachedUnit;
    static const QQmlPrivate::CachedQmlUnit *lookupCachedUnit(const QUrl &url);
};

Q_GLOBAL_STATIC(Registry, unitRegistry)


Registry::Registry() {
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/EffectImageView.qml"), &QmlCacheGeneratedCode::_qml_EffectImageView_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/notifications/TableColumnHeader.qml"), &QmlCacheGeneratedCode::_qml_notifications_TableColumnHeader_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/table/TableView.qml"), &QmlCacheGeneratedCode::_qml_table_TableView_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/VideoPage.qml"), &QmlCacheGeneratedCode::_qml_VideoPage_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/notifications/TableColumnContent.qml"), &QmlCacheGeneratedCode::_qml_notifications_TableColumnContent_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/table/TableColumn.qml"), &QmlCacheGeneratedCode::_qml_table_TableColumn_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/Home.qml"), &QmlCacheGeneratedCode::_qml_Home_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/main.qml"), &QmlCacheGeneratedCode::_qml_main_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/Demo.qml"), &QmlCacheGeneratedCode::_qml_Demo_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/TreePage.qml"), &QmlCacheGeneratedCode::_qml_TreePage_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/notifications/NotificationTable.qml"), &QmlCacheGeneratedCode::_qml_notifications_NotificationTable_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/js/jsconsole.js"), &QmlCacheGeneratedCode::_js_jsconsole_js::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/StreamPlayer.qml"), &QmlCacheGeneratedCode::_qml_StreamPlayer_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/Accordion.qml"), &QmlCacheGeneratedCode::_qml_Accordion_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/table/VerticalLineDraggable.qml"), &QmlCacheGeneratedCode::_qml_table_VerticalLineDraggable_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/common/ScrollListView.qml"), &QmlCacheGeneratedCode::_qml_common_ScrollListView_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/JSConsole.qml"), &QmlCacheGeneratedCode::_qml_JSConsole_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/GoogleMap.qml"), &QmlCacheGeneratedCode::_qml_GoogleMap_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/tree/TreeView.qml"), &QmlCacheGeneratedCode::_qml_tree_TreeView_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/BlueBox.qml"), &QmlCacheGeneratedCode::_qml_BlueBox_qml::unit);
    QQmlPrivate::RegisterQmlUnitCacheHook registration;
    registration.version = 0;
    registration.lookupCachedQmlUnit = &lookupCachedUnit;
    QQmlPrivate::qmlregister(QQmlPrivate::QmlUnitCacheHookRegistration, &registration);
QT_PREPEND_NAMESPACE(qRegisterResourceData)(/*version*/0x01, qt_resource_tree, qt_resource_names, qt_resource_empty_payout);
}
const QQmlPrivate::CachedQmlUnit *Registry::lookupCachedUnit(const QUrl &url) {
    if (url.scheme() != QLatin1String("qrc"))
        return nullptr;
    QString resourcePath = QDir::cleanPath(url.path());
    if (resourcePath.isEmpty())
        return nullptr;
    if (!resourcePath.startsWith(QLatin1Char('/')))
        resourcePath.prepend(QLatin1Char('/'));
    return unitRegistry()->resourcePathToCachedUnit.value(resourcePath, nullptr);
}
}
int QT_MANGLE_NAMESPACE(qInitResources_vms)() {
    ::unitRegistry();
    Q_INIT_RESOURCE(vms_qmlcache);
    return 1;
}
Q_CONSTRUCTOR_FUNCTION(QT_MANGLE_NAMESPACE(qInitResources_vms))
int QT_MANGLE_NAMESPACE(qCleanupResources_vms)() {
    Q_CLEANUP_RESOURCE(vms_qmlcache);
    return 1;
}
