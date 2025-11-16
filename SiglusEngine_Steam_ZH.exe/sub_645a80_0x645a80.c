// 函数: sub_645a80
// 地址: 0x645a80
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp

if (arg2 s<= 0 || arg4 s<= 0)
    int32_t ecx_5 = eax_1
    eax_1.b = 0
    sub_745f2b(ecx_5 ^ &__saved_ebp)
    return eax_1

arg3[3] = arg2
arg3[4] = arg4
sub_5979b0(arg3, (arg2 * arg4) << 2)
void var_4c
void var_3c
void var_2c
void var_1c
sub_645370(&var_1c, arg4, arg2, &var_1c, &var_3c, &var_4c, &var_2c)
double* j_2 = 1 << arg6
int32_t i = 0
double* j_3 = j_2
double xmm2_1 = 90.0 / _mm_cvtepi32_pd(zx.q(j_2))
double var_68 = xmm2_1

do
    double xmm0_2 = xmm2_1
    double xmm1_1 = (zx.o(0)).q
    double var_60_1 = xmm0_2
    
    if (j_2 s> 0)
        double* ebx_1 = *(&var_2c + i)
        double* j_1 = j_2
        double* j
        
        do
            int32_t* var_80
            var_80.q = xmm0_2
            int32_t* var_88
            var_88.q = xmm1_1
            j_2 = sub_645430(j_2, arg5, arg3, *(&var_1c + i), *(&var_3c + i), *(&var_4c + i), 
                ebx_1, 0, 0xff, var_88, var_80)
            xmm2_1 = var_68
            xmm1_1 = var_60_1
            xmm0_2 = var_60_1 + xmm2_1
            var_60_1 = xmm0_2
            j = j_1
            j_1 -= 1
        while (j != 1)
        j_2 = j_3
    
    i += 4
while (i s< 0x10)

j_2.b = 1
sub_745f2b(eax_1 ^ &__saved_ebp)
return j_2
