// 函数: sub_5b0b20
// 地址: 0x5b0b20
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg3

if (arg3 == arg2)
    return arg4

int128_t* ebx = arg4
int128_t* esi = arg3 + 0x274
void* edi = ebx + 0x274

do
    *ebx = *(esi - 0x274)
    ebx[1] = *(esi - 0x264)
    *(edi - 0x254) = *(esi - 0x254)
    *(edi - 0x253) = *(esi - 0x253)
    sub_5ae7e0(edi - 0x250, &esi[-0x25])
    *(edi - 0x130) = esi[-0x13]
    sub_5ae7e0(edi - 0x120, &esi[-0x12])
    *edi = *esi
    sub_5ae7e0(edi + 0x10, &esi[1])
    int128_t xmm0_5 = esi[0x13]
    esi += 0x3b4
    ebx += 0x3b4
    edi += 0x3b4
    *(edi - 0x284) = xmm0_5
while (esi - 0x274 != arg2)

return ebx
