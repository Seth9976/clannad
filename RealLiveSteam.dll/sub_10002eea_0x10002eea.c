// 函数: sub_10002eea
// 地址: 0x10002eea
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\RealLiveSteam.dll

int32_t i

do
    int32_t result = _malloc(arg1)
    
    if (result != 0)
        return result
    
    i = __callnewh(arg1)
while (i != 0)
int32_t var_18_3 = 1
char const* const var_8 = "bad allocation"
struct std::exception::VTable* var_14
sub_10004da2(&var_14, &var_8)
var_14 = &std::bad_alloc::`vftable'{for `std::exception'}
sub_10004eaa(&var_14, 0x10015e44)
noreturn
