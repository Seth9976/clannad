// 函数: sub_676460
// 地址: 0x676460
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg1
int32_t* edx = *arg2

if (edx == arg2[1])
    edx = nullptr

*arg1 = *(edx + arg2[3])
arg2[3] += 4
int32_t eax_2 = *arg2

if (eax_2 == arg2[1])
    eax_2 = 0

__builtin_memcpy(&arg1[1], arg2[3] + eax_2, 0x80)
arg2[3] -= 0xffffff80
int32_t eax_3 = *arg2

if (eax_3 == arg2[1])
    eax_3 = 0

arg1[0x21] = *(arg2[3] + eax_3)
arg2[3] += 4
sub_5bea80(&arg1[0x22], arg2)
char* ecx_2 = *arg2

if (ecx_2 == arg2[1])
    ecx_2 = nullptr

arg1[0x50].b = ecx_2[arg2[3]]
arg2[3] += 1
int32_t eax_7 = *arg2

if (eax_7 == arg2[1])
    eax_7 = 0

*(arg1 + 0x141) = arg2[3][eax_7]
arg2[3] += 1
int32_t eax_9 = *arg2

if (eax_9 == arg2[1])
    eax_9 = 0

*(arg1 + 0x142) = arg2[3][eax_9]
arg2[3] += 1
int32_t eax_11 = *arg2

if (eax_11 == arg2[1])
    eax_11 = 0

int32_t result = *(arg2[3] + eax_11)
arg1[0x51] = result
arg2[3] += 4
return result
