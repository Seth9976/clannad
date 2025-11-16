// 函数: sub_593cb0
// 地址: 0x593cb0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t edx = zx.d(arg2)
int32_t eax_4

if (edx == 0x4d3)
    if (*(arg3 + 8) == 0xfffffdd9)
        HWND hWnd = *(arg1 + 0xbc)
        
        if (hWnd == 0)
            sub_5920f0(arg1, hWnd)
            int32_t eax_8
            eax_8.b = 1
            return eax_8
        
        sub_5920f0(arg1, SendMessageW(hWnd, 0x130b, 0, 0))
else if (edx == 0x4ea || edx == 0x4ec)
    eax_4 = *(arg3 + 8)
    
    if (eax_4 == 0xffffff41)
        sub_5947a0(edx, *(arg3 + 0xc), arg3 + 0x2c)
        int32_t eax_7
        eax_7.b = 1
        return eax_7
    
    if (eax_4 == 0xfffffffd)
        int32_t var_c_1 = arg3
        sub_594670(arg1, edx)
        LRESULT eax_5
        eax_5.b = 1
        return eax_5

eax_4.b = 1
return eax_4
