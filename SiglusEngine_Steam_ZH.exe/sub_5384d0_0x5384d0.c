// 函数: sub_5384d0
// 地址: 0x5384d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* result = arg4
int32_t* esi = arg3

while (esi != arg2)
    if (result != 0)
        *result = *esi
        result[1] = esi[1]
    
    esi = &esi[2]
    result = &result[2]

return result
