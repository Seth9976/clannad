// 函数: sub_64e060
// 地址: 0x64e060
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c3a80
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_7c = eax_2
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
void* arg_4

if (arg3 != 0)
    void* var_2c
    result = sub_5d8400(arg3, &var_2c)
    int32_t ebx
    ebx.b = result[4] != 0
    int32_t var_18
    
    if (var_18 u>= 8)
        result = j__free(var_2c)
    
    if (ebx.b == 0)
        sub_620ee0(&arg_4)
        void var_6c
        int32_t var_68
        int32_t var_64
        int32_t var_60
        int32_t* eax_3 = sub_69eec0(&var_2c, &arg_4, &var_6c, &var_68, &var_64, &var_60)
        var_8_1.b = 1
        
        if (&arg_4 != eax_3)
            sub_52e3c0(&arg_4, eax_3, 0, 0xffffffff)
        
        var_8_1.b = 0
        
        if (var_18 u>= 8)
            j__free(var_2c)
        
        sub_5d8b00(arg3, var_68)
        sub_5d8b60(arg3, var_64)
        sub_5d8bc0(arg3, var_60)
        sub_64dcd0(&arg_4)
        int32_t edi_1 = *(arg3 + 0x168)
        
        if (*(arg3 + 0x130) == 1 && edi_1 == 0)
            edi_1 = 1
        
        int32_t var_30_1 = 7
        int32_t var_34_1 = 0
        int16_t var_44 = 0
        var_8_1.b = 2
        int32_t ebx_1 = *(arg3 + 0x16c)
        int16_t var_5c
        int16_t* ecx_8
        
        if (ebx_1 != 1)
            ecx_8 = sub_52e3c0(&var_44, &arg_4, 0, 0xffffffff)
        else
            int16_t* eax_5 = sub_548cb0(&arg_4, 0xaf43f4, &var_2c, &arg_4)
            var_8_1.b = 3
            int16_t* eax_6 = sub_532b80(eax_5, eax_5, &var_5c, 0xaf7424)
            ecx_8 = &var_44
            var_8_1.b = 4
            
            if (&var_44 != eax_6)
                ecx_8 = sub_52e3c0(ecx_8, eax_6, 0, 0xffffffff)
            
            int32_t var_48
            
            if (var_48 u>= 8)
                ecx_8 = j__free(var_5c.d)
            
            var_8_1.b = 2
            int32_t var_48_1 = 7
            int32_t var_4c_1 = 0
            var_5c = 0
            
            if (var_18 u>= 8)
                ecx_8 = j__free(var_2c)
            
            int32_t var_18_1 = 7
            int32_t var_1c_1 = 0
            var_2c.w = 0
        
        if (edi_1 != 2)
            ecx_8 = sub_65a080(&var_44)
        
        if (edi_1 == 0)
            sub_5dfd80(arg3 + 0xc34, &var_44)
            sub_5d92d0(arg3)
        else if (edi_1 == 1)
            int16_t* var_80_13 = ecx_8
            sub_5d8550(arg3, &var_44)
            sub_5d8630(arg3)
        
        if (*(data_bac458 + 0x380) == 0)
            void* ecx_14 = data_bac510
            int32_t eax_8 = *(ecx_14 + 0xa47c28)
            void** eax_11
            void* eax_14
            
            if (eax_8 != 0xffffffff)
                if (eax_8 == 1)
                    int32_t eax_13 = *(ecx_14 + &data_a47c2c)
                    
                    if (eax_13 == 0)
                        eax_14 = data_bac45c
                        sub_5d2980(&arg_4, &arg_4, *(eax_14 + 0x64), *(eax_14 + 0x68))
                    else if (eax_13 == 1)
                        void** eax_16 = sub_548cb0(&arg_4, 0xaf43f4, &var_5c, &arg_4)
                        var_8_1.b = 8
                        eax_11 = sub_532b80(eax_16, eax_16, &var_2c, 0xaf7424)
                        var_8_1.b = 9
                    label_64e364:
                        void* ecx_21 = data_bac45c
                        sub_5d2980(&arg_4, eax_11, *(ecx_21 + 0x64), *(ecx_21 + 0x68))
                        sub_52e8a0(&var_2c)
                        sub_52e8a0(&var_5c)
            else if (edi_1 == 2)
                int32_t var_18_2 = 7
                int32_t var_1c_2 = 0
                var_2c.w = 0
                sub_52e720(&var_2c, &data_ad7c90, nullptr)
                var_8_1.b = 7
                void* eax_12 = data_bac45c
                sub_5d2980(&arg_4, &var_2c, *(eax_12 + 0x64), *(eax_12 + 0x68))
                sub_52e8a0(&var_2c)
            else if (ebx_1 == 0)
                eax_14 = data_bac45c
                sub_5d2980(&arg_4, &arg_4, *(eax_14 + 0x64), *(eax_14 + 0x68))
            else if (ebx_1 == 1)
                void** eax_10 = sub_548cb0(&arg_4, 0xaf43f4, &var_5c, &arg_4)
                var_8_1.b = 5
                eax_11 = sub_532b80(eax_10, eax_10, &var_2c, 0xaf7424)
                var_8_1.b = 6
                goto label_64e364
        
        if (var_30_1 u>= 8)
            j__free(var_44.d)
        
        result = nullptr
        int32_t var_30_2 = 7
        int32_t var_34_2 = 0
        var_44 = 0

if (arg4 u>= 8)
    result = j__free(arg_4)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
