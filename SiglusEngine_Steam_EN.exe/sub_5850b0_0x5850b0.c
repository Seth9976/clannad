// 函数: sub_5850b0
// 地址: 0x5850b0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char* edi = data_1cd43e8
int32_t* esi = data_1cd43dc
int32_t edx = data_1cd43a4
int32_t i_1 = data_1cd43cc
int32_t result
int32_t i

do
    int32_t j_1 = data_1cd43d0
    int32_t j
    
    do
        result = *esi & 0xffffff
        
        if (result != data_20f3398)
            int32_t eax_2
            eax_2.b = *edi
            int32_t ebx_1
            ebx_1.b = *esi
            *edi = eax_2.b + (*(((ebx_1 - eax_2) << 2) + edx)).b
            int32_t eax_4
            eax_4.b = edi[1]
            int32_t ebx_5
            ebx_5.b = *(esi + 1)
            edi[1] = eax_4.b + (*(((ebx_5 - eax_4) << 2) + edx)).b
            int32_t eax_6
            eax_6.b = edi[2]
            int32_t ebx_9
            ebx_9.b = *(esi + 2)
            result = eax_6 + *(((ebx_9 - eax_6) << 2) + edx)
            edi[2] = result.b
        
        esi = &esi[1]
        edi = &edi[4]
        j = j_1
        j_1 -= 1
    while (j != 1)
    edi = &edi[data_1cd43e4]
    esi += data_1cd43d8
    i = i_1
    i_1 -= 1
while (i != 1)
return result
