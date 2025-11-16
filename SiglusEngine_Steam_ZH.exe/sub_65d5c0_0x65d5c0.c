// 函数: sub_65d5c0
// 地址: 0x65d5c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax_1 = *(data_bac45c + 0x64)
void* ecx = data_bac460
*(sub_548970(ecx + 4, *(ecx + 0xb8) - 1, 1) + 0x2d0) = arg4
sub_65a2f0()
void* edx = data_bac45c

if (arg2 u<= 0x3e7)
    *(edx + 0x64) = arg3
    void* ecx_4 = arg3 * 0x54 + *(edx + 0x54)
    *(edx + 0x60) = *(*(ecx_4 + 0x10) + (arg2 << 2)) + *(ecx_4 + 8)

void* ecx_5 = data_bac460
void* esi = sub_548970(ecx_5 + 4, *(ecx_5 + 0xb8) - 1, 1)
void* eax_10
eax_10.b = arg6
*(esi + 0x2c8) = 2
*(esi + 0x2cc) = arg5
*(esi + 0x2cd) = eax_10.b

if (arg5 != 0)
    *(data_bac4a0 + 0xcc) = 1
    sub_676610(1)
else if (eax_10.b != 0)
    sub_676610(1)

*(esi + 0x304) = arg3
*(esi + 0x300) = eax_1
int32_t result
result.b = 1
*(esi + 0x308) = arg2
return result
