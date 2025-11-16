// 函数: sub_5a0cb0
// 地址: 0x5a0cb0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int64_t* result = arg4
int64_t* esi = arg3

while (esi != arg2)
    if (result != 0)
        *result = *esi
        result[1].d = esi[1].d
    
    esi += 0xc
    result += 0xc

return result
