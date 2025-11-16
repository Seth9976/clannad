// 函数: sub_499870
// 地址: 0x499870
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t result = 0
void* ebx = &data_f2e6f8
int32_t result_1 = 0

for (void* i = &data_8c52dc; i s< 0x8d02dc; )
    if (result u<= 0x3ff)
        *i -= 1
        int32_t eax = sub_4d6c40(ebx, ebx + 4)
        *(i - 0x28) = 0
        sub_4d1ba0(eax, 0x24, i - 0x24, 0)
        result = result_1
        *i = 0
        *ebx = 0
        *(ebx + 4) = 0
    
    result += 1
    i += 0x2c
    ebx += 0x34
    result_1 = result

return result
