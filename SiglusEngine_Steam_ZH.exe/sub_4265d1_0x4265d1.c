// 函数: sub_4265d1
// 地址: 0x4265d1
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

char* eax_3 = *(arg1 + 0x60) * arg2 + *(arg1 + 0x64) * arg3 + *(arg1 + 0x20)
float* esi = arg4
int32_t edi
int32_t var_c = edi
void* edi_1 = &eax_3[*(arg1 + 0x68) << 1]

if (eax_3 u< edi_1)
    long double x87_r7_1 = fconvert.t(0.142857149f)
    
    do
        int32_t edx_3
        edx_3.b = *eax_3
        edx_3.b u>>= 5
        *esi = fconvert.s(float.t(edx_3 & 7) * x87_r7_1)
        int32_t edx_5
        edx_5.b = *eax_3
        edx_5.b u>>= 2
        esi = &esi[4]
        esi[-3] = fconvert.s(float.t(edx_5 & 7) * x87_r7_1)
        int32_t edx_7
        edx_7.b = *eax_3
        eax_3 = &eax_3[2]
        esi[-2] = fconvert.s(float.t(edx_7 & 3) * fconvert.t(0.333333343f))
        esi[-1] = fconvert.s(float.t(zx.d(eax_3[0xffffffff])) * fconvert.t(0.00392156886f))
    while (eax_3 u< edi_1)

if (*(arg1 + 0x18) != 0)
    sub_41eede(arg1, esi - (*(arg1 + 0x68) << 4))

int16_t x87control

if (*(arg1 + 0x10) != 0)
    sub_41f14b(arg1, x87control, esi - (*(arg1 + 0x68) << 4))
