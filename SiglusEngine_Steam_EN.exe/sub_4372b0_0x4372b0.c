// 函数: sub_4372b0
// 地址: 0x4372b0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
char* edx
ecx, edx = __chkstk(0x1008)
int32_t __saved_ebp
int32_t var_8 = __security_cookie ^ &__saved_ebp
int32_t var_14 = ecx
char* var_100c = edx
char var_1008[0xfec]
void* eax_3 = sub_4d1140(edx, &var_100c, edx, &var_1008, 0x1000)
int32_t result

if (eax_3 != 0)
    result = 1
else
    sub_4cfdf0(eax_3, &var_1008, arg2 * 0x34 + 0x5c + ecx, 0x24)
    result = 0

*arg1 = var_100c
int32_t entry_ebx
sub_5f02dd(entry_ebx ^ &__saved_ebp)
return result
