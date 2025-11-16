// 函数: sub_5e01d0
// 地址: 0x5e01d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* esi = data_bac510
void* edx = *arg1 * 0xfc + esi
arg1[1] = *(edx + 0xa2ebf4)
arg1[2] = *(edx + 0xa2ebf8)
arg1[3] = 0
arg1[4] = 0
arg1[5] = *(edx + 0xa2ebfc)
arg1[6] = *(edx + 0xa2ec00)
arg1[7] = *(edx + 0xa2ec04)
int32_t eax_5 = *(edx + 0xa2ec08)

if (eax_5 s< 0)
    eax_5 = *(esi + 0xa2ebc0)

arg1[8] = eax_5
int32_t eax_6 = *(edx + &data_a2ec0c)

if (eax_6 s< 0)
    eax_6 = *(esi + 0xa2ebb8)

arg1[9] = eax_6
int32_t result = *(edx + 0xa2ec10)

if (result s< 0)
    result = *(esi + 0xa2ebbc)

arg1[0xa] = result
return result
