// 函数: sub_6b1630
// 地址: 0x6b1630
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax_3 = (arg4 - arg3) s/ 0x11c

if (eax_3 s<= 0x28)
    return sub_6b1b00(eax_3, arg2, arg3, arg4, arg5)

int32_t eax_5
int32_t edx_3
edx_3:eax_5 = sx.q(eax_3 + 1)
int32_t eax_7 = (eax_5 + (edx_3 & 7)) s>> 3
int32_t edi_1 = eax_7 * 0x11c
int32_t ebx_1 = eax_7 * 0x238
int32_t ecx_1 = edi_1 + arg3
int32_t eax_9 = arg3 + ebx_1
sub_6b1b00(eax_9, ecx_1, arg3, eax_9, arg5)
int32_t eax_10 = edi_1 + arg2
sub_6b1b00(eax_10, arg2, arg2 - edi_1, eax_10, arg5)
int32_t esi_4 = arg4 - edi_1
int32_t eax_12 = arg4 - ebx_1
return sub_6b1b00(sub_6b1b00(eax_12, esi_4, eax_12, arg4, arg5), arg2, ecx_1, esi_4, arg5)
