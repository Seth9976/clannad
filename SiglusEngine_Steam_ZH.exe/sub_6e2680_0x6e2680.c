// 函数: sub_6e2680
// 地址: 0x6e2680
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_4 = arg1

if (arg1 != 0xfffffeb0)
    int32_t eax_1 = *(arg1 + 0x150)
    
    if (eax_1 != 0)
        _free(eax_1)
    
    int32_t eax_2 = *(arg1 + 0x160)
    
    if (eax_2 != 0)
        _free(eax_2)
    
    int32_t eax_3 = *(arg1 + 0x164)
    
    if (eax_3 != 0)
        _free(eax_3)
    
    _memset(arg1 + 0x150, 0, 0x168)

_memset(arg1 + 0x2b8, 0, 0x40)
sub_6e53a0(arg1 + 0x2f8)
void* edi_1 = *(arg1 + 0x308)

if (edi_1 != 0)
    sub_6e56d0(edi_1)
    _free(edi_1 - 1 - zx.d(*(edi_1 - 1)))

*(arg1 + 0x12c) = *(arg1 + 0x128)
*(arg1 + 0x138) = *(arg1 + 0x134)
*(arg1 + 0x144) = *(arg1 + 0x140)
*(arg1 + 0x14c) = 0

if (sub_6b73d0(*(arg1 + 0x100)) != 0)
    *(arg1 + 0x100) = 0
    *(arg1 + 0x108) = 0
    *(arg1 + 0x10c) = 0

return 1
