// 函数: sub_4268ab
// 地址: 0x4268ab
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

char* eax_3 = *(arg1 + 0x60) * arg2 + *(arg1 + 0x64) * arg3 + *(arg1 + 0x20)
float* esi = arg4
int32_t edi
int32_t var_c = edi
void* edi_1 = &eax_3[*(arg1 + 0x68) << 1]

if (eax_3 u< edi_1)
    long double x87_r7_1 = fconvert.t(0.00392156886f)
    
    do
        long double x87_r6_1 = float.t(zx.d(*eax_3))
        eax_3 = &eax_3[2]
        long double x87_r6_2 = x87_r6_1 * x87_r7_1
        esi[2] = fconvert.s(x87_r6_2)
        esi[1] = fconvert.s(x87_r6_2)
        *esi = fconvert.s(x87_r6_2)
        esi = &esi[4]
        esi[-1] = fconvert.s(float.t(zx.d(eax_3[0xffffffff])) * x87_r7_1)
    while (eax_3 u< edi_1)

if (*(arg1 + 0x18) != 0)
    sub_41eede(arg1, esi - (*(arg1 + 0x68) << 4))

int16_t x87control

if (*(arg1 + 0x10) != 0)
    sub_41f14b(arg1, x87control, esi - (*(arg1 + 0x68) << 4))
