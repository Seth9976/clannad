// 函数: sub_561580
// 地址: 0x561580
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg1 != 0xffffffff)
    int32_t eax_1 = *(arg1 * 0x28 + &data_91f908)
    *((arg1 << 2) + &data_20cbe74) = eax_1
    *((arg1 << 2) + &data_20cb674) += 1
    return eax_1

void* ecx = &data_91f908
void* i

for (i = &data_20cb674; i s< &data_20cba74; )
    int32_t edx_1 = *ecx
    
    if (*(i + 0x800) != edx_1)
        *(i + 0x800) = edx_1
        *i += 1
    
    i += 4
    ecx += 0x28

return i
