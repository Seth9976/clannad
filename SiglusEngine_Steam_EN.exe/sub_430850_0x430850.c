// 函数: sub_430850
// 地址: 0x430850
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
void* result = __security_cookie ^ &__saved_ebp
void* result_1 = result
void* esi = &data_8c4db4

for (int32_t i = 0; i s< 0x20; )
    char var_214[0x20c]
    
    if (*esi != 0)
        result = sub_4306f0(sub_4cfdf0(result, esi, &var_214, 0x24), &var_214, i, *(esi + 0x24))
    i += 1
    esi += 0x28

sub_5f02dd(result_1 ^ &__saved_ebp)
return result
