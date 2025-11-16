// 函数: sub_4f9650
// 地址: 0x4f9650
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t ecx = data_1bfdd30
int32_t ebx_2 = ecx s/ 0x3e8
int32_t ecx_1 = ecx s% 0x3e8
int32_t result_7 = ecx_1 s/ 0x64
int32_t ecx_2 = ecx_1 + result_7 * 0xffffff9c
int32_t result_3 = ecx_2 s/ 0xa
int32_t result = result_3 * 0xa
int32_t ecx_3 = ecx_2 s% 0xa
int32_t result_2
int32_t result_6

if (ebx_2 == 2)
    result_6 = 0
else if (ebx_2 != 3)
    result_6 = result_2
    data_1b8b06c = 1
else
    result_6 = 1

int32_t result_1
int32_t result_4
int32_t result_5

if (result_7 == 1)
    result_4 = 0
    result_5 = 0
    result_1 = result_7
else if (result_7 == 2)
    result_4 = 1
    result_5 = 1
    result_1 = 0
else if (result_7 != 3)
    result_4 = result_2
    result_5 = result_2
    result = result_2
    data_1b8b06c = 1
    result_1 = result
else
    result_4 = 1
    result_5 = 0
    result_1 = 1

int32_t var_dc_1
int32_t var_d8_1
int32_t esi_4

