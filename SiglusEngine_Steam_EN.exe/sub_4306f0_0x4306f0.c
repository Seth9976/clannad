// 函数: sub_4306f0
// 地址: 0x4306f0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
void* result = __security_cookie ^ &__saved_ebp
void* result_1 = result

if (arg3 u<= 0x1f)
    result = sub_4305e0(arg3)
    
    if (arg2 != 0)
        char var_218[0x20c]
        sub_4cfd70(&var_218, arg2)
        int32_t eax_3 = sub_4c3960(&var_218, &data_6142ac)
        int32_t edi_1 = data_703190.d
        char* ecx_3
        result, ecx_3 = sub_4c3da0(eax_3, 5, &var_218, 0x21)
        
        if (result == 1)
        label_43079a:
            char* var_234_1 = ecx_3
            int32_t var_238_1 = 0x21
            int32_t ecx_5 = data_703190.d
            int32_t* var_220 = nullptr
            int32_t var_21c = 0
            result = sub_4c5340(&var_21c, &var_218, ecx_5, &var_21c, &var_220, ecx_3)
            
            if (var_21c != 0)
                int32_t* edx_3 = var_220
                *(arg3 * 0xb0 + &data_ef0ff8) = 1
                int32_t eax_5 = sub_42e190(arg3 * 0xb0 + &data_ef0ff8, edx_3)
                
                if (*(arg3 * 0xb0 + &data_ef0ff8) != 0)
                    int32_t var_234_2 = 0
                    int32_t var_238_2 = 0xffffffff
                    sub_42e450(eax_5, arg4, arg3 * 0xb0 + &data_ef0ff8)
                
                result = sub_4cfdf0(sub_4d6c40(&var_21c, &var_220), arg2, 
                    arg3 * 0x28 + &data_8c4db4, 0x24)
                *(arg3 * 0x28 + 0x8c4dd8) = arg4
        else if (edi_1 != 0xffffffff)
            result, ecx_3 = sub_4c51f0(result, &var_218, edi_1, nullptr)
            
            if (result != 0)
                goto label_43079a

sub_5f02dd(result_1 ^ &__saved_ebp)
return result
