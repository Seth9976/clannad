// 函数: sub_42b545
// 地址: 0x42b545
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
void* var_c = arg1
char* ebx = arg2
int32_t edi
int32_t var_18 = edi
int32_t ecx = *(arg1 + 4)

if (ebx u< ecx)
    char eax = *ebx
    
    if (eax == 0x22)
        arg2:3.b = eax
    label_42b580:
        void* i = &ebx[1]
        void* i_1 = i
        
        if (i u< ecx)
            void* ecx_1 = i + 1
            
            do
                eax = *i
                
                if (arg2:3.b == eax)
                    break
                
                if (eax == 0xa)
                    break
                
                if (eax == 0x5c && (*(arg1 + 0x28) & 4) == 0)
                    int32_t edx_1 = *(arg1 + 4)
                    i += 1
                    ecx_1 += 1
                    
                    if (i u< edx_1)
                        eax = *i
                        
                        if (eax == 0xa)
                            *(arg1 + 0x1c) += 1
                        else if (eax == 0xd && ecx_1 u< edx_1 && *ecx_1 == 0xa)
                            i += 1
                            ecx_1 += 1
                            *(arg1 + 0x1c) += 1
                
                i += 1
                ecx_1 += 1
            while (i u< *(arg1 + 4))
        
        void* i_2 = *(arg1 + 4)
        
        if (i u>= i_2)
            i = i_2
            sub_42aba3(*(arg1 + 0x30), arg1 + 8, 0x3ee, "string continues past end of file")
        else if (*i == 0xa)
            sub_42aba3(*(arg1 + 0x30), arg1 + 8, 0x3ed, "string continues past end of line")
        
        void* esi_1 = i - ebx
        char* ebx_1 = sub_46b465(*(arg1 + 0x2c), esi_1, 1)
        
        if (ebx_1 != 0)
            void* i_3 = i_1
            char** arg_8
            *arg_8 = ebx_1
            
            while (true)
                if (i_3 + 1 u< i)
                    void* edx_2 = i_3 + 1
                    void* eax_5 = i_3 + 2
                    
                    while (*i_3 == 0x5c)
                        if ((*(arg1 + 0x28) & 4) != 0)
                            break
                        
                        char ecx_3 = *edx_2
                        
                        if (ecx_3 != 0xa)
                            if (ecx_3 != 0xd)
                                break
                            
                            if (eax_5 u>= i)
                                break
                            
                            if (*eax_5 != 0xa)
                                break
                            
                            i_3 += 3
                            eax_5 += 3
                            edx_2 += 3
                        else
                            i_3 += 2
                            eax_5 += 2
                            edx_2 += 2
                        
                        if (edx_2 u>= i)
                            break
                
                if (i_3 u>= i)
                    break
                
                i_3 += sub_42b24b(arg1, i_3, &arg_8)
                void* eax_7
                eax_7.b = arg_8.b
                *ebx_1 = eax_7.b
                ebx_1 = &ebx_1[1]
            
            *ebx_1 = 0
            return esi_1 + 1
    else if (eax == 0x3c && (*(arg1 + 0x28) & 8) != 0)
        arg2:3.b = 0x3e
        goto label_42b580

return nullptr
