// 函数: sub_40b13a
// 地址: 0x40b13a
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = 0

switch (arg1 & 0x400e)
    case 2
        result = 0xc
    case 4, 6
        result = 0x10
    case 8
        result = 0x14
    case 0xa
        result = 0x18
    case 0xc
        result = 0x1c
    case 0xe
        result = 0x20

if ((arg1.b & 0x10) != 0)
    result += 0xc

if ((arg1.b & 0x20) != 0)
    result += 4

if ((arg1.b & 0x40) != 0)
    result += 4

if (arg1.b s< 0)
    result += 4

int32_t i_1 = arg1 u>> 8 & 0xf
uint32_t ebx_1 = arg1 u>> 0x10

if (ebx_1 == 0)
    return result + (i_1 << 3)

if (i_1 u> 0)
    int32_t i
    
    do
        int32_t edx_2 = ebx_1 & 3
        
        if (edx_2 == 0)
            result += 8
        else if (edx_2 == 1)
            result += 0xc
        else if (edx_2 == 2)
            result += 0x10
        else if (edx_2 == 3)
            result += 4
        
        ebx_1 u>>= 2
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
