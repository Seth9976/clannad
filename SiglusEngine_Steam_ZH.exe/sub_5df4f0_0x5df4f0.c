// 函数: sub_5df4f0
// 地址: 0x5df4f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* esi = data_bac510
void* edx = *arg1 * 0xfc + esi
arg1[1] = 0
arg1[2] = 0
arg1[3] = *(edx + &data_a2ec6c)
arg1[4] = *(edx + 0xa2ec70)
arg1[5] = *(edx + 0xa2ec74)
arg1[6] = *(edx + 0xa2ec78)
arg1[7] = *(edx + 0xa2ec38)
int32_t eax_5 = *(edx + 0xa2ec7c)

if (eax_5 s< 0)
    eax_5 = *(esi + 0xa2ebc0)

arg1[8] = eax_5
int32_t eax_6 = *(edx + 0xa2ec80)

if (eax_6 s< 0)
    eax_6 = *(esi + 0xa2ebb8)

arg1[9] = eax_6
int32_t result = *(edx + 0xa2ec84)

if (result s< 0)
    result = *(esi + 0xa2ebbc)

arg1[0xa] = result
return result
