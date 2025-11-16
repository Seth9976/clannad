// 函数: sub_4f4250
// 地址: 0x4f4250
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_2ec
int32_t eax
sub_4d1ba0(eax, 0x2d4, &var_2ec, 0)
int32_t eax_1 = data_1bfdd30
int32_t var_cc = 0xffffffff
int32_t var_8c = 0xff

if (eax_1 != 0x197 && eax_1 != 0x57f)
    data_1b8b06c = 1
    return eax_1

sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$$$$", &data_1b8a720)
int32_t ecx_2 = data_1b8a798
void* edx_1 = data_1b8a784
int32_t esi_1 = data_1b8a734
void* edi_2

if (data_1bfdd30 s< 0x3e8)
    edi_2 = data_1b8a7ac
else
    int32_t edi = data_1b8a748
    int32_t eax_2 = data_1b8a720
    
    if (edi != 0)
        eax_2 = eax_2 - 1 + edi
    
    data_1b8a748 = eax_2
    int32_t eax_4 = data_1b8a75c
    
    if (eax_4 == 0)
        data_1b8a75c = esi_1
    else
        data_1b8a75c = eax_4 - 1 + esi_1
    
    int32_t eax_7 = data_1b8a7ac
    
    if (eax_7 == 0)
        edi_2 = edx_1
    else
        edi_2 = edx_1 - 1 + eax_7
    
    int32_t eax_8 = data_1b8a7c0
    data_1b8a7ac = edi_2
    
    if (eax_8 == 0)
        data_1b8a7c0 = ecx_2
    else
        data_1b8a7c0 = eax_8 - 1 + ecx_2

int32_t eax_11 = data_1b8a720

if (eax_11 s> data_1b8a748)
    data_1b8a720 = data_1b8a748
    esi_1 = data_1b8a734
    data_1b8a748 = eax_11

if (esi_1 s> data_1b8a75c)
    int32_t eax_12 = esi_1
    esi_1 = data_1b8a75c
    data_1b8a734 = esi_1
    data_1b8a75c = eax_12

if (edx_1 s> edi_2)
    void* eax_13 = edx_1
    edx_1 = edi_2
    edi_2 = eax_13
    data_1b8a784 = edx_1
    data_1b8a7ac = edi_2

if (ecx_2 s> data_1b8a7c0)
    int32_t eax_14 = ecx_2
    ecx_2 = data_1b8a7c0
    data_1b8a798 = ecx_2
    data_1b8a7c0 = eax_14

int32_t eax_17 = data_1b8a748 - data_1b8a720 + 1
int32_t eax_20 = data_1b8a75c - esi_1 + 1
int32_t eax_26 = data_1b8a7c0 - ecx_2 + 1
int32_t eax_27 = data_1b8a7d4
int32_t ecx_16
int32_t var_1c4_1
int32_t eax_48

if (eax_27 == 0)
    void* eax_57 = data_1b8a720
    void* var_1f4_4 = eax_57
    void* var_1ec_3 = eax_57 + edi_2 - edx_1
    eax_48 = data_1b8a75c
    int32_t var_1f0_4 = eax_48 - eax_20 + 1
    
    if (eax_26 s<= eax_20)
        eax_48 = eax_48 - eax_20 + eax_26
    
label_4f4535:
    int32_t var_1e8_2 = eax_48
label_4f453b:
    void* var_1c8_2 = edx_1
    ecx_16 = data_1b8a798
    var_1c4_1 = ecx_16
else if (eax_27 == 1)
    void* eax_49 = data_1b8a720
    void* var_1f4_3 = eax_49
    int32_t ecx_12 = eax_20
    void* var_1ec_2 = eax_49 + edi_2 - edx_1
    int32_t eax_52 = ecx_12 - 1 + esi_1
    int32_t var_1e8_1 = eax_52
    
    if (eax_26 s<= ecx_12)
        int32_t var_1f0_3 = eax_52 - eax_26 + 1
        ecx_12 = eax_20
    else
        int32_t var_1f0_2 = esi_1
    
    void* var_1c8_1 = edx_1
    ecx_16 = data_1b8a798
    
    if (eax_26 s<= ecx_12)
        var_1c4_1 = ecx_16
    else
        int32_t var_1c4 = data_1b8a7c0 - eax_20 + 1
else
    if (eax_27 == 2)
        int32_t ecx_9 = data_1b8a748 - eax_17 + 1
        void* eax_43 = data_1b8a748
        int32_t var_1f4_2 = ecx_9
        
        if (edi_2 - edx_1 + 1 s<= eax_17)
            eax_43 = edi_2 - edx_1 + ecx_9
        
        void* var_1ec_1 = eax_43
        int32_t var_1f0_1 = esi_1
        eax_48 = eax_26 - 1 + esi_1
        goto label_4f4535
    
    int32_t ecx_4 = eax_17 + data_1b8a720 - 1
    int32_t var_1ec = ecx_4
    
    if (edi_2 - edx_1 + 1 s<= eax_17)
        void* var_1f4_1 = ecx_4 - (edi_2 - edx_1 + 1) + 1
    else
        int32_t var_1f4 = data_1b8a720
    
    int32_t var_1f0 = esi_1
    int32_t var_1e8 = eax_26 - 1 + esi_1
    
    if (edi_2 - edx_1 + 1 s<= eax_17)
        goto label_4f453b
    
    void* var_1c8 = edi_2 - eax_17 + 1
    ecx_16 = data_1b8a798
    var_1c4_1 = ecx_16
int32_t var_1f8 = data_1b8a770
LRESULT eax_62 = data_1b8a7c0
void* var_19c = edx_1
int32_t var_198 = ecx_16
void* var_194 = edi_2
LRESULT var_190 = eax_62

if (data_1b8b06c != 0 || data_1b8a770 u> 0xf)
    return eax_62

int32_t var_2f8_1 = data_1b8a7c0
data_1b1bd88 = data_1b8a7d4
data_1b1bd58 = data_1b8a720
int32_t eax_65 = data_1b8a770
data_1b1bd5c = esi_1
int32_t esi_3 = data_1b8a748
data_1b1bd68 = eax_65
int32_t eax_66 = data_1b8a7c0
data_1b1bd60 = esi_3
int32_t esi_4 = data_1b8a75c
data_1b1bd78 = eax_66
int32_t eax_67 = data_1b8a7e8
data_1b1bd64 = esi_4
data_1b1bd6c = edx_1

if (eax_67 s< 0)
    eax_67 = 0

data_1b1bd70 = ecx_16
data_1b1bd80 = eax_67
int32_t eax_68 = data_131310c
data_1b1bd74 = edi_2
data_1b1bd7c = 0
data_1b1bd84 = eax_68
sub_411a20(eax_68, nullptr, 0x10, edx_1, ecx_16, edi_2, var_2f8_1)
var_2ec = data_1bfdd30
int32_t eax_70 = data_1b8a7d4
data_1b1bd8c = 0x10
data_71929c = 0x33
data_7192a0 = 0
data_7192e0 = 0
int32_t var_1cc_1 = 0
int32_t var_d4_1 = eax_70
return sub_42a6d0(&var_2ec)
