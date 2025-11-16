// 函数: sub_4e1ca0
// 地址: 0x4e1ca0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

PSTR var_8 = arg1
int32_t eax = data_20f34bc

if ((eax.b & 1) == 0)
    data_20f3410 = U"SMDB"
    data_20f34bc = eax | 1
    data_20f3414 = 8
    data_20f341c = 0x4008
    data_20f3424 = 0x13
    data_20f3418 = &(*U"SMDB")[1]
    data_20f3420 = &(*U"SMDB")[2]
    data_20f3428 = &(*U"SMDB")[3]
    data_20f342c = 0x11

for (int32_t i = 0; i u< 4; i += 1)
    if (lstrcmpiA(arg1, (&data_20f3410)[i * 2]) == 0)
        int32_t eax_2
        eax_2.w = (&data_20f3414)[i * 4]
        *arg2 = eax_2.w
        return 1

return 0
