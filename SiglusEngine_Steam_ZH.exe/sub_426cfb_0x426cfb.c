// 函数: sub_426cfb
// 地址: 0x426cfb
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* eax_3 = *(arg1 + 0x60) * arg2 + *(arg1 + 0x64) * arg3 + *(arg1 + 0x20)
int32_t edx_3 = eax_3 + (*(arg1 + 0x68) << 2)
float* esi = arg4
arg2 = edx_3

if (eax_3 u< edx_3)
    long double x87_r7_1 = fconvert.t(3.05185094e-05f)
    int32_t edi
    int32_t var_10_1 = edi
    
    do
        edx_3.w = *(eax_3 + 2)
        int16_t edi_1 = *eax_3
        int16_t ebx_1
        ebx_1.b = edi_1 == 0x8000
        int16_t ebx_3
        ebx_3.b = edx_3.w == 0x8000
        eax_3 += 4
        *esi = fconvert.s(float.t(sx.d(ebx_1 + edi_1)) * x87_r7_1)
        esi = &esi[4]
        esi[-3] = fconvert.s(float.t(sx.d(ebx_3 + edx_3.w)) * x87_r7_1)
        esi[-2] = fconvert.s(float.t(1))
        esi[-1] = fconvert.s(float.t(1))
    while (eax_3 u< arg2)

if (*(arg1 + 0x18) != 0)
    sub_41eede(arg1, esi - (*(arg1 + 0x68) << 4))

int16_t x87control

if (*(arg1 + 0x10) != 0)
    sub_41f14b(arg1, x87control, esi - (*(arg1 + 0x68) << 4))
