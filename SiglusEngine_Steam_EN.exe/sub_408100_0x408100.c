// 函数: sub_408100
// 地址: 0x408100
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* edi = arg1
*edi
int32_t j_2 = divs.dp.d(sx.q(arg4), *edi)
int32_t j_3 = j_2
int32_t ebx = j_2 << 2
int32_t eax_4
eax_4.b = (ebx + 3).b & 0xfc
__chkstk(eax_4)
int32_t eax_6
eax_6.b = (ebx + 3).b & 0xfc
__chkstk(eax_6)
int32_t __saved_edi
int32_t* ecx = &__saved_edi
int32_t var_c = 0
int32_t* var_14 = &__saved_edi

if (j_2 s> 0)
    int32_t* var_10_1 = &__saved_edi
    bool cond:4_1
    
    do
        arg4 = edi[0xa]
        int32_t eax_10 = sub_410af0(arg3, edi[9])
        int32_t ebx_3
        int32_t esi_2
        int32_t edi_2
        
        if (eax_10 s< 0)
            edi_2 = edi[2]
            esi_2 = 0
        label_4081b8:
            int32_t* ebx_4 = arg4
            int32_t i = sub_410af0(arg3, ebx_4)
            
            if (i s< 0)
                do
                    if (ebx_4 s<= 1)
                        arg4 = ebx_4
                        
                        if (i s< 0)
                            goto label_40825e
                        
                        goto label_4081f0
                    
                    ebx_4 -= 1
                    i = sub_410af0(arg3, ebx_4)
                while (i s< 0)
                
                arg4 = ebx_4
            
        label_4081f0:
            int32_t eax_13 = sub_407cd0(i)
            int32_t i_1 = edi_2 - esi_2
            
            if (i_1 s> 1)
                do
                    int32_t edx_6 = i_1 s>> 1
                    int32_t ecx_6 = edx_6 + esi_2
                    int32_t ecx_8 = neg.d(sbb.d(ecx_6, ecx_6, eax_13 u< *(arg1[5] + (ecx_6 << 2))))
                    edi_2 -= neg.d(ecx_8) & edx_6
                    esi_2 += (ecx_8 - 1) & edx_6
                    i_1 = edi_2 - esi_2
                while (i_1 s> 1)
                
                ebx_4 = arg4
            
            int32_t eax_15 = sx.d(*(arg1[7] + esi_2))
            
            if (eax_15 s> ebx_4)
                sub_410ba0(arg3, ebx_4)
            label_40825e:
                ebx_3 = 0xffffffff
            else
                sub_410ba0(arg3, eax_15)
                ebx_3 = esi_2
            
            j_2 = j_3
            edi = arg1
        else
            int32_t ebx_1 = *(edi[8] + (eax_10 << 2))
            
            if ((ebx_1 & 0x80000000) != 0)
                esi_2 = ebx_1 s>> 0xf & 0x7fff
                edi_2 = edi[2] - (ebx_1 & 0x7fff)
                goto label_4081b8
            
            sub_410ba0(arg3, sx.d(*(edi[7] + ebx_1 - 1)))
            ebx_3 = ebx_1 - 1
        *var_10_1 = ebx_3
        
        if (ebx_3 == 0xffffffff)
            return 0xffffffff
        
        *var_10_1 = edi[4] + ((*edi * ebx_3) << 2)
        cond:4_1 = var_c + 1 s< j_2
        var_c += 1
        var_10_1 = &var_10_1[1]
    while (cond:4_1)
    ecx = var_14

int32_t i_2 = 0

if (*edi s> 0)
    arg3 = arg2
    
    do
        if (j_2 s> 0)
            int32_t* eax_20 = arg3
            int32_t j_1 = j_2
            int32_t j
            
            do
                int32_t esi_3 = *ecx
                ecx = &ecx[1]
                eax_20 = &eax_20[1]
                j = j_1
                j_1 -= 1
                eax_20[-1] = fconvert.s(fconvert.t(*(esi_3 + (i_2 << 2))) + fconvert.t(eax_20[-1]))
            while (j != 1)
            j_2 = j_3
            ecx = var_14
        
        i_2 += 1
        arg3 = &arg3[j_2]
    while (i_2 s< *edi)

return 0
