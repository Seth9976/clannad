// 函数: sub_4a9530
// 地址: 0x4a9530
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t edx_1 = data_703058
int32_t esi = data_7030c4
int32_t eax

if (edx_1 s>= 0)
    eax = edx_1
    
    if (edx_1 s> 8)
        eax = 8
else
    eax = 0

int32_t var_c = data_703060
data_1bff9a8 = 0xff
int32_t var_10 = data_70305c
data_1bfe2cc = 8 - eax
int32_t var_18 = data_703054
data_7030bc
int32_t* var_1c = data_7030c0
data_1bff9a4 = 0xffffff01 << (8 - eax).b
data_1bfe2b4 = data_7030ac
int32_t eax_3 = data_7030b0
data_1bff9ac = esi
data_1bfe2b8 = eax_3
return sub_455e60(var_1c, var_18, edx_1, var_10, var_c, 2)
