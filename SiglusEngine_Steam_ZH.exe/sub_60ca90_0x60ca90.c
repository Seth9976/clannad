// 函数: sub_60ca90
// 地址: 0x60ca90
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* edx = data_bac4e4
void* esi = data_bac510
int32_t* ecx = edx + 0x6c
*(edx + 0x68) = *(esi + 0xbb7c)
int32_t eax
eax.b = *(esi + 0xbb94)
*(edx + 0xec) = eax.b

for (int32_t i = 0; i s< 0x20; i += 1)
    *ecx = 0xff
    ecx = &ecx[1]
    *(edx + i + 0xed) = 1

*(edx + 0x6c) = *(esi + 0xbb80)
*(edx + 0x70) = *(esi + 0xbb84)
*(edx + 0x74) = *(esi + 0xbb88)
*(edx + 0x78) = *(esi + 0xbb8c)
*(edx + 0x7c) = *(esi + 0xbb90)
*(edx + 0xed) = *(esi + 0xbb95)
*(edx + 0xee) = *(esi + 0xbb96)
*(edx + 0xef) = *(esi + 0xbb97)
*(edx + 0xf0) = *(esi + 0xbb98)
char result = *(esi + 0xbb99)
*(edx + 0xf1) = result
return result
