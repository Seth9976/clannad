// 函数: sub_5b24e0
// 地址: 0x5b24e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int128_t* result = arg4

while (arg3 != arg2)
    *result = *arg3
    result[1] = arg3[1]
    result[2] = arg3[2]
    result[3] = arg3[3]
    result[4] = arg3[4]
    int64_t xmm0_6 = arg3[5].q
    arg3 += 0x58
    result[5].q = xmm0_6
    result += 0x58

return result
