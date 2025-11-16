// 函数: sub_551b10
// 地址: 0x551b10
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

*arg1 = 0xffffffff
int32_t ecx = *arg2

if (ecx s>= 0)
    *arg1 = ecx
    int32_t eax_1 = data_4ebe33c
    *(eax_1 + (ecx << 2)) += 1

*(arg1 + 4) = *(arg2 + 4)
*(arg1 + 0x14) = *(arg2 + 0x14)
arg1[9] = arg2[9]
arg1[0xa] = arg2[0xa]
arg1[0xb] = arg2[0xb]
arg1[0xc] = arg2[0xc]
arg1[0xd] = arg2[0xd]
arg1[0xe].b = arg2[0xe].b
*(arg1 + 0x39) = *(arg2 + 0x39)
*(arg1 + 0x3a) = *(arg2 + 0x3a)
arg1[0xf] = arg2[0xf]
void* eax_11 = arg2[0x10]
arg1[0x10] = eax_11

if (eax_11 != 0)
    *(eax_11 + 4)
    *(eax_11 + 4) += 1

return arg1
