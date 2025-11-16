// 函数: sub_4f2860
// 地址: 0x4f2860
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_2f4
int32_t eax
int32_t eax_1 = sub_4d1ba0(eax, 0x2d4, &var_2f4, 0)
int32_t ebx = data_1bfdd30
int32_t var_d4 = 0xffffffff
int32_t var_94 = 0xff
int32_t var_84 = 0
bool cond:1_1

if (ebx s> 0x579)
    cond:1_1 = ebx == 0x581
label_4f28c2:
    
    if (not(cond:1_1))
        data_1b8b06c = 1
        return eax_1
else if (ebx != 0x579 && ebx != 0x191)
    eax_1 = ebx - 0x199
    cond:1_1 = ebx == 0x199
    goto label_4f28c2
int32_t eax_4 = data_1af4e84
int32_t var_18
int32_t var_14
int32_t var_10
void* var_c
int32_t var_8
int32_t eax_16
void* ecx_2
int32_t edx_1
int32_t ebx_1
int32_t esi_1
int32_t edi
int32_t var_1c4_2

if (eax_4 == 0)
    sub_4ef190(eax_4, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$$$", &data_1b8a720)
    void* ebx_3 = data_1b8a770
    int32_t ecx_7 = data_1b8a734
    eax_16 = data_1b8a720
    edx_1 = data_1b8a75c
    esi_1 = data_1b8a7ac
    edi = data_1b8a7c0
    var_c = ebx_3
    void* var_200_2 = ebx_3
    int32_t ebx_4 = data_1b8a784
    var_18 = ebx_4
    int32_t var_1d0_2 = ebx_4
    int32_t ebx_5 = data_1b8a798
    var_10 = ebx_5
    int32_t var_1cc_2 = ebx_5
    int32_t ebx_6 = data_1b8a7d4
    var_8 = ebx_6
    int32_t var_1d4_2 = ebx_6
    ebx_1 = data_1bfdd30
    var_14 = ecx_7
    int32_t var_1f8_2 = ecx_7
    ecx_2 = data_1b8a748
    int32_t var_1fc_2 = eax_16
    void* var_1f4_3 = ecx_2
    int32_t var_1f0_3 = edx_1
    int32_t var_1c8_3 = esi_1
    int32_t var_1c4_3 = edi
    
    if (ebx_1 s>= 0x3e8)
        if (ecx_2 == 0)
            ecx_2 = eax_16
        else
            ecx_2 = ecx_2 - 1 + eax_16
        
        void* var_1f4_4 = ecx_2
        
        if (edx_1 == 0)
            edx_1 = data_1b8a734
        else
            edx_1 += data_1b8a734 - 1
            ebx_1 = data_1bfdd30
        
        int32_t var_1f0_4 = edx_1
        
        if (esi_1 == 0)
            esi_1 = data_1b8a784
        else
            esi_1 += data_1b8a784 - 1
            ebx_1 = data_1bfdd30
        
        int32_t var_1c8_4 = esi_1
        
        if (edi == 0)
            edi = data_1b8a798
            var_1c4_2 = edi
        else
            edi += data_1b8a798 - 1
            ebx_1 = data_1bfdd30
            var_1c4_2 = edi
else if (eax_4 != 1)
    int32_t var_1c4
    edi = var_1c4
    int32_t var_1c8
    esi_1 = var_1c8
    int32_t var_1f0
    edx_1 = var_1f0
    void* var_1f4
    ecx_2 = var_1f4
    int32_t var_1cc
    var_10 = var_1cc
    int32_t var_1d0
    var_18 = var_1d0
    int32_t var_1d4
    var_8 = var_1d4
    int32_t var_1f8
    var_14 = var_1f8
    int32_t var_1fc
    eax_16 = var_1fc
    void* var_200
    var_c = var_200
    ebx_1 = data_1bfdd30
else
    sub_4ef190(eax_4 - 1, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$$$$", &data_1b8a720)
    ebx_1 = data_1bfdd30
    ecx_2 = data_1b8a748
    edx_1 = data_1b8a75c
    esi_1 = data_1b8a7ac
    edi = data_1b8a7c0
    int32_t var_1fc_1 = data_1b8a720
    int32_t eax_8 = data_1b8a734
    var_14 = eax_8
    int32_t var_1f8_1 = eax_8
    void* eax_9 = data_1b8a770
    var_c = eax_9
    void* var_200_1 = eax_9
    int32_t eax_10 = data_1b8a784
    var_18 = eax_10
    int32_t var_1d0_1 = eax_10
    int32_t eax_11 = data_1b8a798
    var_10 = eax_11
    int32_t var_1cc_1 = eax_11
    int32_t eax_12 = data_1b8a7d4
    var_8 = eax_12
    int32_t var_1d4_1 = eax_12
    void* var_1f4_1 = ecx_2
    int32_t var_1f0_1 = edx_1
    int32_t var_1c8_1 = esi_1
    int32_t var_1c4_1 = edi
    var_94 = data_1b8a7e8
    
    if (ebx_1 s< 0x3e8)
        eax_16 = data_1b8a720
    else
        if (ecx_2 == 0)
            ecx_2 = data_1b8a720
        else
            ecx_2 = ecx_2 - 1 + data_1b8a720
        
        void* var_1f4_2 = ecx_2
        
        if (edx_1 == 0)
            edx_1 = data_1b8a734
        else
            edx_1 = edx_1 - 1 + data_1b8a734
        
        int32_t var_1f0_2 = edx_1
        
        if (esi_1 == 0)
            esi_1 = data_1b8a784
        else
            esi_1 = esi_1 - 1 + data_1b8a784
        
        int32_t var_1c8_2 = esi_1
        
        if (edi == 0)
            eax_16 = data_1b8a720
            edi = data_1b8a798
            var_1c4_2 = edi
        else
            edi += data_1b8a798 - 1
            eax_16 = data_1b8a720
            var_1c4_2 = edi

if (data_1b8b06c != 0 || var_c u> 0xf || var_8 u> 0xf)
    return eax_16

if (ebx_1 == 0x199 || ebx_1 == 0x581)
    var_84 = 1

var_2f4 = ebx_1
sub_413480(eax_16, var_14, eax_16, ecx_2, edx_1, var_c, var_18, var_10, esi_1, edi, var_8, var_94, 
    var_84)
return sub_42a6d0(&var_2f4)
