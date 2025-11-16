// 函数: sub_55e890
// 地址: 0x55e890
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg1 != 0xffffffff)
    int32_t eax = data_1392710
    *((arg1 << 2) + &data_20c6704) = 1
    *((arg1 << 2) + &data_20c6304) = eax
    int32_t eax_1 = (&data_91f104)[arg1]
    *((arg1 << 2) + &data_20c5f04) = eax_1
    *((arg1 << 2) + &data_20c5704) += 1
    *((arg1 << 2) + &data_20c6b04) = eax_1
    return eax_1

int32_t i

for (i = 0; i s< 0x400; i += 4)
    int32_t ecx = *(i + &data_91f104)
    
    if (*(i + &data_20c5f04) != ecx)
        *(i + &data_20c5f04) = ecx
        *(i + &data_20c5704) += 1
    
    *(i + &data_20c6b04) = ecx

return i
