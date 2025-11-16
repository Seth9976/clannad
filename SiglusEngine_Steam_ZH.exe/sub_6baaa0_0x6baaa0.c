// 函数: sub_6baaa0
// 地址: 0x6baaa0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cb880
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_94 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = *(arg2 + 0x24)

if (result != *(arg2 + 0x28))
    int32_t* i = result
    
    if (i != *(arg2 + 0x28))
        void var_54
        void* var_78_1 = &var_54
        
        do
            int32_t* var_34 = nullptr
            int32_t var_30_1 = 0
            var_34 = sub_58f9d0()
            int32_t var_18_1 = 7
            int32_t var_1c_1 = 0
            int16_t var_2c = 0
            int32_t var_8_1 = 0
            sub_6baaa0(&var_34, i)
            int32_t var_58_1 = 7
            int32_t var_5c_1 = 0
            int16_t var_6c = 0
            int32_t var_98_2 = sub_52e3c0(&var_6c, i, 0, 0xffffffff)
            var_8_1.b = 1
            sub_6bbe60(&var_54, &var_34)
            var_8_1.b = 2
            int16_t var_4c = 0
            int32_t var_38_1 = 7
            int32_t var_3c_1 = 0
            sub_52e3c0(&var_4c, &var_2c, 0, 0xffffffff)
            var_8_1.b = 3
            int32_t* eax_4
            void* ecx_6
            eax_4, ecx_6 = sub_6bbf00(&var_6c)
            int32_t* var_98_4 = eax_4
            void* var_9c_3 = &eax_4[4]
            void* var_80
            sub_6bbf90(arg1, &var_80, ecx_6)
            sub_6bac40(&var_6c)
            int32_t var_8_2 = 0xffffffff
            
            if (var_18_1 u>= 8)
                j__free(var_2c.d)
            
            int32_t var_18_2 = 7
            var_2c = 0
            int32_t* eax_6 = var_34
            int32_t var_1c_2 = 0
            void var_74
            sub_58fd80(&var_34, &var_74, *eax_6, eax_6)
            result = j__free(var_34)
            i = &i[0x12]
        while (i != *(arg2 + 0x28))
else if (&arg1[2] != arg2 + 0x30)
    result = sub_52e3c0(&arg1[2], arg2 + 0x30, 0, 0xffffffff)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
