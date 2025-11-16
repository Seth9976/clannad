// 函数: sub_7215b0
// 地址: 0x7215b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9d31b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t arg_4
int32_t arg_8
int32_t arg_c
int32_t arg_10

if (sub_7224a0(&arg_4, &arg_8, &arg_c, &arg_10, arg1[0x10], arg1[0x11], arg1[0x12], arg1[0x13])
        != 0)
    int32_t ecx_3 = arg_10 - arg1[0xe]
    int32_t edx_2 = arg_4 - arg1[0xd]
    int32_t edi_2 = arg_8 - arg1[0xe]
    int32_t ebx_2 = arg_c - arg1[0xd]
    bool cond:0_1 = arg1[0x34].b == 0
    arg_10 = ecx_3
    
    if (not(cond:0_1))
        uint64_t xmm4_1 = zx.q(arg1[0x21])
        int32_t eax_4 = arg1[0x22]
        double xmm1_3 = _mm_cvtepi32_pd(zx.q(arg1[0x20])) / 1000.0
        double xmm4_3 = _mm_cvtepi32_pd(xmm4_1) / 1000.0
        int32_t eax_5
        
        if (eax_4 == 0)
            edx_2 = int.d(_mm_cvtepi32_pd(zx.q(edx_2)) * xmm1_3)
            edi_2 = int.d(_mm_cvtepi32_pd(zx.q(edi_2)) * xmm4_3)
            ebx_2 = int.d(_mm_cvtepi32_pd(zx.q(ebx_2)) * xmm1_3)
            eax_5 = int.d(_mm_cvtepi32_pd(zx.q(ecx_3)) * xmm4_3)
        else
            double xmm5_1 = *((eax_4 << 3) + &data_4e2f580)
            double xmm3_2 = _mm_cvtepi32_pd(zx.q(edx_2))
            double xmm2_2 = _mm_cvtepi32_pd(zx.q(edi_2))
            double xmm3_3 = xmm3_2 * xmm1_3
            double xmm6_2 = _mm_cvtepi32_pd(zx.q(ecx_3))
            double xmm2_3 = xmm2_2 * xmm4_3
            double xmm7_3 = _mm_cvtepi32_pd(zx.q(ebx_2)) * xmm1_3
            double xmm6_3 = xmm6_2 * xmm4_3
            double xmm4_4 = *((eax_4 << 3) + &data_4e36600)
            edx_2 = int.d(xmm5_1 * xmm3_3 - xmm4_4 * xmm2_3)
            edi_2 = int.d(xmm4_4 * xmm3_3 + xmm5_1 * xmm2_3)
            eax_5 = int.d(xmm4_4 * xmm7_3 + xmm5_1 * xmm6_3)
            ebx_2 = int.d(xmm5_1 * xmm7_3 - xmm4_4 * xmm6_3)
        
        arg_10 = eax_5
    
    int32_t var_30_1 = arg1[9]
    int32_t eax_6 = arg1[0x1c]
    int32_t var_34_1 = arg1[8]
    arg_10 += eax_6
    int32_t var_38_1 = arg1[7]
    int32_t var_3c_1 = arg1[6]
    int32_t ebx_3 = ebx_2 + arg1[0x1b]
    arg_4 = edx_2 + arg1[0x1b]
    arg_8 = edi_2 + eax_6
    arg_c = ebx_3
    
    if (sub_7224a0(&arg_4, &arg_8, &arg_c, &arg_10, var_3c_1, var_38_1, var_34_1, var_30_1) != 0)
        void* result = arg1[0x32]
        int32_t edi_4 = arg_c
        int32_t edx_4 = arg_8
        int32_t ebx_4 = arg_4
        
        if (result != 0 && arg1[0x33] != 0)
            *result = 1
            int32_t ecx_5 = edi_4
            
            if (ebx_4 s< edi_4)
                ecx_5 = ebx_4
            
            *arg1[0x33] = ecx_5
            int32_t ecx_6 = arg_10
            
            if (edx_4 s< ecx_6)
                ecx_6 = edx_4
            
            *(arg1[0x33] + 4) = ecx_6
            int32_t ecx_7 = edi_4
            
            if (ebx_4 s> edi_4)
                ecx_7 = ebx_4
            
            *(arg1[0x33] + 8) = ecx_7
            int32_t ecx_8 = arg_10
            
            if (edx_4 s> ecx_8)
                ecx_8 = edx_4
            
            *(arg1[0x33] + 0xc) = ecx_8
        
        if (*(arg1 + 0xc5) != 0)
            if (arg1[0x23] != 0)
                sub_720650(arg1, ebx_4, edx_4, 1)
                edx_4 = arg_8
            
            int32_t* var_1c = nullptr
            int32_t var_18_1 = 0
            int32_t var_14_1 = 0
            int32_t var_8_1 = 0
            int32_t eax_11
            
            if (ebx_4 s> edi_4)
                eax_11 = ebx_4 - edi_4
            else
                eax_11 = edi_4 - ebx_4
            
            int32_t ecx_10 = arg_10
            int32_t edi_6
            
            if (edx_4 s> ecx_10)
                edi_6 = edx_4 - ecx_10
            else
                edi_6 = ecx_10 - edx_4
            
            int32_t* edi_8 = edi_6 + 1
            
            if (eax_11 + 1 s> edi_8)
                edi_8 = eax_11 + 1
            
            sub_55c6f0(&var_1c, edi_8 * 2)
            uint32_t eax_15 = sub_721bb0(var_1c, edi_8, ebx_4, arg_8, arg_c, arg_10)
            
            if (eax_15 s> 0)
                sub_721f80(var_1c, eax_15)
            
            int32_t edx_5 = arg1[1]
            int32_t ecx_13 = edx_5 * arg_8
            int32_t eax_16 = *arg1
            arg1[0x82] = edi_8
            arg1[0x83] = 4
            int32_t* ebx_5 = var_1c
            arg1[0x81] = ebx_5
            arg1[0x7f] = eax_16 + ((ecx_13 + ebx_4) << 2)
            arg1[0x80] = arg1[0xa]
            arg1[0x84] = edx_5 << 2
            sub_767310(&__saved_ebp, &arg1[0x34], 2, arg2)
            
            if (ebx_5 != 0)
                j__free(ebx_5)
        
        result.b = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return result

fsbase->NtTib.ExceptionList = ExceptionList
return 0
