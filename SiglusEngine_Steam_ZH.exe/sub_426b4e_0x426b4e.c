// 函数: sub_426b4e
// 地址: 0x426b4e
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

float* esi = arg4
int32_t edi
int32_t var_c = edi
char* eax_3 = *(arg1 + 0x60) * arg2 + *(arg1 + 0x64) * arg3 + *(arg1 + 0x20)
void* ecx_3 = &eax_3[*(arg1 + 0x68) << 2]

if (eax_3 u< ecx_3)
    long double x87_r7_1 = fconvert.t(0.00787401572f)
    int32_t ebx
    int32_t var_10_1 = ebx
    
    do
        int32_t edx
        edx.b = *eax_3
        uint8_t ecx_5 = (*eax_3 u>> 8).b
        ebx.b = edx.b == 0x80
        ebx.b += edx.b
        edx.b = ecx_5 == 0x80
        edx.b += ecx_5
        eax_3 = &eax_3[4]
        *esi = fconvert.s(float.t(sx.d(ebx.b)) * x87_r7_1)
        esi = &esi[4]
        esi[-3] = fconvert.s(float.t(sx.d(edx.b)) * x87_r7_1)
        esi[-2] = fconvert.s(float.t(1))
        esi[-1] = fconvert.s(float.t(zx.d(eax_3[0xfffffffe])) * fconvert.t(0.00392156886f))
    while (eax_3 u< ecx_3)

if (*(arg1 + 0x18) != 0)
    sub_41eede(arg1, esi - (*(arg1 + 0x68) << 4))

int16_t x87control

if (*(arg1 + 0x10) != 0)
    sub_41f14b(arg1, x87control, esi - (*(arg1 + 0x68) << 4))
