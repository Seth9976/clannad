// 函数: sub_4f2ea0
// 地址: 0x4f2ea0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_2dc
int32_t eax
sub_4d1ba0(eax, 0x2d4, &var_2dc, 0)
int32_t eax_1 = data_1bfdd30
int32_t var_bc = 0xffffffff
int32_t var_7c = 0xff
int32_t var_6c = 0

if (eax_1 != 0x192 && eax_1 != 0x57a)
    data_1b8b06c = 1
    return eax_1

sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$$$$$$$", &data_1b8a720)
LRESULT eax_11
int32_t ecx_2
int32_t edx_1
int32_t esi_1

if (data_1bfdd30 s< 0x3e8)
    eax_11 = data_1b8a810
    ecx_2 = data_1b8a7fc
    edx_1 = data_1b8a7ac
    esi_1 = data_1b8a798
else
    int32_t eax_2 = data_1b8a748
    int32_t edi_1 = data_1b8a720
    
    if (eax_2 != 0)
        edi_1 = edi_1 - 1 + eax_2
    
    int32_t eax_3 = data_1b8a75c
    data_1b8a748 = edi_1
    int32_t eax_5
    
    if (eax_3 == 0)
        eax_5 = data_1b8a734
    else
        eax_5 = eax_3 - 1 + data_1b8a734
    
    esi_1 = data_1b8a770
    data_1b8a75c = eax_5
    int32_t eax_6 = data_1b8a798
    
    if (eax_6 != 0)
        esi_1 = esi_1 - 1 + eax_6
    
    int32_t eax_7 = data_1b8a7ac
    edx_1 = data_1b8a784
    data_1b8a798 = esi_1
    
    if (eax_7 != 0)
        edx_1 = edx_1 - 1 + eax_7
    
    int32_t eax_8 = data_1b8a7fc
    ecx_2 = data_1b8a7d4
    data_1b8a7ac = edx_1
    
    if (eax_8 != 0)
        ecx_2 = ecx_2 - 1 + eax_8
    
    int32_t eax_9 = data_1b8a810
    data_1b8a7fc = ecx_2
    
    if (eax_9 == 0)
        eax_11 = data_1b8a7e8
        data_1b8a810 = eax_11
    else
        eax_11 = eax_9 - 1 + data_1b8a7e8
        data_1b8a810 = eax_11

int32_t var_1e4 = data_1b8a770
int32_t var_1e0 = data_1b8a784
int32_t var_1e8 = data_1b8a7c0
int32_t var_1b8 = data_1b8a7d4
int32_t var_1dc = esi_1
int32_t var_1d8 = edx_1
int32_t var_1b4 = data_1b8a7e8
int32_t var_1b0 = ecx_2
LRESULT var_1ac = eax_11

if (data_1b8b06c != 0 || data_1b8a7c0 u> 0xf)
    return eax_11

data_1b8a680 = data_1b8a720
int32_t edi_9 = data_1b8a734
data_1b8a6bc = eax_11
data_1b8a6c0 = eax_11
int32_t eax_12 = data_1b8a824
data_1b8a6b4 = ecx_2
data_1b8a6b8 = ecx_2
data_1b8a688 = edi_9

if (eax_12 s< 0)
    eax_12 = 0

data_1b8a690 = data_1b8a748
data_1b8a698 = data_1b8a75c
int32_t edi_12 = data_1b8a770
data_1b8a69c = edx_1
int32_t edx_3 = data_1b8a7c0
data_1b8a6c8 = eax_12
int32_t eax_13 = data_131310c
data_1b8a684 = edi_12
int32_t edi_13 = data_1b8a784
data_1b8a694 = esi_1
int32_t esi_3 = data_1b8a7e8
data_1b8a6a0 = edx_3
int32_t edx_4 = data_1b8a7d4
data_1b8a6cc = eax_13
int32_t eax_14 = data_1bfdd30
data_7192a0 = 0
data_7192e0 = 0
int32_t var_1bc_1 = 0
int32_t var_6c_1 = 0
data_1b8a68c = edi_13
data_1b8a6a4 = edx_4
data_1b8a6ac = esi_3
data_1b8a6a8 = edx_4
data_1b8a6b0 = esi_3
data_1b8a6c4 = 0
data_71929c = 0x2e
var_2dc = eax_14
int32_t var_7c_1 = 0xff
return sub_42a6d0(&var_2dc)
