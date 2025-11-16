// 函数: sub_602dc0
// 地址: 0x602dc0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bdb30
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx = arg1
void* var_18 = ebx
int32_t result = arg3

if (result s< arg4)
    char** esi_1 = arg2
    int32_t ecx = result * 0x250
    arg4 -= result
    arg3 = ecx
    int32_t i
    
    do
        void* ebx_2 = *(ebx + 0xa4) + ecx
        int16_t var_48 = 0
        void* var_14_1 = ebx_2
        int32_t var_34_1 = 7
        void* var_38_1 = nullptr
        sub_52e3c0(&var_48, ebx_2 + 0xa0, 0, 0xffffffff)
        int32_t var_8_1 = 0
        sub_5979b0(esi_1, &esi_1[3][4])
        char* ecx_3 = *esi_1
        int16_t* edx_2 = &var_48
        
        if (ecx_3 == esi_1[1])
            ecx_3 = nullptr
        
        *(ecx_3 + esi_1[3]) = var_38_1
        esi_1[3] = &esi_1[3][4]
        int16_t* ecx_4 = var_48.d
        void* edi_2 = var_38_1 * 2
        int32_t eax_8 = var_34_1
        
        if (eax_8 u>= 8)
            edx_2 = ecx_4
        
        if (edi_2 s> 0)
            sub_5979b0(esi_1, esi_1[3] + edi_2)
            char* ecx_6 = *esi_1
            
            if (ecx_6 == esi_1[1])
                ecx_6 = nullptr
            
            sub_748840(esi_1[3] + ecx_6, edx_2, edi_2, eax_2)
            eax_8 = var_34_1
            esi_1[3] += edi_2
            ecx_4 = var_48.d
        
        int32_t var_8_2 = 0xffffffff
        
        if (eax_8 u>= 8)
            j__free(ecx_4)
        
        int32_t var_1c_1 = 7
        int16_t var_30 = 0
        void* var_20_1 = nullptr
        sub_52e3c0(&var_30, ebx_2 + 0xb8, 0, 0xffffffff)
        int32_t var_8_3 = 1
        sub_5979b0(esi_1, &esi_1[3][4])
        char* ecx_9 = *esi_1
        int16_t* edx_3 = &var_30
        
        if (ecx_9 == esi_1[1])
            ecx_9 = nullptr
        
        *(ecx_9 + esi_1[3]) = var_20_1
        esi_1[3] = &esi_1[3][4]
        int16_t* ecx_10 = var_30.d
        void* edi_4 = var_20_1 * 2
        int32_t eax_18 = var_1c_1
        
        if (eax_18 u>= 8)
            edx_3 = ecx_10
        
        if (edi_4 s> 0)
            sub_5979b0(esi_1, esi_1[3] + edi_4)
            char* ecx_12 = *esi_1
            
            if (ecx_12 == esi_1[1])
                ecx_12 = nullptr
            
            sub_748840(esi_1[3] + ecx_12, edx_3, edi_4, eax_2)
            eax_18 = var_1c_1
            esi_1[3] += edi_4
            ecx_10 = var_30.d
        
        int32_t var_8_4 = 0xffffffff
        
        if (eax_18 u>= 8)
            j__free(ecx_10)
        
        int32_t edi_5 = *(ebx_2 + 0xd0)
        var_30 = 0
        int32_t var_1c_2 = 7
        int32_t var_20_2 = 0
        sub_5979b0(esi_1, &esi_1[3][4])
        char* ecx_14 = *esi_1
        
        if (ecx_14 == esi_1[1])
            ecx_14 = nullptr
        
        *(ecx_14 + esi_1[3]) = edi_5
        esi_1[3] = &esi_1[3][4]
        int32_t edi_6 = *(ebx_2 + 0xd4)
        sub_5979b0(esi_1, &esi_1[3][4])
        char* ecx_16 = *esi_1
        
        if (ecx_16 == esi_1[1])
            ecx_16 = nullptr
        
        *(ecx_16 + esi_1[3]) = edi_6
        esi_1[3] = &esi_1[3][4]
        int32_t edi_7 = *(ebx_2 + 0xd8)
        sub_5979b0(esi_1, &esi_1[3][4])
        char* ecx_18 = *esi_1
        
        if (ecx_18 == esi_1[1])
            ecx_18 = nullptr
        
        *(ecx_18 + esi_1[3]) = edi_7
        esi_1[3] = &esi_1[3][4]
        int32_t edi_8 = *(ebx_2 + 0xdc)
        sub_5979b0(esi_1, &esi_1[3][4])
        char* ecx_20 = *esi_1
        
        if (ecx_20 == esi_1[1])
            ecx_20 = nullptr
        
        *(ecx_20 + esi_1[3]) = edi_8
        esi_1[3] = &esi_1[3][4]
        int32_t edi_9 = *(ebx_2 + 0xe0)
        sub_5979b0(esi_1, &esi_1[3][4])
        char* ecx_22 = *esi_1
        
        if (ecx_22 == esi_1[1])
            ecx_22 = nullptr
        
        *(ecx_22 + esi_1[3]) = edi_9
        esi_1[3] = &esi_1[3][4]
        int32_t edi_10 = *(ebx_2 + 0xe4)
        sub_5979b0(esi_1, &esi_1[3][4])
        char* ecx_24 = *esi_1
        
        if (ecx_24 == esi_1[1])
            ecx_24 = nullptr
        
        *(ecx_24 + esi_1[3]) = edi_10
        esi_1[3] = &esi_1[3][4]
        ebx_2.b = *(ebx_2 + 0xec)
        sub_5979b0(esi_1, &esi_1[3][1])
        char* ecx_26 = *esi_1
        
        if (ecx_26 == esi_1[1])
            ecx_26 = nullptr
        
        ecx_26[esi_1[3]] = ebx_2.b
        esi_1[3] = &esi_1[3][1]
        ebx_2.b = *(var_14_1 + 0xed)
        sub_5979b0(esi_1, &esi_1[3][1])
        char* ecx_28 = *esi_1
        
        if (ecx_28 == esi_1[1])
            ecx_28 = nullptr
        
        ecx_28[esi_1[3]] = ebx_2.b
        esi_1[3] = &esi_1[3][1]
        ebx_2.b = *(var_14_1 + 0xee)
        sub_5979b0(esi_1, &esi_1[3][1])
        char* ecx_30 = *esi_1
        
        if (ecx_30 == esi_1[1])
            ecx_30 = nullptr
        
        ecx_30[esi_1[3]] = ebx_2.b
        esi_1[3] = &esi_1[3][1]
        ebx_2.b = *(var_14_1 + 0xef)
        sub_5979b0(esi_1, &esi_1[3][1])
        char* ecx_32 = *esi_1
        
        if (ecx_32 == esi_1[1])
            ecx_32 = nullptr
        
        ecx_32[esi_1[3]] = ebx_2.b
        esi_1[3] = &esi_1[3][1]
        ebx_2.b = *(var_14_1 + 0xf0)
        sub_5979b0(esi_1, &esi_1[3][1])
        char* ecx_34 = *esi_1
        
        if (ecx_34 == esi_1[1])
            ecx_34 = nullptr
        
        result = esi_1[3]
        ecx_34[result] = ebx_2.b
        esi_1[3] = &esi_1[3][1]
        ecx = arg3 + 0x250
        i = arg4
        arg4 -= 1
        ebx = var_18
        arg3 = ecx
    while (i != 1)

fsbase->NtTib.ExceptionList = ExceptionList
return result
