// 函数: sub_6cb760
// 地址: 0x6cb760
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp_1
int32_t __saved_ebp = __saved_ebp_1
void var_134
int32_t eax_1 = __security_cookie ^ &var_134
int32_t __saved_ebx_1
int32_t __saved_ebx = __saved_ebx_1
char ebx = (*(arg2 + 0x4a)).b
int32_t __saved_esi_1
int32_t __saved_esi = __saved_esi_1
int32_t __saved_edi_1
int32_t __saved_edi = __saved_edi_1

if ((ebx & 1) != 0)
    int32_t eax_2 = *arg2
    
    if (arg4 == 0 || eax_2 == 0)
    label_6cb816:
        char const* const edx_2
        double var_148
        char var_120[0xdc]
        
        if ((ebx & 0x20) != 0 || arg5 == 2)
            if ((*(arg3 + 0x74) & 0x8000) != 0)
                if ((*(arg3 + 0x78) & 0x100000) == 0)
                    sub_6d47a0(arg3, "gamma value does not match sRGB")
                    noreturn
                
                var_148:4.d = "gamma value does not match sRGB"
                sub_6d4690(eax_2, &var_120, arg3)
                sub_6d4470(arg3, &var_120)
                int32_t eax_6
                eax_6.b = arg5 == 2
                sub_745f2b(eax_1 ^ &var_134)
                return eax_6
            
            edx_2 = "gamma value does not match sRGB"
            
            if ((*(arg3 + 0x78) & &__dos_header) != 0)
                sub_6d4470(arg3, "gamma value does not match sRGB")
                int32_t eax_7
                eax_7.b = arg5 == 2
                sub_745f2b(eax_1 ^ &var_134)
                return eax_7
        else
            if ((*(arg3 + 0x74) & 0x8000) != 0)
                var_148:4.d = "gamma value does not match libpng estimate"
                sub_6d4690(eax_2, &var_120, arg3)
                sub_6d4470(arg3, &var_120)
                int32_t eax_4
                eax_4.b = arg5 == 1
                sub_745f2b(eax_1 ^ &var_134)
                return eax_4
            
            edx_2 = "gamma value does not match libpng estimate"
            
            if ((*(arg3 + 0x78) & 0x200000) != 0)
                sub_6d4470(arg3, "gamma value does not match libpng estimate")
                int32_t eax_5
                eax_5.b = arg5 == 1
                sub_745f2b(eax_1 ^ &var_134)
                return eax_5
        sub_6d42e0(arg3, edx_2)
        noreturn
    
    int32_t mxcsr
    int16_t x87control
    long double st0_1
    st0_1, eax_2 = sub_74c3d0(mxcsr, x87control, 
        fconvert.d(fconvert.t(_mm_cvtepi32_pd(zx.q(eax_2)) * 100000.0 / _mm_cvtepi32_pd(zx.q(arg4))
            + 0.5)))
    double var_128_2 = fconvert.d(st0_1)
    
    if (0x41dfffffffc00000 f< var_128_2 || var_128_2 < -2147483648.0)
        goto label_6cb816
    
    eax_2 = int.d(var_128_2) - 0x17318
    
    if (eax_2 u> 0x2710)
        goto label_6cb816

sub_745f2b(eax_1 ^ &var_134)
return 1
