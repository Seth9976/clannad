// 函数: sub_437340
// 地址: 0x437340
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
char* edx
ecx, edx = __chkstk(0x1010)
int32_t __saved_ebp
int32_t var_8 = __security_cookie ^ &__saved_ebp
void var_1014
void* var_14 = &var_1014
int32_t* var_18 = &var_1014
char* var_100c = edx
int32_t* var_1008
void* result = sub_4d1280(edx, &var_100c, edx, &var_1008, var_18)
int32_t entry_ebx

if (result != 0)
    *arg1 = var_100c
    sub_5f02dd(entry_ebx ^ &__saved_ebp)
    return 1

int32_t var_1004

if (arg3 != result)
    int32_t ecx_6 = arg2 * 0x34
    *(ecx_6 + ecx + 0x88) = var_1008
    *(ecx_6 + ecx + 0x8c) = var_1004
    *arg1 = var_100c
    sub_5f02dd(entry_ebx ^ &__saved_ebp)
    return result

int32_t edx_2 = arg2 * 0x34
int32_t* ecx_3 = var_1008
*(edx_2 + ecx + 0x84) = var_1004
char* eax_4 = var_100c
*(edx_2 + ecx + 0x80) = ecx_3
*arg1 = eax_4
sub_5f02dd(entry_ebx ^ &__saved_ebp)
return result
