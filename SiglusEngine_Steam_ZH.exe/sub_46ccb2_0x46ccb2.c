// 函数: sub_46ccb2
// 地址: 0x46ccb2
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = arg3
int32_t ebx = arg4
int32_t edx_1 = eax * ebx
int32_t edi
int32_t var_2c = edi

if (edx_1 != 0)
    int32_t var_10_1
    
    if (arg2 != 2 || (arg5 & 4) != 0)
        var_10_1 = 0
    else
        arg3 = ebx
        var_10_1 = 1
        arg4 = eax
        ebx = eax
    
    void* eax_1 = *(arg1 + 8)
    int32_t ecx = arg7
    uint32_t ebx_2 = (ebx + 3) u>> 2
    int32_t edi_2 = ebx_2 * arg3
    void* const eax_3
    
    if (ecx u>= *(eax_1 + 4))
        eax_3 = nullptr
    else
        eax_3 = *(*(eax_1 + 0x10) + (ecx << 2))
    
    if (eax_3 == 0)
        return 0x80004005
    
    bool cond:2_1 = (*(eax_3 + 4) & 0x40) == 0
    int32_t esi_1 = *(eax_3 + 0x10)
    int32_t edx_2 = esi_1 + edi_2
    int32_t var_18_1 = esi_1
    *(eax_3 + 0x10) = edx_2
    
    if (not(cond:2_1))
        *(eax_3 + 8) = edx_2
    
    if (arg3 u> 0)
        int32_t var_c_1 = 0
        int32_t var_8_1 = 0
        int32_t* arg_10 = arg6
        int32_t i_1 = arg3
        int32_t i
        
        do
            int32_t edi_3 = 0
            
            if (arg4 u> 0)
                arg2 = arg_10
                
                do
                    int32_t eax_8
                    
                    if (var_10_1 == 0)
                        eax_8 = arg6[var_8_1 + edi_3]
                    else
                        eax_8 = *arg2
                    
                    void* edx_6 = *(arg1 + 8)
                    void* const eax_11
                    
                    if (eax_8 u>= *(edx_6 + 8))
                        eax_11 = nullptr
                    else
                        eax_11 = *(*(edx_6 + 0x14) + (eax_8 << 2))
                    
                    if (eax_11 != 0)
                        *(eax_11 + 4) = ecx
                        int32_t edx_8 = (edi_3 u>> 2) + var_c_1 + esi_1
                        *(eax_11 + 0x68) = arg9
                        int32_t esi_3 = edi_3 & 3
                        *(eax_11 + 0xc) = edx_8
                        *(eax_11 + 0x10) = esi_3
                        esi_1 = var_18_1
                        *(eax_11 + 0x70) = *arg8 + ((edx_8 - var_18_1) << 2) + esi_3
                        ecx = arg7
                    
                    arg2 = &arg2[arg3]
                    edi_3 += 1
                while (edi_3 u< arg4)
            
            arg_10 = &arg_10[1]
            var_8_1 += arg4
            var_c_1 += ebx_2
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    *arg8 += edi_2 << 2

if (arg10 != 0)
    *arg10 = edx_1

return 0
