// 函数: sub_433f9c
// 地址: 0x433f9c
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
void* var_c = arg1
int32_t edi
int32_t var_10 = edi
void* edi_1 = arg1
char* ecx = arg2
void* var_c_1 = edi_1

if (zx.d(ecx.w) == ecx)
    return 0

if ((ecx & 0x7fffffff) != ecx)
    int32_t ecx_1 = not.d(ecx)
    int32_t eax_6 = *ecx_1 - 3
    int32_t eax_7 = neg.d(eax_6)
    return not.d(sbb.d(eax_7, eax_7, eax_6 != 0)) & ecx_1

int32_t result = *(edi_1 + 0x34c)

if (result != 0)
    void* eax_4
    eax_4.b = *ecx
    var_8:3.b = eax_4.b
    
    while (true)
        int32_t edx_1 = *(edi_1 + 0x344)
        void* ebx_3 = *(*(result + 4) + 0x40) + *(result + 0x18) + edx_1
        int32_t* eax_11 = *(ebx_3 + 8)
        void* eax_12
        
        if (*(eax_11 + edx_1) != 0)
            eax_12 = eax_11 + *(edi_1 + 0x344) + 4
        else
            eax_12 = nullptr
        
        char* edi_2 = ecx
        ecx.b = var_8:3.b
        
        while (ecx.b == *eax_12)
            if (ecx.b == 0)
                break
            
            edi_2 = &edi_2[1]
            ecx.b = *edi_2
            eax_12 += 1
        
        ecx.b = *edi_2
        eax_12.b = *eax_12
        
        if (ecx.b == eax_12.b)
            return result
        
        if (eax_12.b == 0)
            int32_t var_24_2
            void* var_20_2
            int32_t var_1c_3
            int32_t eax_14
            
            if (ecx.b == 0x2e)
                var_1c_3 = arg3
                var_20_2 = &edi_2[1]
                var_24_2 = not.d(result)
            label_4340d0:
                eax_14 = sub_433ad7(var_c_1, var_24_2, var_20_2, var_1c_3)
            label_4340d5:
                
                if (eax_14 == 0)
                    break
                
                return not.d(eax_14)
            
            if (ecx.b == 0x40)
                eax_14 = sub_4322aa(var_c_1, not.d(result), &edi_2[1], arg3)
                goto label_4340d5
            
            if (ecx.b == 0x5b)
                void* edi_4 = &edi_2[1]
                eax_12.b = *edi_4
                
                if (eax_12.b s< 0x30)
                    break
                
                if (eax_12.b s> 0x39)
                    break
                
                char var_1c_1 = edi_4.b
                int32_t* eax_13 = sub_75efed()
                
                if (eax_13 u>= *(ebx_3 + 0x10))
                    break
                
                while (true)
                    char ecx_2 = *edi_4
                    
                    if (ecx_2 s< 0x30)
                        break
                    
                    if (ecx_2 s> 0x39)
                        break
                    
                    edi_4 += 1
                
                if (*edi_4 != 0x5d)
                    break
                
                int32_t var_1c_2 = arg3
                eax_14 = sub_4320f6(var_c_1, not.d(result), eax_13)
                
                if (eax_14 == 0)
                    break
                
                char ecx_4 = *(edi_4 + 1)
                
                if (ecx_4 == 0)
                    return not.d(eax_14)
                
                if (ecx_4 != 0x2e)
                    break
                
                var_1c_3 = arg3
                var_20_2 = edi_4 + 2
                var_24_2 = eax_14
                goto label_4340d0
        
        result = *(result + 0x34)
        
        if (result == 0)
            break
        
        edi_1 = var_c_1
        ecx = arg2

return 0
