// 函数: sub_40e530
// 地址: 0x40e530
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = arg3
float* eax_1 = &arg1[esi]
int16_t x87control = sub_40e720(eax_1)
int32_t* ebx = arg5
__builtin_memset(ebx, 0, 0x20)
int32_t edi_1 = arg4
void* result = nullptr
int32_t var_2c_1
__builtin_memset(&var_2c_1, 0, 0x28)
arg3 = 0
*ebx = esi
ebx[1] = edi_1

if (edi_1 s>= arg6)
    edi_1 = arg6 - 1

int32_t var_28_1
int32_t var_24_1
int32_t var_20_1
int32_t var_1c_1
int32_t var_18_1
int32_t var_14_1
int32_t var_10_1
int32_t var_c_1
int32_t var_8_1

if (esi s<= edi_1)
    arg5 = eax_1
    
    do
        int32_t eax_5
        eax_5, x87control = sub_40e720(arg5)
        
        if (eax_5 != 0)
            long double x87_r7_2 = fconvert.t(*(arg2 - arg1 + arg5)) + fconvert.t(*(arg7 + 0x458))
            long double temp0_1 = fconvert.t(*arg5)
            x87_r7_2 - temp0_1
            float* eax_6
            eax_6.w = (x87_r7_2 < temp0_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_2, temp0_1) ? 1 : 0) << 0xa
                | (x87_r7_2 == temp0_1 ? 1 : 0) << 0xe
            
            if ((eax_6:1.b & 1) != 0)
                var_20_1 += eax_5
                var_28_1 += esi
                var_18_1 += esi * esi
                var_10_1 += eax_5 * eax_5
                var_8_1 += eax_5 * esi
                arg3 += 1
            else
                var_24_1 += eax_5
                var_2c_1 += esi
                var_1c_1 += esi * esi
                var_14_1 += eax_5 * eax_5
                var_c_1 += eax_5 * esi
                result += 1
        
        esi += 1
        arg5 = &arg5[1]
    while (esi s<= edi_1)

arg3 += result
int32_t eax_24 =
    __ftol(x87control, float.t(arg3) * fconvert.t(*(arg7 + 0x454)) / float.t(result + 1))
ebx[2] = (eax_24 + 1) * var_2c_1 + var_28_1
ebx[3] = (eax_24 + 1) * var_24_1 + var_20_1
ebx[4] = (eax_24 + 1) * var_1c_1 + var_18_1
ebx[5] = (eax_24 + 1) * var_14_1 + var_10_1
ebx[6] = (eax_24 + 1) * var_c_1 + var_8_1
ebx[7] = eax_24 * result + arg3
return result
