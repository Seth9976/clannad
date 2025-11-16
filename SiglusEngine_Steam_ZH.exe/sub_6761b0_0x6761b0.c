// 函数: sub_6761b0
// 地址: 0x6761b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* esi = data_bac484

if (*(esi + 0x128) != 0)
    return 

int32_t edx_1 = *(esi + 0x124)
int32_t eax = *(esi + 0x10c)
char* ecx_1 = edx_1 * 0x2e60

if (ecx_1[eax] == 0 && *(ecx_1 + eax + 0x14) == 0)
    return 

*(esi + 0x128) = 1
*(esi + 0x108)
*(esi + 0x124) = mods.dp.d(sx.q(edx_1 + 1), *(esi + 0x108))
