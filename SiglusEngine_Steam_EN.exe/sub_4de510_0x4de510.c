// 函数: sub_4de510
// 地址: 0x4de510
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

EnterCriticalSection(&data_20f3494)
data_20f33e0 = RegisterWindowMessageA("WM_ATLGETHOST")
data_20f33dc = RegisterWindowMessageA("WM_ATLGETCONTROL")
HINSTANCE hInstance = data_641a68
int32_t var_38 = 0x30
BOOL eax_2 = GetClassInfoExA(hInstance, "AtlAxWin120", &var_38)

if (eax_2 != 0)
    goto label_4de600

BOOL var_2c_1 = eax_2
BOOL var_28_1 = eax_2
int32_t eax_3 = data_641a68
var_38 = 0x30
int32_t var_34_1 = 8
LRESULT (__stdcall* var_30_1)(HWND arg1, uint32_t arg2, WPARAM arg3, LPARAM arg4) = sub_4dddf0
int32_t var_24_1 = eax_3
int32_t var_20_1 = 0
HCURSOR var_1c_1 = LoadCursorA(nullptr, 0x7f00)
int32_t var_18_1 = 6
int32_t var_14_1 = 0
char const* const var_10_1 = "AtlAxWin120"
int32_t var_c_1 = 0
uint32_t eax_6 = zx.d(RegisterClassExA(&var_38))
uint32_t var_3c = eax_6
BOOL hInstance_1

if (eax_6.w == 0)
    hInstance_1 = 0
else
    sub_4ded80(&data_20f34b0, &var_3c)
label_4de600:
    _memset(&var_38, 0, 0x30)
    var_38 = 0x30
    BOOL hInstance_5 = GetClassInfoExA(data_641a68, "AtlAxWinLic120", &var_38)
    hInstance_1 = hInstance_5
    
    if (hInstance_1 == 0)
        BOOL hInstance_6 = hInstance_5
        BOOL hInstance_7 = hInstance_5
        int32_t eax_7 = data_641a68
        var_38 = 0x30
        int32_t var_34_2 = 8
        LRESULT (__stdcall* var_30_2)(HWND arg1, uint32_t arg2, WPARAM arg3, LPARAM arg4) =
            sub_4de100
        int32_t var_24_2 = eax_7
        BOOL hInstance_2 = hInstance_1
        HCURSOR var_1c_2 = LoadCursorA(hInstance_1, 0x7f00)
        int32_t var_18_2 = 6
        BOOL hInstance_3 = hInstance_1
        char const* const var_10_2 = "AtlAxWinLic120"
        BOOL hInstance_4 = hInstance_1
        uint32_t eax_10 = zx.d(RegisterClassExA(&var_38))
        var_3c = eax_10
        
        if (eax_10.w != 0)
            sub_4ded80(&data_20f34b0, &var_3c)
            LeaveCriticalSection(&data_20f3494)
            return 1
        
        hInstance_1 = 0

LeaveCriticalSection(&data_20f3494)
return hInstance_1
