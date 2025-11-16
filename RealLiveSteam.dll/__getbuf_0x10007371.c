// 函数: __getbuf
// 地址: 0x10007371
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\RealLiveSteam.dll

data_1001b44c += 1
int32_t eax = sub_1000425a(0x1000)
arg1[2] = eax

if (eax == 0)
    arg1[3] |= 4
    arg1[2] = &arg1[5]
    arg1[6] = 2
else
    arg1[3] |= 8
    arg1[6] = 0x1000

int32_t result = arg1[2]
arg1[1] = 0
*arg1 = result
return result
