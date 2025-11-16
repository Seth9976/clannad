// 函数: sub_4088f6
// 地址: 0x4088f6
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int16_t* result = arg2
uint16_t ecx
ecx.b = 0

while (*result != 0xff)
    ecx.b += *(zx.d(result[2].b) + 0xab5598)
    result = &result[4]

*(result + 8) = *result
*(result + 0xc) = *(result + 4)
*result = *arg1
*(result + 4) = arg1[1]
result[1] = zx.w(ecx.b)
return result
