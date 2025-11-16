// 函数: sub_57de50
// 地址: 0x57de50
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = data_1320e58
int32_t edi = data_131d2cc

if (arg3 u> 0x3f)
    arg1.b = 0
    return arg1

if (arg4 u<= 0xf)
    arg1 = *(arg3 * 0x1d4 + &data_1090b6c)
    
    if (arg1 != 0xffffffff)
        int32_t var_3c_1 = *(arg3 * 0x3920 + 0xf89d9c)
        int32_t var_40_1 = *(arg3 * 0x3920 + 0xf89d98)
        int32_t var_44_1 = *(arg3 * 0x3920 + 0xf89d94)
        int32_t eax_2 = sub_576c30(arg3)
        int32_t eax_4 = arg4 * 5
        int32_t var_18
        int32_t var_14
        int32_t var_10
        int32_t var_c
        arg1 = sub_576a80(eax_4, *(arg3 * 0x3920 + 0xf89d90), 
            (eax_2 + (arg1 << 3)) * 0xff8 + (eax_4 << 2) + 0x109a860, var_44_1, var_40_1, var_3c_1, 
            &var_c, &var_14, &var_10, &var_18, 1)
        
        if (arg1.b != 0 && edi s>= var_c && edi s<= var_10 && esi s>= var_14 && esi s<= var_18)
            arg1.b = 1
            return arg1

arg1.b = 0
return arg1
