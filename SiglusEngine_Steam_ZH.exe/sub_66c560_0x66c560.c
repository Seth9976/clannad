// 函数: sub_66c560
// 地址: 0x66c560
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_20 = arg5
int32_t eax_3 = (arg4 - arg3) s/ 0x30

if (eax_3 s<= 0x28)
    return sub_66dd70(eax_3, arg2, arg3, arg4)

int32_t eax_5
int32_t edx_2
edx_2:eax_5 = sx.q(eax_3 + 1)
int32_t eax_7 = (eax_5 + (edx_2 & 7)) s>> 3
int32_t edi_2 = eax_7 * 0x30
void* eax_8 = &arg3[eax_7 * 0x18]
sub_66dd70(eax_8, &arg3[eax_7 * 0xc], arg3, eax_8)
int32_t var_28 = arg5
void* eax_9 = &arg2[eax_7 * 0xc]
sub_66dd70(eax_9, arg2, arg2 - edi_2, eax_9)
int32_t var_30 = arg5
void* esi_4 = arg4 - edi_2
void* eax_11 = arg4 - eax_7 * 0x60
int32_t var_38 = arg5
return sub_66dd70(sub_66dd70(eax_11, esi_4, eax_11, arg4), arg2, &arg3[eax_7 * 0xc], esi_4)
