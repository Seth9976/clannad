// 函数: sub_415010
// 地址: 0x415010
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = arg1[0xd]

if (esi u<= 0x1ff)
    *(esi * 0x74 + &data_13747ac) -= 1
    
    if (*(esi * 0x74 + &data_13747ac) s<= 0)
        sub_4d6c40(esi * 0x74 + 0x13747b0, esi * 0x74 + 0x13747b4)
        sub_425320(esi)

int32_t esi_1 = arg1[0xe]

if (esi_1 u<= 0x1ff)
    *(esi_1 * 0x74 + &data_13747ac) -= 1
    
    if (*(esi_1 * 0x74 + &data_13747ac) s<= 0)
        sub_4d6c40(esi_1 * 0x74 + 0x13747b0, esi_1 * 0x74 + 0x13747b4)
        sub_425320(esi_1)

void* esi_2 = &arg1[0x15]
int32_t i_1 = 0x10
int32_t i

do
    sub_4d6c40(esi_2, esi_2 + 4)
    sub_4d6c40(esi_2 + 8, esi_2 + 0xc)
    sub_4d6c40(esi_2 + 0x10, esi_2 + 0x14)
    esi_2 += 0x3b4
    i = i_1
    i_1 -= 1
while (i != 1)
return sub_414da0(arg1) __tailcall
