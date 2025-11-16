// 函数: sub_688a10
// 地址: 0x688a10
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx = *arg1

if (ecx s< 0)
    return 

int32_t eax_1 = data_4ebe33c
*(eax_1 + (ecx << 2)) -= 1

if (*(data_4ebe33c + (*arg1 << 2)) == 0)
    sub_59a180(&data_4ebe330, arg1)

*arg1 = 0xffffffff
