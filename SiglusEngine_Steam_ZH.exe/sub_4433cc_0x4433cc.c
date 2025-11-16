// 函数: sub_4433cc
// 地址: 0x4433cc
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t i = 0
int32_t edi
int32_t var_c = edi

if (*(arg1 + 0xb4) != 0)
    if (*(arg1 + 0xa0) u> 0)
        do
            int32_t eax_1 = *(arg1 + 0xac)
            int32_t j = 0
            *(arg1 + 0xb8) = *(arg1 + 0xb4) + ((eax_1 * i) << 2)
            
            if (eax_1 u> 0)
                do
                    j__free(*(*(arg1 + 0xb8) + (j << 2)))
                    j += 1
                while (j u< *(arg1 + 0xac))
            
            i += 1
        while (i u< *(arg1 + 0xa0))
    
    j__free(*(arg1 + 0xb4))
    i = 0
    *(arg1 + 0xb4) = 0

if (*(arg1 + 0xc0) == 0)
    return 

if (*(arg1 + 0xa0) u> 0)
    do
        int32_t eax_3 = *(arg1 + 0xac)
        int32_t j_1 = 0
        *(arg1 + 0xb8) = *(arg1 + 0xc0) + ((eax_3 * i) << 2)
        
        if (eax_3 u> 0)
            do
                j__free(*(*(arg1 + 0xb8) + (j_1 << 2)))
                j_1 += 1
            while (j_1 u< *(arg1 + 0xac))
        
        i += 1
    while (i u< *(arg1 + 0xa0))

j__free(*(arg1 + 0xc0))
*(arg1 + 0xc0) = 0
