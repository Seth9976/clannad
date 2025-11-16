// 函数: sub_47f210
// 地址: 0x47f210
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg3 s< 0 || arg3 s>= data_7031bc)
    return sub_476410(arg1, arg2, arg3, arg4)

enum MESSAGEBOX_RESULT result = arg4
int32_t edi = *((arg2 + (arg3 << 1)) * 0x7a0 + 0x98c180)

if (edi == 0 || result s< 0 || result s>= *((arg2 + (arg3 << 1)) * 0x7a0 + &data_98c178))
    return sub_476410(result, arg2, arg3, result)

enum MESSAGEBOX_RESULT result_1 = arg5
enum MESSAGEBOX_RESULT result_3 = arg7
void* ecx_1 = result * 0x7d8 + edi

if (result_1 s> result_3)
    result = result_1
    result_1 = result_3
    result_3 = result

enum MESSAGEBOX_RESULT result_4 = arg6
enum MESSAGEBOX_RESULT result_2 = arg8

if (result_4 s> result_2)
    result = result_4
    result_4 = result_2
    result_2 = result

*(ecx_1 + 0x20c) = result_1
*(ecx_1 + 0x210) = result_4
*(ecx_1 + 0x214) = result_3
*(ecx_1 + 0x218) = result_2
return result
