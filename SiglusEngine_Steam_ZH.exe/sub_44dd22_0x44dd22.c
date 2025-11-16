// 函数: sub_44dd22
// 地址: 0x44dd22
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = *(arg1 + 0x3c)

if (eax == 4 || eax == 3)
    return 0x8876086c

int32_t edi
int32_t var_10_1 = edi
*(arg1 + 0x3c) = 3
int32_t* ecx_1 = *(arg1 + 0xf8)

if (ecx_1 != 0)
    sub_44ce0e(ecx_1, 1)
    *(arg1 + 0xf8) = 0

*(arg1 + 0xfc) = arg1 + 0xe0
return 0
