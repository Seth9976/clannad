// 函数: sub_4be620
// 地址: 0x4be620
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t esi = arg7
int32_t ebx = arg5
int32_t edi = arg6
int32_t edx = arg4
int32_t var_1c = edx

if (arg4 s> edi)
    edx = edi
    edi = arg4
    var_1c = edx

if (arg5 s> esi)
    ebx = esi
    esi = arg5

data_208c48c = edi
data_208c490 = esi
data_208046c = edx
data_208c488 = ebx
data_208c494 = edi - edx + 1
data_208c498 = esi - ebx + 1
RECT rect
GetClientRect(arg3, &rect)
int32_t Y = rect.top + ebx
HINSTANCE hInstance = data_134cebc
int32_t nWidth = edi - edx + 1
HWND hWnd = CreateWindowExA(WS_EX_LEFT, "STATIC", nullptr, 0x4000000e, rect.left + var_1c, Y, 
    nWidth, esi - ebx + 1, arg3, 0xc361, hInstance, nullptr)

if (hWnd != 0)
    BOOL eax_6
    char* ecx_2
    eax_6, ecx_2 = ShowWindow(hWnd, SW_SHOW)
    bool cond:0_1 = data_1bfe240 == 0
    __builtin_memset(&nWidth, 0, 0x18)
    int32_t var_70_1
    
    var_70_1 = cond:0_1 ? 1 : 0
    
    BOOL eax_7 = sub_4cb840(eax_6, 0x3f, hWnd, var_70_1, 0, 0xff, ecx_2, arg2)
    
    if (data_20be494 != 0 && data_20be490 != 1)
        data_139270c = 0x1869f
        data_1bfe270 = hWnd
        data_1bfffc0 = 1
        data_1392708 = 1
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return eax_7
    
    hWnd = DestroyWindow(hWnd)

sub_5f02dd(eax_1 ^ &__saved_ebp)
return hWnd
