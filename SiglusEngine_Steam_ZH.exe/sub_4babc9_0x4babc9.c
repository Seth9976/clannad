// 函数: sub_4babc9
// 地址: 0x4babc9
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = 0
int32_t edi
int32_t var_24 = edi
int32_t var_8 = 0

if (arg4 u> 0)
    do
        int32_t* ecx_1 = *(arg3 + (eax << 2))
        int32_t edi_1 = 0
        int32_t* var_c_1 = ecx_1
        
        if (ecx_1 != 0)
            int32_t eax_1 = *ecx_1
            
            if (eax_1 != 0)
                int32_t edx_2 = eax_1 & 0xfff00000
                
                if (edx_2 == 0x60000000 || edx_2 == 0x60500000 || edx_2 == 0x60a00000
                        || edx_2 == 0x60f00000 || edx_2 == 0x72e00000 || edx_2 == 0x60700000)
                    int32_t ebx_5
                    
                    if (edx_2 != 0x72100000)
                        ebx_5 = eax_1 & 0xfffff
                    else
                    label_4bacd8:
                        ebx_5 = 0
                    
                    int32_t edx_4 = 0
                    int32_t var_18_1 = 0
                    
                    if (arg6 u> 0)
                        int32_t eax_11 = ecx_1[1]
                        
                        do
                            int32_t var_10_1 = ebx_5
                            
                            if (ebx_5 u< eax_11)
                                int32_t* edx_5 = ecx_1[2] + (ebx_5 << 2)
                                
                                do
                                    int32_t esi_2 = *edx_5
                                    
                                    if (esi_2 == *(arg5 + (edx_4 << 2)))
                                        int32_t* eax_15 = *(arg3 + (arg2 << 2))
                                        
                                        if (eax_15 != 0 && arg2 u< var_8 && *eax_15 != 0)
                                            return 1
                                        
                                        ecx_1 = var_c_1
                                    
                                    void* eax_18 = *(*(arg1 + 0x14) + (esi_2 << 2))
                                    
                                    if ((*(eax_18 + 0x3e) & 0x1f) != 0
                                            || *(eax_18 + 0x38) != 0xffffffff)
                                        sub_4a4100(arg1, nullptr, 0x12c6, 
                                            "internal error: texld alias found")
                                        return 0x80004005
                                    
                                    var_10_1 += 1
                                    eax_11 = ecx_1[1]
                                    edx_5 = &edx_5[1]
                                while (var_10_1 u< eax_11)
                                
                                edx_4 = var_18_1
                            
                            edx_4 += 1
                            var_18_1 = edx_4
                        while (edx_4 u< arg6)
                else
                    if (edx_2 == 0x72100000)
                        goto label_4bacd8
                    
                    if (arg6 u> 0)
                        int32_t eax_3 = ecx_1[1]
                        
                        do
                            int32_t var_c_2 = 0
                            
                            if (eax_3 u> 0)
                                int32_t esi_1 = *(arg5 + (edi_1 << 2))
                                int32_t* edx_3 = ecx_1[2]
                                
                                do
                                    int32_t eax_5 = *edx_3
                                    
                                    if (eax_5 == esi_1
                                            || *(*(*(arg1 + 0x14) + (eax_5 << 2)) + 0x38) == esi_1)
                                        int32_t* eax_8 = *(arg3 + (arg2 << 2))
                                        
                                        if (eax_8 != 0 && arg2 u< var_8)
                                            int32_t eax_9 = *eax_8
                                            
                                            if (eax_9 != 0 && (eax_9 & 0xfff00000) != 0x11000000)
                                                return 1
                                    
                                    var_c_2 += 1
                                    eax_3 = ecx_1[1]
                                    edx_3 = &edx_3[1]
                                while (var_c_2 u< eax_3)
                            
                            edi_1 += 1
                        while (edi_1 u< arg6)
        
        eax = var_8 + 1
        var_8 = eax
    while (eax u< arg4)

return 0
