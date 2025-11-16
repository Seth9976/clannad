// 函数: sub_5ee500
// 地址: 0x5ee500
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

double var_38 = arg5
double var_40 = arg6
double xmm0_2 = 8.0
double xmm0_3 = 0.5
int32_t eax_1 = arg8 << 2
arg1 -= 1
arg2 -= 1

if (arg1 s< 0xffffffff)
    arg1 = 0xffffffff

if (arg3 s> arg8 - 1)
    arg3 = arg8 - 1

int32_t result = arg2

if (result s< 0xffffffff)
    arg2 = 0xffffffff

if (arg4 s> arg9 - 1)
    result = arg9 - 1
    arg4 = result

int32_t ecx_5 = arg13
int32_t* edi = arg10

while (true)
    int32_t var_48_1 = (int.q(fconvert.t(var_38) - fconvert.t(xmm0_3))).d
    
    if (var_48_1 s>= arg1 && var_48_1 s<= arg3)
        int32_t result_1 = (int.q(fconvert.t(var_40) - fconvert.t(xmm0_3))).d
        result = result_1
        
        if (result s>= arg2 && result s<= arg4)
            void* eax_7 = ((result * arg8 + var_48_1) << 2) + arg7
            int32_t* esi_1 = eax_7
            int32_t var_14_1
            int32_t var_10_1
            int32_t var_c_1
            int32_t var_8_1
            
            if (var_48_1 s<= 0xffffffff)
                if (result s<= 0xffffffff)
                    var_10_1 = 0
                    var_14_1 = 0
                    var_c_1 = 0
                    var_8_1 = *(eax_7 + 4 + eax_1)
                else if (result s>= arg9 - 1)
                    var_10_1 = 0
                    var_14_1 = *(eax_7 + 4)
                    var_c_1 = 0
                    var_8_1 = 0
                else
                    var_10_1 = 0
                    var_14_1 = *(eax_7 + 4)
                    var_c_1 = 0
                    var_8_1 = *(eax_7 + 4 + eax_1)
            else if (var_48_1 s>= arg8 - 1)
                if (result s<= 0xffffffff)
                    var_10_1 = 0
                    var_14_1 = 0
                    var_c_1 = esi_1[arg8]
                    var_8_1 = 0
                else if (result s>= arg9 - 1)
                    var_10_1 = *esi_1
                    var_14_1 = 0
                    var_c_1 = 0
                    var_8_1 = 0
                else
                    var_10_1 = *esi_1
                    var_14_1 = 0
                    var_c_1 = esi_1[arg8]
                    var_8_1 = 0
            else if (result s<= 0xffffffff)
                var_10_1 = 0
                var_14_1 = 0
                var_c_1 = esi_1[arg8]
                var_8_1 = *(eax_7 + 4 + eax_1)
            else if (result s>= arg9 - 1)
                var_10_1 = *esi_1
                var_14_1 = *(eax_7 + 4)
                var_c_1 = 0
                var_8_1 = 0
            else
                var_10_1 = *esi_1
                var_14_1 = *(eax_7 + 4)
                var_c_1 = esi_1[arg8]
                var_8_1 = (eax_7 + 4)[arg8]
            
            int32_t ebx_6
            
            if ((var_10_1 & 0xff000000) != 0)
                ebx_6 = var_10_1 & 0xffffff
                
                if ((var_14_1 & 0xff000000) == 0)
                    var_14_1 = ebx_6
                
                if ((var_c_1 & 0xff000000) == 0)
                    var_c_1 = ebx_6
                
                if ((var_8_1 & 0xff000000) == 0)
                    var_8_1 = ebx_6
                
                goto label_5ee829
            
            if ((var_14_1 & 0xff000000) != 0)
                ebx_6 = var_14_1 & 0xffffff
                var_10_1 = ebx_6
                
                if ((var_c_1 & 0xff000000) == 0)
                    var_c_1 = ebx_6
                
                if ((var_8_1 & 0xff000000) == 0)
                    var_8_1 = ebx_6
                
                goto label_5ee829
            
            if ((var_c_1 & 0xff000000) != 0)
                ebx_6 = var_c_1 & 0xffffff
                var_10_1 = ebx_6
                var_14_1 = ebx_6
                
                if ((var_8_1 & 0xff000000) == 0)
                    var_8_1 = ebx_6
                
                goto label_5ee829
            
            result = var_8_1 & 0xff000000
            
            if (result != 0)
                ebx_6 = var_8_1 & 0xffffff
                var_10_1 = ebx_6
                var_14_1 = ebx_6
                var_c_1 = ebx_6
            label_5ee829:
                int32_t eax_43
                eax_43:1.b = (int.q((fconvert.t(var_38) - float.t(var_48_1)) * fconvert.t(xmm0_2)
                    - fconvert.t(xmm0_3))).d.b
                int32_t ecx_7
                ecx_7:1.b = (int.q((fconvert.t(var_40) - float.t(result_1)) * fconvert.t(xmm0_2)
                    - fconvert.t(xmm0_3))).d.b
                ebx_6.w = eax_43.w
                void* edx_5
                edx_5.w = ecx_7.w
                int32_t eax_44
                eax_44.w = ebx_6.w
                int32_t ecx_8
                ecx_8.w = edx_5.w
                int80_t st0
                st0.q = 0
                int64_t st1 = _m_punpckhwd(zx.q(var_10_1), 0)
                int64_t st2 = _m_punpckhwd(zx.q(var_14_1), 0)
                int16_t st3[0x4] = _m_punpckhwd(zx.q(var_c_1), 0)
                int16_t st4[0x4] =
                    _m_psubw(_m_psubw(_m_paddw(_m_punpckhwd(zx.q(var_8_1), 0), st1), st2), st3)
                st2 = _m_psubw(st2, st1)
                st3 = _m_psubw(st3, st1)
                uint64_t st5 = _m_punpckhwd(zx.q(eax_44), 0)
                uint64_t st7 = _m_punpckhwd(zx.q(ecx_8), 0)
                st4 = _m_pmullw(st4, _m_pmullw(st5, st7))
                st2 = _m_pmullw(st2, st5)
                st3 = _m_pmullw(st3, st7)
                st4 = _m_psrawi(st4, 6)
                result = _m_packuswb(
                    _m_paddw(_m_paddw(st1, _m_paddw(_m_psrawi(st2, 3), _m_psrawi(st3, 3))), st4), 0).d
                uint32_t ebx_8 = result u>> 0x18
                
                if (ebx_8 != 0)
                    if (ebx_8 != 0xff)
                        int32_t edx_12 = *((ebx_8 << 2) + data_1cd4328)
                        int24_t var_10_2 = result.3
                        int32_t ebx_12
                        ebx_12.b = var_10_2.b
                        int32_t eax_45
                        eax_45.b = *edi
                        *edi = eax_45.b + (*(((ebx_12 - eax_45) << 2) + edx_12)).b
                        int32_t ebx_16
                        ebx_16.b = var_10_2:1.b
                        int32_t eax_47
                        eax_47.b = *(edi + 1)
                        *(edi + 1) = eax_47.b + (*(((ebx_16 - eax_47) << 2) + edx_12)).b
                        int32_t ebx_20
                        ebx_20.b = var_10_2:2.b
                        int32_t eax_49
                        eax_49.b = *(edi + 2)
                        result = eax_49 + *(((ebx_20 - eax_49) << 2) + edx_12)
                        *(edi + 2) = result.b
                    else
                        *edi = result
    
    int32_t temp0_23 = ecx_5
    ecx_5 -= 1
    
    if (temp0_23 == 1)
        break
    
    var_38 = fconvert.d(fconvert.t(var_38) + fconvert.t(arg11))
    var_40 = fconvert.d(fconvert.t(var_40) + fconvert.t(arg12))
    edi = &edi[1]

return result
