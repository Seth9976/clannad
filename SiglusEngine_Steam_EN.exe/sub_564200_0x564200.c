// 函数: sub_564200
// 地址: 0x564200
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (data_702fc0 == 0 || data_1af0a78 == 0)
    return 

bool cond:0_1

if (arg1 u<= 0x10)
    cond:0_1 = data_1318520 != 2
    *((arg1 << 2) + &data_20cc940) = 1
label_56423d:
    
    if (not(cond:0_1))
        sub_563b20(0)
else if (arg1 == 0xffffffff)
    cond:0_1 = data_1318520 != 1
    goto label_56423d
