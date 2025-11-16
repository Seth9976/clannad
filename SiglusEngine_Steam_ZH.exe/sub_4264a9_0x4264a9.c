// 函数: sub_4264a9
// 地址: 0x4264a9
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

float* esi = arg4
char* eax_3 = *(arg1 + 0x60) * arg2 + *(arg1 + 0x64) * arg3 + *(arg1 + 0x20)
int32_t edi
int32_t var_c = edi
void* edi_2 = *(arg1 + 0x68) + eax_3

if (eax_3 u< edi_2)
    long double x87_r7_1 = fconvert.t(0.142857149f)
    
    do
        uint32_t edx_1
        edx_1.b = *eax_3
        edx_1.b u>>= 5
        *esi = fconvert.s(float.t(zx.d(edx_1.b)) * x87_r7_1)
        uint32_t edx_2
        edx_2.b = *eax_3
        edx_2.b u>>= 2
        edx_2.b &= 7
        esi = &esi[4]
        esi[-3] = fconvert.s(float.t(zx.d(edx_2.b)) * x87_r7_1)
        uint32_t edx_3
        edx_3.b = *eax_3
        edx_3.b &= 3
        eax_3 = &eax_3[1]
        esi[-2] = fconvert.s(float.t(zx.d(edx_3.b)) * fconvert.t(0.333333343f))
        esi[-1] = fconvert.s(float.t(1))
    while (eax_3 u< edi_2)

if (*(arg1 + 0x18) != 0)
    sub_41eede(arg1, esi - (*(arg1 + 0x68) << 4))

int16_t x87control

if (*(arg1 + 0x10) != 0)
    sub_41f14b(arg1, x87control, esi - (*(arg1 + 0x68) << 4))
