// 函数: sub_4598dd
// 地址: 0x4598dd
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (*(arg1 + 0xac) != 0)
    return 0x8876086c

int32_t edi
int32_t var_10_1 = edi

if (arg2 == 0)
    if (arg3 != 0)
        __builtin_memcpy(*(arg1 + 0x80), arg3, 0x40)
    else
        float* eax_2 = *(arg1 + 0x80)
        eax_2[0xe] = fconvert.s(float.t(0))
        eax_2[0xd] = fconvert.s(float.t(0))
        eax_2[0xc] = fconvert.s(float.t(0))
        eax_2[0xb] = fconvert.s(float.t(0))
        eax_2[9] = fconvert.s(float.t(0))
        eax_2[8] = fconvert.s(float.t(0))
        eax_2[7] = fconvert.s(float.t(0))
        eax_2[6] = fconvert.s(float.t(0))
        eax_2[4] = fconvert.s(float.t(0))
        eax_2[3] = fconvert.s(float.t(0))
        eax_2[2] = fconvert.s(float.t(0))
        eax_2[1] = fconvert.s(float.t(0))
        eax_2[0xf] = fconvert.s(float.t(1))
        eax_2[0xa] = fconvert.s(float.t(1))
        eax_2[5] = fconvert.s(float.t(1))
        *eax_2 = fconvert.s(float.t(1))
else if (arg3 == 0)
    __builtin_memcpy(*(arg1 + 0x80), arg2, 0x40)
else
    j_sub_4021aa(*(arg1 + 0x80), arg2, arg3)

void* eax_3 = *(arg1 + 0x80)
*(arg1 + 0x94) = *(eax_3 + 8)
*(arg1 + 0x98) = *(eax_3 + 0x18)
*(arg1 + 0x9c) = *(eax_3 + 0x28)
j_sub_4014e9(arg1 + 0x94, arg1 + 0x94)
*(arg1 + 0x68) = 0
return 0
