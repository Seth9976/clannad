// 函数: sub_49c980
// 地址: 0x49c980
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

BOOL var_234
int32_t eax_1 = __security_cookie ^ &var_234
char* var_22c = nullptr
int32_t var_230 = 0
var_234 = 0
int32_t var_21c = 0
char var_218
sub_4cfd70(&var_218, arg3)
char* esi = &var_218
int32_t eax_2 = sub_4d1610(&var_218, 0x5c)
void var_217

if (eax_2 != 0xffffffff)
    esi = &var_217 + eax_2

int32_t eax_3 = sub_4d1610(esi, 0x2e)

if (eax_3 == 0xffffffff)
    eax_3 = sub_4cfc80(esi)
    esi -= 1

void* const var_244 = &data_61334c
char* eax_4 = sub_4c84d0(&esi[eax_3], ".%s")
int32_t esi_2 = data_703190:0xc
int32_t eax_5
char* ecx_5
eax_5, ecx_5 = sub_4c3da0(eax_4, 5, &var_218, 0xd)
int32_t* var_268
uint32_t var_228
uint32_t var_224
uint32_t var_220
char* eax_15

if (eax_5 != 1)
    void* eax_12
    
    if (esi_2 != 0xffffffff)
        eax_12 = sub_4c51f0(eax_5, &var_218, esi_2, nullptr)
    
    if (esi_2 != 0xffffffff && eax_12 != 0)
        goto label_49cb1d
    
    char* esi_6 = &var_218
    int32_t eax_19 = sub_4d1610(&var_218, 0x5c)
    
    if (eax_19 != 0xffffffff)
        esi_6 = &var_217 + eax_19
    
    int32_t eax_20 = sub_4d1610(esi_6, 0x2e)
    
    if (eax_20 == 0xffffffff)
        eax_20 = sub_4cfc80(esi_6)
        esi_6 -= 1
    
    void* const var_244_6 = &data_613350
    char* eax_21 = sub_4c84d0(&esi_6[eax_20], ".%s")
    int32_t esi_8 = data_703190:8
    int32_t eax_22
    char* ecx_27
    eax_22, ecx_27 = sub_4c3da0(eax_21, 5, &var_218, 0x19)
    void* eax_23
    
    if (eax_22 != 1 && esi_8 != 0xffffffff)
        eax_23, ecx_27 = sub_4c51f0(eax_22, &var_218, esi_8, nullptr)
    
    if (eax_22 != 1 && (esi_8 == 0xffffffff || eax_23 == 0))
        char* esi_9 = &var_218
        int32_t eax_24 = sub_4d1610(&var_218, 0x5c)
        
        if (eax_24 != 0xffffffff)
            esi_9 = &var_217 + eax_24
        
        int32_t eax_25 = sub_4d1610(esi_9, 0x2e)
        
        if (eax_25 == 0xffffffff)
            eax_25 = sub_4cfc80(esi_9)
            esi_9 -= 1
        
        char* var_244_7 = &var_218
        esi_9[eax_25] = 0
        eax_15 = sub_4c84d0(&data_7027c0, "%s.g00 ( pdt ) ")
        
        if (data_702fc0 != 0)
            sub_55f390(
                sub_55f1e0(sub_55ef70(eax_15, data_72d6ac, data_719b6c, 0x613340, &data_7027c0), 
                    data_72d6ac, data_719b6c, 0x613340, &data_7027c0), 
                data_72d6ac, data_719b6c, 0x613340, &data_7027c0)
            eax_15 = sub_4a1e40(3)
            
            if (data_702fc0 != 0 || data_641ad0 s< 6)
            label_49cd72:
                enum MESSAGEBOX_RESULT eax_28 =
                    MessageBoxA(data_7027bc, &data_7027c0, 0x616ce4, MB_OK)
                data_641ad0 += 1
                sub_5f02dd(eax_1 ^ &var_234)
                return eax_28
        else if (data_641ad0 s< 6)
            goto label_49cd72
        
        sub_5f02dd(eax_1 ^ &var_234)
        return eax_15
    
    char* var_244_8 = ecx_27
    int32_t var_248_2 = 0x19
    sub_4c5340(&var_230, &var_218, data_703190:8, &var_230, &var_22c, ecx_27)
    
    if (var_230 == 0)
        char* esi_11 = &var_218
        int32_t eax_35 = sub_4d1610(&var_218, 0x5c)
        
        if (eax_35 != 0xffffffff)
            esi_11 = &var_217 + eax_35
        
        int32_t eax_36 = sub_4d1610(esi_11, 0x2e)
        
        if (eax_36 == 0xffffffff)
            eax_36 = sub_4cfc80(esi_11)
            esi_11 -= 1
        
        char* var_244_11 = &var_218
        esi_11[eax_36] = 0
        char* eax_37 = sub_4c84d0(&data_7027c0, "%s.pdt ")
        
        if (data_702fc0 != 0)
            sub_55f390(
                sub_55f1e0(sub_55ef70(eax_37, data_72d6ac, data_719b6c, 0x613340, &data_7027c0), 
                    data_72d6ac, data_719b6c, 0x613340, &data_7027c0), 
                data_72d6ac, data_719b6c, 0x613340, &data_7027c0)
            sub_4a1e40(3)
        
        eax_15 = sub_446a50()
        sub_5f02dd(eax_1 ^ &var_234)
        return eax_15
    
    sub_4cf1e0(&var_234, &var_21c, var_22c, &var_234, &var_228, &var_220, &var_224, 1)
