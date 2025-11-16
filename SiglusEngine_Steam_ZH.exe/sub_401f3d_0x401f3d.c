// 函数: sub_401f3d
// 地址: 0x401f3d
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_1c = edi
float var_14 = fconvert.s(fconvert.t(arg3[0xc]) * fconvert.t(arg2[3])
    + fconvert.t(arg3[4]) * fconvert.t(arg2[1]) + fconvert.t(arg3[8]) * fconvert.t(arg2[2])
    + fconvert.t(*arg2) * fconvert.t(*arg3))
float var_10 = fconvert.s(fconvert.t(arg3[0xd]) * fconvert.t(arg2[3])
    + fconvert.t(arg3[5]) * fconvert.t(arg2[1]) + fconvert.t(arg3[1]) * fconvert.t(*arg2)
    + fconvert.t(arg3[9]) * fconvert.t(arg2[2]))
float var_c = fconvert.s(fconvert.t(arg3[0xe]) * fconvert.t(arg2[3])
    + fconvert.t(arg3[6]) * fconvert.t(arg2[1]) + fconvert.t(arg3[2]) * fconvert.t(*arg2)
    + fconvert.t(arg3[0xa]) * fconvert.t(arg2[2]))
float var_8 = fconvert.s(fconvert.t(arg3[0xf]) * fconvert.t(arg2[3])
    + fconvert.t(arg3[7]) * fconvert.t(arg2[1]) + fconvert.t(arg3[3]) * fconvert.t(*arg2)
    + fconvert.t(arg3[0xb]) * fconvert.t(arg2[2]))
*arg1 = var_14
void* edi_2 = &arg1[1]
float* esi = &var_10
*edi_2 = *esi
void* edi_3 = edi_2 + 4
void* esi_1 = &esi[1]
*edi_3 = *esi_1
*(edi_3 + 4) = *(esi_1 + 4)
return arg1
