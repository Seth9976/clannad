// 函数: sub_67e6a0
// 地址: 0x67e6a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = 0
int32_t result
int32_t edx_2
edx_2:result = muls.dp.d(0x6bca1af3, arg1[1] - *arg1)
int32_t edx_3 = edx_2 s>> 5
int32_t result_1 = (edx_3 u>> 0x1f) + edx_3

if (result_1 s> 0)
    result = result_1
    void* edi_1 = nullptr
    
    do
        int32_t ecx_2 = *arg1
        int32_t edx_4 = arg1[1]
        
        if (ecx_2 != edx_4 && esi s>= 0)
            if (esi s< (edx_4 - ecx_2) s/ 0x4c)
                void* eax_4 = edi_1 + ecx_2
                
                if (eax_4 != 0)
                    int32_t var_1c_1 = ecx_2
                    int32_t* eax_5 = sub_55b0d0(&arg1[0xf], *(eax_4 + 0x18))
                    
                    if (eax_5 != 0)
                        *eax_5 = arg2
            
            result = result_1
        
        esi += 1
        edi_1 += 0x4c
    while (esi s< result)

return result
