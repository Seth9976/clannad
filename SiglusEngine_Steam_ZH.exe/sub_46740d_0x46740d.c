// 函数: sub_46740d
// 地址: 0x46740d
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t var_c = ecx
int32_t* result = arg1
int32_t esi = 0
int32_t edi
int32_t var_18 = edi
int32_t* result_2 = nullptr
int32_t* result_1 = nullptr

if (result != 0)
    result = *result
    result_2 = result

if (arg2 != 0)
    esi = *arg2

if (arg3 != 0)
    result = *arg3
    result_1 = result

if (result_2 != 0)
    result = sub_4672f6(result_2, esi, result_1)

if (esi != 0)
    result = sub_498659(esi)
    *arg2 = 0

if (result_1 != 0)
    result = sub_498659(result_1)
    *arg3 = nullptr

if (result_2 != 0)
    sub_498659(result_2)
    result = arg1
    *result = 0

return result
