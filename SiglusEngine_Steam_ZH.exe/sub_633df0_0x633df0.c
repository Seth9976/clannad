// 函数: sub_633df0
// 地址: 0x633df0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax_2 = (arg4 - arg3) s>> 3

if (eax_2 s<= 0x28)
    int32_t var_20_1 = arg5
    return sub_6345b0(eax_2, arg2, arg3, arg4)

int32_t eax_4
int32_t edx
edx:eax_4 = sx.q(eax_2 + 1)
int32_t eax_6 = (eax_4 + (edx & 7)) s>> 3
int32_t edi = eax_6 << 3
int32_t var_20 = arg5
int32_t* eax_7 = &arg3[eax_6 * 4]
sub_6345b0(eax_7, &arg3[eax_6 * 2], arg3, eax_7)
int32_t var_28 = arg5
int32_t* eax_8 = &arg2[eax_6 * 2]
sub_6345b0(eax_8, arg2, arg2 - edi, eax_8)
int32_t var_30 = arg5
void* eax_10 = arg4 - (eax_6 << 4)
int32_t* esi_2 = arg4 - edi
int32_t var_38 = arg5
return sub_6345b0(sub_6345b0(eax_10, esi_2, eax_10, arg4), arg2, &arg3[eax_6 * 2], esi_2)
