// 函数: sub_481bd0
// 地址: 0x481bd0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = arg3
int32_t edx = esi[0xd]
int32_t var_8 = esi[0xe]
arg3 = esi[0xf]

if (arg2 u> 0xff || edx s< 0 || edx s>= *(*(arg2 * 0x58 + 0x1b164c0) + 0x94))
    *esi = 1
    return 1

int32_t* ebx = *(arg2 * 0x58 + 0x1b164cc) + edx * 0x78
int32_t var_c

if (sub_481670(&var_8, arg2 * 0x58 + &data_1b16490, esi, ebx, &var_8, &arg3, &var_c) == 0)
    int32_t i
    
    do
        arg3 += 1
        i = sub_481670(&var_8, arg2 * 0x58 + &data_1b16490, esi, ebx, &var_8, &arg3, &var_c)
    while (i == 0)

arg3 += 1
sub_481670(&var_8, arg2 * 0x58 + &data_1b16490, esi, ebx, &var_8, &arg3, &var_c)
int32_t eax_8 = var_c

if (eax_8 == 0)
    esi[0xe] = var_8
    esi[0xf] = arg3
    esi[0xb] = 0
    return 0

if (eax_8 == 1)
    int32_t eax_11 = *esi
    esi[5] += 1
    
    if (eax_11 - 4 u<= 6)
        switch (eax_11)
            case 4
                *esi = 2
                return 1
            case 5
                esi[0xe] = var_8
                esi[0xf] = arg3
            case 6
                *esi = 7
            label_481cd4:
                esi[0xe] = *ebx
                esi[0xf] = arg3
            case 7
                goto label_481cd4
            case 8
                esi[4] = 1
            case 9
                if (esi[0xb] != 0)
                    esi[0xe] = *ebx
                    esi[0xf] = arg3
                    esi[0xb] = 1
                    return 0
                
                int32_t eax_21 = sub_481a60(esi[0xa])
                esi[9] = eax_21
                esi[0xa] = eax_21
                esi[0xb] = 1
            case 0xa
                int32_t result
                void* ecx_8
                result, ecx_8 = sub_445700()
                
                if (result == 0)
                    esi[9] = 0x64
                    esi[2] = 1
                    esi[0xc] = result
                    return result
                
                if (result == 1)
                    esi[0xe] = *ebx
                    esi[0xf] = arg3
                    esi[0xc] = 0
                    return 0
                
                if (result == 2)
                    if (esi[0xc] != 0)
                        esi[2] = 1
                        return 0
                    
                    void* var_20_3 = ecx_8
                    int32_t* var_24_3 = esi
                    sub_481e00(result, arg2, ecx_8)
                    esi[0xc] = 1

return 0
