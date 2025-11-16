// 函数: sub_66a2b0
// 地址: 0x66a2b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

arg1[4] = 0
*arg1 = 0
int32_t eax_2 = (arg2[1] - *arg2) s>> 1
arg1[4] = eax_2
int32_t* edi

if (eax_2 u> 8)
    int32_t ecx
    ecx.b = mulu.dp.d(eax_2, 2) u>> 0x20 != 0
    int32_t var_14_1 = neg.d(ecx) | (eax_2 * 2)
    edi = sub_7431ed()
    *arg1 = edi
else
    edi = arg1

int32_t* ecx_3 = *arg2
_memcpy(edi, ecx_3, (arg2[1] - ecx_3) & 0xfffffffe)
void* edx = edi + (arg1[4] << 1)
int32_t eax_11 = (edx - edi) s>> 1
sub_66d760(eax_11, edx, edi, eax_11, 0)
return arg1
