// 函数: sub_4d9913
// 地址: 0x4d9913
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx_2 = *(arg1 + 0x38)
int32_t ebx
int32_t var_4 = ebx
uint32_t ecx_1

if (ecx_2 s> 8)
    int32_t edx_1 = *(arg1 + 0x10)
    uint32_t ecx = zx.d(*(arg1 + 0xc))
    
    if (ecx u>= edx_1 - 2)
        if (ecx u< edx_1)
            ebx.b = *(arg1 + 0x34)
            *(ecx + *(arg1 + 4)) = ebx.b
            *(arg1 + 0xc) += 1
        else
            *(arg1 + 0x30) = 1
        
        ecx_1 = zx.d(*(arg1 + 0xc))
        
        if (ecx_1 u< *(arg1 + 0x10))
            goto label_4d993c
        
        *(arg1 + 0x30) = 1
    else
        ebx.b = *(arg1 + 0x34)
        *(ecx + *(arg1 + 4)) = ebx.b
        *(arg1 + 0xc) += 1
        ecx_1 = zx.d(*(arg1 + 0xc))
    label_4d993c:
        ebx.b = *(arg1 + 0x35)
        *(ecx_1 + *(arg1 + 4)) = ebx.b
        *(arg1 + 0xc) += 1
else if (ecx_2 s> 0)
    ecx_1 = zx.d(*(arg1 + 0xc))
    
    if (ecx_1 u< *(arg1 + 0x10))
        ebx.b = *(arg1 + 0x34)
        *(ecx_1 + *(arg1 + 4)) = ebx.b
        *(arg1 + 0xc) += 1
    else
        *(arg1 + 0x30) = 1
*(arg1 + 0x34) = 0
*(arg1 + 0x38) = 0
