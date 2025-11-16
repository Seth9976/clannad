// 函数: sub_4a9d40
// 地址: 0x4a9d40
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = data_1bfe2d0
int32_t edx = data_7030c4

if (data_703054 == 1)
    eax = 1

data_1bfe2d0 = eax
int32_t eax_1 = data_703058

if (eax_1 s< 0)
    eax_1 = 0
else if (eax_1 s> 8)
    eax_1 = 8

data_1bff9a8 = 0xff
data_1bfe2cc = 8 - eax_1
data_1bff9a4 = 0xffffff01 << (8 - eax_1).b
int32_t eax_3 = data_70305c
data_1bff9ac = edx

if (eax_3 s<= 0)
    eax_3 = 0x20
else if (eax_3 s> 0x40)
    eax_3 = 0x40

int32_t var_8 = eax_3

if ((eax_3.b & 1) != 0)
    var_8 = eax_3 + 1

int32_t* edx_1 = data_703060

if (edx_1 s<= 0)
    edx_1 = 0x20
else if (edx_1 s> 0x40)
    edx_1 = 0x40

if ((edx_1.b & 1) != 0)
    edx_1 += 1

int32_t ecx_1 = 0

if (data_703064 u<= 3)
    ecx_1 = data_703064

int32_t var_20 = data_703054
data_1bfe2b4 = data_7030ac
data_1bfe2b8 = data_7030b0
return sub_455e60(edx_1, var_20, ecx_1, 0, 0, 1)
