// 函数: sub_42a320
// 地址: 0x42a320
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
            int32_t eax_3
            eax_3.b = *edi
            eax_3.b = *(arg7 + eax_3)
            *edi = eax_3.b
            int32_t eax_4
            eax_4.b = *(edi + 1)
            eax_4.b = *(arg6 + eax_4)
            *(edi + 1) = eax_4.b
            result.b = *(edi + 2)
            result.b = *(arg5 + result)
            *(edi + 2) = result.b
        
        edi += 4
        j = j_1
        j_1 -= 1
    while (j != 1)
    i = i_1
    i_1 -= 1
while (i != 1)
return result
