// 函数: sub_5f9880
// 地址: 0x5f9880
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bd3d8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_58 = eax_2
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg3 s< arg4)
    result = arg3 * 0xd4
    arg4 -= arg3
    struct _EXCEPTION_REGISTRATION_RECORD** result_1 = result
    void* ecx = arg1
    int32_t i
    
    do
        void* ebx_1 = *(ecx + 0xa4)
        arg2[3] += 4
        void* ebx_2 = ebx_1 + result
        int32_t* ecx_1 = *arg2
        int32_t* eax_3 = ecx_1
        int32_t edi_1 = arg2[1]
        int32_t edx_2 = arg2[3]
        
        if (ecx_1 == edi_1)
            eax_3 = nullptr
        
        int32_t eax_4 = *(edx_2 + eax_3 - 4)
        
        if (eax_4 == 1 || eax_4 == 2)
            if (ecx_1 == edi_1)
                ecx_1 = nullptr
            
            *(ebx_2 + 0xa4) = *(ecx_1 + edx_2)
            arg2[3] += 4
            int32_t* eax_6 = *arg2
            
            if (eax_6 == arg2[1])
                eax_6 = nullptr
            
            *(ebx_2 + 0xa8) = *(eax_6 + arg2[3])
            arg2[3] += 4
            int32_t* eax_8 = *arg2
            
            if (eax_8 == arg2[1])
                eax_8 = nullptr
            
            *(ebx_2 + 0xac) = *(eax_8 + arg2[3])
            arg2[3] += 4
            char* eax_10 = *arg2
            
            if (eax_10 == arg2[1])
                eax_10 = nullptr
            
            *(ebx_2 + 0xb0) = eax_10[arg2[3]]
            arg2[3] += 1
            char* eax_12 = *arg2
            
            if (eax_12 == arg2[1])
                eax_12 = nullptr
            
            *(ebx_2 + 0xb1) = eax_12[arg2[3]]
            arg2[3] += 1
            char* eax_14 = *arg2
            
            if (eax_14 == arg2[1])
                eax_14 = nullptr
            
            *(ebx_2 + 0xb2) = eax_14[arg2[3]]
            arg2[3] += 1
            char* eax_16 = *arg2
            
            if (eax_16 == arg2[1])
                eax_16 = nullptr
            
            *(ebx_2 + 0xb3) = eax_16[arg2[3]]
            arg2[3] += 1
            char* eax_18 = *arg2
            
            if (eax_18 == arg2[1])
                eax_18 = nullptr
            
            *(ebx_2 + 0xb4) = eax_18[arg2[3]]
            arg2[3] += 5
            int32_t eax_20 = *arg2
            
            if (eax_20 == arg2[1])
                eax_20 = 0
            
            sub_560370(ebx_2 + 0xb8, *(eax_20 + arg2[3] - 4))
            int32_t j = 0
            int32_t eax_21
            int32_t edx_3
            edx_3:eax_21 = muls.dp.d(0x38e38e39, *(ebx_2 + 0xbc) - *(ebx_2 + 0xb8))
            int32_t edx_4 = edx_3 s>> 3
            
            if ((edx_4 u>> 0x1f) + edx_4 s> 0)
                int32_t ebx_3 = 0
                void* edi_3 = ebx_2 + 0xb8
                int32_t edx_9
                
                do
                    int32_t* edi_5 = *edi_3 + ebx_3
                    int32_t var_2c
                    int16_t* eax_25 = sub_5b0600(arg2, &var_2c)
                    int32_t var_8_1 = 0
                    
                    if (edi_5 != eax_25)
                        sub_52e3c0(edi_5, eax_25, 0, 0xffffffff)
                    
                    int32_t var_8_2 = 0xffffffff
                    int32_t var_18
                    
                    if (var_18 u>= 8)
                        j__free(var_2c)
                    
                    int32_t* ecx_15 = *arg2
                    edi_3 = ebx_2 + 0xb8
                    
                    if (ecx_15 == arg2[1])
                        ecx_15 = nullptr
                    
                    var_2c.w = 0
                    var_18 = 7
                    int32_t var_1c_1 = 0
                    *(*edi_3 + ebx_3 + 0x18) = *(ecx_15 + arg2[3])
                    arg2[3] += 4
                    int32_t eax_28 = *arg2
                    
                    if (eax_28 == arg2[1])
                        eax_28 = 0
                    
                    *(*edi_3 + ebx_3 + 0x1c) = *(arg2[3] + eax_28)
                    arg2[3] += 4
                    int32_t eax_30 = *arg2
                    
                    if (eax_30 == arg2[1])
                        eax_30 = 0
                    
                    j += 1
                    *(*edi_3 + ebx_3 + 0x20) = *(arg2[3] + eax_30)
                    arg2[3] += 4
                    ebx_3 += 0x24
                    int32_t eax_32
                    int32_t edx_8
                    edx_8:eax_32 = muls.dp.d(0x38e38e39, *(edi_3 + 4) - *edi_3)
                    edx_9 = edx_8 s>> 3
                while (j s< (edx_9 u>> 0x1f) + edx_9)
            
            if (eax_4 == 1)
                *(ebx_2 + 0xa0) = 1
            label_5f9b04:
                *(ebx_2 + 0xd0) = 0xffffffff
                *(ebx_2 + 0xcc) = 0
                *(ebx_2 + 0xc8) = 0xffffffff
                *(ebx_2 + 0xc4) = 0
            else if (eax_4 == 2)
                *(ebx_2 + 0xa0) = 2
                goto label_5f9b04
        
        ecx = arg1
        result = &result_1[0x35]
        i = arg4
        arg4 -= 1
        result_1 = result
    while (i != 1)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
