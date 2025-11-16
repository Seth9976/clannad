// 函数: sub_4d9997
// 地址: 0x4d9997
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_10 = edi
int32_t ebx
ebx.w = arg1
sub_4d9913(arg2)

if (arg4 != 0)
    int32_t edx_1 = *(arg2 + 0x10)
    uint32_t ecx = zx.d(*(arg2 + 0xc))
    
    if (ecx u>= edx_1 - 2)
        if (ecx u< edx_1)
            *(ecx + *(arg2 + 4)) = ebx.b
            *(arg2 + 0xc) += 1
        else
            *(arg2 + 0x30) = 1
        
        uint32_t ecx_1 = zx.d(*(arg2 + 0xc))
        
        if (ecx_1 u< *(arg2 + 0x10))
            *(ecx_1 + *(arg2 + 4)) = ebx:1.b
            *(arg2 + 0xc) += 1
        else
            *(arg2 + 0x30) = 1
    else
        *(ecx + *(arg2 + 4)) = ebx.b
        *(arg2 + 0xc) += 1
        *(zx.d(*(arg2 + 0xc)) + *(arg2 + 4)) = ebx:1.b
        *(arg2 + 0xc) += 1

if (ebx.w == 0)
    return 

uint32_t i_1 = zx.d(ebx.w)
uint32_t i

do
    uint32_t ecx_2 = zx.d(*(arg2 + 0xc))
    
    if (ecx_2 u< *(arg2 + 0x10))
        char* ebx_1
        ebx_1.b = *arg3
        *(ecx_2 + *(arg2 + 4)) = ebx_1.b
        *(arg2 + 0xc) += 1
        arg3 = &arg3[1]
    else
        *(arg2 + 0x30) = 1
    
    i = i_1
    i_1 -= 1
while (i != 1)
