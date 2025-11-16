// 函数: sub_497620
// 地址: 0x497620
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg2 == 0)
    sub_453b00(0)

sub_452d90(arg2)
char* result = sub_48e950(sub_4525d0(arg2, 0), &data_976f90, &data_719b6c, arg1, 0)

if (result != 0)
    int32_t edx = data_976f94
    int32_t eax_1 = 0
    int32_t* ecx_2 = data_976f9c
    
    if (edx != 0)
        eax_1 = ecx_2[0xd]
    
    data_719b74 = eax_1
    int32_t eax_2 = data_719ba4
    data_719b6c = arg1
    data_719b70 = 0
    data_719b78 = 0
    data_719b7c = 0
    
    if (eax_2 s< 0x40)
        HWND edx_1 = data_1af0a4c
        *(eax_2 * 0x4ec + 0x719ba8) = arg1
        *(eax_2 * 0x4ec + 0x719bac) = 0
        WPARAM esi_1 = data_719ba4
        
        if (edx_1 != 0 && esi_1 u<= 0x3f)
            int32_t var_14_1 = 1
            sub_4c1300(
                sub_55bf30(esi_1 * 0x4ec + 0x719ba8, edx_1, esi_1, ecx_2, 
                    esi_1 * 0x4ec + 0x719ba8), 
                data_1af0a4c, esi_1, 0x4f32, 0xffffffff)
        
        edx = data_976f94
        ecx_2 = data_976f9c
    
    int32_t edi_1 = data_976fa8
    result = data_719b6c - 1
    int32_t esi_3
    
    if (result u> 0x270e || edx == 0)
        esi_3 = 0xffffffff
    else
        esi_3 = data_719b74 + edi_1
    
    bool cond:0_1 = data_7035c8 == 0
    data_976fb0.d = esi_3
    data_1af1728 = 0
    
    if (not(cond:0_1) && edx != 0)
        if (data_12a2934 != 0)
            if (ecx_2[0x73] == 2)
                return result
            
            goto label_49777d
        
        if (ecx_2[0x73] == 1)
        label_49777d:
            result = sub_57fac0(0)
            
            if (result == 0 && data_1311178 == result && data_13926a4 == result
                    && data_13926a0 == result && data_702fe4 == result && data_702fd8 == result
                    && data_702fcc == result && data_91e8fc s< 0x80)
                result = sub_475310()
                
                if (result == 0)
                    data_719b74 = esi_3 - edi_1
                    return sub_4977f0(&result[6], nullptr)

return result
