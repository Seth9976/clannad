// 函数: sub_4953f0
// 地址: 0x4953f0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t result = arg1

if (result u<= 0x100 && arg2 u<= 0x100)
    int32_t edi_1 = *((result << 2) + &data_2073cb8)
    int32_t eax = result * 0x7e8
    void var_7f4
    sub_4d1c30(eax, eax + 0x1ff4cd0, &var_7f4, 0x7e8)
    *((result << 2) + &data_2073cb8) = *((arg2 << 2) + &data_2073cb8)
    result = arg2 * 0x7e8 + 0x1ff4cd0
    sub_4d1c30(result, result, eax + 0x1ff4cd0, 0x7e8)
    *((arg2 << 2) + &data_2073cb8) = edi_1
    sub_4d1c30(result, &var_7f4, result, 0x7e8)

return result
