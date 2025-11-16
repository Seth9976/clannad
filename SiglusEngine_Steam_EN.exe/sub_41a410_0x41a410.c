// 函数: sub_41a410
// 地址: 0x41a410
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

bool cond:0 = data_f89944 == 0
data_f89958 = 0xfffffffd
data_f89960 = 0xfffffffd

if (cond:0)
    return 

bool cond:1_1 = data_8fcad8 == 0
data_f89958 = 0xfffffffe
data_f89960 = 0xfffffffe

if (cond:1_1)
    return 

int32_t* eax = data_1320e5c
data_f89958 = 0xffffffff
data_f89960 = 0xffffffff

if (eax != 0xffffffff && eax != 3)
    return 

sub_41a380(eax, data_1320e58, data_131d2cc, &data_f89958, &data_f89960)

if (data_f89958 == 0xffffffff)
    return 

eax = data_f89960
data_1320e5c = 3

if (eax u> 0x3f || *(eax * 0x110 + &data_1321ee0) == 0)
    data_f89960 = 0xffffffff
