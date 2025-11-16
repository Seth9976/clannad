// 函数: sub_4b61e0
// 地址: 0x4b61e0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* i = &data_12997e4
void* esi = &data_1b1bdb4
void* i_1 = &data_12997e4

do
    int32_t edx_1 = *i
    int32_t j_1 = 8
    int32_t var_c_1 = edx_1
    int32_t j
    
    do
        *(esi - 0x24) = 0
        *(esi - 0x20) = 0
        *(esi - 0x1c) = 0
        *(esi - 0x18) = 0
        *(esi - 4) = 0
        *esi = 0
        __builtin_memset(esi + 0x14, 0xff, 0x34)
        __builtin_memset(esi + 0x40, 0xffffffff, 0x100)
        int32_t ecx_1 = edx_1
        
        if (ecx_1 s< 0 || ecx_1 s> 4)
            ecx_1 = 0
        
        int32_t k_1 = *((ecx_1 << 2) + &data_6109f0)
        
        if (k_1 s> 0x20)
            k_1 = 0x20
        label_4b6278:
            void* edx_2 = esi + 0x250
            void* eax = esi + 0x1c8
            int32_t k
            
            do
                *(eax - 0x80) = 1
                edx_2 += 4
                *eax = 1
                eax += 4
                *(edx_2 - 4) = 1
                *(eax + 0x104) = 1
                k = k_1
                k_1 -= 1
            while (k != 1)
            edx_1 = var_c_1
        else if (k_1 s> 0)
            goto label_4b6278
        
        esi += 0x374
        j = j_1
        j_1 -= 1
    while (j != 1)
    i = i_1 + 4
    i_1 = i
while (i s< &data_12998e4)

return i
