// 函数: sub_427fb0
// 地址: 0x427fb0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

*arg4 = 0xffffffff
*arg5 = 0xffffffff
*arg6 = 0xffffffff
*arg7 = 0xffffffff

if (*arg3 != 0 && arg2[0x13] != 0)
    int32_t* eax_3
    eax_3.b = arg2[0x12].b
    
    if (eax_3.b != 0)
        int32_t eax_5 = arg2[2] + arg2[0x15]
        int32_t ebx_2 = arg2[1] + arg2[0x14]
        int32_t edx = *arg2
        int32_t eax_6 = arg3[5]
        void* var_e4_1
        void* var_d8_1
        int32_t var_d4_1
        int32_t var_d0_1
        int32_t var_cc_1
        void* var_c8_1
        void* var_c4_1
        int32_t var_c0_1
        int32_t var_bc_1
        int32_t var_b8_1
        int32_t var_b4_1
        int32_t var_a0_1
        int32_t var_9c_1
        char var_98_1
        int32_t var_94_1
        uint32_t var_90_1
        int32_t var_8c_1
        int32_t var_88_1
        int32_t var_84_1
        int32_t var_80_1
        char var_7c_1
        char var_78_1
        char var_74_1
        char var_70_1
        char var_6c_1
        char var_68_1
        double* var_64_1
        int32_t var_60_1
        int32_t var_5c_1
        int32_t var_58_1
        char var_54_1
        int32_t var_50_1
        int32_t* var_4c_1
        int32_t* var_48_1
        int32_t* var_44_1
        int32_t* var_40_1
        int32_t* var_3c_1
        int32_t* var_38_1
        int32_t var_14
        int32_t var_10
        int32_t var_c
        int32_t var_8
        int32_t eax_27
        void* ecx_3
        int32_t* edx_2
        
        if (eax_6 == 0 || eax_6 == 1)
            if (edx == 0)
                uint32_t var_30_2 = zx.d(arg2[0x22].b)
                int32_t var_34_2 = 1
                void* ecx_4 = arg3[4]
                var_38_1 = &var_14
                edx_2 = arg3[3]
                var_3c_1 = &var_c
                var_40_1 = &var_10
                var_44_1 = &var_8
                var_48_1 = arg2[3]
                var_4c_1 = eax_3
                var_50_1 = arg2[0x11]
                var_54_1 = (arg2[0x10]).b
                var_58_1 = arg2[0xf]
                var_5c_1 = arg2[0xe]
                var_60_1 = zx.d(*(arg2 + 0x35))
                var_64_1 = zx.d(arg2[0xd].b)
                var_68_1 = *(arg2 + 0x33)
                var_6c_1 = *(arg2 + 0x32)
                var_70_1 = *(arg2 + 0x31)
                var_74_1 = arg2[0xc].b
                var_78_1 = (arg2[0xb]).b
                var_7c_1 = (arg2[0xa]).b
                var_80_1 = arg2[9]
                var_84_1 = arg2[8]
                var_88_1 = arg2[7]
                var_8c_1 = arg2[6]
                var_90_1 = zx.d(arg2[5].b)
                var_94_1 = arg2[4]
                var_98_1 = (arg2[0x17]).b
                var_9c_1 = arg2[0x16]
                var_a0_1 = arg2[0x18]
                int32_t var_a4_2 = 0xffffffff
                int32_t var_a8_2 = 0xffffffff
                int32_t var_ac_2 = 0xffffffff
                int32_t var_b0_2 = 0xffffffff
                var_b4_1 = eax_5
                var_b8_1 = ebx_2
                var_bc_1 = arg10
                var_c0_1 = arg9
                var_c4_1 = arg8
                var_c8_1 = ecx_4
                var_cc_1 = arg2[0x15]
                var_d0_1 = arg2[0x14]
                var_d4_1 = ecx_4 - 1
                eax_27 = edx_2 - 1
                var_d8_1 = eax_27
                int32_t var_dc_2 = 0
                int32_t var_e0_2 = 0
                var_e4_1 = ecx_4
                ecx_3 = arg3[1]
            label_4281e4:
                sub_429860(eax_27, edx_2, ecx_3, var_e4_1, nullptr, 0, var_d8_1, var_d4_1, 
                    var_d0_1, var_cc_1, var_c8_1, var_c4_1, var_c0_1, var_bc_1, var_b8_1, var_b4_1, 
                    0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, var_a0_1, var_9c_1, var_98_1, 
                    var_94_1, var_90_1, var_8c_1, var_88_1, var_84_1, var_80_1, var_7c_1, var_78_1, 
                    var_74_1, var_70_1, var_6c_1, var_68_1, var_64_1, var_60_1, var_5c_1, var_58_1, 
                    var_54_1, var_50_1, var_4c_1, var_48_1, var_44_1, var_40_1, var_3c_1, var_38_1, 
                    1)
                int32_t eax_37 = arg2[0x1e]
                int32_t ecx_5
                int32_t edx_3
                int32_t ebx_5
                int32_t edi_3
                
                if (eax_37 != 0xffffffff || arg2[0x1f] != eax_37 || arg2[0x20] != eax_37
                        || arg2[0x21] != eax_37)
                    ebx_5 = var_8
                    edx_3 = var_c
                    edi_3 = var_10
                    
                    if (eax_37 s> ebx_5)
                        ebx_5 = eax_37
                    
                    int32_t eax_38 = arg2[0x20]
                    ecx_5 = var_14
                    
                    if (eax_38 s< edx_3)
                        edx_3 = eax_38
                    
                    int32_t eax_39 = arg2[0x21]
                    
                    if (arg2[0x1f] s> edi_3)
                        edi_3 = arg2[0x1f]
                    
                    if (eax_39 s< ecx_5)
                        ecx_5 = eax_39
                else
                    ecx_5 = var_14
                    edx_3 = var_c
                    edi_3 = var_10
                    ebx_5 = var_8
                
                if (ebx_5 s<= edx_3 && edi_3 s<= ecx_5)
                    *arg4 = ebx_5
                    *arg5 = edi_3
                    *arg6 = edx_3
                    *arg7 = ecx_5
                    return 1
        else if (eax_6 == 2)
            void* eax_7 = sub_4d25b0(arg3[1], edx)
            
            if (eax_7 != 0 && *(eax_7 + 2) == 1 && *(eax_7 + 4) == zx.d(*(eax_7 + 0x74))
                    && *(eax_7 + 8) == zx.d(*(eax_7 + 0x76)))
                int32_t* edi_1 = *(eax_7 + 0xc)
                
                if (edi_1 == zx.d(*(eax_7 + 0x7a)))
                    void* edi_2 = *(eax_7 + 0x10)
                    
                    if (edi_2 == zx.d(*(eax_7 + 0x7c)))
                        uint32_t var_30_1 = zx.d(arg2[0x22].b)
                        int32_t var_34_1 = 1
                        var_38_1 = &var_14
                        var_3c_1 = &var_c
                        var_40_1 = &var_10
                        var_44_1 = &var_8
                        var_48_1 = arg2[3]
                        var_4c_1 = eax_3
                        var_50_1 = arg2[0x11]
                        var_54_1 = (arg2[0x10]).b
                        var_58_1 = arg2[0xf]
                        var_5c_1 = arg2[0xe]
                        var_60_1 = zx.d(*(arg2 + 0x35))
                        var_64_1 = zx.d(arg2[0xd].b)
                        var_68_1 = *(arg2 + 0x33)
                        var_6c_1 = *(arg2 + 0x32)
                        var_70_1 = *(arg2 + 0x31)
                        var_74_1 = arg2[0xc].b
                        var_78_1 = (arg2[0xb]).b
                        var_7c_1 = (arg2[0xa]).b
                        var_80_1 = arg2[9]
                        var_84_1 = arg2[8]
                        var_88_1 = arg2[7]
                        var_8c_1 = arg2[6]
                        var_90_1 = zx.d(arg2[5].b)
                        var_94_1 = arg2[4]
                        var_98_1 = (arg2[0x17]).b
                        var_9c_1 = arg2[0x16]
                        var_a0_1 = arg2[0x18]
                        int32_t var_a4_1 = 0xffffffff
                        int32_t var_a8_1 = 0xffffffff
                        int32_t var_ac_1 = 0xffffffff
                        int32_t var_b0_1 = 0xffffffff
                        var_b4_1 = eax_5
                        var_b8_1 = ebx_2
                        var_bc_1 = arg10
                        var_c0_1 = arg9
                        var_c4_1 = arg8
                        var_c8_1 = eax_7 + 0x74
                        var_cc_1 = *(eax_7 + 0x18) - *(eax_7 + 8) + arg2[0x15]
                        ecx_3 = eax_7 + 0xd0
                        edx_2 = edi_1
                        var_d0_1 = *(eax_7 + 0x14) - *(eax_7 + 4) + arg2[0x14]
                        var_d4_1 = edi_2 - 1
                        eax_27 = edx_2 - 1
                        var_d8_1 = eax_27
                        int32_t var_dc_1 = 0
                        int32_t var_e0_1 = 0
                        var_e4_1 = edi_2
                        goto label_4281e4

return 0
