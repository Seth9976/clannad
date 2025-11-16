// 函数: sub_482c90
// 地址: 0x482c90
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
uint32_t result = __security_cookie ^ &__saved_ebp
uint32_t result_1 = result
void* esi = &data_928db0

for (int32_t i = 0; i s< 0x100; )
    if (*esi != 0)
        char var_214[0x20c]
        sub_4cfdf0(result, esi, &var_214, 0x24)
        result = sub_482b30(i, &var_214)
    
    i += 1
    esi += 0x24

sub_5f02dd(result_1 ^ &__saved_ebp)
return result
