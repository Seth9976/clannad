// 函数: sub_49c260
// 地址: 0x49c260
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* result = &data_8d2f34
int32_t i_1 = 8
int32_t i

do
    if (*result == 0)
        if (*(result - 0x2c70) == 0)
            goto label_49c284
        
        *(result - 0x2c74) = 0
    else if (*(result + 8) == 0 || *(result - 0x2c70) != 0)
        *(result - 0x2c74) = 0
    else
    label_49c284:
        
        if (arg1 != 0 && *(result - 0x2c78) == 0)
            *(result - 0x2c74) = 0
    
    result += 0x5900
    i = i_1
    i_1 -= 1
while (i != 1)
return result
