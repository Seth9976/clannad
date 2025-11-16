// 函数: sub_411fd0
// 地址: 0x411fd0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

BOOL var_14 = 0
int32_t var_20 = 0
uint32_t var_10
uint32_t var_c
uint32_t var_8
uint32_t ecx
uint32_t ebx

if (arg6 != 0)
    sub_4cea50(&var_c, &var_8, arg2, &var_c, &var_10)
    ecx = var_8
    ebx = var_c
else if (arg2 == 0)
    ecx = var_8
    ebx = var_c
else
    ecx = zx.d(*(arg2 + 1))
    ebx = zx.d(*(arg2 + 3))
    var_10 = zx.d(*arg2)
    var_8 = ecx
    var_c = ebx

int32_t var_1c
uint32_t var_18

if (arg3 == 0)
    var_1c = data_70300c
    var_18 = data_7030dc
else if (arg3 != 1)
    var_1c = ecx
    var_18 = ebx
else
    int32_t edx_1 = ecx
    uint32_t ecx_2 = ebx
    
    if (ecx s< data_70300c)
        edx_1 = data_70300c
    
    var_1c = edx_1
    
    if (ebx s< data_7030dc)
        ecx_2 = data_7030dc
    
    var_18 = ecx_2

int32_t eax_4 = sub_411350(arg3)

if (arg3 s< 0x21)
    sub_411500(eax_4, var_1c, arg3, var_18)

int32_t edx_3 = (&data_976b58)[arg3 * 8]

if (var_8 == edx_3)
    void* ecx_5 = (&data_976b5c)[arg3 * 8]
    
    if (ebx == ecx_5)
        BOOL result
        
        if (arg6 != 0)
            result = sub_4cf1e0(&var_8, &(&data_976b50)[arg3 * 8], arg2, &(&data_976b54)[arg3 * 8], 
                &var_8, &var_c, &var_10, 0)
        else
            result = sub_427180(&(&data_976b50)[arg3 * 8], arg4, arg2, &(&data_976b50)[arg3 * 8], 
                &(&data_976b54)[arg3 * 8], edx_3, ecx_5, &var_8, &var_c, &var_10, "AVG_BANK", 0, 
                arg7)
        
        if (arg5 == 0xffffffff)
            return result
        
        return sub_4a7e60(result, (&data_976b54)[arg3 * 8], arg5, var_8, var_c)

if (arg6 != 0)
    sub_4cf1e0(&var_14, &var_20, arg2, &var_14, &var_8, &var_c, &var_10, 0)
else
    sub_427180(&var_20, arg4, arg2, &var_20, &var_14, 0, nullptr, &var_8, &var_c, &var_10, 
        "AVG_G00_EXPAND_TMP", 0, arg7)

void* edi_1 = var_14
int32_t ebx_2 = var_c
uint32_t eax_12 = var_8

if (arg5 != 0xffffffff)
    sub_4a7e60(eax_12, edi_1, arg5, eax_12, ebx_2)
    eax_12 = var_8

int32_t var_30_7 = 0xff
int32_t var_34_6 = 0xffffffff
int32_t var_38_3 = 0xffffffff
int32_t var_3c_4 = 0xffffffff
sub_584e80(eax_12, (&data_976b58)[arg3 * 8], (&data_976b54)[arg3 * 8], (&data_976b5c)[arg3 * 8], 
    edi_1, eax_12, ebx_2, 0, 0, 0, 0, 0, 0xff)
return sub_4d6c40(&var_20, &var_14)
