// 函数: sub_459170
// 地址: 0x459170
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void var_224
int32_t eax_1 = __security_cookie ^ &var_224
char var_218
sub_4cfd70(&var_218, arg5)
arg3[4] = arg2
char* esi_1 = &var_218
char* var_21c = nullptr
int32_t var_220 = 0
arg3[5] = arg4
int32_t eax_3 = sub_4d1610(&var_218, 0x5c)
void var_217

if (eax_3 != 0xffffffff)
    esi_1 = &var_217 + eax_3

int32_t eax_4 = sub_4d1610(esi_1, 0x2e)

if (eax_4 == 0xffffffff)
    eax_4 = sub_4cfc80(esi_1)
    esi_1 -= 1

void* const var_234 = &data_61953c
char* eax_5 = sub_4c84d0(&esi_1[eax_4], ".%s")
int32_t esi_3 = data_7031a4
int32_t eax_6
char* ecx_5
eax_6, ecx_5 = sub_4c3da0(eax_5, 5, &var_218, 0xe)
void* eax_7

if (eax_6 != 1 && esi_3 != 0xffffffff)
    eax_7, ecx_5 = sub_4c51f0(eax_6, &var_218, esi_3, nullptr)

char const* const var_238_3
void* esi_12

if (eax_6 == 1 || (esi_3 != 0xffffffff && eax_7 != 0))
    char* var_234_9 = ecx_5
    int32_t var_238_5 = 0xe
    sub_4c5340(&var_220, &var_218, data_7031a4, &var_220, &var_21c, ecx_5)
    
    if (var_220 != 0)
        char* edx_18 = var_21c
        uint32_t ecx_39 = zx.d(*(edx_18 + 2))
        arg3[2] = zx.d(*edx_18)
        arg3[3] = ecx_39
        BOOL eax_32 = sub_4bb540(&arg3[1], arg3, &edx_18[4], &arg3[1])
        sub_4d6560(eax_32, eax_32, *arg3, "AVGMASK")
        int32_t eax_33 = sub_4d6c40(&var_220, &var_21c)
        sub_5f02dd(eax_1 ^ &var_224)
        return eax_33
    
    void* esi_11 = &var_218
    int32_t eax_34 = sub_4d1610(&var_218, 0x5c)
    
    if (eax_34 != 0xffffffff)
        esi_11 = &var_217 + eax_34
    
    int32_t eax_35 = sub_4d1610(esi_11, 0x2e)
    
    if (eax_35 == 0xffffffff)
        eax_35 = sub_4cfc80(esi_11)
        esi_11 -= 1
    
    esi_12 = esi_11 + eax_35
    char* var_234_11 = &var_218
    var_238_3 = "%s.m00 "
