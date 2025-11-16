// 函数: sub_411bf0
// 地址: 0x411bf0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_224
int32_t eax_1 = __security_cookie ^ &var_224
char var_218
sub_4cfd70(&var_218, arg3)
*arg2 = 0
*arg4 = 0
*arg5 = 0
char* esi_1 = &var_218
char* var_220 = nullptr
var_224 = 0
int32_t eax_2 = sub_4d1610(&var_218, 0x5c)
void var_217

if (eax_2 != 0xffffffff)
    esi_1 = &var_217 + eax_2

int32_t eax_3 = sub_4d1610(esi_1, 0x2e)

if (eax_3 == 0xffffffff)
    eax_3 = sub_4cfc80(esi_1)
    esi_1 -= 1

void* const var_234 = &data_61334c
char* eax_4 = sub_4c84d0(&esi_1[eax_3], ".%s")
int32_t esi_3 = data_703190:0xc
char* eax_5 = sub_4c3da0(eax_4, 5, &var_218, 0xd)

if (eax_5 == 1)
    goto label_411cdf

void* eax_6

if (esi_3 != 0xffffffff)
    eax_6 = sub_4c51f0(eax_5, &var_218, esi_3, nullptr)

char const* const var_238_1
void* esi_10

if (esi_3 == 0xffffffff || eax_6 == 0)
    char* esi_5 = &var_218
    int32_t eax_14 = sub_4d1610(&var_218, 0x5c)
    
    if (eax_14 != 0xffffffff)
        esi_5 = &var_217 + eax_14
    
    int32_t eax_15 = sub_4d1610(esi_5, 0x2e)
    
    if (eax_15 == 0xffffffff)
        eax_15 = sub_4cfc80(esi_5)
        esi_5 -= 1
    
    void* const var_234_3 = &data_613350
    char* eax_16 = sub_4c84d0(&esi_5[eax_15], ".%s")
    int32_t esi_7 = data_703190:8
    int32_t eax_17
    uint32_t ecx_19
    eax_17, ecx_19 = sub_4c3da0(eax_16, 5, &var_218, 0x19)
    void* eax_18
    
    if (eax_17 != 1 && esi_7 != 0xffffffff)
        eax_18, ecx_19 = sub_4c51f0(eax_17, &var_218, esi_7, nullptr)
    
    if (eax_17 == 1 || (esi_7 != 0xffffffff && eax_18 != 0))
        uint32_t var_234_5 = ecx_19
        int32_t var_238_2 = 0x19
        uint32_t var_23c_3 = ecx_19
        char* eax_22 =
            sub_4c5400(&var_224, &var_218, data_703190:8, &var_224, &var_220, ecx_19, 0x40)
        
        if (var_224 != 0)
            sub_4cea50(eax_22, arg4, var_220, arg5, arg2)
        label_411d13:
            sub_4d6c40(&var_224, &var_220)
            sub_5f02dd(eax_1 ^ &var_224)
            return 1
        
        void* esi_9 = &var_218
        int32_t eax_23 = sub_4d1610(&var_218, 0x5c)
        
        if (eax_23 != 0xffffffff)
            esi_9 = &var_217 + eax_23
        
        int32_t eax_24 = sub_4d1610(esi_9, 0x2e)
        
        if (eax_24 == 0xffffffff)
            eax_24 = sub_4cfc80(esi_9)
            esi_9 -= 1
        
        esi_10 = esi_9 + eax_24
        char* var_234_7 = &var_218
        var_238_1 = "%s.pdt "
    else
        void* esi_8 = &var_218
        int32_t eax_19 = sub_4d1610(&var_218, 0x5c)
        
        if (eax_19 != 0xffffffff)
            esi_8 = &var_217 + eax_19
        
        int32_t eax_20 = sub_4d1610(esi_8, 0x2e)
        
        if (eax_20 == 0xffffffff)
            eax_20 = sub_4cfc80(esi_8)
            esi_8 -= 1
        
        esi_10 = esi_8 + eax_20
        char* var_234_4 = &var_218
        var_238_1 = "%s.g00 ( pdt ) "
else
    eax_5 = 2
label_411cdf:
    sub_426e50(&var_220, &var_224, &var_218, &var_220, 1, eax_5)
    
    if (var_224 != 0)
        char* ecx_7 = var_220
        
        if (ecx_7 != 0)
            *arg2 = zx.d(*ecx_7)
            *arg4 = zx.d(*(ecx_7 + 1))
            *arg5 = zx.d(*(ecx_7 + 3))
        
        goto label_411d13
    
    char* esi_4 = &var_218
    int32_t eax_12 = sub_4d1610(&var_218, 0x5c)
    
    if (eax_12 != 0xffffffff)
        esi_4 = &var_217 + eax_12
    
    int32_t eax_13 = sub_4d1610(esi_4, 0x2e)
    
    if (eax_13 == 0xffffffff)
        eax_13 = sub_4cfc80(esi_4)
        esi_4 -= 1
    
    esi_10 = &esi_4[eax_13]
    char* var_234_2 = &var_218
    var_238_1 = "%s.g00 "

*esi_10 = 0
char* eax_25 = sub_4c84d0(&data_7027c0, var_238_1)

if (data_702fc0 != 0)
    sub_55f390(
        sub_55f1e0(sub_55ef70(eax_25, data_72d6ac, data_719b6c, 0x613340, &data_7027c0), 
            data_72d6ac, data_719b6c, 0x613340, &data_7027c0), 
        data_72d6ac, data_719b6c, 0x613340, &data_7027c0)
    sub_4a1e40(3)
    
    if (data_702fc0 != 0 || data_641ad0 s< 6)
        MessageBoxA(data_7027bc, &data_7027c0, 0x616ce4, MB_OK)
        data_641ad0 += 1
else if (data_641ad0 s< 6)
    MessageBoxA(data_7027bc, &data_7027c0, 0x616ce4, MB_OK)
    data_641ad0 += 1

sub_5f02dd(eax_1 ^ &var_224)
return 0
