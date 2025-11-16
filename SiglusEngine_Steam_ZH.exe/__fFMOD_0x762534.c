// 函数: __fFMOD
// 地址: 0x762534
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

bool c1 = false
long double x87_r0 = arg2
bool c0
bool c2_1
bool c3

do
    long double st0_1
    uint8_t temp0
    st0_1, c2_1, temp0 = __fprem(x87_r0, arg1)
    x87_r0 = st0_1
    
    if (not(c2_1))
        c0 = (temp0 & 4) != 0
        c1 = (temp0 & 1) != 0
        c3 = (temp0 & 2) != 0
while (test_bit(
    ((c0 ? 1 : 0) << 8 | (c1 ? 1 : 0) << 9 | (c2_1 ? 1 : 0) << 0xa | (c3 ? 1 : 0) << 0xe):1.b, 2))
return arg1
