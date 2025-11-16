// 函数: sub_427b80
// 地址: 0x427b80
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t* result = __security_cookie ^ &__saved_ebp
int32_t* result_1 = result
void* esi = &data_9265b0

for (int32_t i = 0; i s< 0x100; )
    char var_214[0x20c]
    
    if (*esi != 0)
        result = sub_427aa0(sub_4cfdf0(result, esi, &var_214, 0x24), &var_214, i, *(esi + 0x24))
    i += 1
    esi += 0x28

sub_5f02dd(result_1 ^ &__saved_ebp)
return result
