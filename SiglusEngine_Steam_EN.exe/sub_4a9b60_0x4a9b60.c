// 函数: sub_4a9b60
// 地址: 0x4a9b60
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t edx = data_703054

if (edx == 1 || edx == 3)
    data_1bfe2d0 = 1

int32_t esi = data_703058
int32_t edi = data_7030c4
int32_t eax

if (esi s>= 0)
    eax = esi
    
    if (esi s> 8)
        eax = 8
else
    eax = 0

int32_t var_14 = data_703060
data_1bff9a8 = 0xff
int32_t var_18 = data_70305c
data_1bfe2cc = 8 - eax
data_1bff9a4 = 0xffffff01 << (8 - eax).b
int32_t* var_24 = data_7030c0
data_7030bc
data_1bfe2b4 = data_7030ac
int32_t eax_3 = data_7030b0
data_1bff9ac = edi
data_1bfe2b8 = eax_3
return sub_455e60(var_24, edx, esi, var_18, var_14, 0xb)
