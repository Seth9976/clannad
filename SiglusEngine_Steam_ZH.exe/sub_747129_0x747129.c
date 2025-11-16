// 函数: sub_747129
// 地址: 0x747129
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
char* esi = arg1
void* var_30
sub_7470a1(&var_30, arg3)

if (arg2 != 0)
    *arg2 = arg1

long double result

if (arg1 != 0)
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
    int32_t* edx_2 = sub_74df4e(&var_20, esi, &var_30)
    
    if (arg2 != 0)
        *arg2 = &esi[edx_2[1]]
    
    if ((*edx_2 & 0x240) != 0)
        result = float.t(0)
        
        if (arg2 != 0)
            *arg2 = arg1
    else if ((*edx_2 & 0x81) == 0)
        bool p_1
        
        if ((*edx_2 & 0x100) != 0)
            long double x87_r7_2 = fconvert.t(*(edx_2 + 0x10))
            long double x87_r6_1 = float.t(0)
            x87_r6_1 - x87_r7_2
            int32_t* eax_7
            eax_7.w = (x87_r6_1 < x87_r7_2 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_1, x87_r7_2) ? 1 : 0) << 0xa
                | (x87_r6_1 == x87_r7_2 ? 1 : 0) << 0xe
            p_1 = unimplemented  {test ah, 0x44}
        
        if ((*edx_2 & 0x100) == 0 || p_1)
            result = fconvert.t(*(edx_2 + 0x10))
        else
            *__errno() = 0x22
            result = float.t(0)
    else
        long double x87_r7_1 = fconvert.t(data_b4cc00)
        
        if (*esi == 0x2d)
            x87_r7_1 = fneg(x87_r7_1)
        
        result = fconvert.t(fconvert.d(x87_r7_1))
        *__errno() = 0x22
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
