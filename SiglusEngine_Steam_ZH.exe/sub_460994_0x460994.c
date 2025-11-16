// 函数: sub_460994
// 地址: 0x460994
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_24 = edi
int32_t var_10

if ((*(**(arg1 + 0xc) + 0x10))(&var_10) != 0 && var_10 == 0x20666f78)
    int32_t var_8
    
    if ((*(**(arg1 + 0xc) + 0x10))(&var_8) == 0)
        return 0x8876038d
    
    if (var_8 != 0x33303330 && var_8 != 0x32303330)
        return 0x8876038d
    
    int32_t var_14
    
    if ((*(**(arg1 + 0xc) + 0x10))(&var_14) != 0)
        int32_t eax_6 = var_14
        int32_t ebx_1
        
        if (eax_6 != 0x20747874)
            if (eax_6 == 0x206e6962)
                ebx_1 = 0
                *(arg1 + 0x20) = 0
                goto label_460a44
            
            if (eax_6 == 0x70697a74)
                *(arg1 + 0x20) = 1
            label_460a39:
                ebx_1 = 1
                goto label_460a44
            
            if (eax_6 == 0x70697a62)
                *(arg1 + 0x20) = 0
                goto label_460a39
        else
            *(arg1 + 0x20) = 1
            ebx_1 = 0
        label_460a44:
            int32_t var_c
            
            if ((*(**(arg1 + 0xc) + 0x10))(&var_c) != 0)
                if (var_c != 0x32333030)
                    if (var_c != 0x34363030)
                        return 0x8876038e
                    
                    *(arg1 + 0x24) = 8
                else
                    *(arg1 + 0x24) = 4
                
                if (ebx_1 != 1)
                    return nullptr
                
                int32_t var_18
                int32_t* var_28_4 = &var_18
                int32_t* result = sub_483585(*(arg1 + 0xc))
                
                if (result s< 0)
                    return result
                
                int32_t* ecx_4 = *(arg1 + 0xc)
                
                if (ecx_4 != 0)
                    (**ecx_4)(1)
                
                *(arg1 + 0xc) = var_18
                return sub_460994()

return 0x8876038c
