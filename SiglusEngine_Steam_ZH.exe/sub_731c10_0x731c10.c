// 函数: sub_731c10
// 地址: 0x731c10
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* edi = *(arg1 + 0x1bc)
*(edi + 8) = (**(arg1 + 4))(arg1, 1, 0x400)
*(edi + 0xc) = (**(arg1 + 4))(arg1, 1, 0x400)
*(edi + 0x10) = (**(arg1 + 4))(arg1, 1, 0x400)
int32_t ecx = 0xff4d0b80
*(edi + 0x14) = (**(arg1 + 4))(arg1, 1, 0x400)
int32_t var_8 = 0xff1daf00
int32_t result = 0
int32_t var_c = 0xff4d0b80
int32_t ebx = 0x5b6900

for (int32_t i = 0x2c8d00; i s>= 0xffd4cb1a; )
    result += 4
    *(result + *(edi + 8) - 4) = ecx s>> 0x10
    int32_t edx_3 = var_8
    var_8 += 0x1c5a2
    *(result + *(edi + 0xc) - 4) = edx_3 s>> 0x10
    *(result + *(edi + 0x10) - 4) = ebx
    ebx -= 0xb6d2
    *(result + *(edi + 0x14) - 4) = i
    i -= 0x581a
    ecx = var_c + 0x166e9
    var_c = ecx

return result
