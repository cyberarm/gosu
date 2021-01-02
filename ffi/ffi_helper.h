#pragma once

// https://stackoverflow.com/a/2164853

/* Microsoft */
#if defined(_MSC_VER)
#define GOSU_FFI_API_EXPORTS __declspec(dllexport)
#define GOSU_FFI_API_IMPORTS __declspec(dllimport)
/* GCC */
#elif defined(__GNUC__)
#define GOSU_FFI_API_EXPORTS __attribute__((visibility("default")))
#define GOSU_FFI_API_IMPORTS
/* do nothing and hope for the best? */
#else
#define GOSU_FFI_API_EXPORTS
#define GOSU_FFI_API_IMPORTS
#pragma warning Unknown dynamic link import/export semantics.
#endif

#if GOSUFFI_EXPORTS
#define GOSU_FFI_API GOSU_FFI_API_EXPORTS
#else
#define GOSU_FFI_API GOSU_FFI_API_IMPORTS
#endif
