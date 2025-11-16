// 函数: sub_56d0c0
// 地址: 0x56d0c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int128_t* result = arg4
int128_t* esi = arg3

while (esi != arg2)
    if (result != 0)
        *result = *esi
        result[1].d = esi[1].d
    
    esi += 0x14
    result += 0x14

return result
