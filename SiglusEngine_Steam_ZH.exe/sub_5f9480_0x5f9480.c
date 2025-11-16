// 函数: sub_5f9480
// 地址: 0x5f9480
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bd3a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ebx
int32_t var_38 = ebx
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_1c = arg1

if (arg3 s< arg4)
    int32_t* esi_1 = arg2
    result = arg3 * 0xd4
    arg4 -= arg3
    struct _EXCEPTION_REGISTRATION_RECORD** result_1 = result
    void* i
    
    do
        void* ebx_3 = *(arg1 + 0xa4) + result
        arg3 = ebx_3
        int32_t edi_1 = *(ebx_3 + 0xa0)
        sub_5979b0(esi_1, esi_1[3] + 4)
        int32_t* ecx_1 = *esi_1
        
        if (ecx_1 == esi_1[1])
            ecx_1 = nullptr
        
        *(ecx_1 + esi_1[3]) = edi_1
        esi_1[3] += 4
        int32_t eax_6 = *(ebx_3 + 0xa0)
        
        if (eax_6 == 1 || eax_6 == 2)
            int32_t edi_2 = *(ebx_3 + 0xa4)
            sub_5979b0(esi_1, esi_1[3] + 4)
            int32_t* ecx_4 = *esi_1
            
            if (ecx_4 == esi_1[1])
                ecx_4 = nullptr
            
            *(ecx_4 + esi_1[3]) = edi_2
            esi_1[3] += 4
            int32_t edi_3 = *(ebx_3 + 0xa8)
            sub_5979b0(esi_1, esi_1[3] + 4)
            int32_t* ecx_6 = *esi_1
            
            if (ecx_6 == esi_1[1])
                ecx_6 = nullptr
            
            *(ecx_6 + esi_1[3]) = edi_3
            esi_1[3] += 4
            int32_t edi_4 = *(ebx_3 + 0xac)
            sub_5979b0(esi_1, esi_1[3] + 4)
            int32_t* ecx_8 = *esi_1
            
            if (ecx_8 == esi_1[1])
                ecx_8 = nullptr
            
            *(ecx_8 + esi_1[3]) = edi_4
            esi_1[3] += 4
            ebx_3.b = *(ebx_3 + 0xb0)
            sub_5979b0(esi_1, esi_1[3] + 1)
            char* ecx_10 = *esi_1
            
            if (ecx_10 == esi_1[1])
                ecx_10 = nullptr
            
            ecx_10[esi_1[3]] = ebx_3.b
            esi_1[3] += 1
            ebx_3.b = *(arg3 + 0xb1)
            sub_5979b0(esi_1, esi_1[3] + 1)
            char* ecx_12 = *esi_1
            
            if (ecx_12 == esi_1[1])
                ecx_12 = nullptr
            
            ecx_12[esi_1[3]] = ebx_3.b
            esi_1[3] += 1
            ebx_3.b = *(arg3 + 0xb2)
            sub_5979b0(esi_1, esi_1[3] + 1)
            char* ecx_14 = *esi_1
            
            if (ecx_14 == esi_1[1])
                ecx_14 = nullptr
            
            ecx_14[esi_1[3]] = ebx_3.b
            esi_1[3] += 1
            ebx_3.b = *(arg3 + 0xb3)
            sub_5979b0(esi_1, esi_1[3] + 1)
            char* ecx_16 = *esi_1
            
            if (ecx_16 == esi_1[1])
                ecx_16 = nullptr
            
            ecx_16[esi_1[3]] = ebx_3.b
            esi_1[3] += 1
            ebx_3.b = *(arg3 + 0xb4)
            sub_5979b0(esi_1, esi_1[3] + 1)
            char* ecx_18 = *esi_1
            
            if (ecx_18 == esi_1[1])
                ecx_18 = nullptr
            
            ecx_18[esi_1[3]] = ebx_3.b
            esi_1[3] += 1
            int32_t eax_31
            int32_t edx_2
            edx_2:eax_31 = muls.dp.d(0x38e38e39, *(arg3 + 0xbc) - *(arg3 + 0xb8))
            int32_t edx_3 = edx_2 s>> 3
            sub_5979b0(esi_1, esi_1[3] + 4)
            int32_t* ecx_22 = *esi_1
            
            if (ecx_22 == esi_1[1])
                ecx_22 = nullptr
            
            *(ecx_22 + esi_1[3]) = (edx_3 u>> 0x1f) + edx_3
            void* ebx_7 = arg3
            esi_1[3] += 4
            arg2 = nullptr
            int32_t eax_34
            int32_t edx_4
            edx_4:eax_34 = muls.dp.d(0x38e38e39, *(ebx_7 + 0xbc) - *(ebx_7 + 0xb8))
            int32_t edx_5 = edx_4 s>> 3
            
            if ((edx_5 u>> 0x1f) + edx_5 s> 0)
                void* edi_7 = nullptr
                arg3 = nullptr
                int32_t edx_9
                
                do
                    void* eax_39 = *(ebx_7 + 0xb8) + edi_7
                    int16_t var_34 = 0
                    int32_t var_20_1 = 7
                    void* var_24_1 = nullptr
                    sub_52e3c0(&var_34, eax_39, 0, 0xffffffff)
                    int32_t var_8_1 = 0
                    sub_5979b0(esi_1, esi_1[3] + 4)
                    int32_t* ecx_27 = *esi_1
                    int16_t* edx_6 = &var_34
                    
                    if (ecx_27 == esi_1[1])
                        ecx_27 = nullptr
                    
                    *(ecx_27 + esi_1[3]) = var_24_1
                    esi_1[3] += 4
                    int16_t* ecx_28 = var_34.d
                    void* edi_9 = var_24_1 * 2
                    int32_t eax_44 = var_20_1
                    
                    if (eax_44 u>= 8)
                        edx_6 = ecx_28
                    
                    if (edi_9 s> 0)
                        sub_5979b0(esi_1, esi_1[3] + edi_9)
                        int32_t ecx_30 = *esi_1
                        
                        if (ecx_30 == esi_1[1])
                            ecx_30 = 0
                        
                        sub_748840(esi_1[3] + ecx_30, edx_6, edi_9, eax_2)
                        eax_44 = var_20_1
                        esi_1[3] += edi_9
                        ecx_28 = var_34.d
                    
                    int32_t var_8_2 = 0xffffffff
                    
                    if (eax_44 u>= 8)
                        j__free(ecx_28)
                    
                    var_34 = 0
                    int32_t var_20_2 = 7
                    int32_t var_24_2 = 0
                    int32_t edi_10 = *(arg3 + *(ebx_7 + 0xb8) + 0x18)
                    sub_5979b0(esi_1, esi_1[3] + 4)
                    int32_t* ecx_33 = *esi_1
                    
                    if (ecx_33 == esi_1[1])
                        ecx_33 = nullptr
                    
                    *(ecx_33 + esi_1[3]) = edi_10
                    esi_1[3] += 4
                    int32_t edi_12 = *(arg3 + *(ebx_7 + 0xb8) + 0x1c)
                    sub_5979b0(esi_1, esi_1[3] + 4)
                    int32_t* ecx_36 = *esi_1
                    
                    if (ecx_36 == esi_1[1])
                        ecx_36 = nullptr
                    
                    *(ecx_36 + esi_1[3]) = edi_12
                    esi_1[3] += 4
                    int32_t edi_13 = *(arg3 + *(ebx_7 + 0xb8) + 0x20)
                    sub_5979b0(esi_1, esi_1[3] + 4)
                    int32_t* ecx_39 = *esi_1
                    
                    if (ecx_39 == esi_1[1])
                        ecx_39 = nullptr
                    
                    arg2 += 1
                    *(ecx_39 + esi_1[3]) = edi_13
                    esi_1[3] += 4
                    int32_t eax_59
                    int32_t edx_8
                    edx_8:eax_59 = muls.dp.d(0x38e38e39, *(ebx_7 + 0xbc) - *(ebx_7 + 0xb8))
                    edi_7 = arg3 + 0x24
                    edx_9 = edx_8 s>> 3
                    arg3 = edi_7
                while (arg2 s< (edx_9 u>> 0x1f) + edx_9)
        
        arg1 = var_1c
        result = &result_1[0x35]
        i = arg4
        arg4 -= 1
        result_1 = result
    while (i != 1)

fsbase->NtTib.ExceptionList = ExceptionList
return result
