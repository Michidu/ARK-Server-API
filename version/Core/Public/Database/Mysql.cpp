#include "Mysql.h"

API::Mysql& API::Mysql::Get()
{
	static Mysql instance;
	return instance;
}
