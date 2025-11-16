// 函数: sub_491f40
// 地址: 0x491f40
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg3 u> 3)
    return 

int32_t* eax_2 = arg2 * 0x124
void* ecx_1 = arg3 * 0x248 + 0x924908 + eax_2
int32_t* var_8_1 = eax_2

if (*ecx_1 != 0)
    sub_490910(ecx_1, arg2 * 0x110 + arg3 * 0x220 + 0x1085964)
    eax_2 = var_8_1

void* ecx_3 = arg3 * 0x248 + &data_924950 + eax_2

if (*ecx_3 != 0)
    sub_490910(ecx_3, arg2 * 0x110 + 0x44 + arg3 * 0x220 + 0x1085964)
    eax_2 = var_8_1

void* ecx_5 = arg3 * 0x248 + 0x924998 + eax_2

if (*ecx_5 != 0)
    sub_490910(ecx_5, arg2 * 0x110 + 0x88 + arg3 * 0x220 + 0x1085964)
    eax_2 = var_8_1

void* ecx_7 = arg3 * 0x248 + 0x9249e0 + eax_2

if (*ecx_7 != 0)
    sub_490910(ecx_7, arg3 * 0x220 + 0x1085a30 + arg2 * 0x110)

int32_t edx_10 = arg9
*(var_8_1 + &(&data_924904)[arg3 * 0x92]) = arg4
arg1 = arg10
void* ecx_10

if (arg12 == 0)
    ecx_10 = &(&data_924904)[arg3 * 0x92]
else
    void* eax_7 = sub_490980(arg3 * 0x248 + 0x924908, edx_10, var_8_1 + arg3 * 0x248 + 0x924908, 
        arg5, arg6, arg7, arg8, edx_10, arg1, arg11)
    edx_10 = arg9
    ecx_10 = eax_7
    arg1 = arg10

if (arg13 != 0)
    arg1, edx_10 = sub_490980(arg3 * 0x248 + &data_924950, edx_10, 
        var_8_1 + arg3 * 0x248 + &data_924950, arg5, arg6, arg7, arg8, edx_10, arg1, arg11)
    ecx_10 = arg1

if (arg14 != 0)
    arg1, edx_10 = sub_490980(arg3 * 0x248 + 0x924998, edx_10, var_8_1 + arg3 * 0x248 + 0x924998, 
        arg5, arg6, arg7, arg8, arg9, arg10, arg11)
    ecx_10 = arg1

void* ebx_3

if (arg15 == 0)
    ebx_3 = &(&data_924904)[arg3 * 0x92]
else
    ebx_3 = &(&data_924904)[arg3 * 0x92]
    ecx_10 =
        sub_490980(arg1, edx_10, &var_8_1[0x37] + ebx_3, arg5, arg6, arg7, arg8, arg9, arg10, arg11)

int32_t edx_11 = data_131310c

if (arg12 != 0)
    arg1 = arg2 * 0x110 + arg3 * 0x220 + 0x1085964
    edx_11 = data_131310c
    
    if (*(var_8_1 + ebx_3 + 4) != 0)
        if (ecx_10 s> 0)
            *(arg1 + 8) = ecx_10
            *(arg1 + 0x1c) = 0
            *(arg1 + 4) = edx_11
        else
            *(arg1 + 8) = 0
            *(arg1 + 0x1c) = 0x64

if (arg13 != 0)
    arg1 = arg2 * 0x110
    edx_11 = data_131310c
    
    if (*(var_8_1 + ebx_3 + 0x4c) != 0)
        if (ecx_10 s> 0)
            *(arg1 + arg3 * 0x220 + 0x1085964 + 0x4c) = ecx_10
            *(arg1 + arg3 * 0x220 + 0x1085964 + 0x60) = 0
            *(arg1 + arg3 * 0x220 + 0x1085964 + 0x48) = edx_11
        else
            *(arg1 + arg3 * 0x220 + 0x1085964 + 0x4c) = 0
            *(arg1 + arg3 * 0x220 + 0x1085964 + 0x60) = 0x64

if (arg14 != 0)
    arg1 = arg2 * 0x110
    edx_11 = data_131310c
    
    if (*(var_8_1 + ebx_3 + 0x94) != 0)
        if (ecx_10 s> 0)
            *(arg1 + arg3 * 0x220 + 0x1085964 + 0x90) = ecx_10
            *(arg1 + arg3 * 0x220 + 0x1085964 + 0xa4) = 0
            *(arg1 + arg3 * 0x220 + 0x1085964 + 0x8c) = edx_11
        else
            *(arg1 + arg3 * 0x220 + 0x1085964 + 0x90) = 0
            *(arg1 + arg3 * 0x220 + 0x1085964 + 0xa4) = 0x64

if (arg15 == 0)
    return 

arg1 = arg2 * 0x110

if (*(var_8_1 + ebx_3 + 0xdc) == 0)
    return 

if (ecx_10 s<= 0)
    *(arg1 + arg3 * 0x220 + 0x1085964 + 0xd4) = 0
    *(arg1 + arg3 * 0x220 + 0x1085964 + 0xe8) = 0x64
    return 

*(arg1 + arg3 * 0x220 + 0x1085964 + 0xd4) = ecx_10
*(arg1 + arg3 * 0x220 + 0x1085964 + 0xe8) = 0
*(arg1 + arg3 * 0x220 + 0x1085964 + 0xd0) = edx_11
