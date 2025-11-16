// 函数: sub_688a50
// 地址: 0x688a50
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* ecx = data_4ebe334

if (data_4ebe330 != ecx)
    int32_t ecx_2 = *(ecx - 4)
    *arg1 = ecx_2
    int32_t eax_5 = data_4ebe33c
    *(eax_5 + (ecx_2 << 2)) += 1
    data_4ebe334 -= 4
    return eax_5

*arg1 = data_4ebe348
sub_55c6f0(&data_4ebe33c, data_4ebe348 + 1)
int32_t eax_3 = data_4ebe33c
*(eax_3 + (*arg1 << 2)) = 1
data_4ebe348 += 1
return eax_3
