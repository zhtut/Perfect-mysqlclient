#ifndef __PERFECT_MYSQL_OSX__
#define __PERFECT_MYSQL_OSX__
#include "/usr/local/mysql/include/mysql.h"

#if LIBMYSQL_VERSION_ID > 80000
typedef char my_bool;
#endif

#endif
