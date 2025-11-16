// 函数: sub_723530
// 地址: 0x723530
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edx = *(arg1 + 0x4c)
*(arg1 + 0x3c) = *(arg1 + 0x2c) * 2
*(*(arg1 + 0x44) + (edx << 1) - 2) = 0
void* ecx = (*(arg1 + 0x4c) << 1) + 0xfffffffe

if (ecx != 0)
    __builtin_memset(__builtin_memset(*(arg1 + 0x44), 0, ecx u>> 2 << 2), 0, ecx & 3)

int32_t ecx_4 = *(arg1 + 0x84) * 3
*(arg1 + 0x80) = zx.d(*((ecx_4 << 2) + &data_adc5b2))
*(arg1 + 0x8c) = zx.d(*((ecx_4 << 2) + &data_adc5b0))
*(arg1 + 0x90) = zx.d(*((ecx_4 << 2) + &data_adc5b4))
uint32_t result = zx.d(*((ecx_4 << 2) + &data_adc5b6))
*(arg1 + 0x7c) = result
*(arg1 + 0x6c) = 0
*(arg1 + 0x5c) = 0
*(arg1 + 0x74) = 0
*(arg1 + 0x16b4) = 0
*(arg1 + 0x78) = 2
*(arg1 + 0x60) = 2
*(arg1 + 0x68) = 0
*(arg1 + 0x48) = 0
return result
