// 函数: sub_556840
// 地址: 0x556840
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t* result = data_20c2e88
int32_t i = 0
int32_t* result_1 = result

if (data_20c2e8c s> 0)
    int32_t edi_1 = data_1333e3c
    
    do
        int32_t eax_2 = *result
        int32_t ecx_1 = data_20c2e68
        int32_t var_420_1 = eax_2
        int32_t ebx_1 = eax_2 * 9
        int32_t ecx_2 = *((ebx_1 << 2) + &data_1b8c8b0)
        char const* const var_424_1
        
        if (*((ebx_1 << 2) + &data_1b8c8a8) == ecx_2)
            var_424_1 = "%04d "
        else if (ecx_2 != 0)
            var_424_1 = "%04d "
        else
            var_424_1 = "%04d"
        
        void var_408
        sub_4c84d0(&var_408, var_424_1)
        
        if (edi_1 != 0)
            edi_1(0, &var_408, i, i, data_20c2e68, 0x4f32)
            edi_1 = data_1333e3c
        
        int32_t var_420_2 = *((ebx_1 << 2) + &data_1b8c8a8)
        int32_t var_424_3 = *((ebx_1 << 2) + &data_1b8c8b0)
        sub_4c84d0(&var_408, "%d / %d")
        
        if (edi_1 != 0)
            edi_1(1, &var_408, i, i, ecx_1, 0x4f32)
            edi_1 = data_1333e3c
        
        int32_t var_420_3 = *((ebx_1 << 2) + &data_1b8c8a8) - *((ebx_1 << 2) + &data_1b8c8b0)
        sub_4c84d0(&var_408, "%d")
        
        if (edi_1 != 0)
            edi_1(2, &var_408, i, i, ecx_1, 0x4f32)
            edi_1 = data_1333e3c
        
        i += 1
        result = &result_1[1]
        result_1 = result
    while (i s< data_20c2e8c)

sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
