// 函数: sub_426a7b
// 地址: 0x426a7b
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

float* esi = arg4
int32_t edi
int32_t var_c = edi
char* eax_3 = *(arg1 + 0x60) * arg2 + *(arg1 + 0x64) * arg3 + *(arg1 + 0x20)
void* ecx_3 = &eax_3[*(arg1 + 0x68) << 1]

if (eax_3 u< ecx_3)
    long double x87_r7_1 = fconvert.t(0.0666666701f)
    int32_t ebx
    int32_t var_10_1 = ebx
    
    do
        int32_t edx
        edx.b = *eax_3
        int32_t ecx_4
        ecx_4.w = *eax_3
        edx.b <<= 3
        edx.b s>>= 3
        uint8_t ecx_5 = (ecx_4 u>> 5).b << 3 s>> 3
        ebx.b = edx.b == 0xf0
        ebx.b += edx.b
        edx.b = ecx_5 == 0xf0
        edx.b += ecx_5
        *esi = fconvert.s(float.t(sx.d(ebx.b)) * x87_r7_1)
        esi = &esi[4]
        esi[-3] = fconvert.s(float.t(sx.d(edx.b)) * x87_r7_1)
        esi[-2] = fconvert.s(float.t(1))
        int32_t ecx_6
        ecx_6.w = *eax_3
        ecx_6.w u>>= 0xa
        eax_3 = &eax_3[2]
        esi[-1] = fconvert.s(float.t(zx.d(ecx_6.w)) * fconvert.t(0.0158730168f))
    while (eax_3 u< ecx_3)

if (*(arg1 + 0x18) != 0)
    sub_41eede(arg1, esi - (*(arg1 + 0x68) << 4))

int16_t x87control

if (*(arg1 + 0x10) != 0)
    sub_41f14b(arg1, x87control, esi - (*(arg1 + 0x68) << 4))
