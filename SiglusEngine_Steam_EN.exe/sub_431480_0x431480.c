// 函数: sub_431480
// 地址: 0x431480
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* eax = arg3 * 0x2c8
void* var_20
void* var_1c
void* ebx

if (arg2 != 0)
    var_1c = eax + &data_1392720
    ebx = eax + 0x139273c
    var_20 = eax + 0x139275c
else
    var_1c = eax + &data_1392720
    ebx = eax + 0x1392728
    var_20 = eax + 0x139275c

int32_t* var_8 = ebx
int32_t ebx_1 = 0xfff0bdc1
int32_t* eax_1 = var_8
int32_t edi = 0xfff0bdc1
int32_t var_28 = 0
int32_t var_2c = 0
int32_t var_14 = 0xfff0bdc1
int32_t ecx_2 = *eax_1
int32_t var_18 = 0xfff0bdc1
int32_t var_c = 0
int32_t var_10 = 0
int32_t ecx_7

if (ecx_2 == 0)
    ecx_7 = arg4
else
    int32_t edx_2 = eax_1[1]
    
    if (edx_2 == 0)
        ecx_7 = arg4
    else if (ecx_2 == 1)
        int32_t ecx_4 = edx_2 - arg4
        var_28 = divs.dp.d(sx.q(eax_1[2] * ecx_4), edx_2)
        var_2c = divs.dp.d(sx.q(var_8[3] * ecx_4), edx_2)
        eax_1 = var_8
        ecx_7 = arg4
    else if (ecx_2 == 2)
        sub_426690(&var_c, *(eax + &data_13928d0), *var_1c, &var_c, &var_10)
        ecx_7 = arg4
        ebx_1 = 0
        var_18 = var_c - 1
        var_14 = 0
        var_8[1]
        edi = divs.dp.d(sx.q(var_10 * ecx_7), var_8[1]) - 1
        eax_1 = var_8
    else if (ecx_2 == 3)
        sub_426690(&var_c, *(eax + &data_13928d0), *var_1c, &var_c, &var_10)
        int32_t ecx_10 = var_10
        var_18 = var_c - 1
        var_14 = 0
        edi = ecx_10 - 1
        var_8[1]
        ebx_1 = ecx_10 - divs.dp.d(sx.q(ecx_10 * arg4), var_8[1])
        eax_1 = var_8
        ecx_7 = arg4
    else
        int32_t eax_30
        
        if (ecx_2 != 4)
            if (ecx_2 == 5)
                sub_426690(&var_c, *(eax + &data_13928d0), *var_1c, &var_c, &var_10)
                int32_t ecx_16 = var_c
                eax_30 = ecx_16 - 1
                var_14 = ecx_16 - divs.dp.d(sx.q(ecx_16 * arg4), var_8[1])
                goto label_431636
            
            ecx_7 = arg4
        else
            sub_426690(&var_c, *(eax + &data_13928d0), *var_1c, &var_c, &var_10)
            var_14 = 0
            var_8[1]
            eax_30 = divs.dp.d(sx.q(var_c * arg4), var_8[1]) - 1
        label_431636:
            ebx_1 = 0
            var_18 = eax_30
            edi = var_10 - 1
            eax_1 = var_8
            ecx_7 = arg4

int32_t eax_38

if (eax_1[4] != 1)
    eax_38 = 0xff
else
    var_8[1]
    eax_38 = divs.dp.d(sx.q(ecx_7 * 0xff), var_8[1])

*(eax + 0x13928d4) += var_28
*(eax + 0x13928d8) += var_2c
int32_t result = zx.d(*(eax + &data_1392918)) * eax_38 s/ 0xff
bool cond:0 = *(eax + &data_139291c) == 0
*(eax + &data_1392918) = result.b

if (not(cond:0) && (var_14 != 0xfff0bdc1 || ebx_1 != 0xfff0bdc1 || var_18 != ebx_1 || edi != ebx_1))
    int32_t ecx_23 = *(eax + 0x13928d4) + *(var_20 + 0x74)
    int32_t edx_25 = var_18 + ecx_23
    int32_t eax_46 = *(var_20 + 0x78) + *(eax + 0x13928d8)
    int32_t ebx_5 = ebx_1 + eax_46
    int32_t edi_3 = edi + eax_46
    result = var_14 + ecx_23
    int32_t ecx_24
    
    if (result s<= edx_25 && ebx_5 s<= edi_3 && result s<= data_70300c && ebx_5 s<= data_7030dc
            && edx_25 s>= 0 && edi_3 s>= 0)
        ecx_24 = *(eax + 0x1392948)
    
    if (result s> edx_25 || ebx_5 s> edi_3 || result s> data_70300c || ebx_5 s> data_7030dc
            || edx_25 s< 0 || edi_3 s< 0 || ecx_24 s> edx_25 || *(eax + 0x1392950) s< result
            || *(eax + 0x139294c) s> edi_3 || *(eax + 0x1392954) s< ebx_5)
        *(eax + &data_139291c) = 0
    else
        if (ecx_24 s< result)
            *(eax + 0x1392948) = result
        
        if (*(eax + 0x1392950) s> edx_25)
            *(eax + 0x1392950) = edx_25
        
        if (*(eax + 0x139294c) s< ebx_5)
            *(eax + 0x139294c) = ebx_5
        
        if (*(eax + 0x1392954) s> edi_3)
            *(eax + 0x1392954) = edi_3

return result
