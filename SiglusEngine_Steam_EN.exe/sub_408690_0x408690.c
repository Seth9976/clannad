// 函数: sub_408690
// 地址: 0x408690
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_4_1 = ecx
int32_t edi = 0
int32_t var_4 = 0

if (arg4 s> 0)
    int32_t* ebp_1 = arg1
    
    do
        arg1 = ebp_1[0xa]
        int32_t eax_2 = sub_410af0(arg3, ebp_1[9])
        int32_t esi_4
        int32_t edi_2
        
        if (eax_2 s< 0)
            edi_2 = ebp_1[2]
            esi_4 = 0
        label_40870c:
            int32_t* ebx_3 = arg1
            int32_t i = sub_410af0(arg3, ebx_3)
            
            if (i s< 0)
                do
                    if (ebx_3 s<= 1)
                        arg1 = ebx_3
                        
                        if (i s< 0)
                            goto label_4087fc_1
                        
                        goto label_40874d
                    
                    ebx_3 -= 1
                    i = sub_410af0(arg3, ebx_3)
                while (i s< 0)
                
                arg1 = ebx_3
            
        label_40874d:
            int32_t eax_5 = sub_407cd0(i)
            int32_t i_1 = edi_2 - esi_4
            
            if (i_1 s> 1)
                do
                    int32_t ecx_3 = ebp_1[5]
                    int32_t edx_4 = i_1 s>> 1
                    int32_t ecx_5 =
                        neg.d(sbb.d(ecx_3, ecx_3, eax_5 u< *(ecx_3 + ((edx_4 + esi_4) << 2))))
                    edi_2 -= neg.d(ecx_5) & edx_4
                    esi_4 += (ecx_5 - 1) & edx_4
                    i_1 = edi_2 - esi_4
                while (i_1 s> 1)
                
                ebx_3 = arg1
            
            int32_t eax_6 = sx.d(*(ebp_1[7] + esi_4))
            
            if (eax_6 s> ebx_3)
                sub_410ba0(arg3, ebx_3)
            label_4087fc:
                return 0xffffffff
            
            sub_410ba0(arg3, eax_6)
            edi = var_4
        else
            int32_t ebx_1 = *(ebp_1[8] + (eax_2 << 2))
            
            if ((ebx_1 & 0x80000000) != 0)
                esi_4 = ebx_1 s>> 0xf & 0x7fff
                edi_2 = ebp_1[2] - (ebx_1 & 0x7fff)
                goto label_40870c
            
            sub_410ba0(arg3, sx.d(*(ebp_1[7] + ebx_1 - 1)))
            esi_4 = ebx_1 - 1
        
        if (esi_4 == 0xffffffff)
        label_4087fc_1:
            return 0xffffffff
        
        int32_t eax_7 = *ebp_1
        int32_t* ecx_11 = ebp_1[4] + ((eax_7 * esi_4) << 2)
        int32_t i_2 = 0
        
        if (eax_7 s> 0)
            int32_t* eax_9 = arg2 + (edi << 2)
            
            do
                edi += 1
                *eax_9 = *ecx_11
                eax_9 = &eax_9[1]
                i_2 += 1
                ecx_11 = &ecx_11[1]
            while (i_2 s< *ebp_1)
            
            var_4 = edi
    while (edi s< arg4)

return 0
