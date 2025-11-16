// 函数: sub_5cdb90
// 地址: 0x5cdb90
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bbdc0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx = arg1
void* var_18 = ebx
int32_t* esi = arg2
int32_t edi = *(ebx + 0x118)
sub_5979b0(esi, esi[3] + 4)
int32_t* ecx_1 = *esi
int32_t i_1 = 0

if (ecx_1 == esi[1])
    ecx_1 = nullptr

*(ecx_1 + esi[3]) = edi
esi[3] += 4

if (*(ebx + 0x118) s> 0)
    char* edi_1 = nullptr
    arg2 = nullptr
    int32_t i
    
    do
        ebx.b = edi_1[*(ebx + 0x10c)]
        sub_5979b0(esi, esi[3] + 1)
        char* ecx_3 = *esi
        
        if (ecx_3 == esi[1])
            ecx_3 = nullptr
        
        int32_t var_44_1 = 7
        void* var_48_1 = nullptr
        ecx_3[esi[3]] = ebx.b
        esi[3] += 1
        int16_t var_58 = 0
        sub_52e3c0(&var_58, *(var_18 + 0x10c) + 4 + edi_1, 0, 0xffffffff)
        int32_t var_8_1 = 0
        sub_5979b0(esi, esi[3] + 4)
        int32_t* ecx_6 = *esi
        int16_t* edx_1 = &var_58
        
        if (ecx_6 == esi[1])
            ecx_6 = nullptr
        
        *(ecx_6 + esi[3]) = var_48_1
        esi[3] += 4
        int16_t* ecx_7 = var_58.d
        void* edi_3 = var_48_1 * 2
        int32_t eax_17 = var_44_1
        
        if (eax_17 u>= 8)
            edx_1 = ecx_7
        
        if (edi_3 s> 0)
            sub_5979b0(esi, esi[3] + edi_3)
            int32_t ecx_9 = *esi
            
            if (ecx_9 == esi[1])
                ecx_9 = 0
            
            sub_748840(esi[3] + ecx_9, edx_1, edi_3, eax_2)
            eax_17 = var_44_1
            esi[3] += edi_3
            ecx_7 = var_58.d
        
        int32_t var_8_2 = 0xffffffff
        
        if (eax_17 u>= 8)
            j__free(ecx_7)
        
        void* eax_23 = *(var_18 + 0x10c) + &arg2[0x1c]
        var_58 = 0
        int32_t var_44_2 = 7
        void* var_48_2 = nullptr
        sub_52e3c0(&var_58, eax_23, 0, 0xffffffff)
        int32_t var_8_3 = 1
        sub_5979b0(esi, esi[3] + 4)
        int32_t* ecx_12 = *esi
        int16_t* edx_2 = &var_58
        
        if (ecx_12 == esi[1])
            ecx_12 = nullptr
        
        *(ecx_12 + esi[3]) = var_48_2
        esi[3] += 4
        int16_t* ecx_13 = var_58.d
        void* edi_7 = var_48_2 * 2
        int32_t eax_28 = var_44_2
        
        if (eax_28 u>= 8)
            edx_2 = ecx_13
        
        if (edi_7 s> 0)
            sub_5979b0(esi, esi[3] + edi_7)
            int32_t ecx_15 = *esi
            
            if (ecx_15 == esi[1])
                ecx_15 = 0
            
            sub_748840(esi[3] + ecx_15, edx_2, edi_7, eax_2)
            eax_28 = var_44_2
            esi[3] += edi_7
            ecx_13 = var_58.d
        
        int32_t var_8_4 = 0xffffffff
        
        if (eax_28 u>= 8)
            j__free(ecx_13)
        
        void* eax_34 = *(var_18 + 0x10c) + 0x34
        var_58 = 0
        int32_t var_44_3 = 7
        void* var_48_3 = nullptr
        sub_52e3c0(&var_58, eax_34 + arg2, 0, 0xffffffff)
        int32_t var_8_5 = 2
        sub_5979b0(esi, esi[3] + 4)
        int32_t* ecx_18 = *esi
        int16_t* edx_3 = &var_58
        
        if (ecx_18 == esi[1])
            ecx_18 = nullptr
        
        *(ecx_18 + esi[3]) = var_48_3
        esi[3] += 4
        int16_t* ecx_19 = var_58.d
        void* edi_9 = var_48_3 * 2
        int32_t eax_40 = var_44_3
        
        if (eax_40 u>= 8)
            edx_3 = ecx_19
        
        if (edi_9 s> 0)
            sub_5979b0(esi, esi[3] + edi_9)
            int32_t ecx_21 = *esi
            
            if (ecx_21 == esi[1])
                ecx_21 = 0
            
            sub_748840(esi[3] + ecx_21, edx_3, edi_9, eax_2)
            eax_40 = var_44_3
            esi[3] += edi_9
            ecx_19 = var_58.d
        
        int32_t var_8_6 = 0xffffffff
        
        if (eax_40 u>= 8)
            j__free(ecx_19)
        
        int32_t eax_45 = *(var_18 + 0x10c)
        sub_5b5080(esi, *(arg2 + eax_45 + 0x20c), *(arg2 + eax_45 + 0x210))
        sub_5d4ee0(esi, *(var_18 + 0x10c) + 0x2e14 + arg2)
        sub_5d4ee0(esi, *(var_18 + 0x10c) + 0x2e20 + arg2)
        int32_t edi_11 = *(arg2 + *(var_18 + 0x10c) + 0x2e2c)
        sub_5979b0(esi, esi[3] + 4)
        int32_t* ecx_26 = *esi
        
        if (ecx_26 == esi[1])
            ecx_26 = nullptr
        
        int32_t var_2c_1 = 7
        void* var_30_1 = nullptr
        *(ecx_26 + esi[3]) = edi_11
        esi[3] += 4
        void* eax_57 = *(var_18 + 0x10c) + 0x2e30
        int16_t var_40 = 0
        sub_52e3c0(&var_40, eax_57 + arg2, 0, 0xffffffff)
        int32_t var_8_7 = 3
        sub_5979b0(esi, esi[3] + 4)
        int32_t* ecx_29 = *esi
        int16_t* edx_4 = &var_40
        
        if (ecx_29 == esi[1])
            ecx_29 = nullptr
        
        *(ecx_29 + esi[3]) = var_30_1
        esi[3] += 4
        int16_t* ecx_30 = var_40.d
        void* edi_13 = var_30_1 * 2
        int32_t eax_63 = var_2c_1
        
        if (eax_63 u>= 8)
            edx_4 = ecx_30
        
        if (edi_13 s> 0)
            sub_5979b0(esi, esi[3] + edi_13)
            int32_t ecx_32 = *esi
            
            if (ecx_32 == esi[1])
                ecx_32 = 0
            
            sub_748840(esi[3] + ecx_32, edx_4, edi_13, eax_2)
            eax_63 = var_2c_1
            esi[3] += edi_13
            ecx_30 = var_40.d
        
        int32_t var_8_8 = 0xffffffff
        
        if (eax_63 u>= 8)
            j__free(ecx_30)
        
        var_40 = 0
        int32_t var_2c_2 = 7
        int32_t var_30_2 = 0
        int32_t edi_14 = *(arg2 + *(var_18 + 0x10c) + 0x2e48)
        sub_5979b0(esi, esi[3] + 4)
        int32_t* ecx_35 = *esi
        
        if (ecx_35 == esi[1])
            ecx_35 = nullptr
        
        *(ecx_35 + esi[3]) = edi_14
        esi[3] += 4
        int32_t edi_16 = *(arg2 + *(var_18 + 0x10c) + 0x2e4c)
        sub_5979b0(esi, esi[3] + 4)
        int32_t* ecx_38 = *esi
        
        if (ecx_38 == esi[1])
            ecx_38 = nullptr
        
        *(ecx_38 + esi[3]) = edi_16
        esi[3] += 4
        int32_t eax_75 = *(var_18 + 0x10c)
        int64_t xmm0_1 = *(arg2 + eax_75 + 0x2e50)
        int32_t edi_17 = *(arg2 + eax_75 + 0x2e58)
        void* ebx_1
        ebx_1.w = *(arg2 + eax_75 + 0x2e5c)
        sub_5979b0(esi, esi[3] + 0xe)
        int32_t eax_77 = *esi
        
        if (eax_77 == esi[1])
            eax_77 = 0
        
        int64_t* ecx_41 = esi[3]
        *(ecx_41 + eax_77) = xmm0_1
        *(ecx_41 + eax_77 + 8) = edi_17
        *(ecx_41 + eax_77 + 0xc) = ebx_1.w
        esi[3] += 0xe
        ebx_1.b = arg2[*(var_18 + 0x10c) + 0x2e5e]
        sub_5979b0(esi, esi[3] + 1)
        char* ecx_44 = *esi
        
        if (ecx_44 == esi[1])
            ecx_44 = nullptr
        
        edi_1 = &arg2[0x2e60]
        arg2 = edi_1
        ecx_44[esi[3]] = ebx_1.b
        ebx = var_18
        i = i_1 + 1
        esi[3] += 1
        i_1 = i
    while (i s< *(ebx + 0x118))

