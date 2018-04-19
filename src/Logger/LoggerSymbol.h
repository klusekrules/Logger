#pragma once
#pragma warning( disable : 4251 )
#pragma warning( disable : 4275 )
#ifdef WIN32

#define LOGGER_API __declspec(dllexport)
#define LOGGER_EXPIMP_TEMPLATE

#else

#define LOGGER_EXPIMP_TEMPLATE
#define LOGGER_API

#endif
