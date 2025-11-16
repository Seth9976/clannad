// 函数: sub_466c70
// 地址: 0x466c70
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg3

if (arg3 s>= 0 && arg3 s< data_7031bc)
    enum MESSAGEBOX_RESULT eax = arg2 + (arg3 << 1)
    int32_t esi_1 = eax * 0x650
    
    if (*(esi_1 + &data_72d6bc) == 8)
        eax, arg2 = sub_478ca0(eax, arg2, arg3, arg4, arg5)
    
    int32_t eax_2
    
    if (*(esi_1 + &data_72d6bc) != 8 || eax == 0)
        eax_2 = sub_466890(eax, arg2, esi_1 + &data_72d6b0, arg4, arg5)
    
    if ((*(esi_1 + &data_72d6bc) == 8 && eax != 0) || eax_2 != 0)
        return 1

return 0
