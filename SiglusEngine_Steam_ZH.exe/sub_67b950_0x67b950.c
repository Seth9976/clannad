// 函数: sub_67b950
// 地址: 0x67b950
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = arg3
void* eax = sub_67bba0(arg1, esi, arg5, arg6)
void* ecx = *arg1
int32_t var_10 = 0
void* edx = eax + esi

if (edx s>= 0 || neg.d(edx) == 0)
    arg3 = ecx + (edx u>> 5 << 2)
else
    arg3 = ecx + 0xfffffffc - ((0xffffffff - edx) u>> 5 << 2)

void* edx_1 = edx & 0x1f
int32_t var_10_1 = 0
int32_t* ecx_11

if (eax s>= 0 || neg.d(eax) == 0)
    ecx_11 = ecx + (eax u>> 5 << 2)
else
    ecx_11 = ecx + 0xfffffffc - ((0xffffffff - eax) u>> 5 << 2)

void* esi_3 = eax & 0x1f
int32_t eax_10 = esi_3
sub_67bea0(eax_10, edx_1, arg4, ecx_11, eax_10, arg3, edx_1)
arg6 = 0
int32_t ecx_14 = *arg1

if (eax s< 0 && neg.d(eax) != 0)
    *arg2 = ecx_14 + 0xfffffffc - ((0xffffffff - eax) u>> 5 << 2)
    arg2[1] = esi_3
    return arg2

arg2[1] = esi_3
*arg2 = ecx_14 + (eax u>> 5 << 2)
return arg2
