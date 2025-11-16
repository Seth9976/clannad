// 函数: sub_590960
// 地址: 0x590960
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_c = arg1
LPARAM edi_1

if (arg2 u> 0x110)
label_590a03:
    
    if (arg2 != 6)
        edi_1 = arg4
    else
        if (arg3 == 0)
            sub_681b70(arg1)
        
        edi_1 = arg4
else if (arg2 == 0x110)
    if (sub_590a30(arg1) == 0)
        return 0
    
    edi_1 = arg4
else if (arg2 == 0x10)
    void* esi_1 = arg1 + 0x14c
    int32_t i_1 = 2
    int32_t i
    
    do
        sub_6c6290(esi_1)
        esi_1 += 0x334
        i = i_1
        i_1 -= 1
    while (i != 1)
    sub_6c26c0(arg1)
    edi_1 = arg4
else
    if (arg2 != 0x4e)
        goto label_590a03
    
    edi_1 = arg4
    
    if (*(edi_1 + 8) == 0xfffffdd9)
        HWND hWnd = *(arg1 + 0xbc)
        
        if (hWnd != 0)
            sub_5920f0(arg1, SendMessageW(hWnd, 0x130b, 0, 0))
        else
            sub_5920f0(arg1, hWnd)

return sub_6c4530(arg1, arg2, arg3.d, edi_1)
