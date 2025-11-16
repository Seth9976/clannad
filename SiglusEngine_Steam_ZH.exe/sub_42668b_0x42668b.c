// 函数: sub_42668b
// 地址: 0x42668b
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

char* eax_3 = *(arg1 + 0x60) * arg2 + *(arg1 + 0x64) * arg3 + *(arg1 + 0x20)
float* esi = arg4
int32_t edi
int32_t var_c = edi
void* edi_1 = &eax_3[*(arg1 + 0x68) << 1]

if (eax_3 u< edi_1)
    long double x87_r7_1 = fconvert.t(0.0666666701f)
    
    do
        uint32_t edx_2
        edx_2.b = eax_3[1]
        edx_2.b &= 0xf
        *esi = fconvert.s(float.t(zx.d(edx_2.b)) * x87_r7_1)
        int32_t edx_4
        edx_4.b = *eax_3
        edx_4.b u>>= 4
        esi = &esi[4]
        esi[-3] = fconvert.s(float.t(edx_4 & 0xf) * x87_r7_1)
        int32_t edx_6
        edx_6.b = *eax_3
        eax_3 = &eax_3[2]
        esi[-2] = fconvert.s(float.t(edx_6 & 0xf) * x87_r7_1)
        esi[-1] = fconvert.s(float.t(1))
    while (eax_3 u< edi_1)

if (*(arg1 + 0x18) != 0)
    sub_41eede(arg1, esi - (*(arg1 + 0x68) << 4))

int16_t x87control

if (*(arg1 + 0x10) != 0)
    sub_41f14b(arg1, x87control, esi - (*(arg1 + 0x68) << 4))
