// 函数: sub_733e00
// 地址: 0x733e00
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx = arg2[3]
int32_t ecx_1 = arg2[4]
int32_t ebx = 0
int32_t ecx_2 = arg2[5]
int32_t esi = arg2[1]
int32_t eax_3 = 0
int32_t ecx_3 = *arg2
int32_t var_18 = 0
int32_t var_1c = 0
int32_t var_20 = 0
int32_t var_38 = ecx_3
int32_t edi = arg2[2]
int32_t var_40 = edi

if (ecx_3 s<= esi)
    int32_t eax_4 = ecx
    void* esi_1 = (ecx_3 << 3) + 4
    int32_t edx = esi
    void* var_14_1 = esi_1
    
    do
        if (edi s<= eax_4)
            void* edx_1 = (edi << 2) + 2
            int32_t esi_2 = ecx_1
            void* var_c_1 = edx_1
            int16_t* eax_9 =
                *(*(*(arg3 + 0x1c0) + 0x18) + (ecx_3 << 2)) + (((edi << 5) + esi_2) << 1)
            int16_t* var_2c_1 = eax_9
            int32_t i_1 = ecx - edi + 1
            int32_t i_2 = i_1
            int32_t i
            
            do
                int16_t* edi_1 = eax_9
                
                if (esi_2 s<= ecx_2)
                    void* edx_2 = (esi_2 << 3) + 4
                    int32_t j_1 = ecx_2 - ecx_1 + 1
                    int32_t j
                    
                    do
                        uint32_t eax_10 = zx.d(*edi_1)
                        edi_1 = &edi_1[1]
                        
                        if (eax_10 != 0)
                            ebx += eax_10
                            var_18 += var_14_1 * eax_10
                            var_1c += var_c_1 * eax_10
                            var_20 += edx_2 * eax_10
                        
                        edx_2 += 8
                        j = j_1
                        j_1 -= 1
                    while (j != 1)
                    edx_1 = var_c_1
                    eax_9 = var_2c_1
                    i_1 = i_2
                    esi_2 = ecx_1
                
                eax_9 = &eax_9[0x20]
                edx_1 += 4
                i = i_1
                i_1 -= 1
                var_2c_1 = eax_9
                var_c_1 = edx_1
                i_2 = i_1
            while (i != 1)
            esi_1 = var_14_1
            ecx_3 = var_38
            edi = var_40
            eax_4 = ecx
            edx = esi
        
        ecx_3 += 1
        esi_1 += 8
        var_38 = ecx_3
        var_14_1 = esi_1
    while (ecx_3 s<= edx)
    
    eax_3 = var_18

int32_t edi_3 = ebx s>> 1
arg4[**(arg3 + 0x74)] = (divs.dp.d(sx.q(eax_3 + edi_3), ebx)).b
arg4[*(*(arg3 + 0x74) + 4)] = (divs.dp.d(sx.q(var_1c + edi_3), ebx)).b
char result = (divs.dp.d(sx.q(var_20 + edi_3), ebx)).b
arg4[*(*(arg3 + 0x74) + 8)] = result
return result
