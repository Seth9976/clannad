// 函数: sub_4528d2
// 地址: 0x4528d2
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

*(arg1 + 0x118) |= 4
int32_t edi
int32_t var_c = edi
int32_t i = 0
int32_t mxcsr
int16_t x87control

if (*(arg1 + 0x10c) u> 0)
    do
        int16_t* eax_2 = *(arg1 + 0x108) + (i << 2)
        int16_t* ecx_3 = zx.d(*eax_2) * 0x64 + *(arg1 + 0x2c)
        int32_t* eax_5 = zx.d(eax_2[1]) * 0x64 + *(ecx_3 + 4)
        eax_5[0xc] &= 0xfffffffd
        
        if (ecx_3[0x1e] u> 0 && *eax_5 != 0)
            if (((eax_5[0xc]).b & 8) == 0)
                int16_t* eax_7 = *(arg1 + 0x108) + (i << 2)
                mxcsr, x87control = sub_450f28(arg1, *eax_7, eax_7[1], 0xffff)
            else
                int32_t* var_10_1 = eax_5
                mxcsr, x87control = sub_451f1a(arg1, ecx_3)
        
        i += 1
    while (i u< *(arg1 + 0x10c))

if ((*(arg1 + 0x118) & 1) != 0)
    __controlfp(mxcsr, x87control, *(arg1 + 0x114), 0x30000)
    *(arg1 + 0x118) &= 0xfffffffe

*(arg1 + 0x10c) = 0
*(arg1 + 0x118) &= 0xfffffffb
return 0
