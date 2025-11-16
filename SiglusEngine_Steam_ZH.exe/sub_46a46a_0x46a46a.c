// 函数: sub_46a46a
// 地址: 0x46a46a
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

char* esi = arg2
int32_t edi
int32_t var_2c = edi
sub_46a2a3(arg1, &esi[8])
char eax_1 = *esi
long double x87_r7_1 = fconvert.t(0.00392156886f)
uint32_t ecx_1
ecx_1.b = esi[1]
float var_24 = fconvert.s(float.t(zx.d(eax_1)) * x87_r7_1)
float var_20_1 = fconvert.s(float.t(zx.d(ecx_1.b)) * x87_r7_1)

if (eax_1 u<= ecx_1.b)
    for (uint32_t i = 1; i u< 5; )
        long double x87_r7_6 = float.t(5 - i)
        
        if (5 - i s< 0)
            x87_r7_6 = x87_r7_6 + fconvert.t(4.2949673e+09f)
        
        long double x87_r6_7 = float.t(i)
        
        if (i s< 0)
            x87_r6_7 = x87_r6_7 + fconvert.t(4.2949673e+09f)
        
        i += 1
        (&var_24)[i] = fconvert.s((x87_r7_6 * fconvert.t(var_24) + x87_r6_7 * fconvert.t(var_20_1))
            * fconvert.t(0.200000003f))
    
    float var_c_1 = fconvert.s(float.t(0))
    float var_8_1 = fconvert.s(float.t(1))
else
    for (uint32_t i_1 = 1; i_1 u< 7; )
        long double x87_r7_2 = float.t(7 - i_1)
        
        if (7 - i_1 s< 0)
            x87_r7_2 = x87_r7_2 + fconvert.t(4.2949673e+09f)
        
        long double x87_r6_5 = float.t(i_1)
        
        if (i_1 s< 0)
            x87_r6_5 = x87_r6_5 + fconvert.t(4.2949673e+09f)
        
        i_1 += 1
        (&var_24)[i_1] = fconvert.s((x87_r7_2 * fconvert.t(var_24)
            + x87_r6_5 * fconvert.t(var_20_1)) * fconvert.t(0.142857149f))

int32_t ecx_4
ecx_4:1.b = esi[4]
int32_t i_4 = 8
ecx_4.b = esi[3]
int32_t ecx_6 = ecx_4 << 8 | zx.d(esi[2])
void* eax_3 = &arg1[3]
int32_t i_2

do
    long double x87_r7_12 = fconvert.t((&var_24)[ecx_6 & 7])
    ecx_6 u>>= 3
    *eax_3 = fconvert.s(x87_r7_12)
    eax_3 += 0x10
    i_2 = i_4
    i_4 -= 1
while (i_2 != 1)
int32_t ecx_7
ecx_7:1.b = esi[7]
int32_t i_5 = 8
ecx_7.b = esi[6]
int32_t ecx_9 = ecx_7 << 8 | zx.d(esi[5])
float* eax_5 = &arg1[0x23]
int32_t i_3

do
    long double x87_r7_13 = fconvert.t((&var_24)[ecx_9 & 7])
    ecx_9 u>>= 3
    *eax_5 = fconvert.s(x87_r7_13)
    eax_5 = &eax_5[4]
    i_3 = i_5
    i_5 -= 1
while (i_3 != 1)
