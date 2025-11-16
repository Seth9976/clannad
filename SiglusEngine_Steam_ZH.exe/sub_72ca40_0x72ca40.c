// 函数: sub_72ca40
// 地址: 0x72ca40
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t edi = arg3
void* eax = arg1[1]

if (edi u> 0x3b9ac9f0)
    *(*arg1 + 0x14) = 0x38
    *(*arg1 + 0x18) = 3
    (**arg1)(arg1)

int32_t ecx_2 = edi & 7

if (ecx_2 u> 0)
    edi += 8 - ecx_2

if (arg2 s< 0 || arg2 s>= 2)
    *(*arg1 + 0x14) = 0xf
    *(*arg1 + 0x18) = arg2
    (**arg1)(arg1)

int32_t* ecx_3 = _malloc(edi + 0x10)

if (ecx_3 == 0)
    *(*arg1 + 0x14) = 0x38
    *(*arg1 + 0x18) = 4
    (**arg1)(arg1)

*(eax + 0x4c) += edi + 0x10
int32_t eax_15 = *(eax + (arg2 << 2) + 0x3c)
ecx_3[1] = edi
*ecx_3 = eax_15
ecx_3[2] = 0
*(eax + (arg2 << 2) + 0x3c) = ecx_3
return &ecx_3[4]
