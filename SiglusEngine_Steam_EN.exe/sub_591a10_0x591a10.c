// 函数: sub_591a10
// 地址: 0x591a10
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* edi = data_1cd43e8
void* esi = data_1cd43dc
int32_t i = data_1cd43cc
int32_t result

do
    int32_t j = data_1cd43d0
    
    do
        result.b = *(esi + 3)
        result.b = result.b
        
        if (result.b == 0)
            esi += 4
            edi = &edi[1]
        else
            int32_t result_1 = result
            result ^= 0xff
            
            if (result != 0)
                int32_t edx_1 = *((result_1 << 2) + data_1cd4328)
                int32_t ebx_3
                ebx_3.b = *esi
                int32_t eax_1
                eax_1.b = *edi
                *edi = eax_1.b + (*(((ebx_3 - eax_1) << 2) + edx_1)).b
                int32_t ebx_7
                ebx_7.b = *(esi + 1)
                int32_t eax_3
                eax_3.b = *(edi + 1)
                *(edi + 1) = eax_3.b + (*(((ebx_7 - eax_3) << 2) + edx_1)).b
                int32_t ebx_11
                ebx_11.b = *(esi + 2)
                int32_t eax_5
                eax_5.b = *(edi + 2)
                result = eax_5 + *(((ebx_11 - eax_5) << 2) + edx_1)
                *(edi + 2) = result.b
                esi += 4
                edi = &edi[1]
            else
                *edi = *esi
                edi = &edi[1]
                esi += 4
        
        j -= 1
    while (j != 0)
    
    edi += data_1cd43e4
    esi += data_1cd43d8
    i -= 1
while (i != 0)

return result
