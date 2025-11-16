// 函数: sub_5eec70
// 地址: 0x5eec70
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

double var_48 = arg5
double var_50 = arg6
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

if (data_1c45528 s< arg13)
    result = sub_58c8c0(arg13)

int32_t var_1c = 0
int32_t var_30 = 0xffffffff
int32_t ecx_7 = arg13
int32_t* edi = data_1ccd298

while (true)
    int32_t var_58_1 = (int.q(fconvert.t(var_48) - fconvert.t(xmm0_3))).d
    
    if (var_58_1 s>= arg1 && var_58_1 s<= arg3)
        int32_t result_1 = (int.q(fconvert.t(var_50) - fconvert.t(xmm0_3))).d
        result = result_1
        
        if (result s>= arg2 && result s<= arg4)
            var_1c += 1
            
            if (var_30 == 0xffffffff)
                var_30 = ecx_7
            
            void* eax_7 = ((result * arg8 + var_58_1) << 2) + arg7
            int32_t* esi_1 = eax_7
            int32_t var_14_1
            int32_t var_10_1
            int32_t var_c_1
            int32_t var_8_1
            
            if (var_58_1 s<= 0xffffffff)
                if (result s<= 0xffffffff)
                    var_14_1 = 0
                    var_10_1 = 0
                    var_c_1 = 0
                    var_8_1 = *(eax_7 + 4 + eax_1)
                else if (result s>= arg9 - 1)
                    var_14_1 = 0
                    var_10_1 = *(eax_7 + 4)
                    var_c_1 = 0
                    var_8_1 = 0
                else
                    var_14_1 = 0
                    var_10_1 = *(eax_7 + 4)
                    var_c_1 = 0
                    var_8_1 = *(eax_7 + 4 + eax_1)
            else if (var_58_1 s>= arg8 - 1)
                if (result s<= 0xffffffff)
                    var_14_1 = 0
                    var_10_1 = 0
                    var_c_1 = esi_1[arg8]
                    var_8_1 = 0
                else if (result s>= arg9 - 1)
                    var_14_1 = *esi_1
                    var_10_1 = 0
                    var_c_1 = 0
                    var_8_1 = 0
                else
                    var_14_1 = *esi_1
                    var_10_1 = 0
                    var_c_1 = esi_1[arg8]
                    var_8_1 = 0
            else if (result s<= 0xffffffff)
                var_14_1 = 0
                var_10_1 = 0
                var_c_1 = esi_1[arg8]
                var_8_1 = *(eax_7 + 4 + eax_1)
            else if (result s>= arg9 - 1)
                var_14_1 = *esi_1
                var_10_1 = *(eax_7 + 4)
                var_c_1 = 0
                var_8_1 = 0
            else
                var_14_1 = *esi_1
                var_10_1 = *(eax_7 + 4)
                var_c_1 = esi_1[arg8]
                var_8_1 = (eax_7 + 4)[arg8]
            
            int32_t ebx_6
            
            if ((var_14_1 & 0xff000000) != 0)
                ebx_6 = var_14_1 & 0xffffff
                
                if ((var_10_1 & 0xff000000) == 0)
                    var_10_1 = ebx_6
                
                if ((var_c_1 & 0xff000000) == 0)
                    var_c_1 = ebx_6
                
                if ((var_8_1 & 0xff000000) == 0)
                    var_8_1 = ebx_6
                
                goto label_5eefce
            
            if ((var_10_1 & 0xff000000) != 0)
                ebx_6 = var_10_1 & 0xffffff
                var_14_1 = ebx_6
                
                if ((var_c_1 & 0xff000000) == 0)
                    var_c_1 = ebx_6
                
                if ((var_8_1 & 0xff000000) == 0)
                    var_8_1 = ebx_6
                
                goto label_5eefce
            
            if ((var_c_1 & 0xff000000) != 0)
                ebx_6 = var_c_1 & 0xffffff
                var_14_1 = ebx_6
                var_10_1 = ebx_6
                
                if ((var_8_1 & 0xff000000) == 0)
                    var_8_1 = ebx_6
                
                goto label_5eefce
            
            if ((var_8_1 & 0xff000000) != 0)
                ebx_6 = var_8_1 & 0xffffff
                var_14_1 = ebx_6
                var_10_1 = ebx_6
                var_c_1 = ebx_6
            label_5eefce:
                int32_t eax_44
                eax_44:1.b = (int.q((fconvert.t(var_48) - float.t(var_58_1)) * fconvert.t(xmm0_2)
                    - fconvert.t(xmm0_3))).d.b
                int32_t ecx_9
                ecx_9:1.b = (int.q((fconvert.t(var_50) - float.t(result_1)) * fconvert.t(xmm0_2)
                    - fconvert.t(xmm0_3))).d.b
                ebx_6.w = eax_44.w
                void* edx_5
                edx_5.w = ecx_9.w
                int32_t eax_45
                eax_45.w = ebx_6.w
                int32_t ecx_10
                ecx_10.w = edx_5.w
                int80_t st0
                st0.q = 0
                int64_t st1 = _m_punpckhwd(zx.q(var_14_1), 0)
                int64_t st2 = _m_punpckhwd(zx.q(var_10_1), 0)
                int64_t st3 = _m_punpckhwd(zx.q(var_c_1), 0)
                int16_t st4[0x4] =
                    _m_psubw(_m_psubw(_m_paddw(_m_punpckhwd(zx.q(var_8_1), 0), st1), st2), st3)
                st2 = _m_psubw(st2, st1)
                st3 = _m_psubw(st3, st1)
                uint64_t st5 = _m_punpckhwd(zx.q(eax_45), 0)
                int16_t st7[0x4] = _m_punpckhwd(zx.q(ecx_10), 0)
                st4 = _m_pmullw(st4, _m_pmullw(st5, st7))
                st2 = _m_pmullw(st2, st5)
                st3 = _m_pmullw(st3, st7)
                st4 = _m_psrawi(st4, 6)
                result = _m_packuswb(
                    _m_paddw(_m_paddw(st1, _m_paddw(_m_psrawi(st2, 3), _m_psrawi(st3, 3))), st4), 0).d
                *edi = result
            else
                result = 0
                *edi = 0
    
    int32_t temp2_1 = ecx_7
    ecx_7 -= 1
    
    if (temp2_1 == 1)
        break
    
    var_48 = fconvert.d(fconvert.t(var_48) + fconvert.t(arg11))
    var_50 = fconvert.d(fconvert.t(var_50) + fconvert.t(arg12))
    edi = &edi[1]

