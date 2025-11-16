// 函数: sub_5b4320
// 地址: 0x5b4320
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9ba6c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx = arg1
void* var_4c = ebx
int32_t result = arg4

if (arg3 s< result)
    int32_t ecx = arg3 * 0x580
    arg4 = result - arg3
    int32_t var_54_1 = ecx
    int32_t i
    
    do
        void* ebx_2 = *(ebx + 0xa4) + ecx
        int32_t esi_1 = *(ebx_2 + 0x25c)
        sub_5979b0(arg2, arg2[3] + 4)
        int32_t* ecx_2 = *arg2
        
        if (ecx_2 == arg2[1])
            ecx_2 = nullptr
        
        int32_t var_1c_1 = 7
        void* var_20_1 = nullptr
        *(ecx_2 + arg2[3]) = esi_1
        arg2[3] += 4
        int16_t var_30 = 0
        sub_52e3c0(&var_30, ebx_2 + 0x260, 0, 0xffffffff)
        int32_t var_c_1 = 0
        sub_5979b0(arg2, arg2[3] + 4)
        int32_t* ecx_5 = *arg2
        int16_t* edx_1 = &var_30
        
        if (ecx_5 == arg2[1])
            ecx_5 = nullptr
        
        *(ecx_5 + arg2[3]) = var_20_1
        arg2[3] += 4
        int16_t* ecx_6 = var_30.d
        void* esi_3 = var_20_1 * 2
        int32_t eax_12 = var_1c_1
        
        if (eax_12 u>= 8)
            edx_1 = ecx_6
        
        if (esi_3 s> 0)
            sub_5979b0(arg2, arg2[3] + esi_3)
            int32_t ecx_8 = *arg2
            
            if (ecx_8 == arg2[1])
                ecx_8 = 0
            
            sub_748840(arg2[3] + ecx_8, edx_1, esi_3, eax_2)
            eax_12 = var_1c_1
            arg2[3] += esi_3
            ecx_6 = var_30.d
        
        int32_t var_c_2 = 0xffffffff
        
        if (eax_12 u>= 8)
            j__free(ecx_6)
        
        int32_t var_1c_2 = 7
        var_30 = 0
        void* var_20_2 = nullptr
        sub_52e3c0(&var_30, ebx_2 + 0x278, 0, 0xffffffff)
        int32_t var_c_3 = 1
        sub_5979b0(arg2, arg2[3] + 4)
        int32_t* ecx_11 = *arg2
        int16_t* edx_2 = &var_30
        
        if (ecx_11 == arg2[1])
            ecx_11 = nullptr
        
        *(ecx_11 + arg2[3]) = var_20_2
        arg2[3] += 4
        int16_t* ecx_12 = var_30.d
        void* esi_5 = var_20_2 * 2
        int32_t eax_22 = var_1c_2
        
        if (eax_22 u>= 8)
            edx_2 = ecx_12
        
        if (esi_5 s> 0)
            sub_5979b0(arg2, arg2[3] + esi_5)
            int32_t ecx_14 = *arg2
            
            if (ecx_14 == arg2[1])
                ecx_14 = 0
            
            sub_748840(arg2[3] + ecx_14, edx_2, esi_5, eax_2)
            eax_22 = var_1c_2
            arg2[3] += esi_5
            ecx_12 = var_30.d
        
        int32_t var_c_4 = 0xffffffff
        
        if (eax_22 u>= 8)
            j__free(ecx_12)
        
        int32_t var_34_1 = 7
        int16_t var_48 = 0
        void* var_38_1 = nullptr
        sub_52e3c0(&var_48, ebx_2 + 0x290, 0, 0xffffffff)
        int32_t var_c_5 = 2
        sub_5979b0(arg2, arg2[3] + 4)
        int32_t* ecx_17 = *arg2
        int16_t* edx_3 = &var_48
        
        if (ecx_17 == arg2[1])
            ecx_17 = nullptr
        
        *(ecx_17 + arg2[3]) = var_38_1
        arg2[3] += 4
        int16_t* ecx_18 = var_48.d
        void* esi_7 = var_38_1 * 2
        int32_t eax_32 = var_34_1
        
        if (eax_32 u>= 8)
            edx_3 = ecx_18
        
        if (esi_7 s> 0)
            sub_5979b0(arg2, arg2[3] + esi_7)
            int32_t ecx_20 = *arg2
            
            if (ecx_20 == arg2[1])
                ecx_20 = 0
            
            sub_748840(arg2[3] + ecx_20, edx_3, esi_7, eax_2)
            eax_32 = var_34_1
            arg2[3] += esi_7
            ecx_18 = var_48.d
        
        int32_t var_c_6 = 0xffffffff
        
        if (eax_32 u>= 8)
            j__free(ecx_18)
        
        int32_t esi_8 = *(ebx_2 + 0x2a8)
        int32_t ebx_3 = *(ebx_2 + 0x2ac)
        var_48 = 0
        int32_t var_34_2 = 7
        int32_t var_38_2 = 0
        sub_5979b0(arg2, arg2[3] + 8)
        int32_t* ecx_22 = *arg2
        
        if (ecx_22 == arg2[1])
            ecx_22 = nullptr
        
        int32_t eax_39 = arg2[3]
        *(ecx_22 + eax_39) = esi_8
        *(ecx_22 + eax_39 + 4) = ebx_3
        arg2[3] += 8
        int32_t esi_9 = *(ebx_2 + 0x2b0)
        int32_t ebx_5 = *(ebx_2 + 0x2b4)
        sub_5979b0(arg2, arg2[3] + 8)
        int32_t* ecx_24 = *arg2
        
        if (ecx_24 == arg2[1])
            ecx_24 = nullptr
        
        int32_t eax_42 = arg2[3]
        *(ecx_24 + eax_42) = esi_9
        *(ecx_24 + eax_42 + 4) = ebx_5
        arg2[3] += 8
        int32_t ecx_26 = *(ebx_2 + 0x308) - *(ebx_2 + 0x304)
        sub_5979b0(arg2, arg2[3] + 4)
        int32_t* ecx_28 = *arg2
        
        if (ecx_28 == arg2[1])
            ecx_28 = nullptr
        
        result = arg2[3]
        *(ecx_28 + result) = ecx_26 s/ 0x3b4
        arg2[3] += 4
        
        for (int128_t* j = *(ebx_2 + 0x304); j != *(ebx_2 + 0x308); j += 0x3b4)
            result = sub_5db2e0(j, arg2)
        
        ebx = var_4c
        ecx = var_54_1 + 0x580
        i = arg4
        arg4 -= 1
        var_54_1 = ecx
    while (i != 1)

fsbase->NtTib.ExceptionList = ExceptionList
return result
