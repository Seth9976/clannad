// 函数: sub_6628b0
// 地址: 0x6628b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg1
int32_t var_8_1 = 0
int32_t edx = *arg1
int32_t edi = 0
int32_t esi = arg1[1]
int32_t eax = edx

if (edx == esi)
    eax = 0

int16_t* ecx_1 = arg1[3] + eax

while (*ecx_1 != 0)
    ecx_1 = &ecx_1[1]
    edi += 1

int32_t* var_18 = arg2

if (edx == esi)
    edx = 0

int16_t* edx_1 = edx + arg1[3]
arg2[5] = 7
arg2[4] = 0
*arg2 = 0
sub_5b2590(arg2, edx_1, ecx_1)
arg1[3] += (edi << 1) + 2
return arg2
