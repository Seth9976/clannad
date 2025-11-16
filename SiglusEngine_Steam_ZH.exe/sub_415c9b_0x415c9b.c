// 函数: sub_415c9b
// 地址: 0x415c9b
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_18 = edi
int32_t* edi_1 = arg5
*edi_1 = *arg1
void* edi_2 = &edi_1[1]
void* esi_1 = &arg1[1]
*edi_2 = *esi_1
*(edi_2 + 4) = *(esi_1 + 4)
*arg5 = fconvert.s(fconvert.t(*arg5) - fconvert.t(*arg2))
arg5[1] = fconvert.s(fconvert.t(arg5[1]) - fconvert.t(arg2[1]))
long double x87_r7_5 = fconvert.t(arg5[2]) - fconvert.t(arg2[2])
arg5[2] = fconvert.s(x87_r7_5)
long double x87_r6_3 = x87_r7_5 * fconvert.t(arg3[2]) + fconvert.t(*arg3) * fconvert.t(*arg5)
    + fconvert.t(arg5[1]) * fconvert.t(arg3[1])
float var_10 = fconvert.s(x87_r6_3 * fconvert.t(*arg3))
float var_c = fconvert.s(x87_r6_3 * fconvert.t(arg3[1]))
arg5[2] = fconvert.s(x87_r7_5 - x87_r6_3 * fconvert.t(arg3[2]))
long double x87_r7_9 = (fconvert.t(*arg5) - fconvert.t(var_10)) * fconvert.t(arg4)
*arg5 = fconvert.s(x87_r7_9)
long double x87_r6_7 = (fconvert.t(arg5[1]) - fconvert.t(var_c)) * fconvert.t(arg4)
arg5[1] = fconvert.s(x87_r6_7)
arg5[2] = fconvert.s(fconvert.t(arg4) * fconvert.t(arg5[2]))
*arg5 = fconvert.s(x87_r7_9 + fconvert.t(*arg2))
arg5[1] = fconvert.s(x87_r6_7 + fconvert.t(arg2[1]))
arg5[2] = fconvert.s(fconvert.t(arg2[2]) + fconvert.t(arg5[2]))
return arg5
