// 函数: sub_4a9450
// 地址: 0x4a9450
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t edx = data_703054

if (edx == 1 || edx == 3)
    data_1bfe2d0 = 1

int32_t esi = data_703058
int32_t eax

if (esi s>= 0)
    eax = esi
    
    if (esi s> 8)
        eax = 8
else
    eax = 0

data_1bff9ac = data_7030c4
data_1bfe2cc = 8 - eax
data_1bff9a4 = 0xffffff01 << (8 - eax).b
data_70305c
data_1bff9a8 = 0xff
int32_t edi_1 = data_703060
int32_t var_8

if (edi_1 s> 0)
    int32_t eax_3 = edi_1
    
    if (edi_1 s> 0x40)
        eax_3 = 0x40
    
    var_8 = eax_3
else
    var_8 = 0x20

int32_t var_20 = data_70305c
data_1bfe2b4 = data_7030ac
data_1bfe2b8 = data_7030b0
return sub_455e60(var_8, edx, esi, var_20, edi_1, 0xf)
