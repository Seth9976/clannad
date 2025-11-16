// 函数: sub_411350
// 地址: 0x411350
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg1 s>= 0x21)
    return 

sub_4d6c40(&(&data_976b50)[arg1 * 8], &(&data_976b54)[arg1 * 8])
bool cond:0_1 = data_702fc0 == 0
(&data_976b58)[arg1 * 8] = 0
(&data_976b5c)[arg1 * 8] = 0

if (cond:0_1 || data_1af0a78 == 0)
    return 

bool cond:1_1

if (arg1 u<= 0x10)
    cond:1_1 = data_1318520 != 2
    *((arg1 << 2) + &data_20cc940) = 1
label_4113c0:
    
    if (not(cond:1_1))
        sub_563b20(0)
else if (arg1 == 0xffffffff)
    cond:1_1 = data_1318520 != 1
    goto label_4113c0
