// 函数: sub_6cad70
// 地址: 0x6cad70
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t esi
int32_t var_364 = esi
int32_t edi
int32_t var_368 = edi
char const* const var_35c = "1.6.21"
char var_358[0x40]
_memset(&var_358, 0, 0x308)
int32_t var_e8 = 0xf4240
int32_t var_e4 = 0xf4240
int32_t var_e0 = 0x3e8
int32_t var_dc = 0x7a1200
int32_t var_108 = 0
int32_t var_104 = 0
int32_t var_100 = 0
int32_t var_304 = 0
int32_t var_30c = 0
int32_t var_308 = 0
void var_50
__setjmp3(&__saved_ebp, esi, edi, &var_50, 0)
void* var_314_1 = &var_50
int32_t var_310_1 = 0
int32_t (* var_318_1)(int32_t* arg1, int32_t arg2) = sub_74b480

if (sub_6cac00(&var_358, var_35c) != 0)
    uint32_t var_36c_1 = 0x308
    int32_t result
    
    if (var_104 == 0)
        result = _malloc(var_36c_1)
    else
        result = var_104(&var_358, var_36c_1)
    
    if (result != 0)
        int32_t (* var_2b4)(void* arg1, int32_t arg2, int32_t arg3) = sub_6caa00
        void* (* var_2b0)(void* arg1, int32_t arg2) = sub_6caa40
        int32_t result_1 = result
        int32_t var_314_2 = 0
        int32_t var_310_2 = 0
        int32_t var_318_2 = 0
        __builtin_memcpy(result, &var_358, 0x308)
        sub_745f2b(eax_1 ^ &__saved_ebp)
        return result
    
    sub_6d4470(&var_358, "Out of memory")

sub_745f2b(eax_1 ^ &__saved_ebp)
return 0
