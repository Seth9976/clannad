// 函数: sub_4a92c0
// 地址: 0x4a92c0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = data_703054

if (esi == 1 || esi == 3)
    data_1bfe2d0 = 1

int32_t edi = data_703058
int32_t edx = data_7030c4
int32_t eax

if (edi s>= 0)
    eax = edi
    
    if (edi s> 8)
        eax = 8
else
    eax = 0

data_1bff9a8 = 0xff
data_1bfe2cc = 8 - eax
int32_t ecx_1 = data_70305c
data_1bff9a4 = 0xffffff01 << (8 - eax).b
data_1bff9ac = edx
int32_t edx_1

if (ecx_1 s> 0)
    edx_1 = ecx_1
    
    if (ecx_1 s> 0x40)
        edx_1 = 0x40
else
    edx_1 = 8

if ((edx_1.b & 1) != 0)
    edx_1 += 1

int32_t var_14 = data_703060
data_1bfe2b4 = data_7030ac
data_1bfe2b8 = data_7030b0
return sub_455e60(edx_1, esi, edi, ecx_1, var_14, 0xb)
