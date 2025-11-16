// 函数: sub_4158f0
// 地址: 0x4158f0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char* result = data_131d2d0

if (result != 0xffffffff && arg3 u<= 0xf)
    void* edi_2 = result * 0x10c + 0x1097fe4
    *(arg3 * 0x3b4 + &data_131d318) = arg4
    *(arg3 * 0x3b4 + 0x131d31c) = arg5
    *(arg3 * 0x3b4 + 0x131d320) = arg6
    *(arg3 * 0x3b4 + 0x131d344) = arg7
    sub_4d6c40(arg3 * 0x3b4 + 0x131d324, arg3 * 0x3b4 + 0x131d328)
    sub_4d6c40(arg3 * 0x3b4 + &data_131d32c, arg3 * 0x3b4 + 0x131d330)
    sub_4d6c40(arg3 * 0x3b4 + 0x131d334, arg3 * 0x3b4 + 0x131d338)
    result = arg2
    
    if (result != 0 && *result != 0)
        sub_4cfe90(result, arg3 * 0x3b4 + 0x131d328, arg3 * 0x3b4 + 0x131d324, result, "BTNSELSTR")
        int32_t var_24_1 = *(edi_2 + 0x70)
        int32_t var_20_1 = *(arg3 * 0x3b4 + 0x131d344)
        int32_t var_30 = *(edi_2 + 0x64)
        int32_t var_2c_1 = *(edi_2 + 0x68)
        int32_t var_28_1 = *(edi_2 + 0x6c)
        int32_t eax_9 = *(edi_2 + 0x8c)
        int32_t eax_10 = neg.d(eax_9)
        int32_t var_1c_1 = 0xff
        int32_t* eax_11 = sbb.d(eax_10, eax_10, eax_9 != 0)
        int32_t var_c
        int32_t var_8
        sub_4a50d0(&var_c, arg2, &var_30, nullptr, nullptr, 0, 0, &var_c, &var_8, 0, eax_11, 1)
        int32_t edx_5 = var_c
        
        if (edx_5 s> 0)
            int32_t eax_13 = var_8
            
            if (eax_13 s> 0)
                uint32_t edi_5 = (edx_5 * eax_13) << 2
                sub_4d6960(eax_13, arg3 * 0x3b4 + 0x131d330, arg3 * 0x3b4 + &data_131d32c, edi_5, 
                    "BTNSELSTRMEM")
                void* edi_6
                
                if (*(edi_2 + 0x8c) == 0 || data_131d2c8 == 0 || data_131923c != 0)
                    edi_6 = arg3 * 0x3b4 + 0x131d338
                else
                    edi_6 = arg3 * 0x3b4 + 0x131d338
                    sub_4d6960(edi_2, edi_6, arg3 * 0x3b4 + 0x131d334, edi_5, "BTNSELSTRSHADOWMEM")
                
                int32_t eax_15 = var_8
                int32_t ecx_7 = var_c
                *(arg3 * 0x3b4 + 0x131d33c) = ecx_7
                *(arg3 * 0x3b4 + 0x131d340) = eax_15
                sub_4a50d0(eax_15, arg2, &var_30, *(arg3 * 0x3b4 + 0x131d330), *edi_6, ecx_7, 
                    eax_15, &var_c, &var_8, 0, eax_11, 1)
        
        *(arg3 * 0x3b4 + 0x131d350) = 0
        *(arg3 * 0x3b4 + 0x131d354) = 0
        result = data_131d30c
        
        if (result s> 0)
            int32_t ecx_9 = *(edi_2 + 0x7c)
            result -= *(edi_2 + 0x74)
            
            if (ecx_9 == 1)
                int32_t ecx_12 = *(arg3 * 0x3b4 + 0x131d33c)
                
                if (result s> ecx_12)
                    int32_t eax_17
                    int32_t edx_9
                    edx_9:eax_17 = sx.q(result - ecx_12)
                    result = (eax_17 - edx_9) s>> 1
                    *(arg3 * 0x3b4 + 0x131d350) = result
            else if (ecx_9 == 2)
                result -= *(arg3 * 0x3b4 + 0x131d33c)
                *(arg3 * 0x3b4 + 0x131d350) = result
    
    *(arg3 * 0x3b4 + 0x131d484) += 1
    *(arg3 * 0x3b4 + 0x131d59c) += 1

return result
