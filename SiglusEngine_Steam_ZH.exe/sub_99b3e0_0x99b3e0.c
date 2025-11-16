// 函数: sub_99b3e0
// 地址: 0x99b3e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg1
int32_t eax
int32_t edx
eax, edx = sub_742fa0(arg2, 0x20)

if (eax s>= 0)
    int32_t ecx_2 = arg2[4] - 8
    
    if (eax s<= ecx_2)
        void* eax_2 = sub_74c590(eax + 1, edx, ecx_2, eax + 1, 1)
        arg1[3] = eax_2
        sub_99b940(eax_2, eax_2, arg2, eax)
        int32_t eax_3 = sub_742fa0(arg2, 0x20)
        
        if (eax_3 s>= 0)
            int32_t eax_6
            int32_t edx_2
            edx_2:eax_6 = sx.q(arg2[1] + 7)
            int32_t edx_3 = edx_2 & 7
            int32_t eax_8 = (eax_6 + edx_3) s>> 3
            int32_t ecx_8 = (arg2[4] - eax_8 - *arg2) s>> 2
            
            if (eax_3 s<= ecx_8)
                arg1[2] = eax_3
                int32_t eax_9
                int32_t ecx_9
                int32_t edx_4
                eax_9, ecx_9, edx_4 = sub_74c590(eax_8, edx_3, ecx_8, eax_3 + 1, 4)
                *arg1 = eax_9
                arg1[1] = sub_74c590(eax_9, edx_4, ecx_9, eax_3 + 1, 4)
                int32_t i_1 = 0
                
                if (arg1[2] s> 0)
                    int32_t i
                    
                    do
                        int32_t eax_11 = sub_742fa0(arg2, 0x20)
                        
                        if (eax_11 s< 0)
                            goto label_99b50f
                        
                        int32_t eax_14
                        int32_t edx_5
                        edx_5:eax_14 = sx.q(arg2[1] + 7)
                        int32_t edx_6 = edx_5 & 7
                        
                        if (eax_11 s> arg2[4] - ((eax_14 + edx_6) s>> 3) - *arg2)
                            goto label_99b50f
                        
                        *(arg1[1] + (i_1 << 2)) = eax_11
                        int32_t eax_19 = sub_74c590(eax_11 + 1, edx_6, i_1, eax_11 + 1, 1)
                        *(*arg1 + (i_1 << 2)) = eax_19
                        sub_99b940(eax_19, *(*arg1 + (i_1 << 2)), arg2, eax_11)
                        i = i_1 + 1
                        i_1 = i
                    while (i s< arg1[2])
                
                if (sub_742fa0(arg2, 1) == 1)
                    return 0

label_99b50f:
sub_99b8c0(arg1)
return 0xffffff7b
