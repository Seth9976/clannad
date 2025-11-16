// 函数: sub_531f30
// 地址: 0x531f30
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_c = arg1

if (arg2 == *(arg1 + 0x260))
    LRESULT hWnd = *(arg1 + 0x260)
    
    if (hWnd != 0)
        hWnd = SendMessageW(hWnd, 0x400, 0, 0)
    
    *(data_bac4e4 + 0x144) = hWnd * 0xa
    sub_532140(arg1)
    struct _EXCEPTION_REGISTRATION_RECORD** eax_2
    eax_2.b = 1
    return eax_2

if (arg2 != *(arg1 + 0x410))
    int32_t eax
    eax.b = 0
    return eax

LRESULT hWnd_1 = *(arg1 + 0x410)

if (hWnd_1 != 0)
    hWnd_1 = SendMessageW(hWnd_1, 0x400, 0, 0)

*(data_bac4e4 + 0x148) = hWnd_1 * 0x64
sub_532140(arg1)
struct _EXCEPTION_REGISTRATION_RECORD** eax_4
eax_4.b = 1
return eax_4
