// 函数: sub_4d8c52
// 地址: 0x4d8c52
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx = *arg1[0x40]
int32_t ebx_1 = ecx & 0xfffff
int32_t edi
int32_t var_28 = edi
int32_t var_1c
int32_t eax_1

if (ecx == 0x70500003)
    eax_1 = 0x18
else if (ecx == 0x70600003)
    eax_1 = 0x17
else if (ecx == 0x70600004)
    eax_1 = 0x15
else if (ecx == 0x70700003)
    eax_1 = 0x16
else if (ecx != 0x70700004)
    eax_1 = var_1c
else
    eax_1 = 0x14

int32_t result = sub_4d7429(arg1, eax_1)

if (result s>= 0)
    int32_t var_18
    int32_t var_8
    result = (*(*arg1 + 0x6c))(*(arg1[5] + (**(arg1[0x40] + 0x10) << 2)), &var_8, &var_1c, &var_18)
    
    if (result s>= 0)
        void* eax_3 = arg1[0x40]
        int32_t var_c
        result = (*(*arg1 + 0x70))(*(eax_3 + 0x10), *(eax_3 + 0xc), &var_c, var_18)
        
        if (result s>= 0)
            result = (*(*arg1 + 0x64))(var_8, var_c, var_1c)
            
            if (result s>= 0)
                int32_t edx_3 = arg1[5]
                int32_t eax_5
                eax_5.b = ebx_1 != 3
                void* ecx_13 = arg1[0x40]
                var_c = ((eax_5 - 1) & 0xfff80000) + 0xf0000
                int32_t var_10
                result = (*(*arg1 + 0x74))(*(edx_3 + (**(ecx_13 + 8) << 2)), &var_8, &var_10)
                
                if (result s>= 0)
                    int32_t var_14
                    result = (*(*arg1 + 0x78))(*(arg1[0x40] + 8), ebx_1, var_c, &var_14)
                    
                    if (result s>= 0)
                        result = (*(*arg1 + 0x68))(var_8, var_14, var_10)
                        
                        if (result s>= 0)
                            int32_t edi_2 = ebx_1 << 2
                            result = (*(*arg1 + 0x74))(
                                *(arg1[5] + (*(edi_2 + *(arg1[0x40] + 8)) << 2)), &var_8, &var_10)
                            
                            if (result s>= 0)
                                result = (*(*arg1 + 0x78))(*(arg1[0x40] + 8) + edi_2, ebx_1, var_c, 
                                    &var_14)
                                
                                if (result s>= 0)
                                    result = (*(*arg1 + 0x68))(var_8, var_14, var_10)
                                    
                                    if (result s>= 0)
                                        result = (*(*arg1 + 0x60))()
                                        
                                        if (result s>= 0)
                                            result = sub_4d25aa(arg1)
                                            
                                            if (result s>= 0)
                                                return 0

return result
