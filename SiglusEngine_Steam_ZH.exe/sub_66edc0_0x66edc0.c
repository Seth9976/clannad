// 函数: sub_66edc0
// 地址: 0x66edc0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx_2 = (arg2 - arg1) s>> 1
int32_t var_8 = ecx_2
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(ecx_2)
uint32_t result = eax_1 - edx
int32_t i = result s>> 1

if (i s> 0)
    void* edx_1 = (i << 1) + 2
    
    do
        uint32_t result_1 = zx.d(*(arg1 + edx_1 - 4))
        i -= 1
        void* i_1 = i
        void* i_2 = edx_1 - 2
        
        if (edx_1 - 2 s< ecx_2)
            do
                if (*(arg1 + (i_2 << 1)) u< *(arg1 + (i_2 << 1) - 2))
                    i_2 -= 1
                
                int16_t* edx_3 = i_2 * 2
                *(arg1 + (i_1 << 1)) = *(edx_3 + arg1)
                i_1 = i_2
                i_2 = &edx_3[1]
            while (i_2 s< var_8)
            
            ecx_2 = var_8
        
        if (i_2 == ecx_2)
            i_2.w = *(arg1 + (ecx_2 << 1) - 2)
            *(arg1 + (i_1 << 1)) = i_2.w
            i_1 = ecx_2 - 1
        
        int32_t eax_3
        int32_t edx_4
        edx_4:eax_3 = sx.q(i_1 - 1)
        int32_t i_3 = (eax_3 - edx_4) s>> 1
        
        if (i s< i_1)
            do
                int16_t ecx_4 = *(arg1 + (i_3 << 1))
                
                if (ecx_4 u>= result_1.w)
                    break
                
                *(arg1 + (i_1 << 1)) = ecx_4
                i_1 = i_3
                int32_t eax_6
                int32_t edx_5
                edx_5:eax_6 = sx.q(i_3 - 1)
                i_3 = (eax_6 - edx_5) s>> 1
            while (i s< i_1)
            
            ecx_2 = var_8
        
        result = result_1
        edx_1 -= 2
        *(arg1 + (i_1 << 1)) = result.w
    while (i s> 0)

return result
