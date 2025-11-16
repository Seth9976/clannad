// 函数: sub_481fe0
// 地址: 0x481fe0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t result = 0
void* i = &data_1b164b4
int32_t result_1 = 0

do
    if (result u<= 0xff)
        *i -= 1
        sub_4d6c40(i + 4, i + 8)
        sub_4d1ba0(sub_4d6c40(i + 0x1c, i + 0x20), 0x24, i - 0x24, 0)
        result = result_1
        *i = 0
        *(i + 4) = 0
        *(i + 8) = 0
        *(i + 0x1c) = 0
        *(i + 0x20) = 0
    
    result += 1
    i += 0x58
    result_1 = result
while (i s< &data_1b1bcb4)

return result
