// 函数: sub_717570
// 地址: 0x717570
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9d23a9
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_104 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* result = arg1
int32_t var_8_1 = 0
int32_t var_f0 = 0
*(result + 0x14) = 0xf
*(result + 0x10) = 0
char* result_1 = result
*result = 0
sub_541eb0(arg1, &data_b0018c, nullptr)
int32_t var_8_2 = 0
int32_t var_f0_1 = 1

if (arg2 - 1 u<= 8)
    void* ecx_2
    
    switch (arg2)
        case 1
            void var_74
            void** eax_3 = sub_7178b0(&var_74)
            int32_t var_8_3 = 1
            
            if (result != eax_3)
                sub_541b40(result, eax_3, 0, 0xffffffff)
            
            ecx_2 = &var_74
        case 2
            void var_d4
            void** eax_4 = sub_717cc0(&var_d4)
            int32_t var_8_4 = 2
            
            if (result != eax_4)
                sub_541b40(result, eax_4, 0, 0xffffffff)
            
            ecx_2 = &var_d4
        case 3
            void var_44
            void** eax_5 = sub_718320(&var_44)
            int32_t var_8_5 = 3
            
            if (result != eax_5)
                sub_541b40(result, eax_5, 0, 0xffffffff)
            
            ecx_2 = &var_44
        case 4
            void var_2c
            void** eax_6 = sub_7187c0(&var_2c)
            int32_t var_8_6 = 4
            
            if (result != eax_6)
                sub_541b40(result, eax_6, 0, 0xffffffff)
            
            ecx_2 = &var_2c
        case 5
            void var_5c
            void** eax_7 = sub_718ab0(&var_5c)
            int32_t var_8_7 = 5
            
            if (result != eax_7)
                sub_541b40(result, eax_7, 0, 0xffffffff)
            
            ecx_2 = &var_5c
        case 6
            void var_8c
            void** eax_8 = sub_719e20(&var_8c)
            int32_t var_8_8 = 6
            
            if (result != eax_8)
                sub_541b40(result, eax_8, 0, 0xffffffff)
            
            ecx_2 = &var_8c
        case 7
            void var_bc
            void** eax_9 = sub_71a390(&var_bc)
            int32_t var_8_9 = 7
            
            if (result != eax_9)
                sub_541b40(result, eax_9, 0, 0xffffffff)
            
            ecx_2 = &var_bc
        case 8
            void var_ec
            void** eax_10 = sub_71b9c0(&var_ec)
            int32_t var_8_10 = 8
            
            if (result != eax_10)
                sub_541b40(result, eax_10, 0, 0xffffffff)
            
            ecx_2 = &var_ec
        case 9
            void var_a4
            int32_t* eax_11 = sub_71c230(&var_a4)
            int32_t var_8_11 = 9
            
            if (result != eax_11)
                sub_541b40(result, eax_11, 0, 0xffffffff)
            
            ecx_2 = &var_a4
    
    sub_53f510(ecx_2)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
