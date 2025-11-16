// 函数: sub_66eef0
// 地址: 0x66eef0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* result = arg2
void* result_2 = result

if (arg1 != result)
    int16_t* esi_1 = &arg1[1]
    
    if (esi_1 != result)
        result = 2 - arg1
        void* result_1 = result
        
        do
            int16_t edi_1 = *esi_1
            int16_t* edx = esi_1
            
            if (edi_1 u>= *arg1)
                int16_t ecx_1 = esi_1[-1]
                void* eax_6 = &esi_1[-1]
                
                while (edi_1 u< ecx_1)
                    *edx = ecx_1
                    edx = eax_6
                    ecx_1 = *(eax_6 - 2)
                    eax_6 -= 2
                
                *edx = edi_1
            else
                int32_t ecx = ((result - 2 + esi_1) s>> 1) * 2
                _memcpy(esi_1 - ecx + 2, arg1, ecx)
                *arg1 = edi_1
            
            result = result_1
            esi_1 = &esi_1[1]
        while (esi_1 != result_2)

return result
