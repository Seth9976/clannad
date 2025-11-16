// 函数: sub_425dda
// 地址: 0x425dda
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int16_t* eax_3 = *(arg1 + 0x60) * arg2 + *(arg1 + 0x64) * arg3 + *(arg1 + 0x20)
float* esi = arg4
int32_t edi
int32_t var_c = edi
void* edi_1 = &eax_3[*(arg1 + 0x68)]

if (eax_3 u< edi_1)
    long double x87_r7_1 = fconvert.t(0.0322580636f)
    
    do
        int32_t edx_3
        edx_3.w = *eax_3
        *esi = fconvert.s(float.t(edx_3 u>> 0xa & 0x1f) * x87_r7_1)
        int32_t edx_6
        edx_6.w = *eax_3
        esi = &esi[4]
        esi[-3] = fconvert.s(float.t(edx_6 u>> 5 & 0x1f) * x87_r7_1)
        int32_t edx_9
        edx_9.b = *eax_3
        eax_3 = &eax_3[1]
        esi[-2] = fconvert.s(float.t(edx_9 & 0x1f) * x87_r7_1)
        esi[-1] = fconvert.s(float.t(1))
    while (eax_3 u< edi_1)

if (*(arg1 + 0x18) != 0)
    sub_41eede(arg1, esi - (*(arg1 + 0x68) << 4))

int16_t x87control

if (*(arg1 + 0x10) != 0)
    sub_41f14b(arg1, x87control, esi - (*(arg1 + 0x68) << 4))
