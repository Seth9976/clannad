// 函数: sub_6ea4b0
// 地址: 0x6ea4b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = arg4
int32_t edx = 0
int32_t eax_1 = (&data_adc250)[arg5]
int32_t i = 0
int32_t var_8 = arg3
int32_t i_1 = 0
int32_t var_24 = 0

if (esi[1] s> 0)
    do
        int32_t j_1 = 0
        
        if (*esi s> 0)
            int32_t j
            
            do
                int32_t ebx_1 = edx << 2
                int32_t eax_2 = 0
                void* const k = &data_adc390
                int32_t var_1c_1 = 0
                int32_t var_20_1 = ebx_1
                void* const k_1 = &data_adc390
                
                do
                    int32_t edi_1 = 0
                    int32_t eax_4 = (eax_2 * 2) | i_1
                    int32_t var_18_1 = 0
                    
                    do
                        int32_t esi_2 = zx.d(*(k + edi_1)) | ebx_1
                        int32_t ebx_3 = (edi_1 * 2) | j_1
                        char* eax_7 = esi_2 * 0x30 + arg3
                        _memset(eax_7, 0xff, 0x30)
                        int32_t eax_8 = *arg4
                        
                        if (ebx_3 s>= eax_8 || eax_4 s>= arg4[1])
                            *(esi_2 + arg2) = 0xff
                            esi = arg4
                        else
                            int32_t edx_3 = esi_2 * 0xc
                            *(var_8 + (edx_3 << 2)) = eax_8 * eax_4 + ebx_3
                            esi = arg4
                            *(var_8 + (edx_3 << 2) + 4) = *esi * eax_4 + 1 + ebx_3
                            *(var_8 + (edx_3 << 2) + 8) = *esi * (eax_4 + 1) + ebx_3
                            *(var_8 + (edx_3 << 2) + 0xc) = *esi * (eax_4 + 1) + 1 + ebx_3
                            eax_1(eax_7, esi, ebx_3, eax_4)
                            edi_1 = var_18_1
                        
                        arg3 = var_8
                        edi_1 += 1
                        k = k_1
                        ebx_1 = var_20_1
                        var_18_1 = edi_1
                    while (edi_1 s< 2)
                    
                    k += 2
                    eax_2 = var_1c_1 + 1
                    k_1 = k
                    var_1c_1 = eax_2
                while (k s< 0xadc394)
                
                j = j_1 + 4
                edx = var_24 + 1
                j_1 = j
                var_24 = edx
            while (j s< *esi)
            i = i_1
        
        i += 4
        i_1 = i
    while (i s< esi[1])

return i
