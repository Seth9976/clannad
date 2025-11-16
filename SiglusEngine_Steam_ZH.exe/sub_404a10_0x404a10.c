// 函数: sub_404a10
// 地址: 0x404a10
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_1c = edi
float var_14 = fconvert.s(fconvert.t(arg3[4]) * fconvert.t(arg2[1])
    + fconvert.t(*arg2) * fconvert.t(*arg3) + fconvert.t(arg3[0xc]))
float var_10 = fconvert.s(fconvert.t(arg3[1]) * fconvert.t(*arg2)
    + fconvert.t(arg3[5]) * fconvert.t(arg2[1]) + fconvert.t(arg3[0xd]))
float var_c = fconvert.s(fconvert.t(arg3[2]) * fconvert.t(*arg2)
    + fconvert.t(arg3[6]) * fconvert.t(arg2[1]) + fconvert.t(arg3[0xe]))
float var_8 = fconvert.s(fconvert.t(arg3[3]) * fconvert.t(*arg2)
    + fconvert.t(arg3[7]) * fconvert.t(arg2[1]) + fconvert.t(arg3[0xf]))
*arg1 = var_14
void* edi_2 = &arg1[1]
float* esi = &var_10
*edi_2 = *esi
void* edi_3 = edi_2 + 4
void* esi_1 = &esi[1]
*edi_3 = *esi_1
*(edi_3 + 4) = *(esi_1 + 4)
return arg1
