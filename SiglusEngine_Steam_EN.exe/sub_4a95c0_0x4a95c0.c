// 函数: sub_4a95c0
// 地址: 0x4a95c0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t edx = data_703058
int32_t eax

if (edx s>= 0)
    eax = edx
    
    if (edx s> 8)
        eax = 8
else
    eax = 0

data_1bff9ac = data_7030c4
int32_t esi_1 = data_70305c
data_1bfe2cc = 8 - eax
data_1bff9a4 = 0xffffff01 << (8 - eax).b
data_1bff9a8 = 0xff
int32_t ecx_2

if (esi_1 s> 0)
    ecx_2 = esi_1
    
    if (esi_1 s> 0x40)
        ecx_2 = 0x40
else
    ecx_2 = 2

if ((ecx_2.b & 1) != 0)
    ecx_2 += 1

int32_t var_8_1

if (data_703054 == 0)
    var_8_1 = ecx_2
    ecx_2 = data_7030c0
else
    var_8_1 = data_7030bc
int32_t var_14 = data_703060
data_1bfe2b4 = data_7030ac
int32_t var_20 = data_703054
data_1bfe2b8 = data_7030b0
return sub_455e60(ecx_2, var_20, edx, esi_1, var_14, 9)
