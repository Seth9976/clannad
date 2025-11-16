// 函数: sub_720700
// 地址: 0x720700
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx = arg1[0x1b]
int32_t edi = arg1[8]
int32_t eax

if (ecx s> edi)
    eax.b = 0
    return eax

int32_t edx = arg1[0x1c]
int32_t ebx = arg1[9]

if (edx s<= ebx)
    int32_t eax_1 = arg1[0xb]
    
    if (ecx s>= 0)
        arg1[0x3b] = 0
        arg1[0x35] = eax_1
        arg1[0x37] = ecx
    label_720769:
        eax = arg1[0xc]
        
        if (edx s>= 0)
            arg1[0x3c] = 0
            arg1[0x36] = eax
            arg1[0x38] = edx
        label_7207aa:
            int32_t edx_2 = arg1[0x37]
            int32_t ecx_2 = arg1[6]
            
            if (edx_2 s< ecx_2)
                arg1[0x37] = ecx_2
                eax = ecx_2 - edx_2
                arg1[0x3b] += eax
                arg1[0x35] -= eax
            
            int32_t edi_2 = edi - arg1[0x37] + 1
            
            if (arg1[0x35] s> edi_2)
                arg1[0x35] = edi_2
            
            if (arg1[0x35] s> 0)
                int32_t edx_3 = arg1[0x38]
                int32_t ecx_3 = arg1[7]
                
                if (edx_3 s< ecx_3)
                    arg1[0x38] = ecx_3
                    eax = ecx_3 - edx_3
                    arg1[0x3c] += eax
                    arg1[0x36] -= eax
                
                int32_t ebx_2 = ebx - arg1[0x38] + 1
                
                if (arg1[0x36] s> ebx_2)
                    arg1[0x36] = ebx_2
                
                if (arg1[0x36] s> 0)
                    void* eax_4 = arg1[0x32]
                    
                    if (eax_4 != 0 && arg1[0x33] != 0)
                        *eax_4 = 1
                        *arg1[0x33] = arg1[0x37]
                        int32_t* edx_4 = arg1[0x33]
                        edx_4[2] = *edx_4 + arg1[0x35] - 1
                        *(arg1[0x33] + 4) = arg1[0x38]
                        void* edx_5 = arg1[0x33]
                        *(edx_5 + 0xc) = arg1[0x36] - 1 + *(edx_5 + 4)
                    
                    if (*(arg1 + 0xc5) != 0)
                        if (arg1[0x23] != 0)
                            sub_720650(arg1, arg1[0x37], arg1[0x38], 0)
                        
                        int32_t edx_6 = arg1[1]
                        ebx_2.b = arg1[0x6a].b
                        arg1[0x39] = *arg1 + ((arg1[0x38] * edx_6 + arg1[0x37]) << 2)
                        int32_t eax_13 = arg1[0xa]
                        
                        if (ebx_2.b == 0)
                            eax_13 += (arg1[0x3c] * arg1[0xb] + arg1[0x3b]) << 2
                        
                        int32_t ecx_15 = arg1[0x35]
                        arg1[0x3d] = eax_13
                        arg1[0x3a] = (edx_6 - ecx_15) << 2
                        
                        if (ebx_2.b == 0)
                            arg1[0x3e] = (arg1[0xb] - ecx_15) << 2
                        
                        int32_t __saved_ebp
                        sub_767310(&__saved_ebp, &arg1[0x34], 0, arg2)
                    
                    eax_4.b = 1
                    return eax_4
        else
            int32_t edx_1 = neg.d(edx)
            eax -= edx_1
            arg1[0x3c] = edx_1
            arg1[0x36] = eax
            
            if (eax s> 0)
                arg1[0x38] = 0
                goto label_7207aa
    else
        int32_t ecx_1 = neg.d(ecx)
        eax = eax_1 - ecx_1
        arg1[0x3b] = ecx_1
        arg1[0x35] = eax
        
        if (eax s> 0)
            arg1[0x37] = 0
            goto label_720769

eax.b = 0
return eax
