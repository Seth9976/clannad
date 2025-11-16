// 函数: sub_453ae2
// 地址: 0x453ae2
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = 0
int32_t edi
int32_t var_10 = edi

if (arg2 != 0)
    int32_t eax_12 = sub_4538a9(arg1, arg2, 2, 0)
    
    if (eax_12 != 0)
        void* eax_13 = *(eax_12 + 4)
        
        if (*(eax_13 + 4) == 5 && (*(eax_12 + 8) != 0xffffffff || *(eax_13 + 0x10) == 0))
            void* eax_14 = *(eax_13 + 0x14)
            int32_t eax_15
            
            if (*(eax_12 + 0x20) == 0)
                eax_15 = sub_449882(arg1, eax_12, eax_14)
            
            if (*(eax_12 + 0x20) != 0 || eax_15 s>= 0)
                char* eax_22 = nullptr
                arg2 = nullptr
                
                if (eax_14 u> 0)
                    do
                        int32_t edx_3 = *(*(*(arg1 + 0xb0) + (*(eax_12 + 0x14) << 2)) + 0x40)
                        int32_t ecx_12
                        
                        if (edx_3 != 0)
                            ecx_12 = *(*(arg1 + 0x38) + 0x10)
                        else
                            ecx_12 = *(arg1 + 0x20)
                        
                        int32_t* eax_18 = *(*(ebx + *(eax_12 + 0x20) + 4) + 0xc)
                        int32_t ecx_14
                        
                        if (*(eax_18 + ecx_12) != 0)
                            if (edx_3 != 0)
                                ecx_14 = *(*(arg1 + 0x38) + 0x10)
                            else
                                ecx_14 = *(arg1 + 0x20)
                        
                        bool cond:6_1
                        
                        if (*(eax_18 + ecx_12) == 0 || eax_18 + ecx_14 == 0xfffffffc)
                            cond:6_1 = arg3 == 0
                        label_453c6a:
                            
                            if (cond:6_1)
                                break
                        else if (arg3 != 0)
                            cond:6_1 = __stricmp(eax_18 + ecx_14 + 4, arg3) == 0
                            goto label_453c6a
                        arg2 = &arg2[1]
                        ebx += 0x28
                    while (arg2 u< eax_14)
                    
                    eax_22 = arg2
                
                if (eax_22 != eax_14)
                    return not.d(*(eax_12 + 0x20) + eax_22 * 0x28)
else
    char* eax = nullptr
    arg2 = nullptr
    
    if (*(arg1 + 0x98) u> 0)
        do
            int32_t ecx_1 = *(arg1 + 0xb0)
            void* eax_2 = *(arg1 + 0x9c) + ebx
            int32_t edi_1
            
            if (*(*(ecx_1 + (*(eax_2 + 0x14) << 2)) + 0x40) != 0)
                edi_1 = *(*(arg1 + 0x38) + 0x10)
            else
                edi_1 = *(arg1 + 0x20)
            
            int32_t* eax_6 = *(*(eax_2 + 4) + 0xc)
            int32_t ecx_3
            
            if (*(eax_6 + edi_1) != 0)
                if (*(*(ecx_1 + (*(ebx + *(arg1 + 0x9c) + 0x14) << 2)) + 0x40) != 0)
                    ecx_3 = *(*(arg1 + 0x38) + 0x10)
                else
                    ecx_3 = *(arg1 + 0x20)
            
            bool cond:5_1
            
            if (*(eax_6 + edi_1) == 0 || eax_6 + ecx_3 == 0xfffffffc)
                cond:5_1 = arg3 == 0
            label_453b77:
                
                if (cond:5_1)
                    break
            else if (arg3 != 0)
                cond:5_1 = __stricmp(eax_6 + ecx_3 + 4, arg3) == 0
                goto label_453b77
            arg2 = &arg2[1]
            ebx += 0x50
        while (arg2 u< *(arg1 + 0x98))
        
        eax = arg2
    
    if (eax != *(arg1 + 0x98))
        return not.d(*(arg1 + 0x9c) + eax * 0x50)

return 0
