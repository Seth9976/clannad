// 函数: sub_57e3c0
// 地址: 0x57e3c0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = data_703010
void* result = &data_f8c734
int32_t i_1 = 0x40
int32_t i

do
    int32_t esi_1 = *result
    result += 0x3920
    *(result - 0x3900) = esi_1 + ebx
    *(result - 0x38fc) = data_703014 + *(result - 0x391c)
    *(result - 0x38f8) = data_703018 + esi_1
    *(result - 0x38f4) = data_70301c + *(result - 0x391c)
    i = i_1
    i_1 -= 1
while (i != 1)
return result
