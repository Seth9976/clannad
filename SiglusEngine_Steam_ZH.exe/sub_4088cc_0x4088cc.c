// 函数: sub_4088cc
// 地址: 0x4088cc
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int16_t* result = arg1

while (*result != 0xff)
    if (result[3].b == arg2 && *(result + 7) == arg3)
        return result
    
    result = &result[4]

return nullptr
