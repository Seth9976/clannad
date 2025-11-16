// 函数: sub_404257
// 地址: 0x404257
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_2c = ecx
int32_t var_30 = ecx
arg5 = fconvert.s(fconvert.t(arg5) + fconvert.t(arg6))
int32_t eax
int80_t st0
st0, eax = sub_401000(fconvert.s(fconvert.t(arg5)), fconvert.s(float.t(0)))

if (eax == 0)
    int32_t var_2c_3 = ecx
    void var_24
    int32_t var_2c_5 = j_sub_40407d(&var_24, arg2, arg3, fconvert.s(fconvert.t(arg5)))
    void var_14
    int32_t var_2c_7 = j_sub_40407d(&var_14, arg2, arg4, fconvert.s(fconvert.t(arg5)))
    j_sub_40407d(arg1, &var_24, &var_14, fconvert.s(fconvert.t(arg6) / fconvert.t(arg5)))
else if (arg1 != arg2)
    int32_t edi
    int32_t var_2c_2 = edi
    *arg1 = *arg2
    void* edi_2 = &arg1[1]
    void* esi_2 = &arg2[1]
    *edi_2 = *esi_2
    void* edi_3 = edi_2 + 4
    void* esi_3 = esi_2 + 4
    *edi_3 = *esi_3
    *(edi_3 + 4) = *(esi_3 + 4)

return arg1