else
    char* esi_4 = &var_218
    int32_t eax_8 = sub_4d1610(&var_218, 0x5c)
    
    if (eax_8 != 0xffffffff)
        esi_4 = &var_217 + eax_8
    
    int32_t eax_9 = sub_4d1610(esi_4, 0x2e)
    
    if (eax_9 == 0xffffffff)
        eax_9 = sub_4cfc80(esi_4)
        esi_4 -= 1
    
    void* const var_234_1 = &data_61334c
    char* eax_10 = sub_4c84d0(&esi_4[eax_9], ".%s")
    int32_t esi_6 = data_703190:0xc
    int32_t eax_11
    char* ecx_11
    eax_11, ecx_11 = sub_4c3da0(eax_10, 5, &var_218, 0xd)
    
    if (eax_11 == 1)
        char* var_234_2 = ecx_11
        int32_t var_238_1 = 0xd
        int32_t ecx_12 = data_703190:0xc
        var_220 = 0
        var_21c = nullptr
        char* eax_13
        int32_t ecx_13
        eax_13, ecx_13 = sub_4c5340(&var_220, &var_218, ecx_12, &var_220, &var_21c, ecx_11)
        char* esi_7 = var_21c
        
        if (esi_7 != 0)
            if (*esi_7 == 2)
                int32_t var_234_3 = ecx_13
                sub_426d50(esi_7)
            
            int32_t eax_14 = var_220
            var_220 = eax_14
            
            if (eax_14 != 0)
                if (sub_426f30(eax_14, esi_7, &var_218, eax_13) != 0)
                    sub_458ea0(&var_218, esi_7, arg3, eax_13, &var_218)
                
                int32_t eax_17 = sub_4d6c40(&var_220, &var_21c)
                sub_5f02dd(eax_1 ^ &var_224)
                return eax_17
        
        goto label_459353
    
    void* eax_18
    
    if (esi_6 != 0xffffffff)
        eax_18 = sub_4c51f0(eax_11, &var_218, esi_6, nullptr)
    
    if (esi_6 == 0xffffffff || eax_18 == 0)
        int32_t eax_21 = sub_4c3960(&var_218, &data_613350)
        int32_t esi_9 = data_703190:8
        int32_t eax_22
        char* ecx_26
        eax_22, ecx_26 = sub_4c3da0(eax_21, 5, &var_218, 0x19)
        
        if (eax_22 != 1)
            void* eax_23
            
            if (esi_9 != 0xffffffff)
                eax_23, ecx_26 = sub_4c51f0(eax_22, &var_218, esi_9, nullptr)
            
            if (esi_9 == 0xffffffff || eax_23 == 0)
                int32_t eax_24 = sub_459040(0, &var_218)
                sub_5f02dd(eax_1 ^ &var_224)
                return eax_24
        
        char* var_234_7 = ecx_26
        int32_t var_238_4 = 0x19
        sub_4c5340(&var_220, &var_218, data_703190:8, &var_220, &var_21c, ecx_26)
        
        if (var_220 != 0)
            sub_458f90(arg3, var_21c)
            int32_t eax_26 = sub_4d6c40(&var_220, &var_21c)
            sub_5f02dd(eax_1 ^ &var_224)
            return eax_26
        
        void* esi_10 = &var_218
        int32_t eax_27 = sub_4d1610(&var_218, 0x5c)
        
        if (eax_27 != 0xffffffff)
            esi_10 = &var_217 + eax_27
        
        int32_t eax_28 = sub_4d1610(esi_10, 0x2e)
        
        if (eax_28 == 0xffffffff)
            eax_28 = sub_4cfc80(esi_10)
            esi_10 -= 1
        
        esi_12 = esi_10 + eax_28
        char* var_234_8 = &var_218
        var_238_3 = "%s.pdt "
    else
    label_459353:
        char* esi_8 = &var_218
        int32_t eax_19 = sub_4d1610(&var_218, 0x5c)
        
        if (eax_19 != 0xffffffff)
            esi_8 = &var_217 + eax_19
        
        int32_t eax_20 = sub_4d1610(esi_8, 0x2e)
        
        if (eax_20 == 0xffffffff)
            eax_20 = sub_4cfc80(esi_8)
            esi_8 -= 1
        
        esi_12 = &esi_8[eax_20]
        char* var_234_6 = &var_218
        var_238_3 = "%s.g00 "

*esi_12 = 0
char* eax_36 = sub_4c84d0(&data_7027c0, var_238_3)

if (data_702fc0 != 0)
    sub_55f390(
        sub_55f1e0(sub_55ef70(eax_36, data_72d6ac, data_719b6c, 0x613340, &data_7027c0), 
            data_72d6ac, data_719b6c, 0x613340, &data_7027c0), 
        data_72d6ac, data_719b6c, 0x613340, &data_7027c0)
    eax_36 = sub_4a1e40(3)
    
    if (data_702fc0 != 0 || data_641ad0 s< 6)
        eax_36 = MessageBoxA(data_7027bc, &data_7027c0, 0x616ce4, MB_OK)
        data_641ad0 += 1
else if (data_641ad0 s< 6)
    eax_36 = MessageBoxA(data_7027bc, &data_7027c0, 0x616ce4, MB_OK)
    data_641ad0 += 1

sub_5f02dd(eax_1 ^ &var_224)
return eax_36
