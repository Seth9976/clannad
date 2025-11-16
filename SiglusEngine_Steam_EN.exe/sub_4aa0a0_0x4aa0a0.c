// 函数: sub_4aa0a0
// 地址: 0x4aa0a0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = data_703058
int32_t edx = data_7030c4

if (eax s< 0)
    eax = 0
else if (eax s> 8)
    eax = 8

int32_t esi = data_703060
data_1bfe2cc = 8 - eax
int32_t ecx_1 = data_70305c
data_1bff9a4 = 0xffffff01 << (8 - eax).b
data_1bff9a8 = 0xff
data_1bff9ac = edx

if (ecx_1 s<= 0)
    ecx_1 = 0x18
else if (ecx_1 s> 0x40)
    ecx_1 = 0x40

int32_t edx_1

if (esi s> 0)
    edx_1 = esi
    
    if (esi s> 0x40)
        edx_1 = 0x40
else
    edx_1 = 0x18

data_7030bc
int32_t var_18 = data_703054
data_1bfe2b4 = data_7030ac
int32_t* var_1c = data_7030c0
data_1bfe2b8 = data_7030b0
return sub_455e60(var_1c, var_18, ecx_1, edx_1, esi, 0x10)
