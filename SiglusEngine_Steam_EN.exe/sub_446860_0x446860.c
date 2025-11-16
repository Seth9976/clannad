// 函数: sub_446860
// 地址: 0x446860
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
void var_210
void* var_23c = &var_210
void var_228
void* var_240 = &var_228
void var_234
void* var_244 = &var_234
void var_230
void var_22c
int32_t var_224
int32_t var_220
int32_t var_21c
int16_t var_218
int16_t var_214
char* result =
    sub_446b30(&var_214, &var_224, arg1, &var_214, &var_218, &var_22c, &var_230, &var_220, &var_21c)

if (var_21c != 0)
    result = PostMessageA(arg1, 2, 0, 0x3e703e7)
else if (var_220 != 0)
    LPARAM lParam
    
    if (var_224 == 0)
        lParam = 0x2710
    else
        lParam = zx.d(var_218) << 0x10 | zx.d(var_214)
    
    result = PostMessageA(arg1, 0x111, 0x2739, lParam)

sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
