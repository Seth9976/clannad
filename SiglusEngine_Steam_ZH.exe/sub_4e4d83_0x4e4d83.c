// 函数: sub_4e4d83
// 地址: 0x4e4d83
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = 0
int32_t var_1c = 0
int32_t var_10 = 0
int32_t var_14 = 0
int32_t i = 0

if (*(arg1 + 0x38) u> 0)
    int32_t edi
    int32_t var_28_1 = edi
    
    do
        int32_t edx_2 = *(*(arg1 + 0x3c) + (i << 2))
        int32_t eax_3 = edx_2 << 2
        void* esi_3 = *(eax_3 + *(*(arg1 + 4) + 0x18))
        *(eax_3 + *(arg1 + 0x2c)) = ebx
        *(eax_3 + *(arg1 + 0x28)) = 0
        
        if ((*(esi_3 + 2) & 0xfff0) != 0)
            int32_t var_8_1 = 0
            int32_t edi_4 = *(arg1 + 0x10) + (*(eax_3 + *(arg1 + 0xc)) << 2)
            int32_t esi_7 = *(eax_3 + *(arg1 + 8))
            
            if (esi_7 u> 0)
                do
                    if (edx_2 ==
                            *(*(*(*(arg1 + 4) + 0x14) + (*(edi_4 + (var_8_1 << 2)) << 2)) + 0x58))
                        int32_t* esi_12 = *(arg1 + 0x28) + eax_3
                        *esi_12 -= 1
                    
                    var_8_1 += 1
                while (var_8_1 u< esi_7)
                
                ebx = var_1c
            
            int32_t esi_15 = *(arg1 + 0x24) + (*(eax_3 + *(arg1 + 0x20)) << 2)
            int32_t edx_6 = *(eax_3 + *(arg1 + 0x1c))
            int32_t edi_5 = 0
            int32_t var_18_2 = 0
            
            if (edx_6 u> 0)
                do
                    if (*(*(*(*(arg1 + 4) + 0x14) + (*(esi_15 + (edi_5 << 2)) << 2)) + 0x5c) != 0)
                        int32_t* edx_10 = *(arg1 + 0x28) + eax_3
                        *edx_10 += 1
                    
                    edi_5 = var_18_2 + 1
                    var_18_2 = edi_5
                while (edi_5 u< edx_6)
            
            var_10 += ebx
            
            if (ebx u> var_14)
                var_14 = ebx
            
            ebx += *(*(arg1 + 0x28) + eax_3)
            var_1c = ebx
        
        i += 1
    while (i u< *(arg1 + 0x38))

if (arg2 != 0)
    *arg2 = var_10

if (arg3 != 0)
    *arg3 = var_14

return arg3
