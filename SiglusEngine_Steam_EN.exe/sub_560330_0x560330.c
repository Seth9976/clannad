// 函数: sub_560330
// 地址: 0x560330
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg1 != 0xffffffff)
    int32_t eax_1 = *(arg1 * 0x28 + &data_922108)
    *((arg1 << 2) + &data_20cb234) = eax_1
    *((arg1 << 2) + &data_20caa34) += 1
    return eax_1

void* ecx = &data_922108
void* i

for (i = &data_20caa34; i s< &data_20cae34; )
    int32_t edx_1 = *ecx
    
    if (*(i + 0x800) != edx_1)
        *(i + 0x800) = edx_1
        *i += 1
    
    i += 4
    ecx += 0x28

return i
