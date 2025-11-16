// 函数: sub_6caef0
// 地址: 0x6caef0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg1 == 0)
    return 0

int32_t eax_1 = *(arg1 + 0x254)
char* result

if (eax_1 == 0)
    result = _malloc(0x10c)
else
    result = eax_1(arg1, 0x10c)

if (result != 0)
    _memset(result, 0, 0x10c)

return result
