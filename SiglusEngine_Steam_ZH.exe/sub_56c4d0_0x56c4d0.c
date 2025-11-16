// 函数: sub_56c4d0
// 地址: 0x56c4d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9b399d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_fc
int32_t eax_2 = __security_cookie ^ &var_fc
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 4) != 0)
    struct _EXCEPTION_REGISTRATION_RECORD** result_1 = nullptr
    int32_t var_ec_1 = 0
    int32_t var_e8_1 = 0
    int32_t var_c_1 = 0
    sub_56cd80(&result_1, *(data_bac460 + 0xb8) - 1)
    void* esi_1 = data_bac460
    int32_t i = 1
    
    if (*(esi_1 + 0xb8) s> 1)
        int32_t ecx_1 = 0x30c
        void* edx_2 = &result_1[1]
        
        do
            ecx_1 += 0x30c
            i += 1
            edx_2 += 0x14
            *(edx_2 - 0x18) = *(*(esi_1 + 0xa4) + ecx_1 - 0x44)
            *(edx_2 - 0x14) = *(*(esi_1 + 0xa4) + ecx_1 - 0x40)
            *(edx_2 - 0x13) = *(*(esi_1 + 0xa4) + ecx_1 - 0x3f)
            *(edx_2 - 0x10) = *(*(esi_1 + 0xa4) + ecx_1 - 0xc)
            *(edx_2 - 0xc) = *(*(esi_1 + 0xa4) + ecx_1 - 8)
            *(edx_2 - 8) = *(*(esi_1 + 0xa4) + ecx_1 - 4)
        while (i s< *(esi_1 + 0xb8))
    
    int32_t var_f4_1
    int32_t edx_6
    int32_t ebx_3
    
    if (*(arg1 + 0xb8) == 0)
        ebx_3 = (var_ec_1 - result_1) s/ 0x14
        int32_t eax_21
        int32_t edx_5
        edx_5:eax_21 = muls.dp.d(0x66666667, *(arg1 + 0x418) - *(arg1 + 0x414))
        var_f4_1 = ebx_3
        edx_6 = edx_5 s>> 3
    
    struct _EXCEPTION_REGISTRATION_RECORD** result_2
    
    if (*(arg1 + 0xb8) == 0 && ebx_3 == (edx_6 u>> 0x1f) + edx_6)
        result_2 = result_1
    else
        result_2 = result_1
        int32_t eax_27 = *(data_bac4e0 + 0x30)
        int32_t ebx_6 = (var_ec_1 - result_2) s/ 0x14
        var_f4_1 = ebx_6
        
        if (eax_27 != 0)
            eax_27(*(arg1 + 0xe4), ebx_6, eax_4)
            result_2 = result_1
    
    int32_t ebx_7 = 0
    
    if (var_f4_1 s> 0)
        void* esi_4 = &result_2[1]
        
        do
            int32_t edx_10
            
            if (*(arg1 + 0xb8) == 0)
                int32_t eax_29
                int32_t edx_9
                edx_9:eax_29 = muls.dp.d(0x66666667, *(arg1 + 0x418) - *(arg1 + 0x414))
                edx_10 = edx_9 s>> 3
            
            char var_f5_1
            
            if (*(arg1 + 0xb8) != 0 || ebx_7 s>= (edx_10 u>> 0x1f) + edx_10)
                var_f5_1 = 1
            label_56c6d6:
                int32_t var_c8_1 = 7
                int32_t var_cc_1 = 0
                int16_t var_dc = 0
                var_c_1.b = 1
                int32_t eax_34 = *(esi_4 - 4)
                
                if (eax_34 == 1)
                    sub_532910(&var_dc, u"gosub", 5)
                else if (eax_34 == 2)
                    sub_532910(&var_dc, u"farcall", 7)
                else if (eax_34 == 3)
                    sub_532910(&var_dc, &data_ad947c, 9)
                
                if (*esi_4 != 0)
                    sub_532910(&var_dc, u"(excall)", 8)
                
                if (*(esi_4 + 1) != 0)
                    sub_532910(&var_dc, &data_ad94a4, 0xb)
                
                int32_t eax_39 = *(data_bac4e0 + 0x34)
                
                if (eax_39 != 0)
                    eax_39(*(arg1 + 0xe4), ebx_7, 0, &var_dc, eax_4)
                
                var_c_1.b = 0
                
                if (var_c8_1 u>= 8)
                    j__free(var_dc.d)
                
                int32_t var_c8_2 = 7
                int32_t var_cc_2 = 0
                var_dc = 0
                
                if (var_f5_1 != 0
                        || *(esi_4 + 4) != *(*(arg1 + 0x414) + 0xfffffffc - result_2 + esi_4 + 8))
                    goto label_56c7bc
                
                goto label_56c8a4
            
            int32_t* ecx_10 = 0xfffffffc - result_2 + esi_4 + *(arg1 + 0x414)
            var_f5_1 = 0
            
            if (*(esi_4 - 4) != *ecx_10)
                goto label_56c6d6
            
            int32_t eax_33
            eax_33.b = *esi_4
            
            if (eax_33.b != ecx_10[1].b)
                goto label_56c6d6
            
            void* var_ac
            int32_t var_98
            
            if (*(esi_4 + 4) == *(*(arg1 + 0x414) + 0xfffffffc - result_2 + esi_4 + 8))
            label_56c8a4:
                
                if (*(esi_4 + 8) != *(*(arg1 + 0x414) + 0xfffffffc - result_2 + esi_4 + 0xc))
                label_56c8b0:
                    int32_t var_b0_1 = 7
                    int32_t var_b4_1 = 0
                    int16_t var_c4 = 0
                    var_c_1.b = 4
                    int32_t edx_12 = *(esi_4 + 8)
                    
                    if (edx_12 s>= 0)
                        void* ecx_20 = data_bac45c
                        
                        if (edx_12 s< *(*(ecx_20 + 0x10) + 0x50))
                            sub_698170(ecx_20, &var_ac, edx_12)
                            var_c_1.b = 5
                            sub_532870(&var_c4, &var_ac, 0, 0xffffffff)
                            var_c_1.b = 4
                            
                            if (var_98 u>= 8)
                                j__free(var_ac)
                    
                    int32_t eax_46 = *(esi_4 - 4)
                    int16_t var_128
                    
                    if (eax_46 == 1)
                        int32_t var_110_26 = *(esi_4 + 0xc)
                        int32_t var_114_15 = 7
                        int32_t var_118_9 = 0
                        var_128 = 0
                        sub_52e720(&var_128, 0xad94bc, 8)
                        var_c_1.b = 6
                        int16_t var_64
                        sub_532870(&var_c4, sub_6ae4c0(&var_64, var_128), 0, 0xffffffff)
                        var_c_1.b = 4
                        int32_t var_50
                        
                        if (var_50 u>= 8)
                            j__free(var_64.d)
                        
                        var_50 = 7
                        int32_t var_54_1 = 0
                        var_64 = 0
                    else if (eax_46 == 2)
                        int32_t var_110_23 = *(esi_4 + 0xc)
                        int32_t var_114_13 = 7
                        int32_t var_118_7 = 0
                        var_128 = 0
                        sub_52e720(&var_128, u"(#z%03d)", 8)
                        var_c_1.b = 7
                        int16_t var_4c
                        sub_532870(&var_c4, sub_6ae4c0(&var_4c, var_128), 0, 0xffffffff)
                        var_c_1.b = 4
                        int32_t var_38
                        
                        if (var_38 u>= 8)
                            j__free(var_4c.d)
                        
                        var_38 = 7
                        int32_t var_3c_1 = 0
                        var_4c = 0
                    else if (eax_46 == 3)
                        sub_698030(&var_ac, *(esi_4 + 8), *(esi_4 + 0xc))
                        var_c_1.b = 8
                        int16_t var_7c
                        int16_t* eax_51 = sub_548cb0(&var_ac, 0xad94e4, &var_7c, &var_ac)
                        var_c_1.b = 9
                        var_c_1.b = 0xa
                        int16_t var_34
                        sub_532870(&var_c4, sub_532b80(eax_51, eax_51, &var_34, &data_ad90a0), 0, 
                            0xffffffff)
                        int32_t var_20
                        
                        if (var_20 u>= 8)
                            j__free(var_34.d)
                        
                        var_20 = 7
                        int32_t var_24_1 = 0
                        var_34 = 0
                        int32_t var_68
                        
                        if (var_68 u>= 8)
                            j__free(var_7c.d)
                        
                        var_c_1.b = 4
                        var_68 = 7
                        int32_t var_6c_1 = 0
                        var_7c = 0
                        
                        if (var_98 u>= 8)
                            j__free(var_ac)
                    int32_t eax_56 = *(data_bac4e0 + 0x34)
                    
                    if (eax_56 != 0)
                        eax_56(*(arg1 + 0xe4), ebx_7, 2, &var_c4, eax_4)
                    
                    var_c_1.b = 0
                    
                    if (var_b0_1 u>= 8)
                        j__free(var_c4.d)
                    
                    int32_t var_b0_2 = 7
                    int32_t var_b4_2 = 0
                    var_c4 = 0
            else
            label_56c7bc:
                int32_t var_80_1 = 7
                int32_t var_84_1 = 0
                int16_t var_94 = 0
                var_c_1.b = 2
                int32_t edx_11 = *(esi_4 + 4)
                
                if (edx_11 s>= 0)
                    void* ecx_16 = data_bac45c
                    
                    if (edx_11 s< *(*(ecx_16 + 0x10) + 0x50))
                        sub_698170(ecx_16, &var_ac, edx_11)
                        var_c_1.b = 3
                        sub_532870(&var_94, &var_ac, 0, 0xffffffff)
                        var_c_1.b = 2
                        
                        if (var_98 u>= 8)
                            j__free(var_ac)
                
                int32_t eax_43 = *(data_bac4e0 + 0x34)
                
                if (eax_43 != 0)
                    eax_43(*(arg1 + 0xe4), ebx_7, 1, &var_94, eax_4)
                
                var_c_1.b = 0
                
                if (var_80_1 u>= 8)
                    j__free(var_94.d)
                
                int32_t var_80_2 = 7
                int32_t var_84_2 = 0
                var_94 = 0
                
                if (var_f5_1 != 0 || *(esi_4 + 8)
                        != *(*(arg1 + 0x414) + 0xfffffffc - result_2 + esi_4 + 0xc))
                    goto label_56c8b0
            ebx_7 += 1
            esi_4 += 0x14
        while (ebx_7 s< var_f4_1)
    
    sub_56cc10(arg1 + 0x414, &result_1)
    result = result_1
    *(arg1 + 0xb8) = 0
    
    if (result != 0)
        result = j__free(result)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_fc)
return result
