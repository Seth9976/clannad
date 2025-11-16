// 函数: sub_680260
// 地址: 0x680260
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx_2 = (arg2 - arg3) s>> 2
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(ecx_2)
int32_t result = eax_1 - edx
int32_t i = result s>> 1

if (i s> 0)
    void* i_6 = (i << 1) + 2
    int32_t ecx_3 = ecx_2
    
    do
        void* i_2 = i - 1
        void* i_4 = i_6 - 2
        void* i_1 = i_2
        void* i_5 = i_4
        void* i_3 = i_2
        int32_t var_14 = *(arg3 + (i << 2) - 4)
        
        if (i_4 s< ecx_3)
            do
                int32_t ecx_4 = arg3 + (i_4 << 2)
                
                if (arg4(ecx_4, ecx_4 - 4) != 0)
                    i_4 -= 1
                
                ecx_3 = ecx_2
                *(arg3 + (i_3 << 2)) = *(arg3 + (i_4 << 2))
                i_3 = i_4
                i_4 = (i_4 << 1) + 2
            while (i_4 s< ecx_3)
            
            i_2 = i_1
        
        if (i_4 == ecx_3)
            *(arg3 + (i_3 << 2)) = *(arg3 + (ecx_3 << 2) - 4)
            i_3 = ecx_3 - 1
        
        result = sub_680660(&var_14, i_3, arg3, i_2, &var_14, arg4)
        i = i_1
        ecx_3 = ecx_2
        i_6 = i_5
    while (i s> 0)

return result
