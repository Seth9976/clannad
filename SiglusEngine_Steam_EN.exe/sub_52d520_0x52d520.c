// 函数: sub_52d520
// 地址: 0x52d520
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* var_4 = arg1
int32_t eax = data_1af4e84
int32_t eax_2
int32_t eax_3

if (eax == 0)
    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
    eax_3 = data_1b8a720
label_52d554:
    
    if (eax_3 u<= 0x3f)
        int32_t eax_5 = *(eax_3 * 0x3920 + &data_f8d364)
        data_715e98 = eax_5
        return eax_5
    
    eax_2 = 0
    data_715e98 = 0
else
    eax_2 = eax - 1
    
    if (eax == 1)
        eax_3 = *(arg1 + 0x13b3c)
        goto label_52d554
return eax_2
