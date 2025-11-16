// 函数: __atof_l
// 地址: 0x74b531
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
char* esi = arg1
void* var_30
sub_7470a1(&var_30, arg2)
long double result

if (esi != 0)
    void* edx_1 = var_30
    
    while (true)
        int32_t eax_4
        
        if (*(edx_1 + 0x74) s<= 1)
            eax_4 = zx.d(*(*(edx_1 + 0x90) + (zx.d(*esi) << 1))) & 8
        else
            eax_4 = __isctype_l(zx.d(*esi), 8, &var_30)
            edx_1 = var_30
        
        if (eax_4 == 0)
            break
        
        esi = &esi[1]
    
    void var_20
    result = fconvert.t(*(sub_74df4e(&var_20, esi, &var_30) + 0x10))
else
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    result = float.t(0)

char var_24
void* var_28

if (var_24 != 0)
    *(var_28 + 0x70) &= 0xfffffffd
sub_745f2b(eax_1 ^ &__saved_ebp)
return result
