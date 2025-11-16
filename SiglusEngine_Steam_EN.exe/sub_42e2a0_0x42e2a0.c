// 函数: sub_42e2a0
// 地址: 0x42e2a0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* i = arg1
int32_t ecx = *(arg2 + 0x2c)

if (ecx != 0)
    *(i + 0x2c) = ecx
    uint32_t eax = *(i + 0x2c) * 0xb8
    *(i + 0x24) = 0
    *(i + 0x28) = 0
    sub_4d6960(eax, i + 0x28, i + 0x24, eax, "HAIKEI_VAL")
    int32_t esi_2 = *(i + 0x28)
    i = nullptr
    int32_t edx_1 = *(arg2 + 0x28)
    
    if (*(arg2 + 0x2c) s> 0)
        do
            sub_4d1c30(i, edx_1, esi_2, 0xb8)
            i += 1
            esi_2 += 0xb8
            edx_1 += 0xb8
        while (i s< *(arg2 + 0x2c))

return i
