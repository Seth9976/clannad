// 函数: sub_699ed0
// 地址: 0x699ed0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

PWSTR var_8 = arg1
int32_t eax = data_4ecd1f0

if ((eax.b & 1) == 0)
    data_4ecd100 = &(*U"ABCDEFXSHIJ")[7]
    data_4ecd1f0 = eax | 1
    data_4ecd104 = 8
    data_4ecd10c = 0x4008
    data_4ecd114 = 0x13
    data_4ecd108 = &data_af1d44
    data_4ecd110 = &(*U"ABCDEFXSHIJ")[3]
    data_4ecd118 = &(*U"ABCDEFXSHIJ")[1]
    data_4ecd11c = 0x11

for (int32_t i = 0; i u< 4; i += 1)
    if (lstrcmpiW(arg1, (&data_4ecd100)[i * 2]) == 0)
        int32_t eax_2
        eax_2.w = (&data_4ecd104)[i * 4]
        *arg2 = eax_2.w
        return 1

return 0
