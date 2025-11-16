// 函数: sub_5d3b30
// 地址: 0x5d3b30
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* eax = data_bac484
int32_t var_c = 0
int32_t ecx = *(eax + 0x140)

if (ecx s< 0 || *(eax + 0x118) s<= ecx)
    sub_52e820(arg1, &data_ad7c90)
    return arg1

void** ecx_3 = ecx * 0x2e60 + *(eax + 0x10c) + 0x2e30
*(arg1 + 0x14) = 7
*(arg1 + 0x10) = 0
*arg1 = 0
sub_52e3c0(arg1, ecx_3, 0, 0xffffffff)
return arg1
