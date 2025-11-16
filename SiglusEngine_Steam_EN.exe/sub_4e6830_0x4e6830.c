// 函数: sub_4e6830
// 地址: 0x4e6830
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
WINNLSEnableIME(nullptr, 0)
HWND hWnd_1 = data_7027bc
data_1c0444c = 0
HDC eax_2 = GetDC(hWnd_1)
int32_t eax_3 = GetDeviceCaps(eax_2, 0xc)
int32_t ecx = data_1c0444c
HWND hWnd = data_7027bc

if (eax_3 == 8)
    ecx = 1

data_1c0444c = ecx
ReleaseDC(hWnd, eax_2)
data_187c610 = 0
data_187c60c = 0
data_187c608 = 0
data_1332b80 = 0
void devMode
_memset(&devMode, 0, 0x9c)
int16_t var_80 = 0x9c
EnumDisplaySettingsA(nullptr, ENUM_CURRENT_SETTINGS, &devMode)
int32_t edx = data_13926f8
int32_t var_34
data_1b8a650 = var_34
data_1c051c4 = var_34
data_1c051bc = var_34
int32_t eax_5 = 0
bool cond:1 = data_1af476c != 0
int32_t var_38
data_1bfe028 = var_38
data_1c051c8 = var_38

if (cond:1)
    eax_5 = 1

data_1c051c0 = var_38
int32_t ecx_2 = data_13926fc
data_1c0518d = 0
data_1311175 = 0
data_1c051b8 = 0
data_1c051ec = 0
data_1c051e0 = eax_5
data_1af4e70 = 1
data_1332b5c = ecx_2
data_1332b58 = edx
data_1c051d0 = ecx_2
data_1c051cc = edx
data_1af40f4 = 0xffffffff
data_1af40f0 = 0xffffffff
data_1af17ca = 0
data_1b8be8f = 1
data_187c51c = 0
data_1b8be8e = 1
data_1332b60 = ecx_2
data_1332b64 = edx
data_1332b50 = 1
data_1332b48 = 0x64
data_1332b4c = 0x64
data_1332b40 = 0
data_1332b44 = 0
data_1c05294 = 1
data_1c05290 = 0x64
data_1c0528c = 0x64
data_1c05288 = 0
data_1c05284 = 0
data_1332b30 = 0
data_1321ecc = 0
data_1332b34 = 0
data_1332b3c = 0
data_1bfe27c = ecx_2 - 1
data_1332b38 = 0
data_1bfe274 = 0
data_1bfe278 = 0
data_1bfe280 = edx - 1
data_1b8ad60.o = zx.o(0)
data_1bfdd20 = 0
data_1332b54 = 0
sub_4d6960(edx - 1, &data_1332b54, &data_1bfdd20, (edx * ecx_2) << 2, "MEMWIN")
int32_t edx_3 = data_1332b60
int32_t eax_8 = data_1332b64
data_1c052ac = edx_3
int32_t edx_4 = edx_3 * data_1332b64
HWND hWnd_2 = data_7027bc
data_1c052a4 = 0
data_1c052a8 = 0x28
data_1c052b0 = neg.d(eax_8)
data_1c052b4 = 0x200001
data_1c052b8 = 0
data_1c052bc = edx_4 << 2
data_1c052c0 = 0
data_1c052c4 = 0
data_1c052c8 = 0
data_1c052cc = 0
HDC eax_10 = GetDC(hWnd_2)
SetStretchBltMode(eax_10, COLORONCOLOR)
ReleaseDC(data_7027bc, eax_10)
data_187c518 = 0xffffffff
data_1af425c = 0
int32_t result = GetSystemMetrics(SM_CYMENU)
data_1c05298 = result
sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
