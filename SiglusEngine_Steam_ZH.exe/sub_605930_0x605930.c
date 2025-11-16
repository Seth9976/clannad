// 函数: sub_605930
// 地址: 0x605930
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

arg1[2] = 0
*arg1 = 0
int32_t eax_1 = arg2[1] - *arg2
arg1[2] = eax_1
int32_t* edi

if (eax_1 u> 8)
    int32_t var_14_1 = eax_1
    edi = sub_7431ed()
    *arg1 = edi
else
    edi = arg1

int32_t* ecx = *arg2
_memcpy(edi, ecx, arg2[1] - ecx)
char* edx_1 = arg1[2] + edi
void* eax_6 = edx_1 - edi
sub_606ce0(eax_6, edx_1, edi, eax_6, 0)
return arg1
