// 函数: sub_46fa70
// 地址: 0x46fa70
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = arg2[3]
void var_9c
int32_t* ecx_8

if (eax == 0x64)
    int32_t ebx_2 = zx.d(*(arg2 + 0x32)) - 0xff
    int32_t edi_2 = zx.d(*(arg2 + 0x33)) - 0xff
    int32_t esi_2 = zx.d(arg2[0xd].b) - 0xff
    int32_t eax_26 = zx.d(arg2[0x12].b) * zx.d(*(arg2 + 0x35)) s/ 0xff
    sub_4d1c30(eax_26, arg2, &var_9c, 0x8c)
    int32_t var_58_1 = 0
    char var_67_1 = 0
    int16_t var_6c_1 = 0
    char var_54_1 = eax_26.b
    int32_t var_64_1 = ebx_2
    int32_t var_60_1 = edi_2
    int32_t var_5c_1 = esi_2
    int32_t var_90_1 = 4
    
    if (arg2[0x16] == 0x3e8 && arg2[0x17] == 0x3e8 && mods.dp.d(sx.q(arg2[0x18]), 0xe10) == 0)
        return sub_425d50(arg1, &var_9c)
    
    ecx_8 = arg1
else
    if (eax != 0x65)
        if (arg2[0x16] == 0x3e8 && arg2[0x17] == 0x3e8 && mods.dp.d(sx.q(arg2[0x18]), 0xe10) == 0)
            return sub_425d50(arg1, arg2)
        
        return sub_425e50(arg1, arg2)
    
    uint32_t edi = zx.d(*(arg2 + 0x33))
    uint32_t ecx_4 = zx.d(*(arg2 + 0x32))
    int32_t eax_14 = zx.d(arg2[0x12].b) * zx.d(*(arg2 + 0x35)) s/ 0xff
    uint32_t var_c_2
    
    if (ecx_4 s>= 0)
        if (ecx_4 s> 0xff)
            ecx_4 = 0xff
        
        var_c_2 = ecx_4
    else
        var_c_2 = 0
    
    if (edi s< 0)
        edi = 0
    else if (edi s> 0xff)
        edi = 0xff
    
    uint32_t ecx_5 = zx.d(arg2[0xd].b)
    uint32_t var_8_2
    
    if (ecx_5 s>= 0)
        if (ecx_5 s> 0xff)
            ecx_5 = 0xff
        
        var_8_2 = ecx_5
    else
        var_8_2 = 0
    
    if (eax_14 s< 0)
        eax_14 = 0
    else if (eax_14 s> 0xff)
        eax_14 = 0xff
    
    sub_4d1c30(eax_14, arg2, &var_9c, 0x8c)
    char var_54 = eax_14.b
    uint32_t var_64 = var_c_2
    int32_t var_58 = 0
    char var_67 = 0
    int16_t var_6c = 0
    uint32_t var_60 = edi
    uint32_t var_5c = var_8_2
    int32_t var_90 = 0
    
    if (arg2[0x16] == 0x3e8 && arg2[0x17] == 0x3e8 && mods.dp.d(sx.q(arg2[0x18]), 0xe10) == 0)
        return sub_425d50(arg1, &var_9c)
    
    ecx_8 = arg1

return sub_425e50(ecx_8, &var_9c)
