// 函数: sub_6acc80
// 地址: 0x6acc80
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9ca738
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg5 == 0x10 && arg3 s>= arg4 s/ 0xa * 2)
    sub_5979b0(arg1, arg3 + (arg4 << 1))
    int32_t ecx_5 = *arg1
    
    if (ecx_5 == arg1[1])
        ecx_5 = 0
    
    int32_t var_44 = 0
    arg5 = ecx_5
    int32_t eax_13 = (arg9 + arg8) * 2
    int32_t var_40 = 0
    int32_t var_3c = 0
    int32_t var_8_1 = 0
    int32_t var_28 = 0
    int32_t var_20 = 0
    
    if (eax_13 s> 0)
        sub_5979b0(&var_44, eax_13)
        int32_t ecx_7 = var_44
        int32_t eax_14 = ecx_7
        ecx_5 = arg5
        
        if (ecx_7 == var_40)
            eax_14 = 0
        
        int32_t edx_3 = eax_14 + (arg8 << 1)
        var_20 = edx_3
        var_28 = edx_3 - 2
    
    int16_t* eax_16 = arg2
    int32_t edi = ecx_5 + arg3
    void* esi_2 = arg3 + eax_16
    arg4 = 0
    arg3 = ecx_5
    int16_t* ebx_2 = eax_16
    int16_t* var_18 = ebx_2
    void* edx_4 = ecx_5
    int32_t var_1c = edi
    void* var_24 = nullptr
    int32_t var_2c = 0
    
    if (eax_16 u< esi_2)
        while (true)
            if (edx_4 != ecx_5)
                int16_t* eax_18
                eax_18, ecx_5 = sub_6acf60(edx_4 - 2, ebx_2, arg6, ecx_5, edi, eax_16, esi_2)
                ebx_2 = eax_18
                eax_16 = arg2
                var_18 = ebx_2
            
            if (ebx_2 u>= esi_2)
                break
            
            void* var_58_3 = esi_2
            void* eax_19 = sub_6ad2a0(ebx_2, arg6 * 2, ecx_5, eax_16)
            
            if (eax_19 + ebx_2 u>= esi_2)
                eax_19 = esi_2 - ebx_2
            
            if (eax_19 s< 0)
                eax_19 = nullptr
            
            int32_t edx_5 = 0
            void* var_30_1 = eax_19
            int32_t ecx_10 = eax_19 s>> 1
            int32_t edi_1 = 0
            int16_t* ecx_11 = &ebx_2[-1]
            
            if (arg8 s> 0)
                int16_t* ebx_4 = var_28 - ecx_11
                
                while (ecx_11 u>= arg2)
                    if (ecx_11 u>= esi_2)
                        break
                    
                    eax_19.w = *ecx_11
                    edx_5 += 1
                    *(ebx_4 + ecx_11) = eax_19.w
                    edi_1 += 1
                    ecx_11 -= 2
                    
                    if (edx_5 s>= arg8)
                        break
                
                ebx_2 = var_18
                eax_19 = var_30_1
            
            if (eax_19 s> 0)
                sub_748840(arg3, ebx_2, eax_19, eax_2)
            
            int32_t ecx_12 = arg5
            int32_t eax_21 = 0
            
            if (arg3 != ecx_12)
                eax_21 = sub_6ad440(arg3, var_2c, ecx_10, ecx_12, var_1c)
                ecx_12 = arg5
            
            var_2c = ecx_10
            int32_t edi_2
            
            if (edi_1 s> 0 || arg4 s> 0)
                int32_t var_58_6 = eax_21
                edi_2 = var_20
                sub_6ad580(arg3, ecx_12, ecx_12, var_1c, edi_2, edi_1, arg4)
            else
                edi_2 = var_20
            
            int32_t edx_9 = 0
            arg4 = 0
            void* eax_23 = &ebx_2[ecx_10]
            
            if (arg9 s> 0)
                void* edi_3 = edi_2 - eax_23
                
                while (eax_23 u>= arg2)
                    if (eax_23 u>= esi_2)
                        break
                    
                    edx_9 += 1
                    arg4 += 1
                    *(edi_3 + eax_23) = *eax_23
                    eax_23 += 2
                    
                    if (edx_9 s>= arg9)
                        break
                
                ebx_2 = var_18
            
            var_24 += var_30_1
            edx_4 = arg3 + ecx_10 * 2
            ecx_5 = arg5
            arg3 = edx_4
            ebx_2 = &ebx_2[ecx_10 + arg7]
            eax_16 = arg2
            var_18 = ebx_2
            
            if (ebx_2 u>= esi_2)
                break
            
            edi = var_1c
        
        ecx_5 = arg5
    
    int32_t edi_4 = 0x64
    int32_t var_40_1 = var_44
    int32_t esi_6 = ecx_5 + (((var_24 s>> 1) - 0x64) << 1)
    
    while (esi_6 u>= ecx_5)
        if (esi_6 u>= var_1c)
            break
        
        int32_t ecx_16 = sx.d(*esi_6) * edi_4
        edi_4 -= 1
        ecx_5 = arg5
        *esi_6 = (ecx_16 s/ 0x64).w
        esi_6 += 2
        
        if (edi_4 s<= 0)
            break
    
    sub_5979b0(arg1, var_24)
    int32_t eax_33 = var_44
    
    if (eax_33 != 0)
        j__free(eax_33)
    
    eax_33.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_33

struct _EXCEPTION_REGISTRATION_RECORD** eax_3
eax_3.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
