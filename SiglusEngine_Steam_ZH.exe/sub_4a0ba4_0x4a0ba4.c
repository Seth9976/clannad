// 函数: sub_4a0ba4
// 地址: 0x4a0ba4
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t i = arg2
void* ecx = *(*(arg1 + 0x14) + (i << 2))
double var_24
int32_t i_1

if (i != *arg3)
    int32_t i_2 = *(ecx + 0x40)
    
    if (i_2 == 0xffffffff)
        if (*(ecx + 8) != 0xffffffff || (*(*(*(arg1 + 0x10) + (*(ecx + 4) << 2)) + 4) & 2) == 0)
            goto label_4a0bc3
        
        int32_t* ecx_2 = *(*(arg1 + 0x18) + (*(ecx + 0x48) << 2))
        int32_t edx_2 = ecx_2[3]
        int32_t eax_5 = 0
        int32_t edi
        int32_t var_30_1 = edi
        
        if (edx_2 u> 0)
            int32_t* edi_1 = ecx_2[4]
            
            while (*edi_1 != i)
                eax_5 += 1
                edi_1 = &edi_1[1]
                
                if (eax_5 u>= edx_2)
                    break
        
        if (eax_5 == edx_2)
            goto label_4a0deb
        
        int32_t edi_3 = *ecx_2 & 0xfff00000
        
        if (edi_3 == 0x10000000)
            i_1 = 0xffffffff
            
            if (sub_4a0ba4(*(ecx_2[2] + (eax_5 << 2)), &i_1, &var_24) s< 0)
                goto label_4a0deb
        else if (edi_3 == 0x10100000)
            i_1 = 0xffffffff
            
            if (sub_4a0ba4(*(ecx_2[2] + (eax_5 << 2)), &i_1, &var_24) s< 0)
                goto label_4a0deb
            
            var_24 = fconvert.d(fneg(fconvert.t(var_24)))
        else if (edi_3 != 0x20400000)
            if (edi_3 != 0x20500000)
                goto label_4a0deb
            
            int32_t ecx_12 = ecx_2[2]
            int32_t edi_5 = *(ecx_12 + (eax_5 << 2))
            int32_t edx_5 = *(ecx_12 + ((edx_2 + eax_5) << 2))
            
            if (edi_5 == edx_5)
                goto label_4a0deb
            
            void** edi_7 = edx_5 << 2
            void* eax_14 = *(edi_7 + *(arg1 + 0x14))
            int32_t eax_15
            
            if ((*(*(*(arg1 + 0x10) + (*(eax_14 + 4) << 2)) + 4) & 0x100) != 0
                    && *(eax_14 + 8) == 0xffffffff)
                i_1 = 0xffffffff
                eax_15 = sub_4a0ba4(edi_5, &i_1, &var_24)
            
            if ((*(*(*(arg1 + 0x10) + (*(eax_14 + 4) << 2)) + 4) & 0x100) == 0
                    || *(eax_14 + 8) != 0xffffffff || eax_15 s< 0)
                void** eax_19 = edi_5 << 2
                void* eax_20 = *(eax_19 + *(arg1 + 0x14))
                
                if ((*(*(*(arg1 + 0x10) + (*(eax_20 + 4) << 2)) + 4) & 0x100) == 0
                        || *(eax_20 + 8) != 0xffffffff)
                    goto label_4a0de8
                
                i_1 = 0xffffffff
                
                if (sub_4a0ba4(edx_5, &i_1, &var_24) s< 0)
                    goto label_4a0de8
                
                var_24 = fconvert.d(fconvert.t(var_24)
                    * fconvert.t(*(*(eax_19 + *(arg1 + 0x14)) + 0x20)))
            else
                var_24 =
                    fconvert.d(fconvert.t(var_24) * fconvert.t(*(*(edi_7 + *(arg1 + 0x14)) + 0x20)))
        else
            int32_t ecx_7 = ecx_2[2]
            int32_t edi_4 = *(ecx_7 + (eax_5 << 2))
            int32_t ebx = *(ecx_7 + ((edx_2 + eax_5) << 2))
            i_1 = 0xffffffff
            
            if (edi_4 != ebx)
                double var_10
                int32_t eax_9 = sub_4a0ba4(edi_4, &i_1, &var_10)
                double var_18
                int32_t eax_10
                
                if (eax_9 s>= 0)
                    eax_10 = sub_4a0ba4(ebx, &i_1, &var_18)
                
                if (eax_9 s>= 0 && eax_10 s>= 0)
                    var_24 = fconvert.d(fconvert.t(var_18) + fconvert.t(var_10))
                else
                    i_1 = 0xffffffff
                    
                    if (sub_4a0ba4(ebx, &i_1, &var_18) s< 0)
                        goto label_4a0de8
                    
                    if (sub_4a0ba4(edi_4, &i_1, &var_10) s< 0)
                        goto label_4a0de8
                    
                    var_24 = fconvert.d(fconvert.t(var_18) + fconvert.t(var_10))
            else if (sub_4a0ba4(edi_4, &i_1, &var_24) s< 0)
            label_4a0de8:
                i = arg2
            label_4a0deb:
                i_1 = i
                var_24 = fconvert.d(float.t(1))
            else
                long double x87_r7_4 = fconvert.t(var_24)
                var_24 = fconvert.d(x87_r7_4 + x87_r7_4)
    else
        i_1 = i_2
        var_24 = fconvert.d(fconvert.t(*(ecx + 0x28)))
else
label_4a0bc3:
    i_1 = i
    var_24 = fconvert.d(float.t(1))

int32_t eax_23 = *arg3

if (eax_23 != 0xffffffff && i_1 != eax_23)
    return 0x80004005

*(ecx + 0x40) = i_1
long double x87_r7_7 = fconvert.t(var_24)
*arg3 = i_1
*(ecx + 0x28) = fconvert.d(x87_r7_7)
*arg4 = fconvert.d(fconvert.t(var_24))
return 0
