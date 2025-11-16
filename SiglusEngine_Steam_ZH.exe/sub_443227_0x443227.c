// 函数: sub_443227
// 地址: 0x443227
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* ecx = *arg1
void* edx = *arg2
int32_t eax_3 = *((zx.d(*(ecx + 4)) << 2) + &data_ac13d0)
uint32_t esi = zx.d(*(edx + 4))

if (eax_3 != *((esi << 2) + &data_ac13d0))
    return eax_3 - *((esi << 2) + &data_ac13d0)

return zx.d(*(ecx + 6)) - zx.d(*(edx + 6))
