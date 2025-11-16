// 函数: sub_426c0d
// 地址: 0x426c0d
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
float* esi = arg4
int32_t edi
int32_t var_10 = edi
int32_t* eax_3 = *(arg1 + 0x60) * arg2 + *(arg1 + 0x64) * arg3 + *(arg1 + 0x20)
void* ecx_3 = &eax_3[*(arg1 + 0x68)]

if (eax_3 u< ecx_3)
    long double x87_r7_1 = fconvert.t(0.00787401572f)
    
    do
        int32_t ebx_1 = *eax_3
        arg4:3.b = (ebx_1 u>> 0x10).b
        arg2:3.b = (ebx_1 u>> 0x18).b
        uint8_t ecx_5 = (ebx_1 u>> 8).b
        uint8_t edx_4 = ebx_1.b
        ebx_1.b = edx_4 == 0x80
        ebx_1.b += edx_4
        int32_t edx_5
        edx_5.b = ecx_5 == 0x80
        edx_5.b += ecx_5
        int32_t ecx_6
        ecx_6.b = arg4:3.b == 0x80
        ecx_6.b += arg4:3.b
        *esi = fconvert.s(float.t(sx.d(ebx_1.b)) * x87_r7_1)
        int32_t ecx_7
        ecx_7.b = arg2:3.b == 0x80
        ecx_7.b += arg2:3.b
        esi[1] = fconvert.s(float.t(sx.d(edx_5.b)) * x87_r7_1)
        eax_3 = &eax_3[1]
        esi = &esi[4]
        esi[-2] = fconvert.s(float.t(sx.d(ecx_6.b)) * x87_r7_1)
        esi[-1] = fconvert.s(float.t(sx.d(ecx_7.b)) * x87_r7_1)
    while (eax_3 u< ecx_3)

if (*(arg1 + 0x18) != 0)
    sub_41eede(arg1, esi - (*(arg1 + 0x68) << 4))

int16_t x87control

if (*(arg1 + 0x10) != 0)
    sub_41f14b(arg1, x87control, esi - (*(arg1 + 0x68) << 4))
