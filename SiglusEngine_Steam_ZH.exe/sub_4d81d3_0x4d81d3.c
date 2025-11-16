// 函数: sub_4d81d3
// 地址: 0x4d81d3
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t esi
int32_t var_1c = esi
int32_t* esp = &var_1c
int32_t ecx = 0
int32_t result

if (arg1[0xd] != 0)
    int32_t eax_1 = *arg1[0x40]
    int32_t ebx
    int32_t var_20_1 = ebx
    int32_t edi
    int32_t var_24 = edi
    int32_t eax_2 = eax_1 & 0xfff00000
    int32_t edi_2 = eax_1 & 0xfffff
    
    if (eax_2 == 0x10f00000)
        ecx = 5
    else if (eax_2 == 0x73500000)
        ecx = 3
    else if (eax_2 == 0x73600000)
        ecx = 4
    else if (eax_2 == 0x73700000)
        ecx = 5
    else if (eax_2 == 0x73800000)
        ecx = 2
    
    result = sub_4d7429(arg1, ecx << 0x10 | 0x5e)
    int32_t* esp_1 = &var_24
    
    if (result s>= 0)
        int32_t edx_1 = arg1[5]
        int32_t eax_3 = *arg1
        int32_t var_18
        int32_t* var_28_3 = &var_18
        int32_t var_2c_1 = 0
        int32_t* var_8
        int32_t* var_30 = &var_8
        result =
            (*(eax_3 + 0x6c))(*(edx_1 + (**(arg1[0x40] + 0x10) << 2)), var_30, var_2c_1, var_28_3)
        esp_1 = &var_24
        
        if (result s>= 0)
            int32_t var_28_4 = var_18
            void* eax_4 = arg1[0x40]
            int32_t edx_2 = *arg1
            int32_t** var_14
            int32_t* var_2c_2 = &var_14
            var_30 = *(eax_4 + 0xc)
            result = (*(edx_2 + 0x70))(*(eax_4 + 0x10), var_30, var_2c_2, var_28_4)
            esp_1 = &var_24
            
            if (result s>= 0)
                int32_t eax_5 = *arg1
                int32_t var_28_5 = 0
                int32_t** var_2c_3 = var_14
                var_30 = var_8
                result = (*(eax_5 + 0x64))(var_30, var_2c_3, var_28_5)
                esp_1 = &var_24
                
                if (result s>= 0)
                    int32_t* eax_6 = arg1[0x40]
                    int32_t edx_3 = *arg1
                    bool cond:0_1 = (*eax_6 & 0xfff00000) != 0x10f00000
                    int32_t var_c
                    int32_t* var_28_6 = &var_c
                    int32_t** var_2c_4 = &var_8
                    var_30 = *(arg1[5] + (*eax_6[2] << 2))
                    esp_1 = &var_30
                    int32_t** var_38
                    int32_t** var_10
                    
                    if (cond:0_1)
                        result = (*(edx_3 + 0x74))()
                        
                        if (result s>= 0)
                            int32_t eax_13 = *arg1
                            int32_t*** var_34_6 = &var_10
                            var_38 = var_14
                            result = (*(eax_13 + 0x78))(*(arg1[0x40] + 8), edi_2, var_38, var_34_6)
                            esp_1 = &var_30
                            
                            if (result s>= 0)
                                int32_t var_34_7 = var_c
                                int32_t eax_14 = *arg1
                                var_38 = var_10
                                result = (*(eax_14 + 0x68))(var_8, var_38, var_34_7)
                                esp_1 = &var_30
                                
                                if (result s>= 0)
                                    int32_t edx_5 = arg1[5]
                                    int32_t eax_15 = *arg1
                                    int32_t* var_34_8 = &var_c
                                    var_38 = &var_8
                                    int32_t ebx_3 = edi_2 << 2
                                    result = (*(eax_15 + 0x74))(
                                        *(edx_5 + (*(ebx_3 + *(arg1[0x40] + 8)) << 2)), var_38, 
                                        var_34_8)
                                    esp_1 = &var_30
                                    
                                    if (result s>= 0)
                                        int32_t eax_16 = *arg1
                                        int32_t*** var_34_9 = &var_10
                                        var_38 = var_14
                                        result = (*(eax_16 + 0x78))(*(arg1[0x40] + 8) + ebx_3, 
                                            edi_2, var_38, var_34_9)
                                        esp_1 = &var_30
                                        
                                        if (result s>= 0)
                                            int32_t var_34_10 = var_c
                                            var_38 = var_10
                                            goto label_4d8329
                    else
                        result = (*(edx_3 + 0x74))()
                        
                        if (result s>= 0)
                            void* eax_9 = arg1[0x40]
                            int32_t edx_4 = *arg1
                            int32_t* var_34_3 = &var_10
                            var_38 = var_14
                            result =
                                (*(edx_4 + 0x78))(*(eax_9 + 8), *(eax_9 + 0xc), var_38, var_34_3)
                            esp_1 = &var_30
                            
                            if (result s>= 0)
                                int32_t var_34_4 = var_c
                                int32_t eax_10 = *arg1
                                var_38 = var_10
                                result = (*(eax_10 + 0x68))(var_8, var_38, var_34_4)
                                esp_1 = &var_30
                                
                                if (result s>= 0)
                                    int32_t var_34_5 = var_c
                                    var_38 = var_10 ^ &data_1000000
                                label_4d8329:
                                    result = (*(*arg1 + 0x68))(var_8)
                                    esp_1 = &var_38
                                    
                                    if (result s>= 0)
                                        result = (*(*arg1 + 0x60))()
                                        
                                        if (result s>= 0)
                                            result = sub_4d25aa(arg1)
                                            
                                            if (result s>= 0)
                                                result = 0
    
    *esp_1
    esp_1[1]
    esp = &esp_1[2]
else
    result = 0x80004001

*esp
return result
