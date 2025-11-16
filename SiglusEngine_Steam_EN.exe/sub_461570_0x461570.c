// 函数: sub_461570
// 地址: 0x461570
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
void* result = __security_cookie ^ &__saved_ebp
void* result_2 = result

if (data_1b144b0 != 0 && data_1b144c8 != 0)
    int32_t __saved_esi_1 = data_129991c
    data_1b14500 = 2
    void* eax_1 = sub_424660(result, 0x1b144f4, &data_1b144b0, 0, 1, data_1299918, __saved_esi_1)
    data_1b14500 = 0
    sub_424660(eax_1, 0x1b144f4, &data_1b144b0, 0, 0, 0, 0)
    int32_t eax_2 = data_1311170
    void* eax_4
    
    if (eax_2 == data_1af4e94 || eax_2 == 0x3e7)
        eax_4 = 6
    else
        int32_t eax_3
        eax_3.b = data_1b144d0 != 0
        eax_4 = (eax_3 << 1) + 2
    
    sub_424660(eax_4, 0x1b144f4, &data_1b144b0, 0, eax_4, data_1299920, data_1299924)
    void* eax_5
    
    if (data_1311170 != 0)
        int32_t eax_6
        eax_6.b = data_1b144d4 != 0
        eax_5 = (eax_6 << 1) + 3
    else
        eax_5 = 7
    
    result = sub_424660(eax_5, 0x1b144f4, &data_1b144b0, 0, eax_5, data_1299928, data_129992c)
    
    if (data_702fc0 != 0 && data_1313250 != 0)
        int32_t esi_1 = data_13132ac
        int32_t ecx_2 = data_129994c + esi_1
        int32_t edi_1 = data_13132a8
        int32_t edx_2 = data_1299948 + edi_1
        int32_t eax_9 = data_1299950 - 1 + edx_2
        int32_t var_38 = edx_2
        int32_t edx_3 = data_129995c
        int32_t var_14 = eax_9
        int32_t edx_4 = edx_3 + edi_1
        int32_t eax_11 = data_1299954 - 1
        int32_t var_20 = ecx_2
        int32_t var_34_1 = edx_4
        int32_t ecx_3 = data_1299960
        int32_t var_2c = eax_11 + ecx_2
        int32_t ecx_4 = ecx_3 + esi_1
        int32_t var_1c_1 = ecx_4
        int32_t var_10_1 = data_1299964 - 1 + edx_4
        int32_t edx_6 = data_1299934 + edi_1
        int32_t var_30_1 = edx_6
        int32_t var_28_1 = data_1299968 - 1 + ecx_4
        int32_t ecx_6 = data_1299938 + esi_1
        int32_t var_18_1 = ecx_6
        int32_t var_c_1 = data_129993c - 1 + edx_6
        result = data_1299940 - 1 + ecx_6
        int32_t i = 0
        void* result_1 = result
        
        do
            int32_t var_44_3 = 0
            int32_t var_48_1 = 0xff
            int32_t var_4c_1 = 0
            int32_t var_50_1 = 0
            int32_t var_54_1 = 0
            result, ecx_6 = sub_58bcc0(result, data_702fec, data_702fe8, data_702ff0, 
                *(&var_38 + i), *(&var_20 + i), *(&var_14 + i), *(&var_2c + i), data_702ff4, 
                (data_702ff8).b, data_702ffc, data_703000, ecx_6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0xff, 
                0, 0, 0, 0, 0)
            i += 4
        while (i s< 0xc)

sub_5f02dd(result_2 ^ &__saved_ebp)
return result
