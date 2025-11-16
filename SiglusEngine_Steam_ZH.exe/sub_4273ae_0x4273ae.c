// 函数: sub_4273ae
// 地址: 0x4273ae
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* eax_3 = *(arg1 + 0x60) * arg2 + *(arg1 + 0x64) * arg3 + *(arg1 + 0x20)
void* edx_3 = &eax_3[*(arg1 + 0x68)]
float* esi = arg4

if (eax_3 u< edx_3)
    long double x87_r7_1 = fconvert.t(1.52590219e-05f)
    int32_t edi
    int32_t var_c_1 = edi
    
    do
        uint32_t edi_2 = zx.d((*eax_3).w)
        long double x87_r6_1 = float.t(edi_2)
        
        if (edi_2 s< 0)
            x87_r6_1 = x87_r6_1 + fconvert.t(4.2949673e+09f)
        
        long double x87_r6_2 = x87_r6_1 * x87_r7_1
        eax_3 = &eax_3[1]
        esi[2] = fconvert.s(x87_r6_2)
        esi[1] = fconvert.s(x87_r6_2)
        *esi = fconvert.s(x87_r6_2)
        esi = &esi[4]
        esi[-1] = fconvert.s(float.t(zx.d(*(eax_3 - 2))) * x87_r7_1)
    while (eax_3 u< edx_3)

if (*(arg1 + 0x18) != 0)
    sub_41eede(arg1, esi - (*(arg1 + 0x68) << 4))

int16_t x87control

if (*(arg1 + 0x10) != 0)
    sub_41f14b(arg1, x87control, esi - (*(arg1 + 0x68) << 4))
