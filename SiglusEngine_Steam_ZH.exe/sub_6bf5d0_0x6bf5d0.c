// 函数: sub_6bf5d0
// 地址: 0x6bf5d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void** esi = arg3
int32_t* result = arg4

while (esi != arg2)
    sub_6be180(result, esi)
    esi = &esi[0x12]
    result = &result[0x12]

return result
