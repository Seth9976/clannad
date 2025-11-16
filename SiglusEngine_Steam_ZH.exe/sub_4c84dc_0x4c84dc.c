// 函数: sub_4c84dc
// 地址: 0x4c84dc
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_24 = edi
int32_t i_1
int32_t i

do
    i_1 = 0
    i = 0
    int32_t j = 0
    
    if (*(arg1 + 0xc) u<= 0)
        break
    
    do
        void* edx_2 = *(*(arg1 + 0x18) + (j << 2))
        int32_t k_3 = *(edx_2 + 4)
        int32_t var_10_1 = 0
        
        if (k_3 u> 0)
            int32_t esi_1 = *(arg1 + 0x14)
            int32_t* var_c_1 = *(edx_2 + 8)
            int32_t k_2 = k_3
            int32_t k
            
            do
                int32_t* eax_4 = *(esi_1 + (*var_c_1 << 2))
                
                if ((*eax_4 & &data_1000000) != 0)
                    var_10_1 = 1
                
                int32_t ebx_2 = eax_4[0xe]
                
                if (ebx_2 != 0xffffffff)
                    eax_4 = *(esi_1 + (ebx_2 << 2))
                
                if ((*eax_4 & &data_1000000) != 0)
                    var_10_1 = 1
                
                var_c_1 = &var_c_1[1]
                k = k_2
                k_2 -= 1
            while (k != 1)
            int32_t k_1 = 0
            
            if (var_10_1 != 0 && *(edx_2 + 0xc) u> 0)
                do
                    int32_t* esi_3 = *(*(arg1 + 0x14) + (*(*(edx_2 + 0x10) + (k_1 << 2)) << 2))
                    int32_t eax_7 = *esi_3
                    
                    if ((&data_1000000 & eax_7) == 0)
                        *esi_3 = eax_7 | &data_1000000
                        i = 1
                    
                    k_1 += 1
                while (k_1 u< *(edx_2 + 0xc))
        
        j += 1
    while (j u< *(arg1 + 0xc))
    
    i_1 = 0
while (i != 0)

if (*(arg1 + 8) u> 0)
    do
        int32_t eax_10 = *(arg1 + 0x14)
        int32_t* edx_3 = *(eax_10 + (i_1 << 2))
        int32_t esi_4 = edx_3[0xe]
        
        if (esi_4 != 0xffffffff && (**(eax_10 + (esi_4 << 2)) & &data_1000000) != 0)
            *edx_3 |= &data_1000000
        
        i_1 += 1
    while (i_1 u< *(arg1 + 8))

return 0
