// 函数: sub_545290
// 地址: 0x545290
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg2 == *(arg1 + 0x1d4))
    LRESULT hWnd = *(arg1 + 0x1d4)
    
    if (hWnd != 0)
        hWnd = SendMessageW(hWnd, 0xf0, 0, 0)
    
    hWnd.b &= 1
    *(data_bac4e4 + 0xec) = hWnd.b
    hWnd.b = 1
    return hWnd

if (arg2 == *(arg1 + 0x384))
    LRESULT hWnd_1 = *(arg1 + 0x384)
    
    if (hWnd_1 != 0)
        hWnd_1 = SendMessageW(hWnd_1, 0xf0, 0, 0)
    
    hWnd_1.b &= 1
    *(data_bac4e4 + 0xed) = hWnd_1.b
    hWnd_1.b = 1
    return hWnd_1

if (arg2 == *(arg1 + 0x534))
    *(data_bac4e4 + 0xee) = sub_6c3160(arg1 + 0x530)
    return 1

if (arg2 == *(arg1 + 0x6e4))
    *(data_bac4e4 + 0xef) = sub_6c3160(arg1 + 0x6e0)
    return 1

if (arg2 == *(arg1 + 0x894))
    *(data_bac4e4 + 0xf0) = sub_6c3160(arg1 + 0x890)
    return 1

if (arg2 == *(arg1 + 0xa44))
    *(data_bac4e4 + 0xf1) = sub_6c3160(arg1 + 0xa40)
    return 1

if (arg2 != *(arg1 + 0xad4))
    if (arg2 != *(arg1 + 0xb64))
        int32_t eax
        eax.b = 0
        return eax
    
    sub_6bfea0(*(arg1 + 4))
    LRESULT eax_7
    eax_7.b = 1
    return eax_7

sub_60ca90()
sub_545880(arg1)

if (*(arg1 + 0xc) == 0x6f)
    *(arg1 + 4)
    
    if (*(arg1 + 0x12) != 0)
        sub_533a20()
        int32_t eax_6
        eax_6.b = 1
        return eax_6
    
    sub_533a20()

int32_t eax_5
eax_5.b = 1
return eax_5
