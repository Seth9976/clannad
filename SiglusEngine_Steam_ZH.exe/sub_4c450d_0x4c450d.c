// 函数: sub_4c450d
// 地址: 0x4c450d
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* eax = arg1[0x40]
int32_t edi
int32_t var_3c = edi
int32_t var_18 = 0
void var_30
int32_t var_2c
int32_t result

if (*(eax + 0xc) u<= *(eax + 4))
    for (int32_t i = 0; i u< 2; i += 1)
        void* eax_5 = arg1[0x40]
        int32_t ecx_5 = *(eax_5 + 0xc)
        int32_t var_8_1 = 0
        int32_t var_1c_1 = ecx_5
        
        if (ecx_5 u> 0)
            int32_t var_10_1 = 1
            int32_t var_c_1 = 2
            int32_t ecx_22
            
            do
                int32_t ebx_2 = var_8_1 << 2
                int32_t* eax_7 = *(eax_5 + 0x10) + ebx_2
                int32_t ecx_8 = *(*(arg1[5] + (*eax_7 << 2)) + 0x10)
                int32_t var_68_1
                int32_t* var_64_3
                int32_t* var_5c_3
                
                if (ecx_8 != 1 || var_c_1 u>= var_1c_1)
                    if (var_10_1 u>= var_1c_1)
                        if (i != 0)
                            goto label_4c46d3
                        
                        if (var_18 == 0)
                            result = (*(*arg1 + 0x80))(arg1[0x3f], &var_30, 4, 0, 0)
                            
                            if (result s< 0)
                                return result
                            
                            var_18 = 1
                        
                        result = sub_4d75f7(arg1, 0x4e, &var_2c, 1, *(arg1[0x40] + 8) + ebx_2, 
                            nullptr, nullptr, 1, 0, 0, 0, 0)
                        
                        if (result s< 0)
                            return result
                        
                        int32_t var_40_2 = 0
                        int32_t var_44_2 = 0
                        int32_t var_48_2 = 0
                        int32_t var_4c_4 = 0
                        int32_t var_50_5 = 1
                        int32_t var_54_2 = 0
                        int32_t var_58_2 = 0
                        var_5c_3 = &var_2c
                        int32_t var_60_3 = 1
                        var_64_3 = *(arg1[0x40] + 0x10) + ebx_2
                        var_68_1 = 1
                        goto label_4c46c6
                    
                    int32_t var_68_2
                    int32_t* var_64_5
                    int32_t* var_5c_5
                    
                    if (ecx_8 != 0 || *(*(arg1[5] + (eax_7[1] << 2)) + 0x10) != 1)
                        if (i == 0)
                            if (var_18 == 0)
                                result = (*(*arg1 + 0x80))(arg1[0x3f], &var_30, 4, 0, 0)
                                
                                if (result s< 0)
                                    return result
                                
                                var_18 = 1
                            
                            result = sub_4d75f7(arg1, 0x13, &var_30, 2, *(arg1[0x40] + 8) + ebx_2, 
                                nullptr, nullptr, 2, 0, 0, 0, 0)
                            
                            if (result s< 0)
                                return result
                            
                            int32_t var_40_4 = 0
                            int32_t var_44_4 = 0
                            int32_t var_48_4 = 0
                            int32_t var_4c_7 = 0
                            int32_t var_50_8 = 2
                            int32_t var_54_4 = 0
                            int32_t var_58_4 = 0
                            var_5c_5 = &var_30
                            int32_t var_60_5 = 2
                            var_64_5 = *(arg1[0x40] + 0x10) + ebx_2
                            var_68_2 = 1
                            goto label_4c4795
                    else if (i == 1)
                        void* eax_20 = arg1[0x40]
                        int32_t var_40_3 = 0
                        int32_t var_44_3 = 0
                        int32_t var_48_3 = 0
                        int32_t var_4c_5 = 0
                        int32_t var_50_6 = 2
                        int32_t var_54_3 = 0
                        int32_t var_58_3 = 0
                        var_5c_5 = *(eax_20 + 8) + ebx_2
                        int32_t var_60_4 = 2
                        var_64_5 = *(eax_20 + 0x10) + ebx_2
                        var_68_2 = 0x13
                    label_4c4795:
                        result = sub_4d75f7(arg1, var_68_2, var_64_5, 2, var_5c_5, nullptr, 
                            nullptr, 2, 0, 0, 0, 0)
                        
                        if (result s< 0)
                            return result
                    var_c_1 += 2
                    var_8_1 += 2
                    var_10_1 += 2
                else
                    if (i == 1)
                        void* eax_8 = arg1[0x40]
                        int32_t var_40_1 = 0
                        int32_t var_44_1 = 0
                        int32_t var_48_1 = 0
                        int32_t var_4c_2 = 0
                        int32_t var_50_3 = 1
                        int32_t var_54_1 = 0
                        int32_t var_58_1 = 0
                        var_5c_3 = *(eax_8 + 8) + ebx_2
                        int32_t var_60_2 = 1
                        var_64_3 = *(eax_8 + 0x10) + ebx_2
                        var_68_1 = 0x4e
                    label_4c46c6:
                        result = sub_4d75f7(arg1, var_68_1, var_64_3, 1, var_5c_3, nullptr, 
                            nullptr, 1, 0, 0, 0, 0)
                        
                        if (result s< 0)
                            return result
                        
                        goto label_4c46d3
                    
                label_4c46d3:
                    var_8_1 += 1
                    var_c_1 += 1
                    var_10_1 += 1
                eax_5 = arg1[0x40]
                ecx_22 = *(eax_5 + 0xc)
                var_1c_1 = ecx_22
            while (var_8_1 u< ecx_22)
else
    result = (*(*arg1 + 0x80))(arg1[0x3f], &var_30, 4, 0, 0)
    
    if (result s< 0)
        return result
    
    result = sub_4d75f7(arg1, 0x4e, &var_2c, 1, *(arg1[0x40] + 8), nullptr, nullptr, 1, 0, 0, 0, 0)
    
    if (result s< 0)
        return result
    
    void* eax_3 = arg1[0x40]
    int32_t i_1 = 0
    
    if (*(eax_3 + 0xc) u> 0)
        do
            *(&var_30 + (i_1 << 2)) = var_2c
            i_1 += 1
        while (i_1 u< *(eax_3 + 0xc))
    
    void* eax_4 = arg1[0x40]
    int32_t ecx_3 = *(eax_4 + 0xc)
    result =
        sub_4d75f7(arg1, 1, *(eax_4 + 0x10), ecx_3, &var_30, nullptr, nullptr, ecx_3, 0, 0, 0, 0)
    
    if (result s< 0)
        return result
return 0
