// 函数: sub_407280
// 地址: 0x407280
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_4_1 = ecx
int32_t esi = *arg2
int16_t x87control
int32_t eax = __ftol(x87control, fconvert.t(arg2[0xc]) * fconvert.t(0.29999999999999999))
int32_t i = 0
int32_t edx_1 = *(arg1 + *arg2[1] * 0x3c + 0xa0)

if (*(arg3 + 0x484) s<= 0)
    return 

int32_t* edi_1 = arg4

do
    int32_t eax_5 = edx_1
    
    if (edx_1 s< esi)
        do
            float* ecx_6 = *edi_1 + (eax_5 << 2)
            long double x87_r5_1 = float.t(eax_5 - edx_1)
            eax_5 += 1
            *ecx_6 = fconvert.s((fconvert.t(1.0) - x87_r5_1 / float.t(esi - edx_1) * float.t(eax))
                * fconvert.t(*ecx_6))
        while (eax_5 s< esi)
    
    i += 1
    edi_1 = &edi_1[1]
while (i s< *(arg3 + 0x484))
