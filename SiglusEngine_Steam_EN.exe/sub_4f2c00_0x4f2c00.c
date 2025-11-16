// 函数: sub_4f2c00
// 地址: 0x4f2c00
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_314
int32_t eax
sub_4d1ba0(eax, 0x2d4, &var_314, 0)
int32_t edx = data_1bfdd30
int32_t ecx_1 = 0xff
int32_t var_f4 = 0xffffffff
int32_t var_b4 = 0xff
int32_t var_a4 = 0
int32_t result = edx - 0x19a

if (result u> 1)
    data_1b8b06c = 1
else
    int32_t eax_1 = data_1af4e84
    int32_t var_38_1
    int32_t result_3
    int32_t result_4
    int32_t var_2c_1
    int32_t var_28_1
    int32_t var_24_1
    int32_t var_20_1
    int32_t var_1c_1
    int32_t var_18_1
    int32_t var_14_1
    int32_t var_10_1
    int32_t var_c_1
    int32_t var_8_1
    int32_t ebx_1
    void* esi_1
    int32_t edi_1
    
    if (eax_1 == 0)
        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$$$$$$$$$", &data_1b8a720)
        ecx_1 = 0xff
    label_4f2d2e:
        int32_t result_6 = data_1b8a734
        result_3 = result_6
        int32_t result_7 = result_6
        int32_t eax_16 = data_1b8a748
        ebx_1 = data_1b8a720
        edi_1 = data_1b8a84c
        esi_1 = data_1b8a7e8
        var_2c_1 = eax_16
        int32_t var_2bc_1 = eax_16
        int32_t eax_17 = data_1b8a75c
        edx = data_1bfdd30
        var_24_1 = eax_17
        int32_t var_2b8_1 = eax_17
        int32_t eax_18 = data_1b8a770
        var_1c_1 = eax_18
        int32_t var_21c_1 = eax_18
        int32_t eax_19 = data_1b8a784
        var_14_1 = eax_19
        int32_t var_218_1 = eax_19
        int32_t eax_20 = data_1b8a798
        var_c_1 = eax_20
        int32_t var_20c_1 = eax_20
        int32_t eax_21 = data_1b8a7ac
        var_8_1 = eax_21
        int32_t var_208_1 = eax_21
        int32_t eax_22 = data_1b8a7c0
        var_20_1 = eax_22
        int32_t var_1fc_1 = eax_22
        int32_t eax_23 = data_1b8a7d4
        var_38_1 = eax_23
        int32_t var_1f8_1 = eax_23
        int32_t eax_24 = data_1b8a7fc
        var_18_1 = eax_24
        int32_t var_1f0_1 = eax_24
        int32_t eax_25 = data_1b8a810
        var_28_1 = eax_25
        int32_t var_1ec_1 = eax_25
        int32_t eax_26 = data_1b8a824
        var_10_1 = eax_26
        int32_t var_1d0_1 = eax_26
        result = data_1b8a838
        int32_t var_2c4_1 = ebx_1
        int32_t var_b4_1 = ecx_1
        int32_t var_1f4_1 = edi_1
        int32_t result_2 = result
        result_4 = result
        void* var_220_1 = esi_1
    else
        if (eax_1 == 1)
            sub_4ef190(eax_1 - 1, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$$$$$$$$$$", &data_1b8a720)
            ecx_1 = data_1b8a860
            goto label_4f2d2e
        
        int32_t result_5
        result_4 = result_5
        int32_t var_1d0
        var_10_1 = var_1d0
        int32_t var_1f4
        edi_1 = var_1f4
        void* var_220
        esi_1 = var_220
        int32_t var_2c4
        ebx_1 = var_2c4
        int32_t var_1ec
        var_28_1 = var_1ec
        int32_t var_1f0
        var_18_1 = var_1f0
        int32_t var_1f8
        var_38_1 = var_1f8
        int32_t var_1fc
        var_20_1 = var_1fc
        int32_t var_208
        var_8_1 = var_208
        int32_t var_20c
        var_c_1 = var_20c
        int32_t var_218
        var_14_1 = var_218
        int32_t var_21c
        var_1c_1 = var_21c
        int32_t var_2b8
        var_24_1 = var_2b8
        int32_t var_2bc
        var_2c_1 = var_2bc
        int32_t result_1
        result = result_1
        result_3 = result
    
    if (data_1b8b06c == 0 && esi_1 u<= 0xf && edi_1 u<= 0xf)
        var_314 = edx
        int32_t eax_27
        eax_27.b = edx == 0x19b
        int32_t var_a4_1 = eax_27
        sub_4130d0(eax_27, result_3, ebx_1, var_2c_1, var_24_1, var_1c_1, var_14_1, var_c_1, 
            var_8_1, var_20_1, var_38_1, esi_1, var_18_1, var_28_1, var_10_1, result_4, edi_1, 
            ecx_1, eax_27)
        return sub_42a6d0(&var_314)

return result
