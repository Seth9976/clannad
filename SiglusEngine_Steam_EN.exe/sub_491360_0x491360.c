// 函数: sub_491360
// 地址: 0x491360
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = data_71929c
int32_t* esi = arg2
arg2.b = 0

if (eax == 0x22 || eax == 0x23 || eax == 0x24)
    arg2.b = 1

int32_t eax_1

if (data_1b8a6d4 == 0 && arg2.b != 1)
    eax_1 = *arg3

if (data_1b8a6d4 != 0 || arg2.b == 1 || eax_1 == 0 || data_703840 != 0
        || (data_1311178 != 0 && arg6 != 0))
    esi[8] = 0
    esi[0xb] = 0
    
    if (*arg3 != 0)
        if (arg3[5] s> 0 || arg3[6] s> 0 || arg3[2] != 0 || arg3[3] != 0)
            sub_490910(arg3, esi)
        else
            esi[8] = 0
            esi[0xb] = 0
            esi[0xe] = 0
else if (eax_1 - 1 u<= 3)
    switch (eax_1)
        case 1, 4
            if (arg3[1] != 0)
                sub_491190(eax_1 - 1, esi, arg3, arg4)
            else
                sub_490ff0(eax_1 - 1, esi, arg3, arg4, 0)
        case 2
            if (arg3[1] != 0)
                sub_491190(eax_1 - 1, esi, arg3, arg4)
            else
                sub_490ff0(eax_1 - 1, esi, arg3, arg4, 1)
        case 3
            sub_491190(eax_1 - 1, esi, arg3, arg4)

if (arg5 != 0 && (esi[8] != esi[9] || esi[0xb] != esi[0xc]))
    data_703008 = 1

esi[9] = esi[8]
int32_t result = esi[0xb]
esi[0xc] = result
return result
