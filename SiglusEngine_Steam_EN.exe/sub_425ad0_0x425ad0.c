// 函数: sub_425ad0
// 地址: 0x425ad0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = data_702ff0
int32_t var_14 = data_702fec
int32_t var_10 = data_702fe8

if (arg3 u<= 0x1ff)
    sub_425430(arg3, 1)
    void* edi_1 = arg3 * 0x74
    
    if (*(edi_1 + 0x13747d0) == 0)
        *(edi_1 + 0x13747d0) = 1
        void* eax_2 = sub_423710(edi_1 + 0x13747b0)
        
        if (eax_2 s> 0)
            *(edi_1 + 0x13747cc) = eax_2
    
    if (*(edi_1 + 0x13747b0) != 0)
        int32_t var_28 = ebx
        int32_t var_2c = var_14
        int32_t var_30 = var_10
        int32_t var_c
        int32_t var_8
        int32_t result =
            sub_427fb0(&var_8, arg2, edi_1 + 0x13747b0, &var_8, &var_c, &var_10, &var_14)
        
        if (arg4 == 0)
            arg2[0x19] = var_8
            arg2[0x1a] = var_c
            arg2[0x1b] = var_10
            arg2[0x1c] = var_14
            return result
        
        int32_t ecx_2 = var_8
        arg4[0x61] = var_14
        arg4[1] = ecx_2
        int32_t eax_5
        eax_5.b = result != 0
        arg4[0x21] = var_c
        int32_t ecx_4 = var_10
        *arg4 = eax_5
        arg4[0x41] = ecx_4
        return result

return 0
