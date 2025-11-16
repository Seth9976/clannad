// 函数: sub_712580
// 地址: 0x712580
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax_3 = (arg4 - arg3) s/ 0x68

if (eax_3 s<= 0x28)
    return sub_712b30(eax_3, arg2, arg3, arg4, arg5)

int32_t eax_5
int32_t edx_2
edx_2:eax_5 = sx.q(eax_3 + 1)
int32_t eax_7 = (eax_5 + (edx_2 & 7)) s>> 3
void* edi_1 = eax_7 * 0x68
int32_t ebx_1 = eax_7 * 0xd0
void* ecx_1 = edi_1 + arg3
void* eax_9 = arg3 + ebx_1
sub_712b30(eax_9, ecx_1, arg3, eax_9, arg5)
void* eax_10 = edi_1 + arg2
sub_712b30(eax_10, arg2, arg2 - edi_1, eax_10, arg5)
void* esi_4 = arg4 - edi_1
void* eax_12 = arg4 - ebx_1
return sub_712b30(sub_712b30(eax_12, esi_4, eax_12, arg4, arg5), arg2, ecx_1, esi_4, arg5)
