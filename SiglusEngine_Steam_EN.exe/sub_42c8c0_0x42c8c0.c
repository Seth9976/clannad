// 函数: sub_42c8c0
// 地址: 0x42c8c0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
void* result = sub_42c7b0(1)
void* esi = &data_ef0d1c
int32_t i_1 = 2
int32_t ebx = 0
int32_t i

do
    sub_4d1c30(result, ebx + &data_8c4ca4, ebx + &data_ef0be8, 0x88)
    sub_4d1c30(result, esi - 0x434, esi - 0x24, 0x180)
    *(esi + 0x30) = data_13926fc
    int32_t eax_1 = data_13926f8
    *(esi - 4) = 0xffffffff
    *esi = 0xffffffff
    *(esi + 4) = 0xffffffff
    *(esi - 0x14) = 0
    *(esi - 0x10) = 0
    *(esi - 8) = 0
    *(esi + 0xc) = 0
    *(esi + 0x24) = 1
    *(esi + 0x28) = 0
    *(esi + 0x2c) = 0
    *(esi + 0x34) = eax_1
    *(esi + 0x38) = 0
    *(esi + 0x3c) = 0
    *(esi + 0x40) = 0
    sub_4d1c30(eax_1, esi - 0x424, esi - 0x14, 0x58)
    sub_42e3c0(esi - 0x14, esi - 0x424)
    sub_42ea20(esi - 0x14)
    result = *(esi - 0x20)
    
    if (result != 0xffffffff && result u<= 0x1ff)
        result = result * 0x74 + &data_1374760
        *(result + 0x4c) += 1
    
    ebx += 0x88
    esi += 0x180
    i = i_1
    i_1 -= 1
while (i != 1)
return result
