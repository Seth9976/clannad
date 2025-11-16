// 函数: sub_713c40
// 地址: 0x713c40
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx = data_4ebee40
int32_t result = (data_4ebee44 - ecx) s>> 3

if (result u>= arg1)
    return result

int32_t ecx_2 = (ecx - data_4ebee3c) s>> 3

if (0x1fffffff - ecx_2 u>= arg1)
    return sub_713b40(sub_713c90(ecx_2 + arg1)) __tailcall

sub_743191("vector<T> too long")
noreturn
