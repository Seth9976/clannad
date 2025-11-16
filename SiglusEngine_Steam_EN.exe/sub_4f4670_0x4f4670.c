// 函数: sub_4f4670
// 地址: 0x4f4670
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* const __return_addr_1 = __return_addr
int32_t var_308
int32_t eax
sub_4d1ba0(eax, 0x2d4, &var_308, 0)
int32_t eax_1 = data_1bfdd30
int32_t var_e8 = 0xffffffff
int32_t var_a8 = 0xff

if (eax_1 != 0x198 && eax_1 != 0x580)
    data_1b8b06c = 1
    return eax_1

sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$$$$", &data_1b8a720)
int32_t ecx_2 = data_1b8a734
int32_t edi = data_1b8a720
int32_t edx_2
int32_t esi_2

if (data_1bfdd30 s< 0x3e8)
    esi_2 = data_1b8a75c
    edx_2 = data_1b8a748
else
    int32_t eax_2 = data_1b8a748
    
    if (eax_2 == 0)
        edx_2 = edi
    else
        edx_2 = edi - 1 + eax_2
    
    int32_t eax_3 = data_1b8a75c
    data_1b8a748 = edx_2
    
    if (eax_3 == 0)
        esi_2 = ecx_2
    else
        esi_2 = ecx_2 - 1 + eax_3
    
    int32_t eax_4 = data_1b8a7ac
    int32_t eax_5 = data_1b8a784
    data_1b8a75c = esi_2
    
    if (eax_4 != 0)
        eax_5 += eax_4 - 1
        edi = data_1b8a720
    
    data_1b8a7ac = eax_5
    int32_t eax_6 = data_1b8a7c0
    int32_t eax_7 = data_1b8a798
    
    if (eax_6 == 0)
        data_1b8a7c0 = eax_7
    else
        ecx_2 = data_1b8a734
        data_1b8a7c0 = eax_7 + eax_6 - 1

if (edi s> edx_2)
    int32_t edi_3 = edx_2
    edx_2 = edi
    data_1b8a720 = edi_3
    data_1b8a748 = edx_2

if (ecx_2 s> esi_2)
    int32_t eax_10 = ecx_2
    ecx_2 = esi_2
    esi_2 = eax_10
    data_1b8a734 = ecx_2
    data_1b8a75c = esi_2

int32_t eax_11 = data_1b8a784

if (eax_11 s> data_1b8a7ac)
    data_1b8a784 = data_1b8a7ac
    data_1b8a7ac = eax_11

int32_t eax_12 = data_1b8a798
int32_t edi_5 = data_1b8a720

if (eax_12 s> data_1b8a7c0)
    data_1b8a798 = data_1b8a7c0
    edi_5 = data_1b8a720
    data_1b8a7c0 = eax_12
    eax_12 = data_1b8a798

int32_t edi_12 = data_1b8a7ac - data_1b8a784 + 1
int32_t eax_13 = data_1b8a7d4
int32_t edi_15 = data_1b8a7c0 - eax_12 + 1
int32_t edi_16 = data_1b8a720
int32_t eax_54
int32_t var_1e4_1
int32_t eax_36

if (eax_13 == 0)
    int32_t var_210_4 = edi_16
    int32_t var_208_4 = edi_12 - 1 + edi_16
    int32_t var_20c_5 = esi_2 - (esi_2 - ecx_2 + 1) + 1
    
    if (edi_15 s<= esi_2 - ecx_2 + 1)
        eax_36 = edi_15 - 1 + esi_2 - (esi_2 - ecx_2 + 1) + 1
    label_4f498e:
        int32_t var_204_3 = eax_36
        goto label_4f4994
    
    int32_t var_204_2 = esi_2
label_4f4994:
    var_1e4_1 = data_1b8a784
    eax_54 = data_1b8a798
else if (eax_13 == 1)
    int32_t var_210_3 = edi_16
    int32_t var_208_3 = edi_12 - 1 + edi_16
    int32_t var_204_1 = esi_2
    
    if (edi_15 s<= esi_2 - ecx_2 + 1)
        int32_t var_20c_4 = esi_2 - edi_15 + 1
    else
        int32_t var_20c_3 = ecx_2
    
    int32_t var_1e4 = data_1b8a784
    
    if (edi_15 s<= esi_2 - ecx_2 + 1)
        eax_54 = data_1b8a798
    else
        eax_54 = data_1b8a7c0 - (esi_2 - ecx_2 + 1) + 1
else
    if (eax_13 == 2)
        int32_t var_210_2 = edx_2 - (edx_2 - edi_5 + 1) + 1
        
        if (edi_12 s<= edx_2 - edi_5 + 1)
            int32_t var_20c_2 = ecx_2
            int32_t var_208_2 = edi_12 - 1 + edx_2 - (edx_2 - edi_5 + 1) + 1
            eax_36 = edi_15 - 1 + ecx_2
        else
            int32_t var_208_1 = edx_2
            int32_t var_20c_1 = ecx_2
            eax_36 = edi_15 - 1 + ecx_2
        
        goto label_4f498e
    
    int32_t eax_19 = edx_2 - edi_5 + edi_16
    int32_t var_208 = eax_19
    
    if (edi_12 s<= edx_2 - edi_5 + 1)
        int32_t var_210_1 = eax_19 - edi_12 + 1
    else
        int32_t var_210 = edi_16
    
    int32_t var_20c = ecx_2
    int32_t var_204 = edi_15 - 1 + ecx_2
    
    if (edi_12 s<= edx_2 - edi_5 + 1)
        goto label_4f4994
    
    var_1e4_1 = data_1b8a7ac - (edx_2 - edi_5 + 1) + 1
    eax_54 = data_1b8a798
int32_t var_1e0 = eax_54
int32_t var_214 = data_1b8a770
LRESULT eax_64 = data_1b8a798

if (data_1b8b06c != 0 || data_1b8a770 u> 0xf)
    return eax_64

int32_t edi_17 = data_1b8a7d4
data_1b1bd3c = eax_64
int32_t eax_65 = data_1b8a7ac
data_1b1bd28 = ecx_2
int32_t ecx_5 = data_1b8a770
data_1b1bd40 = eax_65
int32_t eax_66 = data_1b8a7c0
data_1b1bd34 = ecx_5
int32_t ecx_6 = data_1b8a784
data_1b1bd44 = eax_66
int32_t eax_67 = data_1b8a7e8
data_1b1bd38 = ecx_6
data_1b1bd54 = edi_17
int32_t edi_18 = data_1b8a720

if (eax_67 s< 0)
    eax_67 = 0

data_7192a0 = 0
data_1b1bd4c = eax_67
data_1b1bd50 = data_131310c
int32_t eax_69 = data_1bfdd30
data_7192e0 = 0
var_308 = eax_69
int32_t eax_70 = data_1b8a7d4
int32_t var_1e8_1 = 0
data_1b1bd24 = edi_18
data_1b1bd2c = edx_2
data_1b1bd30 = esi_2
data_1b1bd48 = 0
data_71929c = 0x34
int32_t var_f0_1 = eax_70
return sub_42a6d0(&var_308)
