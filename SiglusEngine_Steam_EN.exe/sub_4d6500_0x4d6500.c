// 函数: sub_4d6500
// 地址: 0x4d6500
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* eax = data_20c04fc
int32_t edx = 0
int32_t i_1 = data_20c0500
int32_t result_1 = 0xc00000
data_1c04c58 = 0
data_1c04c60 = 0xc00000

if (i_1 s> 0)
    int32_t i
    
    do
        if (*eax != 0)
            edx += 1
            result_1 += eax[1]
        
        eax = &eax[5]
        i = i_1
        i_1 -= 1
    while (i != 1)
    int32_t eax_1 = data_1c04c54
    data_1c04c60 = result_1
    
    if (eax_1 u< edx)
        eax_1 = edx
    
    data_1c04c58 = edx
    data_1c04c54 = eax_1

int32_t result = data_1c04c5c

if (result u< result_1)
    result = result_1

data_1c04c5c = result
return result
