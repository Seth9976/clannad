// 函数: sub_1a995a3
// 地址: 0x1a995a3
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

int32_t ecx = data_1bfc45c
int32_t* result = arg2

if (*arg2 != arg1)
    do
        result = &result[3]
        
        if (result u>= &arg2[ecx * 3])
            break
    while (*result != arg1)

if (result u< &arg2[ecx * 3] && *result == arg1)
    return result

return nullptr
