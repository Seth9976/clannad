// 函数: sub_55f860
// 地址: 0x55f860
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
WPARAM result = sub_4c1810(data_1af0a3c, 0x4f32)

if (result != 0xffffffff)
    int32_t edx_1 = data_20c71e4
    
    if (edx_1 s>= 0x100)
        result += data_20c71e0
        
        if (result s>= 0x100)
            result -= 0x100
        
        goto label_55f8bf
    
    if (result s>= 0x100 - edx_1)
        result -= 0x100 - edx_1
    label_55f8bf:
        
        if (result != 0xffffffff)
            result <<= 5
            char var_848 = 0
            int32_t ecx_2 = *(result + 0x20c71ec)
            char* edi_1 = *(result + &data_20c71f8)
            char* esi_1 = *(result + 0x20c7204)
            void* const var_858_4
            
            if (ecx_2 != 0xffffffff)
                int32_t var_854_1 = *(result + 0x20c71f0)
                int32_t var_858_1 = ecx_2
                void var_48
                sub_4c84d0(&var_48, "Seen%04d(%05d)")
                
                if (edi_1 != 0 && *edi_1 != 0)
                    if (esi_1 == 0 || *esi_1 == 0)
                        char* var_854_3 = edi_1
                        goto label_55f941
                    
                    char* var_854_2 = esi_1
                    char* var_858_2 = edi_1
                    void* var_85c_1 = &var_48
                    result = sub_4c84d0(&var_848, 0x621d94)
                    goto label_55f9ae
                
                if (esi_1 == 0 || *esi_1 == 0)
                    void* var_854_5 = &var_48
                    var_858_4 = &data_621dd8
                label_55f9a6:
                    result = sub_4c84d0(&var_848, var_858_4)
                    goto label_55f9ae
                
                char* var_854_4 = esi_1
            label_55f941:
                void* var_858_3 = &var_48
                result = sub_4c84d0(&var_848, 0x621db8)
                goto label_55f9ae
            
            if (edi_1 != 0 && *edi_1 != 0)
                if (esi_1 == 0 || *esi_1 == 0)
                    char* var_854_7 = edi_1
                    goto label_55f99a
                
                char* var_854_6 = esi_1
                char* var_858_5 = edi_1
                result = sub_4c84d0(&var_848, 0x621df4)
            label_55f9ae:
                
                if (var_848 != 0)
                    result = sub_4d4860(&var_848)
            else if (esi_1 != 0 && *esi_1 != 0)
                char* var_854_8 = esi_1
            label_55f99a:
                var_858_4 = &data_621e14
                goto label_55f9a6

sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
