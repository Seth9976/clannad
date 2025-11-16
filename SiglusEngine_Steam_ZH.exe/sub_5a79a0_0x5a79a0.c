// 函数: sub_5a79a0
// 地址: 0x5a79a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

HWND* var_8 = arg1
struct HWND__* esi = arg1[0x19]
HWND eax = GetFocus()
uint16_t result

if (eax != esi)
    result = sub_5a7850(arg1, zx.d(arg3.w), zx.d((arg3 s>> 0x10).w))

if (eax == esi || result.b != 0)
    result = (arg2 u>> 0x10).w
    int32_t result_1 = sx.d(result)
    
    if (result_1 != 0)
        struct HWND__* ecx_1 = arg1[0x15]
        
        if (ecx_1 s>= 0)
            int32_t esi_3 = ecx_1 s/ 0xa
            
            if (esi_3 s< 1)
                esi_3 = 1
            
            HWND hWnd = arg1[0x59]
            LRESULT eax_6
            
            if (hWnd != 0)
                eax_6 = SendMessageW(hWnd, 0xe1, 0, 0)
            else
                eax_6 = 0
            
            WPARAM wParam
            
            if (result_1 s<= 0)
                wParam = eax_6 + esi_3
            else
                wParam = eax_6 - esi_3
            
            HWND hWnd_2 = arg1[0x59]
            
            if (hWnd_2 != 0)
                SendMessageW(hWnd_2, 0xe0, wParam, 1)
            
            LRESULT hWnd_1 = arg1[0x59]
            
            if (hWnd_1 != 0)
                hWnd_1 = SendMessageW(hWnd_1, 0xe1, 0, 0)
            
            return sub_5a7ca0(arg1, arg1[0x16], arg1[0xe], hWnd_1, arg1[0xf], &arg1[1], arg1[7], 0)

return result
