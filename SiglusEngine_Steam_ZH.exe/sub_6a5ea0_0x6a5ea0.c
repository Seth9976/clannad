// 函数: sub_6a5ea0
// 地址: 0x6a5ea0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9ca320
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* eax_3 = data_bac4cc
int32_t var_68 = 0

if (eax_3[1] != 0)
    int32_t eax_6 = (data_4ebe2a0 - data_4ebe29c) s>> 7
    int32_t var_54_1 = 0
    
    if (eax_6 s<= 0)
    label_6a601c:
        *(arg1 + 0x14) = 7
        *(arg1 + 0x10) = 0
        *arg1 = 0
        sub_52e720(arg1, &data_ad7c90, nullptr)
    else
        int32_t* edi_1 = nullptr
        int32_t ecx_2 = eax_6
        
        while (true)
            void* eax_7 = data_4ebe29c
            
            if (*(edi_1 + eax_7) == 6)
                void var_64
                bool edx_1 = *sub_571430(eax_7 + 0x68 + edi_1, &var_64) != 0
                int32_t* var_60
                
                if (var_60 != 0)
                    bool cond:0_1 = var_60[1] != 1
                    var_60[1]
                    var_60[1] -= 1
                    
                    if (not(cond:0_1))
                        (*(*var_60 + 4))(eax_2)
                        bool cond:1_1 = var_60[2] != 1
                        var_60[2]
                        var_60[2] -= 1
                        
                        if (not(cond:1_1))
                            (*(*var_60 + 8))()
                        
                        edx_1 = edx_1
                
                if (edx_1 != 0)
                    void* var_30
                    sub_6b3e20(&var_30, data_4ebe29c + 0x28 + edi_1)
                    int32_t var_8_1 = 0
                    int32_t var_48
                    int32_t* eax_13 = sub_6b4150(&var_48, &var_30)
                    var_8_1.b = 1
                    
                    if (&var_30 != eax_13)
                        sub_52e3c0(&var_30, eax_13, 0, 0xffffffff)
                    
                    var_8_1.b = 0
                    int32_t var_34
                    
                    if (var_34 u>= 8)
                        j__free(var_48)
                    
                    sub_6ae600(&var_30)
                    void** var_58
                    sub_668eb0(eax_3, &var_58, &var_30)
                    void** eax_14 = var_58
                    int32_t var_1c
                    
                    if (eax_14 != *eax_3)
                        *(arg1 + 0x14) = 7
                        *(arg1 + 0x10) = 0
                        *arg1 = 0
                        sub_52e3c0(arg1, &eax_14[0xa], 0, 0xffffffff)
                        
                        if (var_1c u>= 8)
                            j__free(var_30)
                        
                        break
                    
                    int32_t var_8_2 = 0xffffffff
                    
                    if (var_1c u>= 8)
                        j__free(var_30)
                
                ecx_2 = eax_6
            
            edi_1 -= 0xffffff80
            int32_t eax_16 = var_54_1 + 1
            var_54_1 = eax_16
            
            if (eax_16 s>= ecx_2)
                goto label_6a601c
else
    sub_52e820(arg1, &data_ad7c90)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return arg1
