// 函数: sub_401000
// 地址: 0x401000
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

long double x87_r7_1 = fconvert.t(arg1) - fconvert.t(arg2)
long double x87_r6 = fconvert.t(-1.1920929e-07f)
x87_r6 - x87_r7_1
int32_t eax
eax.w = (x87_r6 < x87_r7_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7_1) ? 1 : 0) << 0xa
    | (x87_r6 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800
bool p = unimplemented  {test ah, 0x41}

if (p)
    return 

long double temp1_1 = fconvert.t(1.1920929e-07f)
x87_r7_1 - temp1_1
eax.w = (x87_r7_1 < temp1_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_1, temp1_1) ? 1 : 0) << 0xa
    | (x87_r7_1 == temp1_1 ? 1 : 0) << 0xe
unimplemented  {test ah, 0x41}
