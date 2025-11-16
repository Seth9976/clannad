// 函数: sub_9a0740
// 地址: 0x9a0740
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = arg3[9]
int32_t i_1 = 0
sub_9a0850(arg2, esi, arg2, arg3[0xa])
int32_t edx_1 = arg4
int32_t esi_3 = *arg3[5] - (esi s>> 1) - arg3[7]

if (*arg3 s> 1)
    do
        int32_t xmm0_1 = *(arg2 + (esi_3 << 2))
        int32_t eax_5 = arg3[5]
        int32_t ecx_4 = ((*(eax_5 + (i_1 << 2) + 4) + *(eax_5 + (i_1 << 2))) s>> 1) - arg3[7]
        int32_t xmm1_1 = *(arg3[1] + 0x20)
        
        if (not(xmm0_1 f<= xmm1_1))
            xmm0_1 = xmm1_1
        
        int32_t eax_7 = ecx_4
        int32_t ecx_5 = esi_3 + 1
        
        if (ecx_5 s<= eax_7)
            do
                int32_t xmm1_2 = *(arg2 + (esi_3 << 2) + 4)
                esi_3 += 1
                ecx_5 += 1
                bool p_1
                
                if (xmm1_2 f<= -9999f || not(xmm0_1 f> xmm1_2))
                    xmm0_1 f- -9999f
                    p_1 = unimplemented  {test ah, 0x44}
                    eax_7 = ecx_4
                
                if ((not(xmm1_2 f<= -9999f) && xmm0_1 f> xmm1_2) || not(p_1))
                    xmm0_1 = xmm1_2
            while (ecx_5 s<= eax_7)
            
            edx_1 = arg4
        
        int32_t i = arg3[7] + esi_3
        
        if (i_1 s< *arg3)
            while (*(arg3[5] + (i_1 << 2)) s<= i)
                if (not(xmm0_1 f<= *(edx_1 + (i_1 << 2))))
                    *(edx_1 + (i_1 << 2)) = xmm0_1
                
                i_1 += 1
                
                if (i_1 s>= *arg3)
                    break
    while (i_1 + 1 s< *arg3)

int32_t result = arg3[0xa]
int32_t xmm0_2 = *(arg2 + (result << 2) - 4)

for (; i_1 s< *arg3; i_1 += 1)
    if (not(xmm0_2 f<= *(edx_1 + (i_1 << 2))))
        *(edx_1 + (i_1 << 2)) = xmm0_2

return result
