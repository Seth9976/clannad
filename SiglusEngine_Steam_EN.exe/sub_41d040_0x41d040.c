// 函数: sub_41d040
// 地址: 0x41d040
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

__builtin_memcpy(arg3, arg2, 0x8c)
int32_t* esi_1 = arg5
*(arg2 + 0x64) = 0xffffffff
*(arg2 + 0x68) = 0xffffffff
*(arg2 + 0x6c) = 0xffffffff
*(arg2 + 0x70) = 0xffffffff

if (esi_1 == 0 || arg4 == 0)
    return 

*arg4 = *esi_1
arg1 = *esi_1

if (arg1 == 0)
    return 

int32_t i = 0

if (arg1 s> 0)
    void* edx = &esi_1[0x41]
    arg1 = esi_1 - arg4
    void* ecx = &arg4[1]
    arg5 = arg1
    
    do
        int32_t eax_2 = *(arg1 + ecx)
        ecx += 4
        *(ecx - 4) = eax_2
        edx += 4
        i += 1
        *(ecx + 0x7c) = *(edx - 0x84)
        *(ecx + 0xfc) = *(edx - 4)
        *(ecx + 0x17c) = *(edx + 0x7c)
        arg1 = arg5
    while (i s< *esi_1)

*esi_1 = 0
