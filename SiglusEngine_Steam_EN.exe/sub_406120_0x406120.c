// 函数: sub_406120
// 地址: 0x406120
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax
int16_t x87control
int16_t x87control_1
eax, x87control_1 = __ftol(x87control, 
    (fconvert.t(arg3) + fconvert.t(arg7) - fconvert.t(30.0)) * fconvert.t(0.10000000149011612))
int32_t ecx
ecx.b = eax s<= 0
int32_t eax_1 = eax & (ecx - 1)

if (eax_1 s>= 7)
    eax_1 = 7

float* esi = *(arg2 + (eax_1 << 2))
float eax_2
int16_t x87control_2
eax_2, x87control_2 = __ftol(x87control_1, fconvert.t(esi[1]))
int32_t eax_5
int16_t x87control_3
eax_5, x87control_3 = __ftol(x87control_2, 
    (fconvert.t(*esi) - fconvert.t(16f)) * float.t(arg6) + float.t(arg4) - float.t(arg6 s>> 1))
int32_t edi = eax_5
float ecx_2 = __ftol(x87control_3, fconvert.t(*esi))

if (ecx_2 s>= eax_2)
    return 

void* esi_1 = &esi[ecx_2 i+ 2]
float* edx_2 = arg1 + (edi << 2)

do
    if (edi s> 0)
        long double x87_r7_11 = fconvert.t(arg3) + fconvert.t(*esi_1)
        long double temp0_1 = fconvert.t(*edx_2)
        x87_r7_11 - temp0_1
        float eax_6
        eax_6.w = (x87_r7_11 < temp0_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_11, temp0_1) ? 1 : 0) << 0xa
            | (x87_r7_11 == temp0_1 ? 1 : 0) << 0xe | 0x3800
        
        if ((eax_6:1.b & 0x41) == 0)
            *edx_2 = fconvert.s(x87_r7_11)
    
    edi += arg6
    edx_2 = &edx_2[arg6]
    
    if (edi s>= arg5)
        break
    
    ecx_2 += 1
    esi_1 += 4
while (ecx_2 s< eax_2)
