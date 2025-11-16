// 函数: sub_6dfd40
// 地址: 0x6dfd40
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx = data_4ebe304
int32_t result = (data_4ebe308 - ecx) s>> 2

if (result u>= 1)
    return result

int32_t ecx_2 = (ecx - data_4ebe300) s>> 2

if (0x3fffffff - ecx_2 u>= 1)
    return sub_6dfdd0(sub_6dfd90(ecx_2 + 1))

sub_743191("vector<T> too long")
noreturn
