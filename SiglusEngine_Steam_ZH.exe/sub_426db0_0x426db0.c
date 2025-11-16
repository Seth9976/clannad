// 函数: sub_426db0
// 地址: 0x426db0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* eax_3 = *(arg1 + 0x60) * arg2 + *(arg1 + 0x64) * arg3 + *(arg1 + 0x20)
void* edx_3 = &eax_3[*(arg1 + 0x68)]
float* esi = arg4

if (eax_3 u< edx_3)
    long double x87_r7_1 = fconvert.t(0.00195694715f)
    int32_t edi
    int32_t var_10_1 = edi
    
    do
        int32_t edx_4 = *eax_3
        int32_t edi_1
        edi_1.w = *eax_3
        uint32_t edx_5
        edx_5.w = (edx_4 u>> 0x14).w << 6
        edx_5.w s>>= 6
        edi_1.w <<= 6
        edi_1.w s>>= 6
        uint16_t ebx_2 = (edx_4 u>> 0xa).w << 6 s>> 6
        int16_t edx_6
        edx_6.b = edi_1.w == 0xfe00
        int16_t edx_9
        edx_9.b = ebx_2 == 0xfe00
        *esi = fconvert.s(float.t(sx.d(edx_6 + edi_1.w)) * x87_r7_1)
        int16_t edx_12
        edx_12.b = edx_5.w == 0xfe00
        esi[1] = fconvert.s(float.t(sx.d(edx_9 + ebx_2)) * x87_r7_1)
        esi[2] = fconvert.s(float.t(sx.d(edx_12 + edx_5.w)) * x87_r7_1)
        uint32_t edx_16 = *eax_3 u>> 0x1e
        long double x87_r6_7 = float.t(edx_16)
        
        if (edx_16 s< 0)
            x87_r6_7 = x87_r6_7 + fconvert.t(4.2949673e+09f)
        
        eax_3 = &eax_3[1]
        esi = &esi[4]
        esi[-1] = fconvert.s(x87_r6_7 * fconvert.t(0.333333343f))
    while (eax_3 u< edx_3)

if (*(arg1 + 0x18) != 0)
    sub_41eede(arg1, esi - (*(arg1 + 0x68) << 4))

int16_t x87control

if (*(arg1 + 0x10) != 0)
    sub_41f14b(arg1, x87control, esi - (*(arg1 + 0x68) << 4))
