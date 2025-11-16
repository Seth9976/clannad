// 函数: sub_55fd80
// 地址: 0x55fd80
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg1 != 0xffffffff)
    int32_t eax = data_1392710
    *((arg1 << 2) + &data_20ca1f4) = 1
    *((arg1 << 2) + &data_20c9df4) = eax
    int32_t eax_1 = (&data_91f504)[arg1]
    *((arg1 << 2) + &data_20c99f4) = eax_1
    *((arg1 << 2) + &data_20c91f4) += 1
    *((arg1 << 2) + &data_20ca5f4) = eax_1
    return eax_1

int32_t i

for (i = 0; i s< 0x400; i += 4)
    int32_t ecx = *(i + &data_91f504)
    
    if (*(i + &data_20c99f4) != ecx)
        *(i + &data_20c99f4) = ecx
        *(i + &data_20c91f4) += 1
    
    *(i + &data_20ca5f4) = ecx

return i
