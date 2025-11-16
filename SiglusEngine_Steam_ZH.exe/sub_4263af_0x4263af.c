// 函数: sub_4263af
// 地址: 0x4263af
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi_3 = *(arg1 + 0x60) * arg2 + *(arg1 + 0x64) * arg3 + *(arg1 + 0x20)
void* eax_3 = &esi_3[*(arg1 + 0x68) * 2]
int32_t edi
int32_t var_10 = edi
float* edi_1 = arg4

if (esi_3 u< eax_3)
    long double x87_r7_1 = fconvert.t(1.52590219e-05f)
    
    do
        uint32_t ecx_1 = zx.d((*esi_3).w)
        long double x87_r6_1 = float.t(ecx_1)
        
        if (ecx_1 s< 0)
            x87_r6_1 = x87_r6_1 + fconvert.t(4.2949673e+09f)
        
        *edi_1 = fconvert.s(x87_r6_1 * x87_r7_1)
        uint32_t ecx_4 = zx.d((*esi_3 u>> 0x10).w) | zx.d((esi_3[1] << 0x10).w)
        long double x87_r6_3 = float.t(ecx_4)
        
        if (ecx_4 s< 0)
            x87_r6_3 = x87_r6_3 + fconvert.t(4.2949673e+09f)
        
        ecx_4.b = 0x20
        edi_1[1] = fconvert.s(x87_r6_3 * x87_r7_1)
        x87_r7_1 = fconvert.t(1.52590219e-05f)
        uint32_t eax_6 = zx.d(__aullshr(*esi_3, esi_3[1], ecx_4.b))
        long double x87_r6_5 = float.t(eax_6)
        
        if (eax_6 s< 0)
            x87_r6_5 = x87_r6_5 + fconvert.t(4.2949673e+09f)
        
        esi_3 = &esi_3[2]
        edi_1 = &edi_1[4]
        edi_1[-2] = fconvert.s(x87_r6_5 * x87_r7_1)
        edi_1[-1] = fconvert.s(float.t(zx.d(*(esi_3 - 2))) * x87_r7_1)
    while (esi_3 u< eax_3)

if (*(arg1 + 0x18) != 0)
    sub_41eede(arg1, edi_1 - (*(arg1 + 0x68) << 4))

int16_t x87control

if (*(arg1 + 0x10) != 0)
    sub_41f14b(arg1, x87control, edi_1 - (*(arg1 + 0x68) << 4))
