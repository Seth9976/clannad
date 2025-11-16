// 函数: sub_4aa150
// 地址: 0x4aa150
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = data_703058
int32_t edx = data_7030c4

if (eax s< 0)
    eax = 0
else if (eax s> 8)
    eax = 8

data_1bff9a8 = 0xff
data_1bfe2cc = 8 - eax
bool cond:0 = data_703054 == 0
data_1bff9a4 = 0xffffff01 << (8 - eax).b
data_1bff9ac = edx
int32_t ecx_1
int32_t edx_1

if (cond:0)
    edx_1 = data_70305c
    ecx_1 = data_7030bc
    
    if (edx_1 s<= 0)
        edx_1 = 1
    else if (edx_1 s> 0x40)
        edx_1 = 0x40
else
    ecx_1 = data_70305c
    edx_1 = data_7030c0
    
    if (ecx_1 s<= 0)
        ecx_1 = 1
    else if (ecx_1 s> 0x40)
        ecx_1 = 0x40

int32_t var_c = data_703060
data_1bfe2b4 = data_7030ac
data_7030bc
int32_t var_18 = data_703054
data_1bfe2b8 = data_7030b0
return sub_455e60(data_7030c0, var_18, ecx_1, edx_1, var_c, 0x10)