if (result_3 == 0)
    esi_4 = ecx_3 s/ 3
    result = esi_4 * 3
    int32_t ecx_4 = ecx_3 s% 3
    
    if (ecx_3 == result)
        var_d8_1 = 1
    label_4f9878:
        var_dc_1 = 0
        goto label_4f9882
    
    if (ecx_4 != 1)
        if (ecx_4 == 2)
            var_d8_1 = ecx_4
            goto label_4f9878
        
        data_1b8b06c = 1
    else
        var_d8_1 = ecx_4
        var_dc_1 = ecx_4
    label_4f9882:
        
        if (data_1b8b06c == 0)
            int32_t var_f8_1 = 0
            
            if (result_3 == 0)
                int32_t* var_158_3 = &data_1b8a720
                sub_4ef190(result, arg2 + 0x20, *(arg2 + 0x20), "$$$@", &data_1b8a720)
            else if (result_3 == 1)
                int32_t* var_158_2 = &data_1b8a720
                sub_4ef190(result, arg2 + 0x20, *(arg2 + 0x20), "$$$$$@", &data_1b8a720)
            else if (result_3 == 2)
                int32_t* var_158_1 = &data_1b8a720
                sub_4ef190(result, arg2 + 0x20, *(arg2 + 0x20), "$$$$$S$$$$$", &data_1b8a720)
            
            int32_t edi_5 = data_1b8a720
            int32_t ecx_13
            
            if (edi_5 s< 0 || edi_5 s>= 8)
                ecx_13 = 1
                var_f8_1 = 1
            else
                if (edi_5 u<= 7 && result_6 u<= 1)
                    void* eax_13
                    int32_t ecx_10
                    eax_13, ecx_10 = sub_49c6b0(edi_5, result_6)
                    int32_t var_158_4 = 1
                    sub_49bbf0(eax_13, result_6, edi_5, result_6, ecx_10)
                    sub_49a750(edi_5, result_6)
                    int32_t eax_14 = result_6 + (edi_5 << 1)
                    edi_5 = data_1b8a720
                    (&data_20f0094)[eax_14] += 1
                
                ecx_13 = 0
            
            result = result_3
            
            if (result == 0 || result == 1)
                result = data_1b8c884
                int32_t var_d0_1 = 0
                char* var_cc_1 = nullptr
                int32_t var_bc_1 = 0
                int32_t var_b8_1 = 0
                int32_t var_a8_1 = 0
                int32_t var_a4_1 = 0
                int32_t var_94_1 = 0
                int32_t var_90_1 = 0
                int32_t var_80_1 = 0
                int32_t var_7c_1 = 0
                int32_t var_6c_1 = 0
                int32_t var_68_1 = 0
                int32_t var_58_1 = 0
                int32_t var_54_1 = 0
                int32_t var_44_1 = 0
                int32_t var_40_1 = 0
                int32_t var_30_1 = 0
                int32_t var_2c_1 = 0
                int32_t var_1c_1 = 0
                int32_t var_18_1 = 0
                int32_t var_f4_1 = 0
                
                if (result s> 0)
                    void* ecx_16 = arg2 + 0x20
                    void* var_e8 = ecx_16
                    void* edi_6 = var_e8
                    int32_t ecx_22
                    
                    do
                        void var_d4
                        sub_4ef190(&var_d4, ecx_16, *ecx_16, "S$", &var_d4)
                        
                        if (var_f8_1 == 0)
                            int32_t eax_16 = data_1b8a720
                            char* ecx_18 = var_cc_1
                            int32_t eax_18 = esi_4
                            int32_t eax_19
                            int32_t var_15c_4
                            
                            if (esi_4 == 0)
                                int32_t var_158_8 = 1
                                var_15c_4 = 1
                            label_4f9ab3:
                                eax_19 = sub_499a90(eax_18, ecx_18, 0xffffffff, var_15c_4, 1)
                                ecx_18 = var_cc_1
                                edi_6 = eax_19
                            else
                                int32_t temp9_1 = eax_18
                                eax_18 -= 1
                                
                                if (temp9_1 == 1)
                                    int32_t var_158_7 = 1
                                    var_15c_4 = 0
                                    goto label_4f9ab3
                                
                                eax_19 = eax_18 - 1
                                
                                if (eax_18 == 1)
                                    edi_6 = 0xffffffff
                            int32_t var_c0
                            sub_49ac20(eax_19, result_6, eax_16, var_f4_1, edi_6, ecx_18, var_c0)
                        
                        sub_4eef40(&var_d4, 0xa)
                        result = data_1b8c884
                        ecx_22 = var_f4_1 + 1
                        var_f4_1 = ecx_22
                        ecx_16 = var_e8
                    while (ecx_22 s< result)
                
                *(arg2 + 0x20) += 1
                edi_5 = data_1b8a720
                goto label_4f9b20
            
            if (result != 2)
                result = data_1b8c884
            label_4f9b20:
                
                if (var_f8_1 == 0)
                    goto label_4f9b36
            else if (ecx_13 == 0)
                sub_4f92a0(result, result_6, edi_5, ecx_13, esi_4, data_1b8a78c, data_1b8a7e8)
                edi_5 = data_1b8a720
                result = data_1b8c884
            label_4f9b36:
                int32_t var_178_1
                int32_t var_174_1
                int32_t var_170_1
                int32_t var_16c_1
                int32_t var_168_1
                int32_t var_164_3
                
                if (result_3 == 0)
                    int32_t var_158_12 = 0
                    __builtin_memset(&var_178_1, 0, 0x18)
                    result = sub_49ac90(result, result_6, edi_5, var_d8_1, result_4, result_5, 
                        result_1, data_1b8a734, data_1b8a748, var_178_1, var_174_1, var_170_1, 
                        var_16c_1, var_168_1, var_164_3, result, result_3)
                    edi_5 = data_1b8a720
                else if (result_3 == 1)
                    int32_t var_158_11 = 0
                    var_174_1 = data_1b8a770
                    var_178_1 = data_1b8a75c
                    result = sub_49ac90(result, result_6, edi_5, var_d8_1, result_4, result_5, 
                        result_1, data_1b8a734, data_1b8a748, var_178_1, var_174_1, 0, 0, 0, 0, 
                        result, result_3 - 1)
                    edi_5 = data_1b8a720
                else if (result_3 == 2)
                    int32_t var_158_10 = data_1b8a7e8
                    var_164_3 = data_1b8a7d4
                    var_168_1 = data_1b8a7c0
                    var_16c_1 = data_1b8a7ac
                    var_170_1 = data_1b8a798
                    var_174_1 = data_1b8a770
                    var_178_1 = data_1b8a75c
                    result = sub_49ac90(result, result_6, edi_5, var_d8_1, result_4, result_5, 
                        result_1, data_1b8a734, data_1b8a748, var_178_1, var_174_1, var_170_1, 
                        var_16c_1, var_168_1, var_164_3, 1, result_3 - 2)
                    edi_5 = data_1b8a720
                
                if (var_dc_1 != 0)
                    int32_t var_144 = edi_5
                    int32_t result_8 = result_6
                    data_71929c = 0x48
                    sub_4d1c30(result, &var_144, &data_7192a0, 0x40)
                    data_7192e0 = 0
                    sub_5f02dd(eax_1 ^ &__saved_ebp)
                    return result
else if (result_3 == 1)
    esi_4 = ecx_3 s/ 3
    result = esi_4 * 3
    int32_t ecx_5 = ecx_3 s% 3
    
    if (ecx_3 == result)
        var_d8_1 = 3
        goto label_4f9878
    
    if (ecx_5 == 1)
        var_d8_1 = 3
        var_dc_1 = ecx_5
        goto label_4f9882
    
    if (ecx_5 == 2)
        var_d8_1 = 4
        goto label_4f9878
    
    data_1b8b06c = 1
else if (result_3 != 2)
    data_1b8b06c = 1
else
    esi_4 = ecx_3 s/ 3
    result = esi_4 * 3
    int32_t ecx_6 = ecx_3 s% 3
    
    if (ecx_3 == result)
        var_d8_1 = 5
        goto label_4f9878
    
    if (ecx_6 == 1)
        var_d8_1 = 5
        var_dc_1 = ecx_6
        goto label_4f9882
    
    if (ecx_6 == 2)
        var_d8_1 = 6
        goto label_4f9878
    
    data_1b8b06c = 1
sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
