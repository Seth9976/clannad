// 函数: sub_4c4a0a
// 地址: 0x4c4a0a
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* eax = arg1[0x40]
int32_t ecx = *(eax + 0xc)
int32_t edi
int32_t var_28 = edi
int32_t var_8 = 0

if (ecx u> 0)
    int32_t* eax_1 = *(eax + 0x10)
    
    while ((*(*(arg1[5] + (*eax_1 << 2)) + 3) & 2) != 0)
        var_8 += 1
        eax_1 = &eax_1[1]
        
        if (var_8 u>= ecx)
            break

int32_t var_44_1
int32_t* var_40_1
int32_t* var_3c_1
int32_t var_38_1
int32_t var_34_1

if (var_8 u>= ecx)
    void* eax_5 = arg1[0x40]
    
    if (zx.d((arg1[0x32]).w) u< 0x200)
        int32_t var_c_1 = 0
        int32_t var_1c[0x2]
        int32_t var_14
        int32_t result
        
        if (*(eax_5 + 0xc) u<= *(eax_5 + 4))
            int32_t var_8_1 = 0
            
            if (ecx u> 0)
                while (true)
                    int32_t ecx_7 = var_8_1 << 2
                    int32_t var_54_1
                    int32_t* var_50_3
                    int32_t* var_48_3
                    
                    if (*(*(arg1[5] + (*(ecx_7 + *(arg1[0x40] + 0x10)) << 2)) + 0x10) != 2)
                        if (var_c_1 == 0)
                            result = (*(*arg1 + 0x80))(arg1[0x3f], &var_1c, 4, 0, 0)
                            
                            if (result s< 0)
                                return result
                            
                            var_c_1 = 1
                        
                        result = sub_4d75f7(arg1, 0x4f, &var_14, 1, 
                            *(arg1[0x40] + 8) + (var_8_1 << 2), nullptr, nullptr, 1, 0, 0, 0, 0)
                        
                        if (result s< 0)
                            return result
                        
                        int32_t var_2c_4 = 0
                        int32_t var_30_4 = 0
                        int32_t var_34_3 = 0
                        int32_t var_38_5 = 0
                        int32_t var_3c_6 = 1
                        int32_t var_40_3 = 0
                        int32_t var_44_3 = 0
                        var_48_3 = &var_14
                        int32_t var_4c_3 = 1
                        var_50_3 = *(arg1[0x40] + 0x10) + (var_8_1 << 2)
                        var_54_1 = 1
                    else
                        void* eax_14 = arg1[0x40]
                        int32_t var_2c_3 = 0
                        int32_t var_30_3 = 0
                        int32_t var_34_2 = 0
                        int32_t var_38_3 = 0
                        int32_t var_3c_4 = 1
                        int32_t var_40_2 = 0
                        int32_t var_44_2 = 0
                        var_48_3 = *(eax_14 + 8) + ecx_7
                        int32_t var_4c_2 = 1
                        var_50_3 = *(eax_14 + 0x10) + ecx_7
                        var_54_1 = 0x4f
                    
                    result = sub_4d75f7(arg1, var_54_1, var_50_3, 1, var_48_3, nullptr, nullptr, 1, 
                        0, 0, 0, 0)
                    
                    if (result s< 0)
                        return result
                    
                    var_8_1 += 1
                    
                    if (var_8_1 u>= *(arg1[0x40] + 0xc))
                        return 0
        else
            result = (*(*arg1 + 0x80))(arg1[0x3f], &var_1c, 4, 0, 0)
            
            if (result s< 0)
                return result
            
            result = sub_4d75f7(arg1, 0x4f, &var_14, 1, *(arg1[0x40] + 8), nullptr, nullptr, 1, 0, 
                0, 0, 0)
            
            if (result s< 0)
                return result
            
            void* eax_8 = arg1[0x40]
            int32_t i = 0
            
            if (*(eax_8 + 0xc) u> 0)
                do
                    var_1c[i] = var_14
                    i += 1
                while (i u< *(eax_8 + 0xc))
            
            void* eax_9 = arg1[0x40]
            int32_t ecx_4 = *(eax_9 + 0xc)
            result = sub_4d75f7(arg1, 1, *(eax_9 + 0x10), ecx_4, &var_1c, nullptr, nullptr, ecx_4, 
                0, 0, 0, 0)
            
            if (result s< 0)
                return result
        return 0
    
    int32_t var_2c_2 = 0
    int32_t var_30_2 = 0
    var_34_1 = *(eax_5 + 4)
    var_38_1 = *(eax_5 + 0xc)
    var_3c_1 = *(eax_5 + 8)
    var_40_1 = *(eax_5 + 0x10)
    var_44_1 = 0x4f
else
    void* eax_2 = arg1[0x40]
    int32_t var_2c_1 = 0
    int32_t var_30_1 = 0
    var_34_1 = *(eax_2 + 4)
    var_38_1 = *(eax_2 + 0xc)
    var_3c_1 = *(eax_2 + 8)
    var_40_1 = *(eax_2 + 0x10)
    var_44_1 = 0xf

return sub_4d8edd(arg1, var_44_1, var_40_1, var_3c_1, var_38_1, var_34_1, 0)
