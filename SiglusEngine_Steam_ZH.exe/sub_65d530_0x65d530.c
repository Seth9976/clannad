// 函数: sub_65d530
// 地址: 0x65d530
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = *(data_bac45c + 0x64)
void* ecx = data_bac460
*(sub_548970(ecx + 4, *(ecx + 0xb8) - 1, 1) + 0x2d0) = arg2
sub_65a2f0()
void* edx = data_bac45c
void* ecx_3 = *(edx + 0x64) * 0x54 + *(edx + 0x54)

if (arg1 s< *(*(ecx_3 + 4) + 0x20))
    *(edx + 0x60) = *(*(ecx_3 + 0xc) + (arg1 << 2)) + *(ecx_3 + 8)

void* ecx_4 = data_bac460
void* result = sub_548970(ecx_4 + 4, *(ecx_4 + 0xb8) - 1, 1)
*(result + 0x308) = arg1
*(result + 0x300) = ebx
*(result + 0x304) = ebx
*(result + 0x2c8) = 1
result.b = 1
return result
