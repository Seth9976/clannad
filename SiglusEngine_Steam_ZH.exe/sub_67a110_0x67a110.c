// 函数: sub_67a110
// 地址: 0x67a110
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

BOOL eax = *arg2

if (eax != *(arg1 + 0x24))
    if (eax == *(arg1 + 0xbc))
        eax = arg2[2]
        
        if (eax != 0xffffff9b)
            if (eax != 0xfffffffd)
                if (eax == 0xfffffffe)
                    sub_67acd0(arg1)
            else if (*(arg1 + 0x6ec) != *(arg1 + 0x6f0) && *(data_bac4e4 + 0x19c) != 0)
                sub_67b070(arg1, *(arg1 + 0x6e4) + arg2[3])
                int32_t eax_4
                eax_4.b = 0
                return eax_4
else if (arg2[2] == 0xfffffdd9)
    sub_67a890(arg1)
    sub_67acd0(arg1)
    BOOL eax_1
    eax_1.b = 1
    return eax_1

eax.b = 0
return eax
