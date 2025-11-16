// 函数: sub_5af7d0
// 地址: 0x5af7d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9ba3b0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_5c = eax_2
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 0x1c8) != 0 && *(arg1 + 0x19c) s<= 0 && *(arg1 + 0x1b4) s<= 0)
    void* i_1 = 0xfffffffe
    
    if (*(arg1 + 0x1cc) == 0)
    label_5af8a8:
        void* i = nullptr
        int32_t eax_6
        int32_t edx_1
        edx_1:eax_6 = muls.dp.d(0x2e8ba2e9, *(arg1 + 0xa8) - *(arg1 + 0xa4))
        int32_t edx_2 = edx_1 s>> 8
        result = (edx_2 u>> 0x1f) + edx_2
        
        if (result s> 0)
            result = nullptr
            struct _EXCEPTION_REGISTRATION_RECORD** result_1 = nullptr
            int32_t edx_4
            
            do
                if (sub_5b3c10(*(arg1 + 0xa4) + result) != 0)
                    i_1 = i
                
                result_1 = &result_1[0x160]
                i += 1
                int32_t eax_10
                int32_t edx_3
                edx_3:eax_10 = muls.dp.d(0x2e8ba2e9, *(arg1 + 0xa8) - *(arg1 + 0xa4))
                edx_4 = edx_3 s>> 8
                result = result_1
            while (i s< (edx_4 u>> 0x1f) + edx_4)
            
            if (i_1 s>= 0xffffffff)
                goto label_5af90d
    else
        void* eax_3
        
        if (*(data_bac4a0 + 0xcc) == 0)
            eax_3.b = *(data_bac484 + 0x138)
            
            if (eax_3.b == 0)
                eax_3.b = *(data_bac498 + 2)
                eax_3.b = eax_3.b == 0
            else
                eax_3.b = 0
        else
            eax_3.b = 0
        
        void* ecx = data_bac4c8
        void* ecx_1
        
        if (*(ecx + 0x64) != 2)
            if (*(ecx + 0x97c) == 2)
                if (eax_3.b != 0 && *(data_bac458 + 0x3a9) != 0)
                    goto label_5af8a8
                
                ecx_1 = ecx + 0x970
                goto label_5af88a
            
            if (*(ecx + 0x1d2c) != 2 || (eax_3.b != 0 && *(data_bac458 + 0x3e8) != 0))
                goto label_5af8a8
            
            if (sub_6b1fd0(ecx + 0x1d20) == 0)
                goto label_5af8a8
        else
            if (eax_3.b != 0)
                if (sub_634fe0() != 0)
                    goto label_5af8a8
                
                ecx = data_bac4c8
            
            ecx_1 = ecx + 0x58
        label_5af88a:
            
            if (sub_6b1fd0(ecx_1) == 0)
                goto label_5af8a8
        i_1 = 0xffffffff
    label_5af90d:
        sub_5b0040(arg1, i_1)
        void* ecx_12
        
        if (i_1 != 0xffffffff)
            void var_44
            int16_t* eax_17 = sub_5ada50(i_1 * 0x580 + *(arg1 + 0xa4), &var_44)
            int32_t var_8_2 = 1
            int32_t* ecx_17 = data_bac4a0 + 0x200
            
            if (ecx_17 != eax_17)
                sub_52e3c0(ecx_17, eax_17, 0, 0xffffffff)
            
            ecx_12 = &var_44
        else
            void var_2c
            sub_52e820(&var_2c, 0xaf1974)
            int32_t var_8_1 = 0
            int32_t* ecx_11 = data_bac4a0 + 0x200
            
            if (ecx_11 != &var_2c)
                sub_52e3c0(ecx_11, &var_2c, 0, i_1)
            
            ecx_12 = &var_2c
        
        sub_52e8a0(ecx_12)
        result = sub_5b0190(arg1)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
