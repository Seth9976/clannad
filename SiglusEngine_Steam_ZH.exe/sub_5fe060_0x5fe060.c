// 函数: sub_5fe060
// 地址: 0x5fe060
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
sub_5ff820(arg1, arg2)
int32_t ecx = *arg2

if (ecx == arg2[1])
    ecx = 0

int32_t* eax = arg2[3]
void* ecx_1 = *(eax + ecx)
arg2[3] = &eax[1]
sub_600fe0(arg1 + 0xd8, ecx_1, 0)
int32_t* ecx_3 = *arg2

if (ecx_3 == arg2[1])
    ecx_3 = nullptr

*(arg1 + 0x238) = *(ecx_3 + arg2[3])
arg2[3] += 4
sub_5fe2d0(arg1 + 0x24c, arg2)
int32_t* ecx_5 = *arg2

if (ecx_5 == arg2[1])
    ecx_5 = nullptr

*(arg1 + 0x3a8) = *(ecx_5 + arg2[3])
arg2[3] += 4
return sub_5c9a10(arg1 + 0x3bc, arg2)
