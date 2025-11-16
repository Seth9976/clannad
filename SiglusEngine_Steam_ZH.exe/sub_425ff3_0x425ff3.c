// 函数: sub_425ff3
// 地址: 0x425ff3
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* eax_3 = *(arg1 + 0x60) * arg2 + *(arg1 + 0x64) * arg3 + *(arg1 + 0x20)
float* esi = arg4
int32_t edi
int32_t var_c = edi
void* edi_1 = &eax_3[*(arg1 + 0x68)]

if (eax_3 u< edi_1)
    long double x87_r7_1 = fconvert.t(0.000977517106f)
    
    do
        int32_t ebx_2 = *eax_3 & 0x3ff
        long double x87_r6_1 = float.t(ebx_2)
        
        if (ebx_2 s< 0)
            x87_r6_1 = x87_r6_1 + fconvert.t(4.2949673e+09f)
        
        *esi = fconvert.s(x87_r6_1 * x87_r7_1)
        int32_t ebx_5 = *eax_3 u>> 0xa & 0x3ff
        long double x87_r6_3 = float.t(ebx_5)
        
        if (ebx_5 s< 0)
            x87_r6_3 = x87_r6_3 + fconvert.t(4.2949673e+09f)
        
        esi[1] = fconvert.s(x87_r6_3 * x87_r7_1)
        int32_t ebx_8 = *eax_3 u>> 0x14 & 0x3ff
        long double x87_r6_5 = float.t(ebx_8)
        
        if (ebx_8 s< 0)
            x87_r6_5 = x87_r6_5 + fconvert.t(4.2949673e+09f)
        
        esi[2] = fconvert.s(x87_r6_5 * x87_r7_1)
        uint32_t ebx_10 = *eax_3 u>> 0x1e
        long double x87_r6_7 = float.t(ebx_10)
        
        if (ebx_10 s< 0)
            x87_r6_7 = x87_r6_7 + fconvert.t(4.2949673e+09f)
        
        eax_3 = &eax_3[1]
        esi = &esi[4]
        esi[-1] = fconvert.s(x87_r6_7 * fconvert.t(0.333333343f))
    while (eax_3 u< edi_1)

if (*(arg1 + 0x18) != 0)
    sub_41eede(arg1, esi - (*(arg1 + 0x68) << 4))

int16_t x87control

if (*(arg1 + 0x10) != 0)
    sub_41f14b(arg1, x87control, esi - (*(arg1 + 0x68) << 4))
