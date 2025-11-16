// 函数: sub_6b32c0
// 地址: 0x6b32c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = *(arg1 + 0x1c)
char* edx = *esi

if (edx == 0)
    return 0xffffffff

int32_t* edi = *(arg1 + 0x2c)

if (edx u< *edi + edx)
    return zx.d(*edx)

if ((*(arg1 + 0x3c) & 4) == 0)
    int32_t eax_5 = **(arg1 + 0x20)
    
    if (eax_5 != 0 && (eax_5 u> edx || *(arg1 + 0x38) u> edx))
        if (*(arg1 + 0x38) u< eax_5)
            *(arg1 + 0x38) = eax_5
        
        *edi = *(arg1 + 0x38) - *esi
        return zx.d(***(arg1 + 0x1c))

return 0xffffffff
