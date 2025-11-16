// 函数: sub_5b2540
// 地址: 0x5b2540
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg3
void* esi = arg3

if (esi == arg2)
    return arg4

void* edi = arg4

do
    sub_5ae7e0(edi, esi)
    int128_t xmm0_1 = *(esi + 0x120)
    esi += 0x130
    *(edi + 0x120) = xmm0_1
    edi += 0x130
while (esi != arg2)

return edi
