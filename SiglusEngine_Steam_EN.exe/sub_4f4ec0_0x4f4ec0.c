// 函数: sub_4f4ec0
// 地址: 0x4f4ec0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_2dc
int32_t eax
sub_4d1ba0(eax, 0x2d4, &var_2dc, 0)
int32_t result = data_1bfdd30
int32_t var_bc = 0xffffffff
int32_t var_7c = 0xff
int32_t var_6c
bool cond:1_1

if (result s> 0x5dd)
    cond:1_1 = result s> 0x5de
    
    if (result == 0x5de)
        var_6c = 1
        cond:1_1 = result s> 0x5de
else if (result == 0x5dd || result == 0x1f5)
    var_6c = 0
    cond:1_1 = result s> 0x5de
else if (result == 0x1f6)
    var_6c = 1
    cond:1_1 = result s> 0x5de
else
    cond:1_1 = result s> 0x5de

if (cond:1_1)
    data_1b8b06c = 1
else if (result s>= 0x5dd)
label_4f4f48:
    int32_t eax_1 = data_1af4e84
    int32_t var_1b8
    int32_t var_1b4
    void* ecx_6
    int32_t edx_2
    void* ebx_1
    void* esi_1
    int32_t edi_1
    void* var_1e4
    int32_t var_1e0
    void* var_1dc
    int32_t var_1d8
    
    if (eax_1 == 0)
        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
        ebx_1 = data_1b8a720
        sub_4efbc0(&var_1e0, &var_1e4, ebx_1, &var_1e0, &var_1dc, &var_1d8, &var_1b8, &var_1b4)
        result = data_1b8a734
        void* var_1e8_2 = ebx_1
        int32_t result_3 = result
    label_4f50af:
        esi_1 = var_1e4
        edi_1 = var_1e0
        ecx_6 = var_1dc
        edx_2 = var_1d8
    else
        if (eax_1 != 1)
            int32_t result_1
            result = result_1
            void* var_1e8
            ebx_1 = var_1e8
            goto label_4f50af
        
        sub_4ef190(eax_1 - 1, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$", &data_1b8a720)
        esi_1 = data_1b8a720
        sub_4efbc0(&var_1e0, &var_1e4, esi_1, &var_1e0, &var_1dc, &var_1d8, &var_1b8, &var_1b4)
        bool cond:2_1 = data_1bfdd30 s< 0x3e8
        edi_1 = data_1b8a734
        ecx_6 = data_1b8a748
        edx_2 = data_1b8a75c
        ebx_1 = data_1b8a770
        var_1b8 = data_1b8a784
        var_1b4 = data_1b8a798
        result = data_1b8a7ac
        var_1e4 = esi_1
        var_1e0 = edi_1
        var_1dc = ecx_6
        var_1d8 = edx_2
        void* var_1e8_1 = ebx_1
        int32_t result_2 = result
        
        if (not(cond:2_1))
            if (ecx_6 == 0)
                ecx_6 = esi_1
            else
                ecx_6 = ecx_6 - 1 + esi_1
            
            var_1dc = ecx_6
            
            if (edx_2 == 0)
                edx_2 = edi_1
                var_1d8 = edx_2
            else
                edx_2 = edx_2 - 1 + edi_1
                var_1d8 = edx_2
    
    if (data_1b8b06c == 0 && ebx_1 u<= 0xf && result u<= 0xf)
        sub_412ec0(result, edi_1, esi_1, ecx_6, edx_2, ebx_1, var_1b8, var_1b4, result, var_6c)
        var_2dc = data_1bfdd30
        return sub_42a6d0(&var_2dc)
else
    result -= 0x1f5
    
    if (result u<= 1)
        goto label_4f4f48
    
    data_1b8b06c = 1

return result