if (var_1c == 0)
    return result

int32_t edx_11 = arg13 - var_30
int32_t eax_47 = edx_11 << 2
data_1cd43e8 = arg10 + eax_47
data_1cd43e4 = var_1c << 2
data_1cd43e0 = 1
data_1cd43dc = data_1ccd298 + eax_47
data_1cd43d8 = var_1c << 2
data_1cd43d4 = 1
data_1cd43d0 = var_1c
data_1cd43cc = 1
data_1cd43e4 -= var_1c << 2
data_1cd43d8 -= var_1c << 2

if (data_1cd4320 != 0 && data_1c45540 != 0xff)
    data_1c4598c += edx_11
    
    if (data_1c4598c s< data_1cd4368)
        data_1cd4370
        data_1cd435c = mods.dp.d(
            sx.q(data_1cd4370 - mods.dp.d(sx.q(data_1cd4368 - data_1c4598c), data_1cd4370)), 
            data_1cd4370)
    else
        data_1cd4370
        data_1cd435c = mods.dp.d(sx.q(data_1c4598c - data_1cd4368), data_1cd4370)
    
    if (data_1ccd290 s< data_1cd4364)
        data_1cd436c
        data_1cd4358 = mods.dp.d(
            sx.q(data_1cd436c - mods.dp.d(sx.q(data_1cd4364 - data_1ccd290), data_1cd436c)), 
            data_1cd436c)
    else
        data_1cd436c
        data_1cd4358 = mods.dp.d(sx.q(data_1ccd290 - data_1cd4364), data_1cd436c)
    
    data_1cd4354 = data_1cd435c
    data_1cd4350 = data_1cd4358 * data_1cd4370 + data_1cd437c
    data_1cd434c = data_1cd4370 * data_1cd436c + data_1cd437c

int32_t eax_82 = data_1c45540
return sub_582330(eax_82, data_1cd4320, data_1c4ce4c, eax_82, zx.d(data_1c0551e), 
    zx.d(data_1c0551c), zx.d(data_1c0551d), data_1c45984, data_1c4554c, data_1c45548, 
    zx.d(data_1ccce88), data_1ccce70)
