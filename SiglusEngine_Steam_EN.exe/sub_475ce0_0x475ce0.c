// 函数: sub_475ce0
// 地址: 0x475ce0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t result = __security_cookie ^ &__saved_ebp
int32_t result_1 = result
int32_t i = 0
int32_t i_1 = 0

if (data_7031bc s> 0)
    void* edi_1 = &data_98bf70
    void* esi_1 = &data_72d6bc
    void* var_1c_1 = &data_98bf70
    
    do
        int32_t ecx
        
        if (*(esi_1 + 0x62c) s>= 0)
            int32_t var_34_1 = 0
            int32_t var_38_1 = 0xff
            int32_t var_3c_1 = 0
            int32_t var_40_1 = 0
            int32_t var_44_1 = 0
            int32_t ecx_1 = *(edi_1 - 4)
            int32_t eax_1 = *edi_1
            int32_t ebx = *(edi_1 + 4)
            int32_t edi_2 = *(edi_1 + 8)
            sub_58bcc0(eax_1, data_702fec, data_702fe8, data_702ff0, ecx_1, eax_1, ebx, edi_2, 
                data_702ff4, (data_702ff8).b, data_702ffc, data_703000, ecx_1, 0, 0, 0, 0, 0, 0, 0, 
                0, 0, 0xff, 0, 0, 0, 0, 0)
            int32_t var_14 = 0xffffff
            int32_t var_10_1 = 0
            int32_t var_c_1 = 0xffffff00
            result, ecx = sub_4759c0(&var_14, eax_1, ecx_1, ebx, edi_2, &var_14)
            edi_1 = var_1c_1
            i = i_1
            data_1b14a24 = 1
        
        if (*esi_1 == 8)
            result, ecx = sub_475bd0(ecx, edi_1 - 0x6c)
        
        i += 1
        edi_1 += 0xf40
        esi_1 += 0xca0
        var_1c_1 = edi_1
        i_1 = i
    while (i s< data_7031bc)

sub_5f02dd(result_1 ^ &__saved_ebp)
return result
