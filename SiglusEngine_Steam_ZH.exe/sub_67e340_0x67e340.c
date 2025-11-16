// 函数: sub_67e340
// 地址: 0x67e340
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int128_t* result = arg4

while (arg3 != arg2)
    if (result != 0)
        *result = *arg3
        result[1] = arg3[1]
        result[2] = arg3[2]
        result[3] = arg3[3]
        result[4] = arg3[4]
    
    arg3 = &arg3[5]
    result = &result[5]

return result
