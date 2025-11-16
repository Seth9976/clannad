// 函数: sub_6cd7e0
// 地址: 0x6cd7e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

char ebx = arg4.b
void* edi = arg3
void* var_18 = edi
int32_t edx = 1 << (8 - ebx)
double xmm1_1 = 1.0 / _mm_cvtepi32_pd(zx.q((1 << (0x10 - ebx)) - 1))
char* result = sub_6d81b0(edi, edx << 2)
int32_t ebx_1 = 0
char* result_1 = result
*arg2 = result

if (edx u> 0)
    do
        if (edi != 0)
            int32_t eax_4 = *(edi + 0x254)
            void* eax_5
            
            if (eax_4 == 0)
                eax_5 = _malloc(0x200)
            else
                eax_5 = eax_4(edi, 0x200)
            
            edi = eax_5
            
            if (edi == 0)
                sub_6d42e0(var_18, "Out of memory")
                noreturn
            
            result = result_1
        
        int32_t i = 0
        *(result + (ebx_1 << 2)) = edi
        
        if (arg5 - 0x17318 u<= 0x2710)
            do
                int32_t eax_15 = (i << (8 - ebx)) + ebx_1
                int32_t edx_1
                
                if (arg4 != 0)
                    eax_15 = divu.dp.d(0:(eax_15 * 0xffff + (1 << (0xf - ebx))), edx_1 - 1)
                *(edi + (i << 1)) = eax_15.w
                i += 1
            while (i u< 0x100)
        else
            double var_3c_1 = _mm_cvtepi32_pd(zx.q(arg5)) * 1.0000000000000001e-05
            
            do
                int32_t eax_9 = (i << (8 - ebx)) + ebx_1
                int32_t mxcsr
                int16_t x87control
                int16_t x87control_1
                double xmm0_6
                x87control_1, xmm0_6 = __libm_sse2_pow_precise(i, edi, mxcsr, x87control, 
                    (_mm_cvtepi32_pd(zx.q(eax_9)) f+ *((eax_9 u>> 0x1f << 3) + &data_b0dbb0))
                        * xmm1_1)
                void* var_54
                var_54.q = fconvert.d(fconvert.t(xmm0_6 * 65535.0 + 0.5))
                int16_t x87control_2
                int80_t st0_1
                st0_1, x87control_2 = sub_74c3d0(mxcsr, x87control_1, var_54)
                int16_t x87status_1
                int16_t temp0_1
                temp0_1, x87status_1 = __fnstcw_memmem16(x87control_2)
                double var_24_1
                var_24_1:4.d = zx.d(temp0_1) | 0xc00
                int16_t x87control_3
                int16_t x87status_2
                x87control_3, x87status_2 = __fldcw_memmem16(var_24_1:4.w)
                var_24_1:4.d = int.d(st0_1)
                int32_t eax_12
                eax_12.w = var_24_1:4.w
                *(edi + (i << 1)) = eax_12.w
                i += 1
                int16_t x87status_3
                x87control, x87status_3 = __fldcw_memmem16(temp0_1)
            while (i u< 0x100)
        
        edi = var_18
        ebx_1 += 1
        result = result_1
    while (ebx_1 u< edx)

return result
