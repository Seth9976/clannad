// 函数: sub_41ed27
// 地址: 0x41ed27
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_10 = edi
int32_t eax = sub_745f3f(0x1000)
int32_t eax_1

if (eax == 0)
    eax_1 = 0
else
    sub_61cdd0(eax, 0x10, 0x100, sub_52e900)
    eax_1 = eax

float* ecx_1 = nullptr
*(arg1 + 0x38) = eax_1

if (eax_1 == 0)
    return 

void* i = nullptr

if (*(arg2 + 0x50) == 0)
    do
        *(i + *(arg1 + 0x38) + 0xc) = fconvert.s(float.t(1))
        *(i + *(arg1 + 0x38) + 8) = fconvert.s(float.t(1))
        *(i + *(arg1 + 0x38) + 4) = fconvert.s(float.t(1))
        *(i + *(arg1 + 0x38)) = fconvert.s(float.t(1))
        i += 0x10
    while (i u< 0x1000)
else
    long double x87_r7_1 = fconvert.t(0.00392156886f)
    
    do
        uint32_t edi_2 = zx.d(*(i + *(arg2 + 0x50)))
        i += 4
        *(ecx_1 + *(arg1 + 0x38)) = fconvert.s(float.t(edi_2) * x87_r7_1)
        ecx_1 = &ecx_1[4]
        *(ecx_1 + *(arg1 + 0x38) - 0xc) =
            fconvert.s(float.t(zx.d(*(i + *(arg2 + 0x50) - 3))) * x87_r7_1)
        *(ecx_1 + *(arg1 + 0x38) - 8) =
            fconvert.s(float.t(zx.d(*(i + *(arg2 + 0x50) - 2))) * x87_r7_1)
        *(ecx_1 + *(arg1 + 0x38) - 4) =
            fconvert.s(float.t(zx.d(*(i + *(arg2 + 0x50) - 1))) * x87_r7_1)
    while (i u< 0x400)
