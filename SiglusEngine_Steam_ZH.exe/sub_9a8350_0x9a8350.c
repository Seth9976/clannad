// 函数: sub_9a8350
// 地址: 0x9a8350
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax
int32_t ecx
int32_t edx
char* result = sub_74c590(eax, edx, ecx, 1, 0xc88)
void* edi = arg1
void* eax_1 = *(edi + 0x1c)
_memset(result, 0, 0xc88)

if (*(edi + 4) s> 0)
    int32_t eax_2 = sub_742fa0(arg2, 1)
    
    if (eax_2 s>= 0)
        if (eax_2 == 0)
            *result = 1
        label_9a83de:
            int32_t eax_6 = sub_742fa0(arg2, 1)
            
            if (eax_6 s>= 0)
                if (eax_6 == 0)
                label_9a84b4:
                    
                    if (sub_742fa0(arg2, 2) == 0)
                        if (*result s> 1)
                            int32_t i = 0
                            
                            if (*(arg1 + 4) s> 0)
                                void* ebx_2 = &result[4]
                                
                                do
                                    int32_t eax_17 = sub_742fa0(arg2, 4)
                                    *ebx_2 = eax_17
                                    
                                    if (eax_17 s>= *result)
                                        goto label_9a83ae
                                    
                                    if (eax_17 s< 0)
                                        goto label_9a83ae
                                    
                                    i += 1
                                    ebx_2 += 4
                                while (i s< *(arg1 + 4))
                        
                        if (*result s<= 0)
                            return result
                        
                        void* edi_3 = &result[0x444]
                        int32_t ebx_3 = 0
                        
                        while (true)
                            sub_742fa0(arg2, 8)
                            int32_t eax_19 = sub_742fa0(arg2, 8)
                            *(edi_3 - 0x40) = eax_19
                            
                            if (eax_19 s>= *(eax_1 + 0x10))
                                break
                            
                            if (eax_19 s< 0)
                                break
                            
                            int32_t eax_20 = sub_742fa0(arg2, 8)
                            *edi_3 = eax_20
                            
                            if (eax_20 s>= *(eax_1 + 0x14))
                                break
                            
                            if (eax_20 s< 0)
                                break
                            
                            ebx_3 += 1
                            edi_3 += 4
                            
                            if (ebx_3 s>= *result)
                                return result
                else
                    int32_t eax_8 = sub_742fa0(arg2, 8) + 1
                    *(result + 0x484) = eax_8
                    
                    if (eax_8 s> 0)
                        int32_t var_c_1 = 0
                        void* var_8_1 = &result[0x888]
                        
                        while (true)
                            int32_t eax_10 = *(edi + 4)
                            int32_t edx_1 = 0
                            uint32_t i_1 = eax_10 - 1
                            
                            if (eax_10 != 1)
                                do
                                    edx_1 += 1
                                    i_1 u>>= 1
                                while (i_1 != 0)
                            
                            int32_t eax_11 = sub_742fa0(arg2, edx_1)
                            int32_t edx_2 = 0
                            *(var_8_1 - 0x400) = eax_11
                            int32_t ecx_6 = *(arg1 + 4)
                            uint32_t i_2 = ecx_6 - 1
                            
                            if (ecx_6 != 1)
                                do
                                    edx_2 += 1
                                    i_2 u>>= 1
                                while (i_2 != 0)
                            
                            int32_t eax_14 = sub_742fa0(arg2, edx_2)
                            *var_8_1 = eax_14
                            
                            if (eax_11 s< 0)
                                break
                            
                            if (eax_14 s< 0)
                                break
                            
                            if (eax_11 == eax_14)
                                break
                            
                            int32_t ecx_9 = *(arg1 + 4)
                            
                            if (eax_11 s>= ecx_9)
                                break
                            
                            if (eax_14 s>= ecx_9)
                                break
                            
                            int32_t ecx_11 = var_c_1 + 1
                            var_8_1 += 4
                            var_c_1 = ecx_11
                            
                            if (ecx_11 s>= *(result + 0x484))
                                goto label_9a84b4
                            
                            edi = arg1
        else
            int32_t eax_4 = sub_742fa0(arg2, 4) + 1
            *result = eax_4
            
            if (eax_4 s> 0)
                goto label_9a83de

label_9a83ae:

if (result != 0)
    _memset(result, 0, 0xc88)
    _free(result)

return 0
