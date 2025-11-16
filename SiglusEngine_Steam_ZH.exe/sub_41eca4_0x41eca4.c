// 函数: sub_41eca4
// 地址: 0x41eca4
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = *(arg2 + 8)
int32_t ecx = *(arg1 + 8)

if (ecx != eax && ecx != 4)
    *(arg1 + 0x54) = eax

if (*(arg1 + 0x54) != 0 || *(arg1 + 0x10) != 0)
    int32_t edi
    int32_t var_10_1 = edi
    int32_t edi_1 = *(arg1 + 0x68)
    int32_t eax_3 = sub_745f3f(edi_1 << 4)
    int32_t eax_4
    
    if (eax_3 == 0)
        eax_4 = 0
    else
        sub_61cdd0(eax_3, 0x10, edi_1, sub_52e900)
        eax_4 = eax_3
    
    *(arg1 + 0x58) = eax_4
    
    if (eax_4 == 0)
        return 0x8007000e
    
    if (*(arg1 + 0x10) != 0 && *(arg2 + 0x10) != 0)
        *(arg2 + 0x14) = 1
        *(arg1 + 0x14) = 1

return 0
