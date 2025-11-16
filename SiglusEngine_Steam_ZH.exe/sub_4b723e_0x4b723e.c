// 函数: sub_4b723e
// 地址: 0x4b723e
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_420 = edi
void* edi_1 = arg1
int32_t edx = 0
void* var_14 = edi_1

if (arg3 u> 0)
    do
        void* eax_2 = *(arg2 + (edx << 2))
        
        if (eax_2 != 0)
            int32_t i = 0
            
            if (*(eax_2 + 0xc) u> 0)
                do
                    void* esi_3 = *(*(edi_1 + 0x14) + (*(*(eax_2 + 0x10) + (i << 2)) << 2))
                    i += 1
                    *(esi_3 + 0x48) = edx
                while (i u< *(eax_2 + 0xc))
            
            *(eax_2 + 0x1c) = 0
            *(eax_2 + 0x14) = 0
        
        edx += 1
    while (edx u< arg3)

int32_t i_1 = 0

if (*(edi_1 + 8) u> 0)
    do
        int32_t eax_3 = *(edi_1 + 0x14)
        void* ecx = *(eax_3 + (i_1 << 2))
        int32_t edx_1 = *(ecx + 0x38)
        
        if (edx_1 != 0xffffffff)
            *(ecx + 0x48) = *(*(eax_3 + (edx_1 << 2)) + 0x48)
        
        i_1 += 1
    while (i_1 u< *(edi_1 + 8))

int32_t var_8 = 0

if (arg3 u> 0)
    do
        void* ebx_2 = *(arg2 + (var_8 << 2))
        int32_t esi_4 = 0
        
        if (ebx_2 != 0)
            int32_t var_10_1 = 0
            int32_t i_2 = 0
            int32_t var_414[0x100]
            
            if (*(ebx_2 + 4) u> 0)
                do
                    int32_t j = *(*(*(edi_1 + 0x14) + (*(*(ebx_2 + 8) + (i_2 << 2)) << 2)) + 0x48)
                    
                    if (j != 0xffffffff)
                        int32_t ecx_4 = 0
                        
                        if (esi_4 u> 0)
                            while (var_414[ecx_4] != j)
                                ecx_4 += 1
                                
                                if (ecx_4 u>= esi_4)
                                    break
                        
                        if (ecx_4 == esi_4)
                            var_414[esi_4] = j
                            esi_4 += 1
                            var_10_1 = esi_4
                        
                        int32_t result = sub_4b71e4(*(arg2 + (j << 2)), var_8)
                        
                        if (result s< 0)
                            return result
                    
                    i_2 += 1
                while (i_2 u< *(ebx_2 + 4))
            
            int32_t eax_11 = sub_49ec06(esi_4)
            *(ebx_2 + 0x18) = eax_11
            
            if (eax_11 == 0)
                return 0x8007000e
            
            __builtin_memcpy(eax_11, &var_414, esi_4 << 2)
            edi_1 = var_14
            *(ebx_2 + 0x14) = var_10_1
        
        var_8 += 1
    while (var_8 u< arg3)

return 0
