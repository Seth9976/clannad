// 函数: sub_49c560
// 地址: 0x49c560
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* result

if (arg1 != 0xffffffff)
    int32_t ecx_4
    
    if (arg2 != 0xffffffff)
        if (arg1 u> 7 || arg2 u> 1)
            return sub_42d590() __tailcall
        
        result = &(&data_8d02b4)[(arg2 + (arg1 << 1)) * 0xb20]
        ecx_4 = *result
        
        if (ecx_4 == 1 || ecx_4 == 3)
        label_49c5ee:
            
            if (*(result + 4) != 0)
                return sub_42d590() __tailcall
        else
        label_49c5e9:
            
            if (ecx_4 != 5 || *(result + 4) != 0)
                return sub_42d590() __tailcall
    else
        if (arg1 u> 7)
            return sub_42d590() __tailcall
        
        result = &(&data_8d02b4)[arg1 * 0x1640]
        int32_t edx_2 = *result
        
        if (edx_2 == 1 || edx_2 == 3)
            if (*(result + 4) != 0)
            label_49c5cd:
                
                if (arg1 u> 7)
                    return sub_42d590() __tailcall
                
                result = arg1 * 0x5900 + &data_8d2f34
                ecx_4 = *result
                
                if (ecx_4 == 1 || ecx_4 == 3)
                    goto label_49c5ee
                
                goto label_49c5e9
        else if (edx_2 != 5 || *(result + 4) != 0)
            goto label_49c5cd
else if (arg2 != arg1)
    result = sub_49c510(arg2)
    
    if (result == 0)
        return sub_42d590() __tailcall
else
    result = sub_49c510(0)
    
    if (result == 0)
        result = sub_49c510(result + 1)
        
        if (result == 0)
            return sub_42d590() __tailcall

return result
