// 函数: sub_543840
// 地址: 0x543840
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* eax_4 = data_bac510
int32_t ecx = 1

if (*(eax_4 + 0xbb51) != 0)
    ecx = 2

if (*(eax_4 + 0xbb52) != 0)
    ecx += 1

if (*(eax_4 + 0xbb53) != 0)
    ecx += 1

if (*(eax_4 + 0xbb54) != 0)
    ecx += 1

if (*(eax_4 + 0xbb55) != 0)
    ecx += 1

return ecx * 0x3f + 0x15
