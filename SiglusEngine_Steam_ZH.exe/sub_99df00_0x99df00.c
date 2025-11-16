// 函数: sub_99df00
// 地址: 0x99df00
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi = 0
int32_t var_10 = 0

if (arg3[2] s> 0)
    int32_t ebx_1 = divs.dp.d(sx.q(arg4), arg5)
    int32_t var_1c_1 = ebx_1
    int32_t temp0_2 = divs.dp.d(sx.q(arg4 + arg7), arg5)
    
    if (ebx_1 s< temp0_2)
        int32_t* esi_2 = arg3
        
        do
            int32_t i = esi_2[0xa]
            int32_t i_3 = i
            int32_t eax_8 = sub_742e90(arg6, arg3[9])
            int32_t eax_21
            int32_t var_c_1
            int32_t eax_13
            
            if (eax_8 s< 0)
                var_c_1 = 0
                eax_13 = arg3[2]
            label_99e003:
                int32_t eax_28 = sub_742e90(arg6, i)
                
                if (eax_28 s< 0)
                    while (i s> 1)
                        i -= 1
                        i_3 = i
                        eax_28 = sub_742e90(arg6, i)
                        
                        if (eax_28 s>= 0)
                            goto label_99e033
                    
                    if (eax_28 s< 0)
                        return 0xffffffff
                
            label_99e033:
                int32_t eax_29 = sub_99ea20(eax_28)
                int32_t edx_12 = var_c_1
                int32_t i_4 = eax_13 - edx_12
                int32_t i_5 = i_4
                
                if (i_4 s> 1)
                    int32_t i_1 = i_4
                    int32_t esi_3 = eax_13
                    
                    do
                        int32_t ebx_2 = i_1 s>> 1
                        int32_t ecx_14 = neg.d(sbb.d(eax_29, eax_29, 
                            eax_29 u< *(arg3[5] + ((ebx_2 + edx_12) << 2))))
                        esi_3 -= neg.d(ecx_14) & ebx_2
                        edx_12 += (ecx_14 - 1) & ebx_2
                        i_1 = esi_3 - edx_12
                    while (i_1 s> 1)
                    
                    i = i_3
                    edi = var_10
                    ebx_1 = var_1c_1
                    var_c_1 = edx_12
                
                int32_t edx_13 = sx.d(*(arg3[7] + edx_12))
                
                if (edx_13 s> i)
                    sub_742f50(arg6, i)
                    return 0xffffffff
                
                sub_742f50(arg6, edx_13)
                eax_21 = var_c_1
                esi_2 = arg3
            else
                int32_t ecx_2 = *(arg3[8] + (eax_8 << 2))
                
                if (ecx_2 s< 0)
                    var_c_1 = ecx_2 s>> 0xf & 0x7fff
                    eax_13 = arg3[2] - (ecx_2 & 0x7fff)
                    goto label_99e003
                
                esi_2 = arg3
                int32_t eax_16 = sx.d(*(esi_2[7] + ecx_2 - 1)) + arg6[1]
                
                if (*arg6 s<= arg6[4] - ((eax_16 + 7) s>> 3))
                    edi = var_10
                    int32_t eax_23
                    int32_t edx_7
                    edx_7:eax_23 = sx.q(eax_16)
                    int32_t eax_25 = (eax_23 + (edx_7 & 7)) s>> 3
                    arg6[3] += eax_25
                    *arg6 += eax_25
                    arg6[1] = eax_16 & 7
                    eax_21 = ecx_2 - 1
                else
                    *arg6 = arg6[4]
                    arg6[3] = 0
                    eax_21 = ecx_2 - 1
                    arg6[1] = 1
            
            if (eax_21 == 0xffffffff)
                return 0xffffffff
            
            int32_t edx_14 = *esi_2
            int32_t eax_37 = esi_2[4] + ((edx_14 * eax_21) << 2)
            int32_t i_2 = 0
            int32_t var_24_2 = eax_37
            
            if (edx_14 s> 0)
                do
                    int32_t eax_39 = *(arg2 + (edi << 2))
                    edi += 1
                    *(eax_39 + (ebx_1 << 2)) = *(eax_37 + (i_2 << 2)) f+ *(eax_39 + (ebx_1 << 2))
                    
                    if (edi == arg5)
                        edi = 0
                        ebx_1 += 1
                    
                    i_2 += 1
                while (i_2 s< *esi_2)
                
                var_1c_1 = ebx_1
                var_10 = edi
        while (ebx_1 s< temp0_2)

return 0
