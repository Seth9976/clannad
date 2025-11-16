// 函数: sub_60c990
// 地址: 0x60c990
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* edx_1 = data_bac510
int32_t* esi = data_bac4e4
*esi = *(edx_1 + 0xbb58)
esi[1] = 0
esi[2] = *(edx_1 + 0xbb5c)
esi[3] = *(edx_1 + 0xbb60)
esi[4] = *(edx_1 + 0x7c)
esi[5] = *(edx_1 + 0x80)
int32_t result = *esi

if (result != 1 && result == 0)
    return sub_616b90(&esi[2]) __tailcall

return result
