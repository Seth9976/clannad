// 函数: sub_5a5f80
// 地址: 0x5a5f80
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp_1
int32_t __saved_ebp = __saved_ebp_1
void var_58
int32_t eax_1 = __security_cookie ^ &var_58
int32_t __saved_esi_1
int32_t __saved_esi = __saved_esi_1
int32_t __saved_edi_1
int32_t __saved_edi = __saved_edi_1

if ((arg2 == 3 || arg2 == 5) && *(*(arg1 + 0x94) + 0x444) != 0)
    HWND hWnd = *(arg1 + 4)
    RECT var_30
    __builtin_memset(&var_30, 0, 0x10)
    GetWindowRect(hWnd, &var_30)
    HWND hWnd_3 = *(arg1 + 4)
    
    if (hWnd_3 != 0)
        int32_t var_68_1 = 0
        int32_t var_6c_1 = 0x1328
        SendMessageW(hWnd_3, 0x1328, 0, &var_30)
    
    void* edi = *(arg1 + 0x94)
    uint128_t xmm0
    xmm0.d = var_30.left
    xmm0:4.d = var_30.top
    xmm0:8.d = var_30.right
    xmm0:0xc.d = var_30.bottom
    HWND hWnd_1 = *(edi + 4)
    POINT point_1
    point_1.x = xmm0
    point_1.y = _mm_bsrli_si128(xmm0, 4)
    ScreenToClient(hWnd_1, &point_1)
    int32_t xmm1_2 = _mm_bsrli_si128(xmm0, 0xc)
    HWND hWnd_2 = *(edi + 4)
    POINT point
    point.x = _mm_bsrli_si128(xmm0, 8)
    point.y = xmm1_2
    ScreenToClient(hWnd_2, &point)
    uint128_t var_40_1
    var_40_1.d = point_1.x
    var_40_1:4.d = point_1.y
    var_40_1:8.d = point.x
    var_40_1:0xc.d = point.y
    sub_5a7710(*(*(arg1 + 0x94) + 0x444), var_40_1)
    int32_t var_64_5 = 0
    void* ecx_2 = *(*(arg1 + 0x94) + 0x444)
    uint128_t var_70_1
    var_70_1.d = *(ecx_2 + 0x3c)
    sub_5a7ca0(ecx_2, *(ecx_2 + 0x58), *(ecx_2 + 0x38), *(ecx_2 + 0x4c), var_70_1.d, ecx_2 + 4, 
        *(ecx_2 + 0x1c), 0)

int32_t var_64_6 = arg4
int32_t var_68_3 = arg3
int32_t var_6c_3 = arg2
int32_t result = sub_6c0020(arg1)
sub_745f2b(eax_1 ^ &var_58)
return result
