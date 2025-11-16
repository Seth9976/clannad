// 函数: sub_49a530
// 地址: 0x49a530
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
sub_4d1c30(sub_49a4a0(), &data_8c52b4, 0xf3b6f8, 0xb000)
void* esi = &data_f2e6fc
int32_t ecx_1 = 0
void* ebx = &data_f2e6f8
int32_t var_8_1 = 0
int32_t result

for (void* i = &data_8c52dc; i s< 0x8d02dc; )
    *(esi + 0x18) = *(esi - 4)
    *(esi + 0x1c) = *esi
    *(esi + 0x20) = *(esi + 8)
    *(esi + 0x24) = *(esi + 0xc)
    *(esi + 0x28) = *(esi + 0x10)
    result = *(esi + 0x14)
    *(esi + 0x2c) = result
    
    if (ecx_1 u<= 0x3ff)
        *(i - 0x28) = 0
        result = sub_4d1ba0(result, 0x24, i - 0x24, 0)
        ecx_1 = var_8_1
        *i = 0
        *ebx = 0
        *(ebx + 4) = 0
    
    ecx_1 += 1
    i += 0x2c
    esi += 0x34
    var_8_1 = ecx_1
    ebx += 0x34

return result
