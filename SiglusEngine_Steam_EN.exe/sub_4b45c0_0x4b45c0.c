// 函数: sub_4b45c0
// 地址: 0x4b45c0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx = 0xff

if (data_703060 != 0)
    ecx = data_1bff87c
    
    if (ecx s> 0xff)
        ecx = 0xff
    else if (ecx s< 0)
        ecx = 0

int32_t eax = data_703050
int32_t edx = data_702ff4
int32_t esi = data_702ff8
int32_t var_14
int32_t var_10
int32_t var_c
int32_t var_8
int32_t ebx
int32_t edi

if (eax == 0xbf)
    ebx = edx
    var_14 = esi
    edi = 0x1a
    var_c = data_703098
    var_8 = data_70309c
    edx = data_702ff4
    var_10 = 0x1b
else
    edi = 0x1b
    ebx = data_703098
    var_14 = data_70309c
    eax = data_703050
    var_10 = 0x1a
    var_c = edx
    var_8 = esi

int32_t result = eax - 0xbe

if (result u> 1)
    return result

int32_t var_24_1 = ecx
int32_t var_28_1 = data_1bff94c
int32_t var_2c_1 = ecx
int32_t var_30_1 = data_703000
int32_t var_34_1 = data_702ffc
int32_t var_38_1 = esi
int32_t var_3c_1 = edx
int32_t var_48_1 = var_8
int32_t var_4c_1 = var_c
int32_t var_50_1 = var_10
return sub_4b4110(result, ebx, edi, var_14)
