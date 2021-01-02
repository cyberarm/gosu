#pragma once

#ifdef GOSUFFI_EXPORTS
#define GOSU_FFI_API __declspec(dllexport)
#else
#define GOSU_FFI_API __declspec(dllimport)
#endif