#define _WINSOCKAPI_
#define SECURITY_WIN32

#define QCC_OS_GROUP_WINDOWS
#define D3D10_NO_HELPERS
#define D3D11_NO_HELPERS
#define D3D12_NO_HELPERS
#define D2D_USE_C_DEFINITIONS

#include <windows.h>
#include <sdkddkver.h>

#include <d3d12.h>
#include <d3d12sdklayers.h>
#include <d3d12shader.h>
#include <d3d12video.h>
#include <d3d11on12.h>
