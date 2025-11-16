// 函数: sub_42cfa0
// 地址: 0x42cfa0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg3 s>= 2)
    return 

int32_t eax = (&data_8c4cf4)[arg3 * 0x22]

if (arg6 == 0)
    arg2 = eax

int32_t ecx = (&data_8c4cf8)[arg3 * 0x22]
(&data_8c4d08)[arg3 * 0x22] = eax
int32_t eax_1 = arg4

if (arg7 == 0)
    eax_1 = ecx

(&data_8c4d10)[arg3 * 0x22] = ecx
(&data_8c4d0c)[arg3 * 0x22] = arg2
(&data_8c4d14)[arg3 * 0x22] = eax_1

if (arg5 s<= 0)
    (&data_8c4d20)[arg3 * 0x22] = 0
    *(arg3 * 0x88 + 0x8c4d28) = 0
    return 

(&data_8c4d1c)[arg3 * 0x22] = data_131310c
(&data_8c4d20)[arg3 * 0x22] = arg5
(&data_8c4d24)[arg3 * 0x22] = 0
*(arg3 * 0x88 + 0x8c4d28) = 1

if (arg8 != 1)
    if (arg8 == 2)
        (&data_8c4d18)[arg3 * 0x88] = 3
        return 
    
    (&data_8c4d18)[arg3 * 0x88] = 0
    return 

(&data_8c4d18)[arg3 * 0x88] = 4
