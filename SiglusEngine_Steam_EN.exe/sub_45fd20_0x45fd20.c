// 函数: sub_45fd20
// 地址: 0x45fd20
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* result

if (data_702fc0 != 0)
    result = data_71929c
    char ecx = 0
    
    if (result == 0x11 || result == 0x13 || result == 0x15)
        ecx = 1
    
    char edx = 0
    
    if (data_1313254 != 0 && data_1311178 == 0 && ecx == 1)
        result = &data_108f3a4
        
        for (int32_t* i = &data_7035a4; i s< &data_7035e4; )
            if (*i != 0 && *(result - 4) != 0xffffffff && *result != 0xffffffff
                    && *(result + 4) != 0xffffffff && *(result + 8) != 0xffffffff)
                edx = 1
                break
            
            i = &i[1]
            result += 0x1c
    
    if (data_641adc != edx)
        data_641adc = edx
        data_703008 = 1

result.b = 0
return result
