// 函数: sub_401b55
// 地址: 0x401b55
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

float* ecx = arg4
float* eax = arg3
long double x87_r7_1 = fconvert.t(ecx[3]) * fconvert.t(eax[2])
float* edx = arg2
long double x87_r6_1 = fconvert.t(eax[3]) * fconvert.t(ecx[2])
int32_t edi
int32_t var_28 = edi
arg3 = fconvert.s(fconvert.t(ecx[3]) * fconvert.t(eax[1]) - fconvert.t(eax[3]) * fconvert.t(ecx[1]))
float var_c = fconvert.s(fconvert.t(eax[1]) * fconvert.t(ecx[2]))
float var_8 = fconvert.s(fconvert.t(eax[2]) * fconvert.t(ecx[1]))
float var_20 = fconvert.s((x87_r7_1 - x87_r6_1) * fconvert.t(edx[1])
    - fconvert.t(arg3) * fconvert.t(edx[2])
    + (fconvert.t(var_c) - fconvert.t(var_8)) * fconvert.t(edx[3]))
arg2 = fconvert.s(fconvert.t(eax[3]) * fconvert.t(*ecx))
arg4 = fconvert.s(fconvert.t(ecx[3]) * fconvert.t(*eax))
float var_10 =
    fconvert.s(fconvert.t(*ecx) * fconvert.t(eax[2]) - fconvert.t(*eax) * fconvert.t(ecx[2]))
float var_1c = fconvert.s((x87_r6_1 - x87_r7_1) * fconvert.t(*edx)
    - (fconvert.t(arg2) - fconvert.t(arg4)) * fconvert.t(edx[2])
    + fconvert.t(var_10) * fconvert.t(edx[3]))
long double x87_r7_3 = fconvert.t(*eax) * fconvert.t(ecx[1])
long double x87_r6_7 = fconvert.t(*ecx) * fconvert.t(eax[1])
float var_18 = fconvert.s(fconvert.t(arg3) * fconvert.t(*edx)
    - (fconvert.t(arg4) - fconvert.t(arg2)) * fconvert.t(edx[1])
    + (x87_r7_3 - x87_r6_7) * fconvert.t(edx[3]))
float var_14 = fconvert.s((fconvert.t(var_8) - fconvert.t(var_c)) * fconvert.t(*edx)
    - fconvert.t(var_10) * fconvert.t(edx[1]) + (x87_r6_7 - x87_r7_3) * fconvert.t(edx[2]))
*arg1 = var_20
void* edi_2 = &arg1[1]
float* esi = &var_1c
*edi_2 = *esi
void* edi_3 = edi_2 + 4
void* esi_1 = &esi[1]
*edi_3 = *esi_1
*(edi_3 + 4) = *(esi_1 + 4)
return arg1
