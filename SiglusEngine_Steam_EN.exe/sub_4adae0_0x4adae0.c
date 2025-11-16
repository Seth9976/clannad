// 函数: sub_4adae0
// 地址: 0x4adae0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx = data_703058

if (ecx s<= 0)
    ecx = 1
else if (ecx s> 0x40)
    ecx = 0x10

int32_t edi = data_70305c
data_1bfe2dc = ecx

if (edi s<= 0)
    edi = 1
else if (edi s> 0x40)
    edi = 0x20

int32_t esi = data_703060

if (esi s<= 0)
    esi = 0x320
else if (esi s<= 0x12c)
    esi = 0x12c
else if (esi s> 0x1388)
    esi = 0x1388

int32_t eax = data_7030bc

if (data_703054 != 0)
    eax = data_7030c0

data_1bff910 = esi
data_1bff838 = 0
int32_t temp0 = divs.dp.d(sx.q(eax - 1 + ecx), ecx)
data_1bff908 = 0
data_1bff90c = 0x167
data_1bfe2f0:4 = temp0
data_1bff93c = 0xfa0
data_1bff940 = 0x258
data_1bff8a0 = 0x1ff
data_1bfe2d8 = divs.dp.d(sx.q(edi * 0x16800), temp0)
uint32_t result = data_7030c4 u>> 1
data_1bff83c = result
data_1bff840 = result
data_1bff944 = result
data_1bff8a4 = 0
data_1bff8a8 = result
return result
