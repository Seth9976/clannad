// 函数: sub_58a0f0
// 地址: 0x58a0f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9b7458
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** var_54
int32_t eax_2 = __security_cookie ^ &var_54
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 4) != 0)
    void* var_50 = nullptr
    var_54 = nullptr
    sub_58a750(arg1, &var_50, &var_54)
    void* edx_1 = var_50
    
    if (edx_1 == 0)
        result = var_54
        
        if (result != 0)
            if (*(arg1 + 0xb8) != 0)
                goto label_58a34b
            
            void* ebx_3 = &result[0x29]
            int32_t eax_28
            int32_t edx_4
            edx_4:eax_28 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x424) - *(arg1 + 0x420))
            int32_t edx_5 = edx_4 s>> 2
            int32_t eax_29
            int32_t edx_6
            edx_6:eax_29 = muls.dp.d(0x2aaaaaab, *(ebx_3 + 4) - *ebx_3)
            int32_t edx_7 = edx_6 s>> 2
            
            if ((edx_7 u>> 0x1f) + edx_7 != (edx_5 u>> 0x1f) + edx_5)
                result = var_54
            label_58a34b:
                ebx_3 = &result[0x29]
                int32_t eax_33
                int32_t edx_8
                edx_8:eax_33 = muls.dp.d(0x2aaaaaab, result[0x2a] - *ebx_3)
                int32_t edx_9 = edx_8 s>> 2
                int32_t eax_35 = *(data_bac4e0 + 0x30)
                
                if (eax_35 != 0)
                    eax_35(*(arg1 + 0xe4), (edx_9 u>> 0x1f) + edx_9, eax_4)
            
            int32_t i
            
            if (*(arg1 + 0xb8) == 0)
                int32_t eax_36
                int32_t edx_10
                edx_10:eax_36 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x424) - *(arg1 + 0x420))
                int32_t edx_11 = edx_10 s>> 2
                i = (edx_11 u>> 0x1f) + edx_11
            else
                i = 0
            
            int32_t ecx_23 = *(ebx_3 + 4) - *ebx_3
            
            for (; i s< ecx_23 s/ 0x18; i += 1)
                int32_t var_68_11 = ecx_23
                int32_t var_34
                int16_t* eax_41 = sub_6ad9b0(&var_34)
                int32_t var_c_5 = 2
                int32_t ecx_26 = *(data_bac4e0 + 0x34)
                
                if (ecx_26 != 0)
                    ecx_26(*(arg1 + 0xe4), i, 0, eax_41, eax_4)
                
                int32_t var_c_6 = 0xffffffff
                int32_t var_20
                
                if (var_20 u>= 8)
                    j__free(var_34)
                
                ecx_23 = *(ebx_3 + 4) - *ebx_3
            
            int32_t eax_46
            int32_t edx_17
            edx_17:eax_46 = muls.dp.d(0x2aaaaaab, *(ebx_3 + 4) - *ebx_3)
            var_54 = nullptr
            int32_t edx_18 = edx_17 s>> 2
            
            if ((edx_18 u>> 0x1f) + edx_18 s> 0)
                int32_t edi_7 = 0
                struct _EXCEPTION_REGISTRATION_RECORD** i_1 = nullptr
                int32_t ecx_35
                
                do
                    if (*(arg1 + 0xb8) != 0)
                        goto label_58a4b0
                    
                    int32_t eax_50
                    int32_t edx_19
                    edx_19:eax_50 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x424) - *(arg1 + 0x420))
                    i_1 = var_54
                    int32_t edx_20 = edx_19 s>> 2
                    
                    if (i_1 s>= (edx_20 u>> 0x1f) + edx_20)
                        goto label_58a4b0
                    
                    void** eax_55 = *(arg1 + 0x420) + edi_7
                    void* ecx_33 = *ebx_3 + edi_7
                    int32_t edx_21 = eax_55[4]
                    
                    if (eax_55[5] u>= 8)
                        eax_55 = *eax_55
                    
                    int32_t var_68_14 = edx_21
                    
                    if (sub_536340(ecx_33, ecx_33, *(ecx_33 + 0x10), eax_55) != 0)
                        i_1 = var_54
                    label_58a4b0:
                        int32_t edx_22 = *(data_bac4e0 + 0x34)
                        
                        if (edx_22 != 0)
                            edx_22(*(arg1 + 0xe4), i_1, 1, *ebx_3 + edi_7, eax_4)
                    
                    ecx_35 = *(ebx_3 + 4) - *ebx_3
                    edi_7 += 0x18
                    var_54 += 1
                    i_1 = var_54
                while (i_1 s< ecx_35 s/ 0x18)
            
            result = sub_58a8a0(arg1 + 0x420, ebx_3)
    else
        int32_t ecx_2
        void* edi_1
        
        if (*(arg1 + 0xb8) == 0)
            edi_1 = edx_1 + 0xa4
            ecx_2 = (*(edx_1 + 0xa8) - *edi_1) ^ (*(arg1 + 0x418) - *(arg1 + 0x414))
        
        if (*(arg1 + 0xb8) != 0 || (ecx_2 & 0xfffffffc) != 0)
            edi_1 = edx_1 + 0xa4
            ecx_2 = (*(edi_1 + 4) - *edi_1) s>> 2
            int32_t eax_8 = *(data_bac4e0 + 0x30)
            
            if (eax_8 != 0)
                ecx_2 = eax_8(*(arg1 + 0xe4), ecx_2, eax_4)
        
        int32_t i_2
        
        if (*(arg1 + 0xb8) == 0)
            i_2 = (*(arg1 + 0x418) - *(arg1 + 0x414)) s>> 2
        else
            i_2 = 0
        
        int32_t var_4c
        int32_t var_38
        
        for (; i_2 s< (*(edi_1 + 4) - *edi_1) s>> 2; i_2 += 1)
            int32_t var_68_3 = ecx_2
            int16_t* eax_12 = sub_6ad9b0(&var_4c)
            int32_t var_c_1 = 0
            ecx_2 = *(data_bac4e0 + 0x34)
            
            if (ecx_2 != 0)
                ecx_2 = ecx_2(*(arg1 + 0xe4), i_2, 0, eax_12, eax_4)
            
            int32_t var_c_2 = 0xffffffff
            
            if (var_38 u>= 8)
                ecx_2 = j__free(var_4c)
        
        int32_t i_3 = 0
        
        if (((*(edi_1 + 4) - *edi_1) & 0xfffffffc) s> 0)
            int32_t ecx_7 = ecx_2
            
            do
                if (*(arg1 + 0xb8) == 0 && i_3 s< (*(arg1 + 0x418) - *(arg1 + 0x414)) s>> 2)
                    ecx_7 = *(arg1 + 0x414)
                
                if (*(arg1 + 0xb8) != 0 || i_3 s>= (*(arg1 + 0x418) - *(arg1 + 0x414)) s>> 2
                        || *(*edi_1 + (i_3 << 2)) != *(ecx_7 + (i_3 << 2)))
                    int32_t var_68_6 = ecx_7
                    *(*edi_1 + (i_3 << 2))
                    int16_t* eax_24 = sub_6ad9b0(&var_4c)
                    int32_t var_c_3 = 1
                    ecx_7 = *(data_bac4e0 + 0x34)
                    
                    if (ecx_7 != 0)
                        ecx_7 = ecx_7(*(arg1 + 0xe4), i_3, 1, eax_24, eax_4)
                    
                    int32_t var_c_4 = 0xffffffff
                    
                    if (var_38 u>= 8)
                        ecx_7 = j__free(var_4c)
                
                i_3 += 1
            while (i_3 s< (*(edi_1 + 4) - *edi_1) s>> 2)
        
        result = sub_56b4c0(arg1 + 0x414, edi_1)
    
    *(arg1 + 0xb8) = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_54)
return result
