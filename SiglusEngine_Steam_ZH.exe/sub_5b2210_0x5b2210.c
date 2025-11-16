// 函数: sub_5b2210
// 地址: 0x5b2210
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int128_t* result = arg4

if (arg3 != arg2)
    int128_t* ecx = arg3
    
    do
        *result = *ecx
        result[1] = ecx[1]
        result[2].q = ecx[2].q
        int32_t edx = *(ecx + 0x28)
        ecx += 0x2c
        *(result + 0x28) = edx
        result += 0x2c
    while (ecx != arg2)

return result
