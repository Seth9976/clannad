// 函数: sub_408810
// 地址: 0x408810
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t temp0 = divs.dp.d(sx.q(arg3), arg4)
int32_t esi = 0
int32_t var_8 = 0
int32_t eax_4 = arg6 + arg3
arg3 = temp0
int32_t temp0_1 = divs.dp.d(sx.q(eax_4), arg4)

if (temp0 s< temp0_1)
    do
        int32_t* edi_3 = arg1
        int32_t ebp_1 = edi_3[0xa]
        arg6 = ebp_1
        int32_t eax_7 = sub_410af0(arg5, edi_3[9])
        int32_t ebx_3
        int32_t esi_3
        int32_t edi_2
        
        if (eax_7 s< 0)
            edi_2 = edi_3[2]
            esi_3 = 0
        label_4088ac:
            int32_t* ebx_5 = arg5
            int32_t i = sub_410af0(ebx_5, ebp_1)
            
            if (i s< 0)
                do
                    if (ebp_1 s<= 1)
                        arg6 = ebp_1
                        
                        if (i s< 0)
                            goto label_4089c0_1
                        
                        goto label_4088e5
                    
                    ebp_1 -= 1
                    i = sub_410af0(ebx_5, ebp_1)
                while (i s< 0)
                
                arg6 = ebp_1
            
        label_4088e5:
            int32_t eax_9 = sub_407cd0(i)
            int32_t i_1 = edi_2 - esi_3
            
            if (i_1 s> 1)
                do
                    int32_t edx_6 = i_1 s>> 1
                    int32_t ecx_5 = edx_6 + esi_3
                    int32_t ecx_7 = neg.d(sbb.d(ecx_5, ecx_5, eax_9 u< *(arg1[5] + (ecx_5 << 2))))
                    edi_2 -= neg.d(ecx_7) & edx_6
                    esi_3 += (ecx_7 - 1) & edx_6
                    i_1 = edi_2 - esi_3
                while (i_1 s> 1)
                
                ebp_1 = arg6
                ebx_5 = arg5
            
            int32_t eax_11 = sx.d(*(arg1[7] + esi_3))
            
            if (eax_11 s> ebp_1)
                sub_410ba0(ebx_5, ebp_1)
            label_4089c0:
                return 0xffffffff
            
            sub_410ba0(ebx_5, eax_11)
            edi_3 = arg1
            ebx_3 = esi_3
            esi = var_8
        else
            int32_t ebx_1 = *(edi_3[8] + (eax_7 << 2))
            
            if ((ebx_1 & 0x80000000) != 0)
                esi_3 = ebx_1 s>> 0xf & 0x7fff
                edi_2 = edi_3[2] - (ebx_1 & 0x7fff)
                goto label_4088ac
            
            sub_410ba0(arg5, sx.d(*(edi_3[7] + ebx_1 - 1)))
            ebx_3 = ebx_1 - 1
        
        if (ebx_3 == 0xffffffff)
        label_4089c0_1:
            return 0xffffffff
        
        int32_t eax_12 = *edi_3
        float* ecx_12 = edi_3[4] + ((eax_12 * ebx_3) << 2)
        int32_t i_2 = 0
        
        if (eax_12 s> 0)
            do
                int32_t eax_14 = *(arg2 + (esi << 2))
                esi += 1
                var_8 = esi
                *(eax_14 + (arg3 << 2)) =
                    fconvert.s(fconvert.t(*(eax_14 + (arg3 << 2))) + fconvert.t(*ecx_12))
                
                if (esi == arg4)
                    var_8 = 0
                    esi = 0
                    arg3 += 1
                
                i_2 += 1
                ecx_12 = &ecx_12[1]
            while (i_2 s< *edi_3)
    while (arg3 s< temp0_1)

return 0
