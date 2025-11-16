// 函数: sub_4dd7e0
// 地址: 0x4dd7e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_2c = edi
void* edi_1 = arg1
void* eax = *(edi_1 + 0x1b0)
int32_t eax_2 = *(edi_1 + 0x144) - 1
int32_t i

do
    int32_t eax_3 = *(edi_1 + 0x94)
    int32_t ecx_1 = *(edi_1 + 0x9c)
    
    if (eax_3 s>= ecx_1 && (eax_3 != ecx_1 || *(edi_1 + 0x98) u> *(edi_1 + 0xa0)))
        int32_t j = 0
        void* esi = *(edi_1 + 0xdc)
        int32_t j_1 = 0
        
        if (*(edi_1 + 0x24) s> 0)
            int32_t* var_10_1 = eax + 0x48
            
            do
                if (*(esi + 0x30) != 0)
                    int32_t eax_8 = *(esi + 0xc)
                    int32_t eax_10 = (*(*(edi_1 + 4) + 0x20))(edi_1, *var_10_1, 
                        *(edi_1 + 0xa0) * eax_8, eax_8, 0)
                    uint32_t ecx_5 = *(esi + 0xc)
                    uint32_t var_8_1
                    uint32_t temp1_1
                    
                    if (*(edi_1 + 0xa0) u>= eax_2)
                        temp1_1 = modu.dp.d(0:(*(esi + 0x20)), ecx_5)
                        var_8_1 = temp1_1
                    
                    if (*(edi_1 + 0xa0) u< eax_2 || temp1_1 == 0)
                        var_8_1 = ecx_5
                    
                    int32_t eax_14 = *(*(edi_1 + 0x1c4) + (j << 2) + 4)
                    int32_t ecx_7 = 0
                    int32_t var_c_1 = *(arg2 + (j << 2))
                    int32_t var_18_1 = 0
                    
                    if (var_8_1 s> 0)
                        int32_t eax_16 = *(esi + 0x1c)
                        
                        do
                            int32_t ebx = *(eax_10 + (ecx_7 << 2))
                            int32_t edi_3 = 0
                            int32_t var_14_1 = 0
                            
                            if (eax_16 u> 0)
                                bool cond:7_1
                                
                                do
                                    eax_14(arg1, esi, ebx, var_c_1, edi_3)
                                    eax_16 = *(esi + 0x1c)
                                    edi_3 += *(esi + 0x24)
                                    ebx += 0x80
                                    cond:7_1 = var_14_1 + 1 u< eax_16
                                    var_14_1 += 1
                                while (cond:7_1)
                                ecx_7 = var_18_1
                            
                            var_c_1 += *(esi + 0x24) << 2
                            ecx_7 += 1
                            var_18_1 = ecx_7
                        while (ecx_7 s< var_8_1)
                        
                        edi_1 = arg1
                        j = j_1
                
                j += 1
                esi += 0x54
                j_1 = j
                var_10_1 = &var_10_1[1]
            while (j s< *(edi_1 + 0x24))
        
        int32_t edx_15 = *(edi_1 + 0x144)
        int32_t esi_2 = *(edi_1 + 0xa0) + 1
        *(edi_1 + 0xa0) = esi_2
        return sbb.d(esi_2, esi_2, esi_2 u< edx_15) + 4
    
    i = (**(edi_1 + 0x1b8))(edi_1)
while (i != 0)

return i
