// 函数: sub_46f26e
// 地址: 0x46f26e
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_10 = edi
int32_t* eax_2 = sub_745f3f(arg4 << 2)

if (eax_2 == 0)
    return 0x8007000e

sub_46e543(arg1, arg2, eax_2)

if (arg4 u> 0)
    int32_t* ecx_2 = eax_2
    int32_t i
    
    do
        int32_t* eax_5 = *(*(arg1[2] + 0x14) + (*(arg3 - eax_2 + ecx_2) << 2))
        *eax_5 |= *ecx_2
        ecx_2 = &ecx_2[1]
        i = arg4
        arg4 -= 1
    while (i != 1)

j__free(eax_2)
return 0