else
    char* var_244_1 = ecx_5
    int32_t var_248_1 = 0xd
    int32_t ecx_6 = data_703190:0xc
    var_230 = 0
    var_22c = nullptr
    char* eax_7
    int32_t ecx_7
    eax_7, ecx_7 = sub_4c5340(&var_230, &var_218, ecx_6, &var_230, &var_22c, ecx_5)
    char* esi_3 = var_22c
    
    if (esi_3 == 0)
    label_49cb1d:
        char* esi_4 = &var_218
        int32_t eax_13 = sub_4d1610(&var_218, 0x5c)
        
        if (eax_13 != 0xffffffff)
            esi_4 = &var_217 + eax_13
        
        int32_t eax_14 = sub_4d1610(esi_4, 0x2e)
        
        if (eax_14 == 0xffffffff)
            eax_14 = sub_4cfc80(esi_4)
            esi_4 -= 1
        
        char* var_244_5 = &var_218
        esi_4[eax_14] = 0
        eax_15 = sub_4c84d0(&data_7027c0, "%s.g00 ")
        
        if (data_702fc0 != 0)
            sub_55f390(
                sub_55f1e0(sub_55ef70(eax_15, data_72d6ac, data_719b6c, 0x613340, &data_7027c0), 
                    data_72d6ac, data_719b6c, 0x613340, &data_7027c0), 
                data_72d6ac, data_719b6c, 0x613340, &data_7027c0)
            eax_15 = sub_4a1e40(3)
            
            if (data_702fc0 != 0 || data_641ad0 s< 6)
            label_49cbf6:
                enum MESSAGEBOX_RESULT eax_18 =
                    MessageBoxA(data_7027bc, &data_7027c0, 0x616ce4, MB_OK)
                data_641ad0 += 1
                sub_5f02dd(eax_1 ^ &var_234)
                return eax_18
        else if (data_641ad0 s< 6)
            goto label_49cbf6
        
        sub_5f02dd(eax_1 ^ &var_234)
        return eax_15
    
    if (*esi_3 == 2)
        int32_t var_244_2 = ecx_7
        sub_426d50(esi_3)
    
    int32_t eax_8 = var_230
    var_230 = eax_8
    
    if (eax_8 == 0)
        goto label_49cb1d
    
    if (sub_426f30(eax_8, esi_3, &var_218, eax_7) == 0)
        int32_t eax_11 = sub_4d6c40(&var_230, &var_22c)
        sub_5f02dd(eax_1 ^ &var_234)
        return eax_11
    
    var_268 = &var_21c
    sub_427180(&var_21c, eax_7, esi_3, var_268, &var_234, 0, nullptr, &var_228, &var_220, &var_224, 
        "SERIALPDT_EXPAND", 1, &var_218)
sub_4d6c40(&var_230, &var_22c)

if (arg12 == 0x7d0)
    int32_t var_244_9 = 0
    uint32_t var_248_4 = var_224
    uint32_t var_24c_5 = var_220
    uint32_t var_250_7 = var_228
    BOOL var_254_5 = var_234
    int32_t var_258_2 = arg6
    int32_t var_25c_1 = arg5
    int32_t var_260_1 = arg4
    int32_t var_264_2 = arg2
    int32_t var_26c
    sub_49b470(arg12, arg8, arg7, arg9, var_26c, var_268)
    int32_t eax_32 = sub_4d6c40(&var_21c, &var_234)
    sub_5f02dd(eax_1 ^ &var_234)
    return eax_32

if (arg12 != 0x7d1)
    if (arg12 == 0x7d2)
        sub_49b930(arg12, arg8, arg7, arg9, arg10, arg11, arg2, arg4, var_234, var_228, var_220, 
            var_224, 0)
    
    int32_t eax_34 = sub_4d6c40(&var_21c, &var_234)
    sub_5f02dd(eax_1 ^ &var_234)
    return eax_34

int32_t var_244_10 = 0
uint32_t var_248_5 = var_224
uint32_t var_24c_6 = var_220
uint32_t var_250_8 = var_228
BOOL var_254_6 = var_234
int32_t var_258_3 = arg6
int32_t var_25c_2 = arg5
int32_t var_260_2 = arg4
int32_t var_264_3 = arg2
sub_49b7a0(arg12, arg8, arg7, arg9, arg10, arg11)
int32_t eax_33 = sub_4d6c40(&var_21c, &var_234)
sub_5f02dd(eax_1 ^ &var_234)
return eax_33
