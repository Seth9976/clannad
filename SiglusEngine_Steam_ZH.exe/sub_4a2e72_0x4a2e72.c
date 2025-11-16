// 函数: sub_4a2e72
// 地址: 0x4a2e72
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = *(arg1 + 0x14)
int32_t edi
int32_t var_30 = edi
void* edx = *(eax + (arg2 << 2))
int32_t esi = *(edx + 0x48)

if (esi != 0xffffffff && *(edx + 8) == 0xffffffff)
    int32_t* esi_1 = *(*(arg1 + 0x18) + (esi << 2))
    int32_t edx_3 = *esi_1 & 0xfff00000
    
    if (edx_3 == 0x10100000)
        int32_t ecx = esi_1[3]
        int32_t edx_4 = 0
        
        if (ecx u> 0)
            int32_t* eax_2 = esi_1[4]
            
            while (*eax_2 != arg2)
                edx_4 += 1
                eax_2 = &eax_2[1]
                
                if (edx_4 u>= ecx)
                    break
        
        if (arg3 != 0)
            *arg3 = fconvert.d(fneg(fconvert.t(*arg3)))
        
        return *(esi_1[2] + (edx_4 << 2))
    
    if (edx_3 == 0x20500000 || edx_3 == 0x20400000)
        int32_t edx_5 = esi_1[3]
        int32_t ebx_1 = 0
        
        if (edx_5 u> 0)
            int32_t* eax_5 = esi_1[4]
            
            while (*eax_5 != arg2)
                ebx_1 += 1
                eax_5 = &eax_5[1]
                
                if (ebx_1 u>= edx_5)
                    break
        
        int32_t edx_6 = esi_1[3]
        int32_t edi_2 = esi_1[2]
        arg2 = 0
        int32_t eax_10 = ebx_1 << 2
        int32_t* eax_11 = eax_10 + edi_2
        int32_t* edi_3 = edi_2 + ((edx_6 + ebx_1) << 2)
        int32_t* var_8_1 = edi_3
        
        do
            int32_t result = *eax_11
            void* edx_9 = *(eax + (*edi_3 << 2))
            
            if ((*(*(*(arg1 + 0x10) + (*(edx_9 + 4) << 2)) + 5) & 1) != 0
                    && *(edx_9 + 8) == 0xffffffff)
                double* eax_15 = arg3
                
                if (eax_15 != 0)
                    long double x87_r7_6 = fconvert.t(*(edx_9 + 0x20)) * fconvert.t(*eax_15)
                    
                    if (edx_3 != 0x20500000)
                        eax_15 = arg4
                        x87_r7_6 = x87_r7_6 + fconvert.t(*eax_15)
                    
                    *eax_15 = fconvert.d(x87_r7_6)
                
                return result
            
            arg2 += 1
            eax_11 = &eax_11[edx_6]
            edi_3 = &var_8_1[neg.d(edx_6)]
            var_8_1 = edi_3
        while (arg2 u< 2)
        
        if (edx_3 == 0x20400000)
            int32_t* eax_12 = esi_1[2]
            
            if (eax_12[ebx_1] == eax_12[esi_1[3] + ebx_1])
                if (arg3 != 0)
                    long double x87_r7_3 = fconvert.t(*arg3)
                    *arg3 = fconvert.d(x87_r7_3 + x87_r7_3)
                
                return *(eax_10 + esi_1[2])

return 0xffffffff
