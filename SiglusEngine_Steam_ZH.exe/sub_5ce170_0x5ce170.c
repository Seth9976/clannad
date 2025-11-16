// 函数: sub_5ce170
// 地址: 0x5ce170
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bbe00
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t i_1 = 0
int32_t* edx = *arg2

if (edx == arg2[1])
    edx = nullptr

*(arg1 + 0x118) = *(edx + arg2[3])
arg2[3] += 4

if (*(arg1 + 0x118) s> 0)
    int32_t edi_1 = 0
    int32_t var_50_1 = 0
    int32_t i
    
    do
        char* ecx = *arg2
        
        if (ecx == arg2[1])
            ecx = nullptr
        
        int32_t eax_5
        eax_5.b = ecx[arg2[3]]
        (*(arg1 + 0x10c))[edi_1] = eax_5.b
        arg2[3] += 1
        int32_t* eax_8 = *(arg1 + 0x10c) + 4 + edi_1
        int32_t var_30
        int16_t* eax_9 = sub_5b0600(arg2, &var_30)
        int32_t var_8_1 = 0
        
        if (eax_8 != eax_9)
            sub_52e3c0(eax_8, eax_9, 0, 0xffffffff)
        
        int32_t var_8_2 = 0xffffffff
        int32_t var_1c
        
        if (var_1c u>= 8)
            j__free(var_30)
        
        int32_t* eax_13 = *(arg1 + 0x10c) + 0x1c + edi_1
        int16_t* eax_14 = sub_5b0600(arg2, &var_30)
        int32_t var_8_3 = 1
        
        if (eax_13 != eax_14)
            sub_52e3c0(eax_13, eax_14, 0, 0xffffffff)
        
        int32_t var_8_4 = 0xffffffff
        
        if (var_1c u>= 8)
            j__free(var_30)
        
        int32_t* eax_18 = *(arg1 + 0x10c) + 0x34 + edi_1
        int16_t* eax_19 = sub_5b0600(arg2, &var_30)
        int32_t var_8_5 = 2
        
        if (eax_18 != eax_19)
            sub_52e3c0(eax_18, eax_19, 0, 0xffffffff)
        
        int32_t var_8_6 = 0xffffffff
        
        if (var_1c u>= 8)
            j__free(var_30)
        
        void* edi_2 = edi_1 + *(arg1 + 0x10c)
        int32_t edx_2 = *arg2
        int32_t* ecx_10 = arg2[3]
        
        if (edx_2 == arg2[1])
            edx_2 = 0
        
        *(edi_2 + 0x20c) = *(ecx_10 + edx_2)
        *(edi_2 + 0x210) = *(ecx_10 + edx_2 + 4)
        arg2[3] += 8
        int32_t ecx_12 = arg2[3] + 4
        void* edi_4 = var_50_1 + *(arg1 + 0x10c)
        int32_t eax_23 = *arg2
        bool cond:4_1 = eax_23 == arg2[1]
        arg2[3] = ecx_12
        
        if (cond:4_1)
            eax_23 = 0
        
        sub_55c6f0(edi_4 + 0x2e14, *(ecx_12 + eax_23 - 4))
        int32_t* eax_24 = *(edi_4 + 0x2e14)
        int32_t edi_5 = *(edi_4 + 0x2e18)
        int32_t* edx_3 = eax_24
        
        if (eax_24 == edi_5)
            edx_3 = nullptr
        
        void* edi_7 = (edi_5 - eax_24) & 0xfffffffc
        
        if (edi_7 s> 0)
            int32_t ecx_14 = *arg2
            
            if (ecx_14 == arg2[1])
                ecx_14 = 0
            
            sub_748840(edx_3, arg2[3] + ecx_14, edi_7, eax_2)
            arg2[3] += edi_7
        
        void* edi_9 = var_50_1 + *(arg1 + 0x10c)
        arg2[3] += 4
        int32_t eax_27 = *arg2
        
        if (eax_27 == arg2[1])
            eax_27 = 0
        
        sub_55c6f0(edi_9 + 0x2e20, *(arg2[3] + eax_27 - 4))
        int32_t* eax_28 = *(edi_9 + 0x2e20)
        int32_t edi_10 = *(edi_9 + 0x2e24)
        int32_t* edx_4 = eax_28
        
        if (eax_28 == edi_10)
            edx_4 = nullptr
        
        void* edi_12 = (edi_10 - eax_28) & 0xfffffffc
        
        if (edi_12 s> 0)
            int32_t ecx_17 = *arg2
            
            if (ecx_17 == arg2[1])
                ecx_17 = 0
            
            sub_748840(edx_4, arg2[3] + ecx_17, edi_12, eax_2)
            arg2[3] += edi_12
        
        int32_t* ecx_18 = *arg2
        
        if (ecx_18 == arg2[1])
            ecx_18 = nullptr
        
        *(*(arg1 + 0x10c) + var_50_1 + 0x2e2c) = *(ecx_18 + arg2[3])
        arg2[3] += 4
        int32_t* eax_35 = *(arg1 + 0x10c) + 0x2e30 + var_50_1
        int32_t var_48
        int16_t* eax_36 = sub_5b0600(arg2, &var_48)
        int32_t var_8_7 = 3
        
        if (eax_35 != eax_36)
            sub_52e3c0(eax_35, eax_36, 0, 0xffffffff)
        
        int32_t var_8_8 = 0xffffffff
        int32_t var_34
        
        if (var_34 u>= 8)
            j__free(var_48)
        
        int32_t* ecx_22 = *arg2
        
        if (ecx_22 == arg2[1])
            ecx_22 = nullptr
        
        var_48.w = 0
        var_34 = 7
        int32_t var_38_1 = 0
        *(*(arg1 + 0x10c) + var_50_1 + 0x2e48) = *(ecx_22 + arg2[3])
        arg2[3] += 4
        int32_t* eax_40 = *arg2
        
        if (eax_40 == arg2[1])
            eax_40 = nullptr
        
        *(*(arg1 + 0x10c) + var_50_1 + 0x2e4c) = *(eax_40 + arg2[3])
        arg2[3] += 4
        int32_t eax_42 = *arg2
        
        if (eax_42 == arg2[1])
            eax_42 = 0
        
        int32_t edx_8 = *(arg1 + 0x10c)
        int64_t* ecx_25 = arg2[3] + eax_42
        *(edx_8 + var_50_1 + 0x2e50) = *ecx_25
        *(edx_8 + var_50_1 + 0x2e58) = ecx_25[1].d
        int32_t eax_43
        eax_43.w = *(ecx_25 + 0xc)
        *(edx_8 + var_50_1 + 0x2e5c) = eax_43.w
        arg2[3] += 0xe
        int32_t eax_44 = *arg2
        
        if (eax_44 == arg2[1])
            eax_44 = 0
        
        eax_44.b = arg2[3][eax_44]
        *(*(arg1 + 0x10c) + var_50_1 + 0x2e5e) = eax_44.b
        edi_1 = var_50_1 + 0x2e60
        arg2[3] += 1
        i = i_1 + 1
        i_1 = i
        var_50_1 = edi_1
    while (i s< *(arg1 + 0x118))

int32_t* ecx_27 = *arg2

if (ecx_27 == arg2[1])
    ecx_27 = nullptr

*(arg1 + 0x11c) = *(ecx_27 + arg2[3])
arg2[3] += 4
int32_t eax_48 = *arg2

if (eax_48 == arg2[1])
    eax_48 = 0

*(arg1 + 0x120) = *(arg2[3] + eax_48)
arg2[3] += 4
int32_t eax_50 = *arg2

if (eax_50 == arg2[1])
    eax_50 = 0

*(arg1 + 0x124) = *(arg2[3] + eax_50)
arg2[3] += 4
int32_t eax_52 = *arg2

if (eax_52 == arg2[1])
    eax_52 = 0

int32_t result = *(arg2[3] + eax_52)
*(arg1 + 0x128) = result
arg2[3] += 4
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
