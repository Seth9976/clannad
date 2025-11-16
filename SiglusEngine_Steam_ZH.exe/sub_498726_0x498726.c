// 函数: sub_498726
// 地址: 0x498726
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

char* edx = arg2

if (edx == 0)
    return 0

int32_t i_2 = arg3
int32_t esi_2 = not.d(arg1)

if (i_2 u>= 8)
    int32_t edi
    int32_t var_10_1 = edi
    uint32_t i_3 = i_2 u>> 3
    uint32_t i
    
    do
        i_2 -= 8
        int32_t esi_4 = esi_2 u>> 8 ^ (*U"????????????????")[0x10 + (zx.d(*edx) ^ zx.d(esi_2.b))]
        int32_t esi_6 = esi_4 u>> 8 ^ (*U"????????????????")[0x10 + (zx.d(edx[1]) ^ zx.d(esi_4.b))]
        int32_t esi_8 = esi_6 u>> 8 ^ (*U"????????????????")[0x10 + (zx.d(edx[2]) ^ zx.d(esi_6.b))]
        int32_t esi_10 = esi_8 u>> 8 ^ (*U"????????????????")[0x10 + (zx.d(edx[3]) ^ zx.d(esi_8.b))]
        int32_t esi_12 = esi_10 u>> 8 ^ (*????????????????")[0x10 + (zx.d(edx[4]) ^ zx.d(esi_10.b))]
        int32_t esi_14 = esi_12 u>> 8 ^ (*????????????????")[0x10 + (zx.d(edx[5]) ^ zx.d(esi_12.b))]
        int32_t esi_16 = esi_14 u>> 8 ^ (*????????????????")[0x10 + (zx.d(edx[6]) ^ zx.d(esi_14.b))]
        esi_2 = esi_16 u>> 8 ^ (*U"????????????????")[0x10 + (zx.d(edx[7]) ^ zx.d(esi_16.b))]
        edx = &edx[8]
        i = i_3
        i_3 -= 1
    while (i != 1)

if (i_2 != 0)
    int32_t i_1
    
    do
        esi_2 = esi_2 u>> 8 ^ (*U"????????????????")[0x10 + (zx.d(*edx) ^ zx.d(esi_2.b))]
        edx = &edx[1]
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

return not.d(esi_2)
