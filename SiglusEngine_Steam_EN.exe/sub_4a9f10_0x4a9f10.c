// 函数: sub_4a9f10
// 地址: 0x4a9f10
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = data_1bfe2d0
int32_t edx = data_7030c4

if (data_703054 == 1)
    eax = 1

int32_t edi = data_703058
data_1bfe2d0 = eax
int32_t eax_1

if (edi s>= 0)
    eax_1 = edi
    
    if (edi s> 8)
        eax_1 = 8
else
    eax_1 = 0

data_1bff9a8 = 0xff
data_1bfe2cc = 8 - eax_1
data_1bff9a4 = 0xffffff01 << (8 - eax_1).b
data_70305c
data_1bff9ac = edx
int32_t esi = data_703060
int32_t ecx_1

if (esi s> 0)
    ecx_1 = esi
    
    if (esi s> 0x40)
        ecx_1 = 0x40
else
    ecx_1 = 0x20

if ((ecx_1.b & 1) != 0)
    ecx_1 += 1

int32_t var_18 = data_70305c
data_1bfe2b4 = data_7030ac
int32_t var_20 = data_703054
data_1bfe2b8 = data_7030b0
return sub_455e60(ecx_1, var_20, edi, var_18, esi, 0xd)
