// 函数: sub_419270
// 地址: 0x419270
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg1
int32_t ecx = *arg1
var_8 = arg1

if (ecx s> 1)
    int32_t esi = arg1[2]
    int32_t result = 0
    int32_t i = 0
    
    if (ecx s> 0)
        do
            result += sub_419270()
            i += 1
            esi += 0x10
        while (i s< *var_8)
    
    return result

void* eax_1 = arg1[3]
int32_t ecx_1 = 0

if (data_12dc4bc != 0)
    ecx_1 = 0x1a

if (sub_4e76e0(eax_1, *(eax_1 + 0x20), ecx_1 + 0x19, &var_8, &data_704898) != 0 && var_8 != 0)
    return 1

return 0
