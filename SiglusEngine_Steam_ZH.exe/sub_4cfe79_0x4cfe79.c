// 函数: sub_4cfe79
// 地址: 0x4cfe79
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_c = edi
int32_t edi_1 = arg5

if (edi_1 == 0)
    return 1

int32_t* ebx_1 = *(*(arg1 + 0x18) + (edi_1 << 2) - 4)

if (sub_49ea13(ebx_1) == 0 && (*ebx_1 & 0xf0000000) != 0x60000000)
    arg5 = edi_1
    
    if (edi_1 u> 0)
        do
            arg5 -= 1
            int32_t* ebx_2 = *(*(arg1 + 0x18) + (arg5 << 2))
            
            if (ebx_2[9] != edi_1)
                int32_t eax_6 = *ebx_2
                
                if ((eax_6 & 0xfff00000) != 0)
                    if ((eax_6 & 0xf0000000) == 0x60000000)
                        break
                    
                    if (sub_49ea13(ebx_2) != 0)
                        break
                    
                    sub_4c7a69(arg4, ebx_2, edi_1)
                    int32_t eax_9 = *(arg1 + 0x18)
                    void* ecx_4 = *(eax_9 + (edi_1 << 2) - 4)
                    void* eax_10 = *(eax_9 + (arg5 << 2))
                    
                    if (*(ecx_4 + 0xc) != 0 && *(eax_10 + 0xc) != 0)
                        int32_t edx_2 = *(arg1 + 0x14)
                        void* ecx_7 = *(edx_2 + (**(ecx_4 + 0x10) << 2))
                        void* edx_3 = *(edx_2 + (**(eax_10 + 0x10) << 2))
                        
                        if (*(ecx_7 + 0x14) != *(edx_3 + 0x14))
                            break
                        
                        if (*(ecx_7 + 0x18) != *(edx_3 + 0x18))
                            break
                        
                        sub_4cfc30(arg1, edi_1 - 1, arg5)
                        int32_t eax_16
                        
                        if ((*(arg1 + 0x6f) & 0x10) == 0)
                            eax_16 = sub_4ac102(arg1, arg2, nullptr)
                        
                        if ((*(arg1 + 0x6f) & 0x10) != 0 || eax_16 s>= 0)
                            if (arg6 == 0)
                                return 0
                            
                            if (sub_4ac102(arg1, arg3, nullptr) s>= 0)
                                return 0
                        
                        sub_4cfc30(arg1, arg5, edi_1 - 1)
                        sub_4c7a69(arg4, ebx_2, edi_1)
        while (arg5 u> 0)

return 1
