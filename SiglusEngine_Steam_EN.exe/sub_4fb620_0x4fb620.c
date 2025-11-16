// 函数: sub_4fb620
// 地址: 0x4fb620
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = data_1bfdd30

if (eax s>= 0x3e8)
    return sub_4fb3c0(arg1, arg2)

if (eax == 0)
    int32_t eax_3 = data_1af4e84
    
    if (eax_3 == 0)
        sub_4ef190(eax_3, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
    else if (eax_3 == 1)
        data_1b8a720 = eax_3 - 1
        return sub_493dc0(eax_3 - 1)
    
    return sub_493dc0(data_1b8a720)

int32_t result = eax - 0xa
int32_t* edx

if (eax != 0xa)
    int32_t result_1 = result
    result -= 2
    
    if (result_1 != 2)
        data_1b8b06c = 1
        return result
    
    if (data_925224 != 0 && (data_925238 s> 0 || data_92523c s> 0))
        sub_445260()
        int32_t var_44 = 1
        edx = &var_44
        goto label_4fb6c3
else if (data_925224 != 0 && (data_925238 s> 0 || data_92523c s> 0))
    int32_t var_84 = 0
    edx = &var_84
label_4fb6c3:
    data_71929c = 0x39
    sub_4d1c30(result, edx, &data_7192a0, 0x40)
    data_7192e0 = 0
return result
