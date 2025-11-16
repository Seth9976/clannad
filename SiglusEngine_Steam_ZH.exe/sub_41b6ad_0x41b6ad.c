// 函数: sub_41b6ad
// 地址: 0x41b6ad
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* ecx = sub_745f3f(arg2 << 4)

if (ecx == 0)
    return 

long double x87_r7_1 = float.t(arg1)
void* var_20_1 = ecx

if (arg1 s< 0)
    x87_r7_1 = x87_r7_1 + fconvert.t(4.2949673e+09f)

long double x87_r6_1 = float.t(arg2)

if (arg2 s< 0)
    x87_r6_1 = x87_r6_1 + fconvert.t(4.2949673e+09f)

int16_t x87status_1
int16_t temp0_1
temp0_1, x87status_1 = __fnstcw_memmem16(arg3)
int16_t x87control
int16_t x87status_2
x87control, x87status_2 = __fldcw_memmem16(temp0_1 | 0xc00)
int16_t var_8_1
var_8_1.d = 0

if (arg2 u> 0)
    do
        long double x87_r7_3 = float.t(var_8_1.d)
        
        if (var_8_1.d s< 0)
            x87_r7_3 = x87_r7_3 + fconvert.t(4.2949673e+09f)
        
        float var_c_2 = fconvert.s(
            (x87_r7_3 + fconvert.t(0.5f)) * fconvert.t(fconvert.s(x87_r7_1 / x87_r6_1))
            + fconvert.t(0.5f))
        int32_t eax_7 = int.d(fconvert.t(var_c_2))
        int32_t edx_1 = eax_7 - 1
        long double x87_r7_10 = float.t(eax_7) + fconvert.t(1f) - fconvert.t(var_c_2)
        
        if (edx_1 s< 0)
            int32_t edx_3 = neg.d(arg4)
            edx_1 = sbb.d(edx_3, edx_3, arg4 != 0) & (arg1 - 1)
        
        if (eax_7 u>= arg1)
            int32_t eax_9 = neg.d(arg4)
            eax_7 = not.d(sbb.d(eax_9, eax_9, arg4 != 0)) & (arg1 - 1)
        
        *(ecx + 4) = fconvert.s(x87_r7_10)
        *ecx = edx_1
        *(ecx + 8) = eax_7
        ecx += 0x10
        var_8_1.d += 1
        *(ecx - 4) = fconvert.s(float.t(1) - x87_r7_10)
    while (var_8_1.d u< arg2)

int16_t x87control_1
int16_t x87status_3
x87control_1, x87status_3 = __fldcw_memmem16(temp0_1)
