// 函数: sub_403820
// 地址: 0x403820
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t i = 0
int32_t ecx = __builtin_memset(arg2, 0, 0x70)
*(arg2 + 0x4c) = 0
*(arg2 + 0x40) = arg1
*(arg2 + 0x44) = 0

if (*arg1 != 0)
    char* eax_1
    int32_t ecx_1
    int32_t edx
    int32_t edx_1
    eax_1, ecx_1, edx_1 = sub_5f1ac0(arg1, edx, ecx, 1, 0x48)
    char* edi_1 = eax_1
    *(arg2 + 0x68) = edi_1
    *(edi_1 + 4) = 0xc61c3c00
    
    do
        if (i != 7)
            *(edi_1 + (i << 2) + 0xc) = sub_5f1ac0(eax_1, edx_1, ecx_1, 1, 0x14)
        else
            *(edi_1 + 0x28) = arg2 + 4
        
        eax_1, ecx_1, edx_1 = sub_410950(*(edi_1 + (i << 2) + 0xc))
        i += 1
    while (i s< 0xf)

return 0
