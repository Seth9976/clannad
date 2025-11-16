// 函数: sub_553220
// 地址: 0x553220
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int128_t* result = arg4
int128_t* esi = arg3

while (esi != arg2)
    if (result != 0)
        *result = *esi
        result[1] = esi[1]
        result[2].q = esi[2].q
        *(result + 0x28) = *(esi + 0x28)
    
    esi += 0x2c
    result += 0x2c

return result
