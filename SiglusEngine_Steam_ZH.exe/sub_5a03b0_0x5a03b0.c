// 函数: sub_5a03b0
// 地址: 0x5a03b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9b92cb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_94
int32_t eax_2 = __security_cookie ^ &var_94
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 4) != 0)
    void* var_90 = nullptr
    int32_t var_8c_1 = 0
    int32_t var_88_1 = 0
    int32_t var_c_1 = 0
    sub_5a0990(&var_90, *(data_bac49c + 4))
    int32_t* edi_1 = data_bac49c
    int32_t i = 0
    void* ebx_1 = var_90
    
    if (edi_1[1] s> 0)
        void* ecx_1 = ebx_1 + 8
        
        do
            *(ecx_1 - 8) = i
            ecx_1 += 0xc
            *(ecx_1 - 0x10) = 0xa
            int32_t eax_7 = *(*edi_1 + (i << 2))
            i += 1
            *(ecx_1 - 0xc) = eax_7
        while (i s< edi_1[1])
    
    int32_t var_80_1
    int32_t edx_4
    int32_t ebx_4
    
    if (*(arg1 + 0xb8) == 0)
        ebx_4 = (var_8c_1 - ebx_1) s/ 0xc
        int32_t eax_9
        int32_t edx_3
        edx_3:eax_9 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x418) - *(arg1 + 0x414))
        var_80_1 = ebx_4
        edx_4 = edx_3 s>> 1
    
    void* ecx_6
    
    if (*(arg1 + 0xb8) == 0 && ebx_4 == (edx_4 u>> 0x1f) + edx_4)
        ecx_6 = var_90
    else
        ecx_6 = var_90
        int32_t eax_15 = *(data_bac4e0 + 0x30)
        int32_t ebx_7 = (var_8c_1 - ecx_6) s/ 0xc
        var_80_1 = ebx_7
        
        if (eax_15 != 0)
            eax_15(*(arg1 + 0xe4), ebx_7, eax_4)
            ecx_6 = var_90
    
    int32_t ebx_8 = 0
    
    if (var_80_1 s> 0)
        void* edi_4 = ecx_6 + 8
        void* eax_16 = 0xfffffff8 - ecx_6
        
        do
            int32_t edx_8
            
            if (*(arg1 + 0xb8) == 0)
                ecx_6 = *(arg1 + 0x418) - *(arg1 + 0x414)
                int32_t eax_17
                int32_t edx_7
                edx_7:eax_17 = muls.dp.d(0x2aaaaaab, ecx_6)
                edx_8 = edx_7 s>> 1
            
            char var_91_1
            int32_t var_7c
            int32_t var_68
            
            if (*(arg1 + 0xb8) != 0 || ebx_8 s>= (edx_8 u>> 0x1f) + edx_8)
                var_91_1 = 1
            label_5a053a:
                *(edi_4 - 8)
                void* var_a8_3 = ecx_6
                int16_t* eax_22 = sub_6ad9b0(&var_7c)
                var_c_1.b = 1
                int32_t ecx_10 = *(data_bac4e0 + 0x34)
                
                if (ecx_10 != 0)
                    ecx_10(*(arg1 + 0xe4), ebx_8, 0, eax_22, eax_4)
                
                var_c_1.b = 0
                
                if (var_68 u>= 8)
                    j__free(var_7c)
                
                if (var_91_1 != 0 || *(edi_4 - 4) != *(*(arg1 + 0x414) + eax_16 + edi_4 + 4))
                    goto label_5a05a7
                
                goto label_5a0776
            
            ecx_6 = *(arg1 + 0x414)
            var_91_1 = 0
            
            if (*(edi_4 - 8) != *(eax_16 + edi_4 + ecx_6))
                goto label_5a053a
            
            if (*(edi_4 - 4) != *(*(arg1 + 0x414) + eax_16 + edi_4 + 4))
            label_5a05a7:
                int32_t eax_24 = *(edi_4 - 4)
                
                if (eax_24 == 0)
                    var_68 = 7
                    int32_t var_6c_1 = 0
                    var_7c.w = 0
                    ecx_6 = sub_52e720(&var_7c, u"FM_VOID", 7)
                    var_c_1.b = 2
                    int32_t eax_32 = *(data_bac4e0 + 0x34)
                    
                    if (eax_32 != 0)
                        ecx_6 = eax_32(*(arg1 + 0xe4), ebx_8, 1, &var_7c, eax_4)
                    
                    var_c_1.b = 0
                    
                    if (var_68 u>= 8)
                        ecx_6 = j__free(var_7c)
                else if (eax_24 == 0xa)
                    int32_t var_38_1 = 7
                    int32_t var_3c_1 = 0
                    int16_t var_4c = 0
                    ecx_6 = sub_52e720(&var_4c, u"FM_INT", 6)
                    var_c_1.b = 3
                    int32_t eax_30 = *(data_bac4e0 + 0x34)
                    
                    if (eax_30 != 0)
                        ecx_6 = eax_30(*(arg1 + 0xe4), ebx_8, 1, &var_4c, eax_4)
                    
                    var_c_1.b = 0
                    
                    if (var_38_1 u>= 8)
                        ecx_6 = j__free(var_4c.d)
                else if (eax_24 == 0x14)
                    int32_t var_20_1 = 7
                    int32_t var_24_1 = 0
                    int16_t var_34 = 0
                    ecx_6 = sub_52e720(&var_34, u"FM_STR", 6)
                    var_c_1.b = 4
                    int32_t eax_28 = *(data_bac4e0 + 0x34)
                    
                    if (eax_28 != 0)
                        ecx_6 = eax_28(*(arg1 + 0xe4), ebx_8, 1, &var_34, eax_4)
                    
                    var_c_1.b = 0
                    
                    if (var_20_1 u>= 8)
                        ecx_6 = j__free(var_34.d)
                else
                    int32_t var_50_1 = 7
                    int32_t var_54_1 = 0
                    int16_t var_64 = 0
                    ecx_6 = sub_52e720(&var_64, &data_ad93bc, 3)
                    var_c_1.b = 5
                    int32_t eax_26 = *(data_bac4e0 + 0x34)
                    
                    if (eax_26 != 0)
                        ecx_6 = eax_26(*(arg1 + 0xe4), ebx_8, 1, &var_64, eax_4)
                    
                    var_c_1.b = 0
                    
                    if (var_50_1 u>= 8)
                        ecx_6 = j__free(var_64.d)
                
                if (var_91_1 != 0)
                    goto label_5a0782
                
                goto label_5a0776
            
        label_5a0776:
            ecx_6 = *(arg1 + 0x414) + eax_16
            
            if (*edi_4 != *(ecx_6 + edi_4 + 8))
            label_5a0782:
                *edi_4
                void* var_a8_11 = ecx_6
                int16_t* eax_34 = sub_6ad9b0(&var_7c)
                var_c_1.b = 6
                ecx_6 = *(data_bac4e0 + 0x34)
                
                if (ecx_6 != 0)
                    ecx_6 = ecx_6(*(arg1 + 0xe4), ebx_8, 2, eax_34, eax_4)
                
                var_c_1.b = 0
                
                if (var_68 u>= 8)
                    ecx_6 = j__free(var_7c)
            
            ebx_8 += 1
            edi_4 += 0xc
        while (ebx_8 s< var_80_1)
    
    result = sub_5a0830(arg1 + 0x414, &var_90)
    void* ebx_9 = var_90
    *(arg1 + 0xb8) = 0
    
    if (ebx_9 != 0)
        result = j__free(ebx_9)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_94)
return result
