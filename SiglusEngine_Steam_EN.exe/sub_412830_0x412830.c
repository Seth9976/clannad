// 函数: sub_412830
// 地址: 0x412830
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t esi_1
int32_t edi_1

if (arg6 == 0)
    edi_1 = arg5
    esi_1 = arg4
else
    esi_1 = arg3 - 1 + arg4
    edi_1 = arg2 - 1 + arg5

if (arg3 s> esi_1)
    int32_t eax = arg3
    arg3 = esi_1
    esi_1 = eax

if (arg2 s> edi_1)
    int32_t eax_1 = arg2
    arg2 = edi_1
    edi_1 = eax_1

int32_t var_14 = edi_1
int32_t var_18 = esi_1
int32_t result = sub_494c90(arg3, arg2)
data_703004 = 1

if (data_702fc0 != 0 && data_1af0a78 != 0)
    bool cond:1_1 = data_1318520 != 2
    data_20cc940.d = 1
    
    if (not(cond:1_1))
        return sub_563b20(0)

return result
