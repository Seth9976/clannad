// 函数: sub_52c640
// 地址: 0x52c640
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* var_4 = arg1
int32_t eax = data_1af4e84

if (eax == 0)
    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
    return sub_57d4d0(*(arg1 + 0x13b3c), data_1b8a720)

if (eax == 1)
    int32_t ecx = *(arg1 + 0x13b3c)
    
    if (ecx u<= 0x3f)
        int32_t edx = *(ecx * 0x1d4 + &data_1090aec)
        int32_t esi_3 = *(ecx * 0x1d4 + 0x1090af0)
        *(ecx * 0x2d0 + &data_8fcadc) = *(ecx * 0x1d4 + 0x1090ae8)
        *(ecx * 0x2d0 + 0x8fcae0) = edx
        *(ecx * 0x2d0 + &data_8fcae4) = esi_3
        return sub_57f830(ecx)

return eax - 1