int32_t edi_19 = *(ebx + 0x11c)
sub_5979b0(esi, esi[3] + 4)
int32_t* ecx_46 = *esi

if (ecx_46 == esi[1])
    ecx_46 = nullptr

*(ecx_46 + esi[3]) = edi_19
int32_t eax_87 = esi[3] + 4
esi[3] = eax_87
int32_t edi_20 = *(ebx + 0x120)
sub_5979b0(esi, eax_87 + 4)
int32_t* ecx_48 = *esi

if (ecx_48 == esi[1])
    ecx_48 = nullptr

*(ecx_48 + esi[3]) = edi_20
int32_t eax_91 = esi[3] + 4
esi[3] = eax_91
int32_t edi_21 = *(ebx + 0x124)
sub_5979b0(esi, eax_91 + 4)
int32_t* ecx_50 = *esi

if (ecx_50 == esi[1])
    ecx_50 = nullptr

*(ecx_50 + esi[3]) = edi_21
int32_t eax_95 = esi[3] + 4
esi[3] = eax_95
int32_t edi_22 = *(ebx + 0x128)
sub_5979b0(esi, eax_95 + 4)
int32_t* ecx_52 = *esi

if (ecx_52 == esi[1])
    ecx_52 = nullptr

int32_t result = esi[3]
*(ecx_52 + result) = edi_22
esi[3] += 4
fsbase->NtTib.ExceptionList = ExceptionList
return result
