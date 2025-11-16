// 函数: sub_5dc910
// 地址: 0x5dc910
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int128_t* ebx = arg2
*arg1 = *ebx
arg1[1] = ebx[1]
arg1[2] = ebx[2]
arg1[3] = ebx[3]
arg1[4] = ebx[4]
arg1[5].d = ebx[5].d
*(arg1 + 0xd8) = *(ebx + 0xd8)
*(arg1 + 0xe8) = *(ebx + 0xe8)
*(arg1 + 0xf8) = *(ebx + 0xf8)
*(arg1 + 0x108) = *(ebx + 0x108)
*(arg1 + 0x118) = *(ebx + 0x118)
*(arg1 + 0x128) = *(ebx + 0x128)
arg1[0x17].d = ebx[0x17].d
*(arg1 + 0x164) = *(ebx + 0x164)
*(arg1 + 0x168) = *(ebx + 0x168)
*(arg1 + 0x16c) = *(ebx + 0x16c)
int32_t eax_5
eax_5.w = *(ebx + 0x174)
*(arg1 + 0x174) = eax_5.w
*(arg1 + 0x178) = *(ebx + 0x178)
arg1[0x18].d = ebx[0x18].d
*(arg1 + 0x184) = *(ebx + 0x184)
*(arg1 + 0x188) = *(ebx + 0x188)
*(arg1 + 0x18c) = *(ebx + 0x18c)
arg1[0x19].d = ebx[0x19].d

if (arg1 + 0x134 != ebx + 0x134)
    sub_52e3c0(arg1 + 0x134, ebx + 0x134, 0, 0xffffffff)

if (arg1 + 0x14c != ebx + 0x14c)
    sub_52e3c0(arg1 + 0x14c, ebx + 0x14c, 0, 0xffffffff)

*(arg1 + 0x194) = *(ebx + 0x194)
*(arg1 + 0x198) = *(ebx + 0x198)
*(arg1 + 0x19c) = *(ebx + 0x19c)
arg1[0x1a].d = ebx[0x1a].d
*(arg1 + 0x1a5) = *(ebx + 0x1a5)
*(arg1 + 0x1a6) = *(ebx + 0x1a6)
*(arg1 + 0x1a7) = *(ebx + 0x1a7)
*(arg1 + 0x1a8) = *(ebx + 0x1a8)

if (*(data_bac510 + 0x10bd8) != 1)
    int32_t ecx_5 = *(arg1 + 0xd8)
    int32_t edx_3 = *(arg1 + 0x18)
    *(arg1 + 0x12c) = (ecx_5 - 1) * *(arg1 + 0x1c) + ecx_5 * edx_3
    int32_t eax_31 = *(arg1 + 0xdc)
    arg1[0x13].d = (eax_31 - 1) * arg1[2].d + edx_3 * eax_31
else
    int32_t ecx_2 = *(arg1 + 0xdc)
    int32_t ecx_3 = *(arg1 + 0xd8)
    int32_t eax_26 = (ecx_3 - 1) * *(arg1 + 0x1c)
    int32_t ecx_4 = ecx_3 * *(arg1 + 0x18)
    *(arg1 + 0x12c) = (ecx_2 - 1) * arg1[2].d + *(arg1 + 0x18) * ecx_2
    arg1[0x13].d = eax_26 + ecx_4

sub_5b48f0(arg1 + 0x1ac, (ebx[0x1b].d - *(ebx + 0x1ac)) s/ 0x3b4)
arg2 = nullptr
int32_t result = (arg1[0x1b].d - *(arg1 + 0x1ac)) s/ 0x3b4

if (result s> 0)
    int32_t esi_1 = 0
    
    do
        sub_5b0fe0(*(arg1 + 0x1ac) + esi_1, *(ebx + 0x1ac) + esi_1)
        esi_1 += 0x3b4
        arg2 += 1
        result = (arg1[0x1b].d - *(arg1 + 0x1ac)) s/ 0x3b4
    while (arg2 s< result)

return result
