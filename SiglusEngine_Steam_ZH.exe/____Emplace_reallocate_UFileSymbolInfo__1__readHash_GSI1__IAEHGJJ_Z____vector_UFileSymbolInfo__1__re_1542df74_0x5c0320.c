// 函数: ??$_Emplace_reallocate@UFileSymbolInfo@?1??readHash@GSI1@@IAEHGJJ@Z@@?$vector@UFileSymbolInfo@?1??readHash@GSI1@@IAEHGJJ@Z@V?$allocator@UFileSymbolInfo@?1??readHash@GSI1@@IAEHGJJ@Z@@std@@@std@@QAEPAUFileSymbolInfo@?1??readHash@GSI1@@IAEHGJJ@Z@QAU2?1??34@IAEHGJJ@Z@$$QAU2?1??34@IAEHGJJ@Z@@Z
// 地址: 0x5c0320
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bb380
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx = arg1
void* var_4c = ebx
int128_t* result = arg4

if (arg3 s< result)
    int32_t ecx = arg3 * 0x2cc
    arg4 = result - arg3
    int32_t var_18_1 = ecx
    void* i
    
    do
        void* ebx_2 = *(ebx + 0xa4) + ecx
        int32_t edi_1 = *(ebx_2 + 0x128)
        sub_5979b0(arg2, arg2[3] + 4)
        int32_t* ecx_2 = *arg2
        
        if (ecx_2 == arg2[1])
            ecx_2 = nullptr
        
        int32_t var_34_1 = 7
        void* var_38_1 = nullptr
        *(ecx_2 + arg2[3]) = edi_1
        arg2[3] += 4
        int16_t var_48 = 0
        sub_52e3c0(&var_48, ebx_2 + 0x12c, 0, 0xffffffff)
        int32_t var_8_1 = 0
        sub_5979b0(arg2, arg2[3] + 4)
        int32_t* ecx_5 = *arg2
        int16_t* edx_1 = &var_48
        
        if (ecx_5 == arg2[1])
            ecx_5 = nullptr
        
        *(ecx_5 + arg2[3]) = var_38_1
        arg2[3] += 4
        int16_t* ecx_6 = var_48.d
        void* edi_3 = var_38_1 * 2
        int32_t eax_12 = var_34_1
        
        if (eax_12 u>= 8)
            edx_1 = ecx_6
        
        if (edi_3 s> 0)
            sub_5979b0(arg2, arg2[3] + edi_3)
            int32_t ecx_8 = *arg2
            
            if (ecx_8 == arg2[1])
                ecx_8 = 0
            
            sub_748840(arg2[3] + ecx_8, edx_1, edi_3, eax_2)
            eax_12 = var_34_1
            arg2[3] += edi_3
            ecx_6 = var_48.d
        
        int32_t var_8_2 = 0xffffffff
        
        if (eax_12 u>= 8)
            j__free(ecx_6)
        
        int32_t var_1c_1 = 7
        int16_t var_30 = 0
        void* var_20_1 = nullptr
        sub_52e3c0(&var_30, ebx_2 + 0x144, 0, 0xffffffff)
        int32_t var_8_3 = 1
        sub_5979b0(arg2, arg2[3] + 4)
        int32_t* ecx_11 = *arg2
        int16_t* edx_2 = &var_30
        
        if (ecx_11 == arg2[1])
            ecx_11 = nullptr
        
        *(ecx_11 + arg2[3]) = var_20_1
        arg2[3] += 4
        int16_t* ecx_12 = var_30.d
        void* edi_5 = var_20_1 * 2
        int32_t eax_22 = var_1c_1
        
        if (eax_22 u>= 8)
            edx_2 = ecx_12
        
        if (edi_5 s> 0)
            sub_5979b0(arg2, arg2[3] + edi_5)
            int32_t ecx_14 = *arg2
            
            if (ecx_14 == arg2[1])
                ecx_14 = 0
            
            sub_748840(arg2[3] + ecx_14, edx_2, edi_5, eax_2)
            eax_22 = var_1c_1
            arg2[3] += edi_5
            ecx_12 = var_30.d
        
        int32_t var_8_4 = 0xffffffff
        
        if (eax_22 u>= 8)
            j__free(ecx_12)
        
        int32_t var_1c_2 = 7
        int32_t var_20_2 = 0
        var_30 = 0
        sub_5be990(ebx_2 + 0x15c, arg2)
        int128_t xmm0_1 = *(ebx_2 + 0x2b4)
        int32_t edi_6 = *(ebx_2 + 0x2c4)
        sub_5979b0(arg2, arg2[3] + 0x14)
        int32_t ecx_17 = *arg2
        ebx = var_4c
        
        if (ecx_17 == arg2[1])
            ecx_17 = 0
        
        result = arg2[3]
        *(result + ecx_17) = xmm0_1
        *(result + ecx_17 + 0x10) = edi_6
        arg2[3] += 0x14
        ecx = var_18_1 + 0x2cc
        i = arg4
        arg4 -= 1
        var_18_1 = ecx
    while (i != 1)

fsbase->NtTib.ExceptionList = ExceptionList
return result
