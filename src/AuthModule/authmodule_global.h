#ifndef AUTHMODULE_GLOBAL_H
#define AUTHMODULE_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(AUTHMODULE_LIBRARY)
#  define AUTHMODULESHARED_EXPORT Q_DECL_EXPORT
#else
#  define AUTHMODULESHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // AUTHMODULE_GLOBAL_H
