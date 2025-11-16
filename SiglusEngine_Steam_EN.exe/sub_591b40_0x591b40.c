// 函数: sub_591b40
// 地址: 0x591b40
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char* edi = data_1cd43e8
void* esi = data_1cd43dc
int32_t i_1 = data_1cd43cc
data_1cd43a4
int32_t i

do
    int32_t j_1 = data_1cd43d0
    int32_t j
    
    do
        int32_t ebx_1
        ebx_1.b = *(esi + 3)
        ebx_1.b = ebx_1.b
        
        if (ebx_1.b != 0)
            int32_t ebx_6
            ebx_6.b = (*(*((ebx_1 << 2) + data_1cd4328) + data_1cd43ac)).b
            
            if (ebx_6.b != 0)
                int32_t edx_1 = *((ebx_6 << 2) + data_1cd4328)
                int32_t ebx_9
                ebx_9.b = *esi
                int32_t eax_1
                eax_1.b = *edi
                *edi = eax_1.b + (*(((ebx_9 - eax_1) << 2) + edx_1)).b
                int32_t ebx_13
                ebx_13.b = *(esi + 1)
                int32_t eax_3
                eax_3.b = edi[1]
                edi[1] = eax_3.b + (*(((ebx_13 - eax_3) << 2) + edx_1)).b
                int32_t ebx_17
                ebx_17.b = *(esi + 2)
                int32_t eax_5
                eax_5.b = edi[2]
                edi[2] = eax_5.b + (*(((ebx_17 - eax_5) << 2) + edx_1)).b
        
        esi += 4
        edi = &edi[4]
        j = j_1
        j_1 -= 1
    while (j != 1)
    edi = &edi[data_1cd43e4]
    esi += data_1cd43d8
    i = i_1
    i_1 -= 1
while (i != 1)
