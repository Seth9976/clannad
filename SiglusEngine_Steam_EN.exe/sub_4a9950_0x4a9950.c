// 函数: sub_4a9950
// 地址: 0x4a9950
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t edx_1 = data_703054
int32_t eax = data_1bfe2d0
int32_t esi = data_7030c4

if (edx_1 == 1)
    eax = 1

data_1bfe2d0 = eax
int32_t eax_1 = data_703058

if (eax_1 s< 0)
    eax_1 = 0
else if (eax_1 s> 8)
    eax_1 = 8

data_1bff9a8 = 0xff
data_1bfe2cc = 8 - eax_1
int32_t ecx_1 = 0

if (data_70305c u<= 3)
    ecx_1 = data_70305c

data_1bff9a4 = 0xffffff01 << (8 - eax_1).b
int32_t* var_1c = data_7030c0
data_7030bc
data_1bfe2b4 = data_7030ac
int32_t eax_4 = data_7030b0
data_1bff9ac = esi
data_1bfe2b8 = eax_4
return sub_455e60(var_1c, edx_1, ecx_1, 0, 0, 1)
