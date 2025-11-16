// 函数: sub_4269cd
// 地址: 0x4269cd
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

float* esi = arg4
int32_t edi
int32_t var_c = edi
char* eax_3 = *(arg1 + 0x60) * arg2 + *(arg1 + 0x64) * arg3 + *(arg1 + 0x20)
int32_t ecx_3 = &eax_3[*(arg1 + 0x68) << 1]
arg2 = ecx_3

if (eax_3 u< ecx_3)
    long double x87_r7_1 = fconvert.t(0.00787401572f)
    int32_t ebx
    int32_t var_10_1 = ebx
    
    do
        ecx_3.b = *eax_3
        char edx = eax_3[1]
        ebx.b = ecx_3.b == 0x80
        ebx.b += ecx_3.b
        int32_t ecx_4
        ecx_4.b = edx == 0x80
        ecx_4.b += edx
        *esi = fconvert.s(float.t(sx.d(ebx.b)) * x87_r7_1)
        eax_3 = &eax_3[2]
        esi = &esi[4]
        esi[-3] = fconvert.s(float.t(sx.d(ecx_4.b)) * x87_r7_1)
        esi[-2] = fconvert.s(float.t(1))
        esi[-1] = fconvert.s(float.t(1))
    while (eax_3 u< arg2)

if (*(arg1 + 0x18) != 0)
    sub_41eede(arg1, esi - (*(arg1 + 0x68) << 4))

int16_t x87control

if (*(arg1 + 0x10) != 0)
    sub_41f14b(arg1, x87control, esi - (*(arg1 + 0x68) << 4))
