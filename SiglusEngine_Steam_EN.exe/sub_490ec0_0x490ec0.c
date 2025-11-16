// 函数: sub_490ec0
// 地址: 0x490ec0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int16_t* var_8 = arg3
int32_t eax = arg5
int32_t esi_3

if (*(arg3 + 4) == 0 || *arg3 == 0 || eax == 0)
    esi_3 = 0
else
    arg2[2] += arg4
    *(arg3 + 4)
    int32_t ecx = mods.dp.d(sx.q(arg2[2]), *(arg3 + 4))
    arg2[2] = ecx
    int16_t ebx_1 = *arg3
    int32_t ebx_2
    
    if (ebx_1 != 0)
        ebx_2 = divs.dp.d(sx.q(sub_4d1650(0x55)), sx.d(ebx_1))
    else
        ebx_2 = 0
    
    int32_t eax_4
    eax_4.b = arg3[4].b
    void* eax_7
    int32_t esi_1
    
    if (eax_4.b != 0)
        void* var_8_2
        
        if (eax_4.b != 1)
            var_8_2 = sub_4d2110(eax_4, ecx, 0, *(arg3 + 4), 0x5a, 0x1c1)
            esi_1 = neg.d(divs.dp.d(sx.q(sub_4d1650(0x5a)), ebx_2))
        else
            var_8_2 = sub_4d2110(eax_4, ecx, 0, *(arg3 + 4), 0x10e, 0x275)
            esi_1 = divs.dp.d(sx.q(sub_4d1650(0x5a)), ebx_2)
        
        eax_7 = var_8_2
    else
        eax_7 = sub_4d2110(eax_4, ecx, 0, *(arg3 + 4), 0, 0x167)
        esi_1 = 0
    
    if (arg6 == 0)
        esi_3 = esi_1 + divs.dp.d(sx.q(sub_4d1650(eax_7)), ebx_2)
        eax = arg5
    else
        esi_3 = esi_1 + divs.dp.d(sx.q(sub_4d1770(eax_7)), ebx_2)
        eax = arg5

if (eax == 0x64)
    *arg2 = esi_3
    return eax

int32_t eax_25 = esi_3 * eax s/ 0x64
*arg2 = eax_25
return eax_25
