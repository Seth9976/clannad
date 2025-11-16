// 函数: sub_4e4014
// 地址: 0x4e4014
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx = *(arg1 + 0x16b4)

if (ecx s<= 0xd)
    *(arg1 + 0x16b0) |= (arg4 << ecx.b).w
    *(arg1 + 0x16b4) = ecx + 3
else
    char* ecx_1 = *(arg1 + 8)
    *(arg1 + 0x16b0) |= (arg4 << ecx.b).w
    int32_t ebx
    ebx.b = *(arg1 + 0x16b0)
    ecx_1[*(arg1 + 0x14)] = ebx.b
    *(arg1 + 0x14) += 1
    ebx.b = *(arg1 + 0x16b1)
    (*(arg1 + 0x14))[*(arg1 + 8)] = ebx.b
    int32_t edx_4 = *(arg1 + 0x16b4)
    *(arg1 + 0x14) += 1
    char* ecx_2
    ecx_2.b = 0x10
    ecx_2.b = 0x10 - edx_4.b
    int32_t esi_1
    esi_1.w = arg4.w u>> ecx_2.b
    *(arg1 + 0x16b4) = edx_4 - 0xd
    *(arg1 + 0x16b0) = esi_1.w

sub_4e3cd3(arg3, arg2, arg1, 1)
return arg1
