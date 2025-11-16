// 函数: sub_65d050
// 地址: 0x65d050
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* edi = arg2
int32_t ecx = arg4
void* var_c = edi
void* esi = (edi << 1) + 2
bool cond:0 = esi != ecx

while (esi s< ecx)
    int16_t* ecx_1 = arg3 + esi * 0xe
    
    if (sub_5cd6f0(ecx_1, &ecx_1[-7]) != 0)
        esi -= 1
    
    void* eax_4 = esi * 7
    void* edx_1 = arg3 + (eax_4 << 1)
    void* eax_6 = edi * 7
    edi = esi
    int64_t* ecx_2 = arg3 + (eax_6 << 1)
    *ecx_2 = *(arg3 + (eax_4 << 1))
    esi = (esi << 1) + 2
    ecx_2[1].d = *(edx_1 + 8)
    int32_t eax_7
    eax_7.w = *(edx_1 + 0xc)
    *(ecx_2 + 0xc) = eax_7.w
    ecx = arg4
    cond:0 = esi != ecx

if (not(cond:0))
    int32_t eax_9 = ecx * 7
    void* edx_2 = arg3 + (eax_9 << 1)
    int64_t* ecx_3 = arg3 + edi * 0xe
    edi = arg4 - 1
    *ecx_3 = *(arg3 + (eax_9 << 1) - 0xe)
    ecx_3[1].d = *(edx_2 - 6)
    int32_t eax_12
    eax_12.w = *(edx_2 - 2)
    *(ecx_3 + 0xc) = eax_12.w

int32_t eax_14
int32_t edx_3
edx_3:eax_14 = sx.q(edi - 1)
int32_t ebx_2 = (eax_14 - edx_3) s>> 1

while (var_c s< edi)
    int16_t edx_4 = *arg5
    int32_t ecx_5 = ebx_2 * 7
    int16_t eax_17 = *(arg3 + (ecx_5 << 1))
    
    if (eax_17 u>= edx_4)
        if (eax_17 u> edx_4)
            break
        
        int16_t edx_5 = arg5[1]
        int16_t eax_19 = *(arg3 + (ecx_5 << 1) + 2)
        
        if (eax_19 u>= edx_5)
            if (eax_19 u> edx_5)
                break
            
            int16_t edx_6 = arg5[2]
            int16_t eax_21 = *(arg3 + (ecx_5 << 1) + 4)
            
            if (eax_21 u>= edx_6)
                if (eax_21 u> edx_6)
                    break
                
                int16_t edx_7 = arg5[3]
                int16_t eax_23 = *(arg3 + (ecx_5 << 1) + 6)
                
                if (eax_23 u>= edx_7)
                    if (eax_23 u> edx_7)
                        break
                    
                    int16_t edx_8 = arg5[4]
                    int16_t eax_25 = *(arg3 + (ecx_5 << 1) + 8)
                    
                    if (eax_25 u>= edx_8)
                        if (eax_25 u> edx_8)
                            break
                        
                        int16_t edx_9 = arg5[5]
                        int16_t eax_27 = *(arg3 + (ecx_5 << 1) + 0xa)
                        
                        if (eax_27 u>= edx_9)
                            if (eax_27 u> edx_9)
                                break
                            
                            int32_t eax_28
                            eax_28.w = *(arg3 + (ecx_5 << 1) + 0xc)
                            
                            if (eax_28.w u>= arg5[6])
                                break
    
    int64_t* edx_10 = arg3 + edi * 0xe
    *edx_10 = *(arg3 + (ecx_5 << 1))
    edx_10[1].d = *(arg3 + (ecx_5 << 1) + 8)
    int32_t eax_31
    eax_31.w = *(arg3 + (ecx_5 << 1) + 0xc)
    edi = ebx_2
    *(edx_10 + 0xc) = eax_31.w
    int32_t eax_33
    int32_t edx_11
    edx_11:eax_33 = sx.q(ebx_2 - 1)
    ebx_2 = (eax_33 - edx_11) s>> 1

int64_t* ecx_7 = arg3 + edi * 0xe
*ecx_7 = *arg5
ecx_7[1].d = *(arg5 + 8)
int32_t result
result.w = arg5[6]
*(ecx_7 + 0xc) = result.w
return result
