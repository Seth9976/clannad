// 函数: sub_411068
// 地址: 0x411068
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edx = arg2
uint32_t var_10 = 0xffffffff
arg2 = 0
int32_t ebx = *(arg1 + 4)
int32_t edi
int32_t var_2c = edi
int32_t result = 3

do
    int32_t esi_1 = *(ebx + edx * 0xc + (arg2 << 2))
    
    if (esi_1 != 0xffffffff)
        int32_t edi_1 = *(arg1 + 0x18)
        char* edx_4 = edi_1 + (esi_1 - *(arg1 + 0x1c)) * 0xc
        
        if (*edx_4 == 0)
            uint32_t eax_5 = zx.d(edx_4[1])
            uint32_t eax_6 = 0xffffffff
            int32_t j = 0
            uint32_t var_c_1 = 0xffffffff
            
            do
                int32_t edx_7 = *(ebx + esi_1 * 0xc + (j << 2))
                
                if (edx_7 != 0xffffffff)
                    void* edx_9 = edi_1 + (edx_7 - *(arg1 + 0x1c)) * 0xc
                    eax_6 = var_c_1
                    
                    if (*edx_9 == 0)
                        uint32_t edx_10 = zx.d(*(edx_9 + 1))
                        
                        if (edx_10 u< eax_6)
                            eax_6 = edx_10
                            var_c_1 = eax_6
                
                j += 1
            while (j u< 3)
            
            if (eax_6 == 0xffffffff)
                eax_6 = 0
            
            uint32_t var_18
            
            if (eax_5 u< var_10)
                result = arg2
                var_10 = eax_5
                var_18 = eax_6
            else if (eax_5 == var_10 && eax_6 u< var_18)
                result = arg2
                var_18 = eax_6
    
    arg2 += 1
while (arg2 u< 3)

return result
