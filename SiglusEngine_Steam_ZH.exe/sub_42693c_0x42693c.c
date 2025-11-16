// 函数: sub_42693c
// 地址: 0x42693c
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

float* esi = arg4
char* eax_3 = *(arg1 + 0x60) * arg2 + *(arg1 + 0x64) * arg3 + *(arg1 + 0x20)
int32_t edi
int32_t var_c = edi
void* edi_2 = *(arg1 + 0x68) + eax_3

if (eax_3 u< edi_2)
    long double x87_r7_1 = fconvert.t(0.0666666701f)
    
    do
        uint32_t edx_1
        edx_1.b = *eax_3
        edx_1.b &= 0xf
        long double x87_r6_2 = float.t(zx.d(edx_1.b)) * x87_r7_1
        esi[2] = fconvert.s(x87_r6_2)
        esi[1] = fconvert.s(x87_r6_2)
        *esi = fconvert.s(x87_r6_2)
        uint32_t edx_2
        edx_2.b = *eax_3
        edx_2.b u>>= 4
        eax_3 = &eax_3[1]
        esi = &esi[4]
        esi[-1] = fconvert.s(float.t(zx.d(edx_2.b)) * x87_r7_1)
    while (eax_3 u< edi_2)

if (*(arg1 + 0x18) != 0)
    sub_41eede(arg1, esi - (*(arg1 + 0x68) << 4))

int16_t x87control

if (*(arg1 + 0x10) != 0)
    sub_41f14b(arg1, x87control, esi - (*(arg1 + 0x68) << 4))
