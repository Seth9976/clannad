// 函数: sub_426553
// 地址: 0x426553
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

char* eax_3 = *(arg1 + 0x60) * arg2 + *(arg1 + 0x64) * arg3 + *(arg1 + 0x20)
void* edx_3 = *(arg1 + 0x68) + eax_3
float* esi = arg4

if (eax_3 u< edx_3)
    int32_t edi
    int32_t var_c_1 = edi
    
    do
        *esi = fconvert.s(float.t(0))
        esi = &esi[4]
        esi[-3] = fconvert.s(float.t(0))
        esi[-2] = fconvert.s(float.t(0))
        uint32_t edi_1 = zx.d(*eax_3)
        eax_3 = &eax_3[1]
        esi[-1] = fconvert.s(float.t(edi_1) * fconvert.t(0.00392156886f))
    while (eax_3 u< edx_3)

if (*(arg1 + 0x18) != 0)
    sub_41eede(arg1, esi - (*(arg1 + 0x68) << 4))

int16_t x87control

if (*(arg1 + 0x10) != 0)
    sub_41f14b(arg1, x87control, esi - (*(arg1 + 0x68) << 4))
