// 函数: sub_58aa40
// 地址: 0x58aa40
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void** esi = arg3
int32_t* result = arg4

while (esi != arg2)
    if (result != esi)
        sub_52e3c0(result, esi, 0, 0xffffffff)
    
    esi = &esi[6]
    result = &result[6]

return result
