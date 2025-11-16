// 函数: sub_4019fb
// 地址: 0x4019fb
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_18 = edi
float var_10 = fconvert.s(fconvert.t(arg3[8]) * fconvert.t(arg2[2])
    + fconvert.t(arg3[4]) * fconvert.t(arg2[1]) + fconvert.t(*arg2) * fconvert.t(*arg3))
float var_c = fconvert.s(fconvert.t(arg3[9]) * fconvert.t(arg2[2])
    + fconvert.t(arg3[5]) * fconvert.t(arg2[1]) + fconvert.t(arg3[1]) * fconvert.t(*arg2))
float var_8 = fconvert.s(fconvert.t(arg3[0xa]) * fconvert.t(arg2[2])
    + fconvert.t(arg3[6]) * fconvert.t(arg2[1]) + fconvert.t(arg3[2]) * fconvert.t(*arg2))
*arg1 = var_10
void* edi_2 = &arg1[1]
float* esi = &var_c
*edi_2 = *esi
*(edi_2 + 4) = esi[1]
return arg1
