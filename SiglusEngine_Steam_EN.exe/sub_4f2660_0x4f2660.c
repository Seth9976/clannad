// 函数: sub_4f2660
// 地址: 0x4f2660
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_2dc
int32_t eax
sub_4d1ba0(eax, 0x2d4, &var_2dc, 0)
int32_t eax_1 = data_1bfdd30
int32_t var_bc = 0xffffffff
int32_t var_7c = 0xff

if (eax_1 != 0x190 && eax_1 != 0x578)
    data_1b8b06c = 1
    return eax_1

int32_t eax_2 = data_1af4e84
int32_t var_1b8
int32_t var_1b4
int32_t eax_7
int32_t ecx_2
int32_t edx_1
int32_t ebx
int32_t esi_1
int32_t edi
int32_t var_1e4
int32_t var_1e0
int32_t var_1dc
int32_t var_1d8

if (eax_2 == 0)
    sub_4ef190(eax_2, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
    ebx = data_1b8a720
    sub_4efbc0(&var_1e0, &var_1e4, ebx, &var_1e0, &var_1dc, &var_1d8, &var_1b8, &var_1b4)
    eax_7 = data_1b8a734
    int32_t var_1e8_2 = ebx
    int32_t var_1bc_2 = eax_7
label_4f27ef:
    esi_1 = var_1e4
    edi = var_1e0
    ecx_2 = var_1dc
    edx_1 = var_1d8
else
    if (eax_2 != 1)
        int32_t var_1bc
        eax_7 = var_1bc
        int32_t var_1e8
        ebx = var_1e8
        goto label_4f27ef
    
    sub_4ef190(eax_2 - 1, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$", &data_1b8a720)
    bool cond:0_1 = data_1bfdd30 s< 0x3e8
    esi_1 = data_1b8a720
    edi = data_1b8a734
    ecx_2 = data_1b8a748
    edx_1 = data_1b8a75c
    ebx = data_1b8a770
    var_1b8 = data_1b8a784
    var_1b4 = data_1b8a798
    eax_7 = data_1b8a7ac
    var_1e4 = esi_1
    var_1e0 = edi
    var_1dc = ecx_2
    var_1d8 = edx_1
    int32_t var_1e8_1 = ebx
    int32_t var_1bc_1 = eax_7
    
    if (not(cond:0_1))
        if (ecx_2 == 0)
            ecx_2 = esi_1
        else
            ecx_2 = ecx_2 - 1 + esi_1
        
        var_1dc = ecx_2
        
        if (edx_1 == 0)
            edx_1 = edi
            var_1d8 = edx_1
        else
            edx_1 = edx_1 - 1 + edi
            var_1d8 = edx_1

if (data_1b8b06c != 0 || ebx u> 0xf || eax_7 u> 0xf)
    return eax_7

sub_4131d0(eax_7, edi, esi_1, ecx_2, edx_1, ebx, var_1b8, var_1b4, eax_7)
var_2dc = data_1bfdd30
return sub_42a6d0(&var_2dc)
