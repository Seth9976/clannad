// 函数: sub_6b4360
// 地址: 0x6b4360
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg1[5] u>= 8)
    arg1 = *arg1

uint32_t result = GetFileAttributesW(arg1)

if (result == 0xffffffff)
    return result

result.b = not.b(result.b)
return zx.d(result.b) u>> 4 & 1
