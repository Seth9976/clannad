// 函数: sub_633e90
// 地址: 0x633e90
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx_2 = (arg2 - arg3) s>> 3
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(ebx_2)
int32_t result = eax_1 - edx
int32_t i = result s>> 1

if (i s> 0)
    void* edx_1 = arg3 + (i << 3)
    void* ecx_1 = (i << 1) + 2
    
    do
        int32_t var_1c = *(edx_1 - 8)
        i -= 1
        int32_t i_1 = i
        int32_t var_18_1 = *(edx_1 - 4)
        void* i_2 = ecx_1 - 2
        
        if (ecx_1 - 2 s< ebx_2)
            do
                int32_t ecx_3 = *(arg3 + (i_2 << 3))
                int32_t edi_1 = *(arg3 + (i_2 << 3) - 8)
                
                if (ecx_3 s< edi_1)
                    i_2 -= 1
                else if (ecx_3 s<= edi_1 && *(arg3 + (i_2 << 3) + 4) s< *(arg3 + (i_2 << 3) - 4))
                    i_2 -= 1
                
                *(arg3 + (i_1 << 3)) = *(arg3 + (i_2 << 3))
                *(arg3 + (i_1 << 3) + 4) = *(arg3 + (i_2 << 3) + 4)
                i_1 = i_2
                i_2 = (i_2 << 1) + 2
            while (i_2 s< ebx_2)
        
        if (i_2 == ebx_2)
            *(arg3 + (i_1 << 3)) = *(arg3 + (ebx_2 << 3) - 8)
            *(arg3 + (i_1 << 3) + 4) = *(arg3 + (ebx_2 << 3) - 4)
            i_1 = ebx_2 - 1
        
        int32_t var_2c_1 = arg4
        result = sub_634910(&var_1c, i_1, arg3, i, &var_1c)
        ecx_1 -= 2
        edx_1 -= 8
    while (i s> 0)

return result
