// 函数: sub_6879e0
// 地址: 0x6879e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int128_t* result = arg4
int128_t* esi = arg3

while (esi != arg2)
    if (result != 0)
        *result = *esi
        result[1].q = esi[1].q
        *(result + 0x18) = *(esi + 0x18)
    
    esi += 0x1c
    result += 0x1c

return result
