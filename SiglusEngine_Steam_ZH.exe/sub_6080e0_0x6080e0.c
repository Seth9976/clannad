// 函数: sub_6080e0
// 地址: 0x6080e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void** esi = arg1

if (esi[5] u>= 0x10)
    esi = *esi

*__errno() = 0
int32_t var_8
float var_c = fconvert.s(__atodbl(esi, &var_8))

if (esi == var_8)
    sub_743163("invalid stof argument")
    noreturn

void* result = __errno()

if (*result != 0x22)
    return result

sub_7431bf("stof argument out of range")
noreturn
