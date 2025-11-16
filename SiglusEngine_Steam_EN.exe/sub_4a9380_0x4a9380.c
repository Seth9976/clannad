// 函数: sub_4a9380
// 地址: 0x4a9380
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t edx = data_7030c4
int32_t esi = data_703058
int32_t eax

if (esi s>= 0)
    eax = esi
    
    if (esi s> 8)
        eax = 8
else
    eax = 0

data_1bff9a8 = 0xff
data_1bfe2cc = 8 - eax
data_1bff9a4 = 0xffffff01 << (8 - eax).b
data_70305c
data_1bff9ac = edx
int32_t edi = data_703060
int32_t ecx_1

if (edi s> 0)
    ecx_1 = edi
    
    if (edi s> 0x40)
        ecx_1 = 0x40
else
    ecx_1 = 1

if ((ecx_1.b & 1) != 0)
    ecx_1 += 1

int32_t var_18 = data_70305c
data_1bfe2b4 = data_7030ac
int32_t var_20 = data_703054
data_1bfe2b8 = data_7030b0
return sub_455e60(ecx_1, var_20, esi, var_18, edi, 9)
