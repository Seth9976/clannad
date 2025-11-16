// 函数: sub_4a1e40
// 地址: 0x4a1e40
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t result = __security_cookie ^ &__saved_ebp
int32_t result_1 = result
int32_t var_21c = arg1

if (data_13132f4 != 0 && arg1 u<= 0x1f)
    int32_t esi_2 = arg1 & 0x80000003
    
    if (esi_2 s< 0)
        esi_2 = ((esi_2 - 1) | 0xfffffffc) + 1
    
    int32_t edx
    edx.b = 1
    int32_t var_220_1 = 0
    char var_215_1 = 1
    int32_t ebx_3
    
    while (true)
        int32_t eax_1 = *((esi_2 << 2) + &data_1af0f40)
        int32_t edi_1
        
        if (eax_1 == 0)
            *((esi_2 << 2) + &data_1af0f40) = 1
            edi_1 = esi_2
        else if (eax_1 == 1)
            *((esi_2 << 2) + &data_1af0f40) = 2
            edi_1 = esi_2 + 4
        else if (eax_1 != 2)
            *((esi_2 << 2) + &data_1af0f40) = 0
            edi_1 = esi_2 + 0xc
        else
            *((esi_2 << 2) + &data_1af0f40) = 3
            edi_1 = esi_2 + 8
        
        if (arg1 != 0)
        label_4a1f70:
            edx.b = 1
        label_4a1f76:
            ebx_3 = edi_1 + 4
            
            if (edx.b == 0)
                break
        else
            if (data_641b5c != arg1)
                if (edi_1 + 4 u> 0x3f)
                    goto label_4a1f70
                
                WaitForSingleObject(data_641b54, 0xffffffff)
                int32_t ebx_2
                
                if ((&data_208cd58)[(edi_1 + 4) * 0x60] == 0
                        || (&data_208cd54)[(edi_1 + 4) * 0x60] == 0)
                    ebx_2 = 0
                else
                    ebx_2 = 1
                
                ReleaseSemaphore(data_641b54, 1, nullptr)
                arg1 = var_21c
                
                if (ebx_2 == 0)
                    goto label_4a1f70
                
                edx = var_220_1 + 1
                var_220_1 = edx
                
                if (edx != 4)
                    continue
                else
                    edx.b = 0
                    var_215_1 = 0
                
                goto label_4a1f76
            
            edx.b = 1
            ebx_3 = edi_1 + 4
        
        int32_t eax_5 = *((edi_1 << 2) + &data_1af0fc0)
        
        if (eax_5 != 0xffffffff)
            *((edi_1 << 2) + &data_1af0f80) = eax_5
        
        *((edi_1 << 2) + &data_1af0fc0) = arg1
        break
    
    result = arg1 * 0x3b8
    
    if (*(result + &data_1087460) == 0 || (data_702fc0 != 0 && data_1af414c != 0))
        result = arg1 * 5
        void* esi_5 = (result << 3) + &data_12c3ca4
        
        if (*((result << 3) + &data_12c3ca4) != 0)
            char var_214[0x20c]
            sub_4cfd70(&var_214, esi_5)
            result = sub_49ede0(&var_214)
            
            if (result s>= 0 && var_215_1 != 0)
                int32_t var_230_2 = 0xff
                int32_t var_234_3 = 0
                int32_t var_238_3 = 1
                int32_t var_23c_2 = 0xffffffff
                int32_t var_240_2 = 0xffffffff
                int32_t var_244_2 = 0xffffffff
                int32_t var_248_2 = 0
                int32_t var_24c_2 = 1
                int32_t var_254_2 = 0x1b
                int32_t var_258_2 = 5
                result = sub_49db20(result, ebx_3, 0x975bf8, nullptr, data_7031a8, esi_5, 5, 0x1b, 
                    0, 1, 0, 0xffffffff, 0xffffffff, 0xffffffff, 1, 0, 0xff)
    else if (edx.b != 0)
        int32_t var_230_1 = 0xff
        int32_t var_234_2 = 0
        int32_t var_238_2 = 1
        int32_t var_23c_1 = 0xffffffff
        int32_t var_240_1 = 0xffffffff
        int32_t var_244_1 = 0xffffffff
        int32_t var_248_1 = 0
        int32_t var_24c_1 = 1
        result += 0x1087458
        int32_t var_254_1 = 0x1b
        int32_t var_258_1 = 5
        result = sub_49db20(result, ebx_3, 0x975bf8, nullptr, data_7031a8, nullptr, 5, 0x1b, 
            result, 1, 0, 0xffffffff, 0xffffffff, 0xffffffff, 1, 0, 0xff)

sub_5f02dd(result_1 ^ &__saved_ebp)
return result
