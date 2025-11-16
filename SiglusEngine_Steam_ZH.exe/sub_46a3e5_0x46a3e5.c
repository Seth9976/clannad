// 函数: sub_46a3e5
// 地址: 0x46a3e5
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = arg2
int32_t edi
int32_t var_c = edi
sub_46a2a3(arg1, &esi[2])
uint32_t ecx_1 = *esi
long double x87_r7_1 = fconvert.t(0.0666666701f)
int32_t i_3 = 8
float* eax_1 = &arg1[3]
int32_t i

do
    int32_t ebx_2 = ecx_1 & 0xf
    long double x87_r6_1 = float.t(ebx_2)
    
    if (ebx_2 s< 0)
        x87_r6_1 = x87_r6_1 + fconvert.t(4.2949673e+09f)
    
    ecx_1 u>>= 4
    *eax_1 = fconvert.s(x87_r6_1 * x87_r7_1)
    eax_1 = &eax_1[4]
    i = i_3
    i_3 -= 1
while (i != 1)
uint32_t esi_1 = esi[1]
int32_t i_2 = 8
void* eax_2 = &arg1[0x23]
int32_t i_1

do
    int32_t edx_2 = esi_1 & 0xf
    long double x87_r6_3 = float.t(edx_2)
    
    if (edx_2 s< 0)
        x87_r6_3 = x87_r6_3 + fconvert.t(4.2949673e+09f)
    
    esi_1 u>>= 4
    *eax_2 = fconvert.s(x87_r6_3 * x87_r7_1)
    eax_2 += 0x10
    i_1 = i_2
    i_2 -= 1
while (i_1 != 1)
