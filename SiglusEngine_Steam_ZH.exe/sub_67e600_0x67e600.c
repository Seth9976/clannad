// 函数: sub_67e600
// 地址: 0x67e600
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x6bca1af3, arg1[1] - *arg1)
int32_t edx_3 = edx_2 s>> 5
int32_t result = 0
int32_t* var_c = arg1
int32_t esi = 0
int32_t edi_2 = (edx_3 u>> 0x1f) + edx_3

if (edi_2 s> 0)
    int32_t eax_1 = edi_2
    void* edi_3 = nullptr
    
    do
        int32_t ecx = *arg1
        int32_t edx_5 = var_c[1]
        
        if (ecx != edx_5 && esi s>= 0)
            if (esi s>= (edx_5 - ecx) s/ 0x4c)
                eax_1 = edi_2
            else
                void* eax_6 = edi_3 + ecx
                
                if (eax_6 == 0)
                    eax_1 = edi_2
                else
                    int32_t var_20_1 = ecx
                    int32_t eax_7 = sub_55b0d0(&var_c[0xf], *(eax_6 + 0x18))
                    
                    if (eax_7 == 0)
                        eax_1 = edi_2
                    else
                        eax_1 = edi_2
                        
                        if (*eax_7 == 1)
                            result += 1
        
        arg1 = var_c
        esi += 1
        edi_3 += 0x4c
    while (esi s< eax_1)

return result
