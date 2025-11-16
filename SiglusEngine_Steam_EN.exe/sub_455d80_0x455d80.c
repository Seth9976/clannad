// 函数: sub_455d80
// 地址: 0x455d80
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
void var_48
void var_38
void var_28
void var_18
sub_455ae0(arg2, arg4, arg2, &var_18, &var_28, &var_38, &var_48)
int32_t result = 1 << arg5
int32_t i = 0
int32_t result_1 = result
double xmm1_1 = 90.0 / _mm_cvtepi32_pd(zx.q(result))
double var_64 = xmm1_1

do
    double xmm0_2 = xmm1_1
    double xmm2_1 = (zx.o(0)).q
    double var_5c_1 = xmm0_2
    
    if (result s> 0)
        double* ebx_1 = *(&var_48 + i)
        int32_t edi_1 = result
        int32_t j
        
        do
            int32_t* var_7c
            var_7c.q = xmm0_2
            int32_t* var_84
            var_84.q = xmm2_1
            void var_8c
            result = sub_455ba0(result, arg2, arg3, arg4, *(&var_18 + i), *(&var_28 + i), 
                *(&var_38 + i), ebx_1, var_8c, var_84)
            xmm1_1 = var_64
            xmm2_1 = var_5c_1
            xmm0_2 = var_5c_1 + xmm1_1
            var_5c_1 = xmm0_2
            j = edi_1
            edi_1 -= 1
        while (j != 1)
        result = result_1
    
    i += 4
while (i s< 0x10)

sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
