// 函数: sub_425c70
// 地址: 0x425c70
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = data_702ff0
int32_t var_c = data_702fec
int32_t var_10 = data_702fe8

if (arg3 u<= 0x1ff)
    sub_425430(arg3, 1)
    void* esi_1 = arg3 * 0x74
    
    if (*(esi_1 + 0x13747d0) == 0)
        *(esi_1 + 0x13747d0) = 1
        void* eax_3 = sub_423710(esi_1 + 0x13747b0)
        
        if (eax_3 s> 0)
            *(esi_1 + 0x13747cc) = eax_3
    
    if (*(esi_1 + 0x13747b0) != 0)
        int32_t edi_1 = *arg4
        
        if (edi_1 u<= 0x1f)
            int32_t var_24 = var_8
            int32_t var_28 = var_c
            int32_t var_2c = var_10
            int32_t var_14
            int32_t result =
                sub_427fb0(&var_10, arg2, esi_1 + 0x13747b0, &var_10, &var_c, &var_8, &var_14)
            arg4[edi_1 + 1] = var_10
            arg4[edi_1 + 0x21] = var_c
            arg4[edi_1 + 0x41] = var_8
            arg4[edi_1 + 0x61] = var_14
            return result

return 0
