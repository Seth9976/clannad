// 函数: sub_429f40
// 地址: 0x429f40
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* edi = arg3
int32_t i_1 = arg4
int32_t result
int32_t i

do
    int32_t j_1 = arg2
    int32_t j
    
    do
        result.b = *(edi + 3)
        result.b = result.b
        
        if (result.b != 0)
            int32_t ebx_1
            ebx_1.b = *edi
            int32_t eax_1
            eax_1.b = *(arg7 + 0xff - ebx_1)
            *edi = eax_1.b
            int32_t ebx_2
            ebx_2.b = *(edi + 1)
            int32_t eax_2
            eax_2.b = *(arg6 + 0xff - ebx_2)
            *(edi + 1) = eax_2.b
            int32_t ebx_3
            ebx_3.b = *(edi + 2)
            result.b = *(arg5 + 0xff - ebx_3)
            *(edi + 2) = result.b
        
        edi += 4
        j = j_1
        j_1 -= 1
    while (j != 1)
    i = i_1
    i_1 -= 1
while (i != 1)
return result
