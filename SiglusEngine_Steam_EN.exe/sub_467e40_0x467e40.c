// 函数: sub_467e40
// 地址: 0x467e40
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t result = data_7031bc * 2
int32_t var_c = result
void* ebx = &data_b73f04
void* var_8 = &data_b73f04

if (result s> 0)
    void* esi_1 = &data_d08744
    int32_t i
    
    do
        sub_4637f0(ebx, esi_1 - 0x40)
        sub_4d6c40(esi_1 - 0xc, esi_1 - 8)
        sub_4d6c40(esi_1 - 4, esi_1)
        sub_4d6c40(esi_1 + 4, esi_1 + 8)
        *(esi_1 + 0xc) = 0
        *(esi_1 + 0x10) = 0
        sub_4d6c40(esi_1 + 0x4c, esi_1 + 0x50)
        *(esi_1 + 0x48) = 0
        *(esi_1 + 0x4c) = 0
        *(esi_1 + 0x50) = 0
        void* eax_1 = sub_4679d0(esi_1 + 0x234)
        sub_4631a0(esi_1 - 0x20)
        result = sub_4633c0(eax_1, esi_1 - 0x40, var_8, 1)
        ebx = var_8 + 0x650
        esi_1 += 0x7a0
        var_8 = ebx
        i = var_c
        var_c -= 1
    while (i != 1)

return result
