// 函数: sub_65d760
// 地址: 0x65d760
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* ecx = data_bac460
int32_t eax_1 = *(data_bac45c + 0x64)
*(sub_548970(ecx + 4, *(ecx + 0xb8) - 1, 1) + 0x2d0) = arg4
sub_65a2f0()
sub_698240(arg3, arg2)
void* ecx_3 = data_bac460
void* esi = sub_548970(ecx_3 + 4, *(ecx_3 + 0xb8) - 1, 1)
void* eax_7
eax_7.b = arg6
*(esi + 0x2c8) = 3
*(esi + 0x2cc) = arg5
*(esi + 0x2cd) = eax_7.b

if (arg5 != 0)
    *(data_bac4a0 + 0xcc) = 1
    sub_676610(1)
else if (eax_7.b != 0)
    sub_676610(1)

*(esi + 0x308) = arg2
*(esi + 0x300) = eax_1
int32_t result
result.b = 1
*(esi + 0x304) = arg3
return result
