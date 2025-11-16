// 函数: sub_4f3fd0
// 地址: 0x4f3fd0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_2ec
int32_t eax
sub_4d1ba0(eax, 0x2d4, &var_2ec, 0)
int32_t eax_1 = data_1bfdd30
int32_t var_cc = 0xffffffff
int32_t var_8c = 0xff

if (eax_1 != 0x196 && eax_1 != 0x57e)
    data_1b8b06c = 1
    return eax_1

sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$$$", &data_1b8a720)
int32_t edi = data_1b8a798
int32_t esi_1 = data_1b8a784
int32_t ecx_3
int32_t edx_2

if (data_1bfdd30 s< 0x3e8)
    edx_2 = data_1b8a7c0
    ecx_3 = data_1b8a7ac
else
    int32_t eax_2 = data_1b8a7ac
    
    if (eax_2 == 0)
        ecx_3 = esi_1
    else
        ecx_3 = esi_1 - 1 + eax_2
    
    int32_t eax_3 = data_1b8a7c0
    data_1b8a7ac = ecx_3
    
    if (eax_3 == 0)
        edx_2 = edi
        data_1b8a7c0 = edx_2
    else
        edx_2 = edi - 1 + eax_3
        data_1b8a7c0 = edx_2

if (esi_1 s> ecx_3)
    int32_t eax_4 = esi_1
    esi_1 = ecx_3
    ecx_3 = eax_4
    data_1b8a784 = esi_1
    data_1b8a7ac = ecx_3

if (edi s> edx_2)
    int32_t eax_5 = edi
    edi = edx_2
    edx_2 = eax_5
    data_1b8a798 = edi
    data_1b8a7c0 = edx_2

int32_t var_1c4 = edi
int32_t eax_8 = data_1b8a720 - esi_1 + ecx_3
int32_t var_1c0 = ecx_3
int32_t var_1bc = edx_2
LRESULT eax_11 = data_1b8a748 - esi_1 + ecx_3
LRESULT var_1ec = eax_11
int32_t esi_4 = data_1b8a734 - edi + edx_2
int32_t esi_7 = data_1b8a75c - edi + edx_2
int32_t var_1f4 = data_1b8a748
int32_t var_1f0 = data_1b8a75c
int32_t var_1e8 = esi_7
int32_t var_1f8 = data_1b8a770
int32_t var_1c8 = data_1b8a784

if (data_1b8b06c != 0 || data_1b8a770 u> 0xf)
    return eax_11

int32_t esi_13 = data_1b8a720
data_1b8a5b4 = eax_11
data_1b8a5a0 = esi_13
int32_t esi_14 = data_1b8a734
data_1b8a5bc = esi_7
int32_t eax_13 = data_1b8a770
data_1b8a5a8 = esi_14
data_1b8a5c0 = eax_13
int32_t eax_14 = data_1b8a7d4
data_1b8a5d4 = ecx_3
data_1b8a5d8 = ecx_3
data_1b8a5b0 = eax_8

if (eax_14 s< 0)
    eax_14 = 0

data_1b8a5b8 = esi_4
data_1b8a5a4 = data_1b8a748
int32_t esi_18 = data_1b8a75c
data_1b8a5e8 = eax_14
int32_t eax_15 = data_131310c
data_1b8a5ac = esi_18
int32_t esi_19 = data_1b8a784
data_1b8a5ec = eax_15
int32_t eax_16 = data_1bfdd30
data_7192a0 = 0
data_7192e0 = 0
int32_t var_1cc_1 = 0
data_1b8a5c4 = esi_19
data_1b8a5cc = edi
data_1b8a5dc = edx_2
data_1b8a5c8 = esi_19
data_1b8a5d0 = edi
data_1b8a5e0 = edx_2
data_1b8a5e4 = 0
data_71929c = 0x32
var_2ec = eax_16
return sub_42a6d0(&var_2ec)
