// 函数: sub_4bc188
// 地址: 0x4bc188
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = 0
int32_t edi
int32_t var_28 = edi
int32_t var_c = 0

if (arg3 u> 0)
    do
        void* ecx_1 = *(arg2 + (eax << 2))
        void* var_14_1 = ecx_1
        
        if (ecx_1 != 0 && *(ecx_1 + 0xc) u>= arg5)
            int32_t eax_2 = 0
            int32_t var_8_1 = 1
            int32_t var_18_1 = 0
            
            if (arg5 u> 0)
                int32_t edx_2 = *(arg1 + 0x14)
                
                do
                    int32_t edx_4 = *(arg4 + (eax_2 << 2))
                    void* edi_1 = *(edx_2 + (edx_4 << 2))
                    int32_t i = 0
                    bool cond:4_1
                    
                    if (arg6 == 0)
                        int32_t temp1_1 = *(ecx_1 + 0xc)
                        cond:4_1 = 0 != temp1_1
                        
                        if (0 u< temp1_1)
                            int32_t* esi_2 = *(ecx_1 + 0x10)
                            
                            do
                                int32_t eax_5 = *esi_2
                                
                                if (eax_5 == edx_4 && *(edi_1 + 0x3c) == 0)
                                    break
                                
                                if (eax_5 == *(edi_1 + 0x38))
                                    ecx_1 = var_14_1
                                    
                                    if (*(*(edx_2 + (eax_5 << 2)) + 0x3c) == 0)
                                        break
                                
                                i += 1
                                esi_2 = &esi_2[1]
                            while (i u< *(ecx_1 + 0xc))
                            
                            cond:4_1 = i != *(ecx_1 + 0xc)
                    else
                        int32_t temp2_1 = *(ecx_1 + 0xc)
                        cond:4_1 = 0 != temp2_1
                        
                        if (0 u< temp2_1)
                            int32_t* esi_1 = *(ecx_1 + 0x10)
                            
                            do
                                int32_t eax_4 = *esi_1
                                
                                if (eax_4 == edx_4)
                                    break
                                
                                if (eax_4 == *(edi_1 + 0x38))
                                    break
                                
                                i += 1
                                esi_1 = &esi_1[1]
                            while (i u< *(ecx_1 + 0xc))
                            
                            cond:4_1 = i != *(ecx_1 + 0xc)
                    
                    if (not(cond:4_1))
                        var_8_1 = 0
                    
                    eax_2 = var_18_1 + 1
                    var_18_1 = eax_2
                while (eax_2 u< arg5)
            
            if (arg5 u<= 0 || var_8_1 != 0)
                return *(arg2 + (var_c << 2))
        
        eax = var_c + 1
        var_c = eax
    while (eax u< arg3)

return 0
