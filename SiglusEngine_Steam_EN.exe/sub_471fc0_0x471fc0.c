// 函数: sub_471fc0
// 地址: 0x471fc0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* eax = arg4
*eax = 0
bool cond:0 = *arg3 != 0
*arg2 = 0

if (cond:0)
    *arg3 = 0
else
    eax = zx.d(arg3[0x10]) * data_1b14a28
    *(arg3 + 0xc) += eax

uint32_t edx = *(arg3 + 4)

if (edx != 0)
    int16_t ecx = *(arg3 + 0x12)
    
    if (ecx != 0 || *(arg3 + 0x14) != ecx)
        int32_t eax_2 = *(arg3 + 8)
        int32_t edi = *(arg3 + 0xc)
        
        if (edi u> eax_2)
            int32_t var_c_2 = edi - eax_2
            eax_2 = edi
            int32_t var_18 = 0
            int32_t var_14_1 = 0
            int32_t var_8
            
            if (ecx != 0)
                var_8 = edi
                int32_t eax_6 = sx.d(ecx)
                int32_t eax_7 = sub_471cc0(eax_6, edx, var_c_2, eax_6, sx.d(*(arg3 + 0x16)), 
                    zx.d(arg3[0x18]), zx.d(arg3[0x19]), &var_8, &var_18)
                edx = *(arg3 + 4)
                var_14_1 = eax_7
                eax_2 = var_8
            
            int32_t ecx_2 = 0
            bool cond:1_1 = *(arg3 + 0x14) == 0
            int32_t var_10 = 0
            int32_t edx_1
            
            if (cond:1_1)
                edx_1 = 0
            else
                var_8 = *(arg3 + 0xc)
                int32_t eax_12 = sx.d(*(arg3 + 0x14))
                int32_t eax_13 = sub_471cc0(eax_12, edx, var_c_2, eax_12, sx.d(*(arg3 + 0x16)), 
                    zx.d(arg3[0x18]), zx.d(arg3[0x19]), &var_8, &var_10)
                ecx_2 = var_10
                edx_1 = eax_13
                eax_2 = var_8
            
            *(arg3 + 0xc) = eax_2
            
            if (var_14_1 != 0 || edx_1 != 0)
                *arg2 = var_18
                *arg4 = ecx_2
                return arg4
            
            *(arg3 + 4) = edx_1
        
        return eax_2

*(arg3 + 4) = 0
return eax
