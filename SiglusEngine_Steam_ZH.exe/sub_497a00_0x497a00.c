// 函数: sub_497a00
// 地址: 0x497a00
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = arg3
int32_t edi
int32_t var_10 = edi
int32_t* eax = arg1[1]

if (ebx u> 0x3b9ac9f0)
    void* eax_1 = *arg1
    *(eax_1 + 0x14) = 0x36
    *(eax_1 + 0x18) = 3
    (*eax_1)(arg1)

int32_t eax_3 = ebx & 7

if (eax_3 u> 0)
    ebx += 8 - eax_3

if (arg2 s< 0 || arg2 s>= 2)
    void* eax_4 = *arg1
    *(eax_4 + 0x14) = 0xe
    *(eax_4 + 0x18) = arg2
    (*eax_4)(arg1)

int32_t var_14_3 = ebx + 0x10
int32_t* eax_5 = sub_4e2b30(arg1)

if (eax_5 == 0)
    void* eax_6 = *arg1
    *(eax_6 + 0x14) = 0x36
    *(eax_6 + 0x18) = 4
    (*eax_6)(arg1)

eax[0x13] += ebx + 0x10
int32_t edx_3 = eax[arg2 + 0xf]
eax[arg2 + 0xf] = eax_5
eax_5[1] = ebx
*eax_5 = edx_3
eax_5[2] = 0
return &eax_5[4]
