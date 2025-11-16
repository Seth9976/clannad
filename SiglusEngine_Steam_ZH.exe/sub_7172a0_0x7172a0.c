// 函数: sub_7172a0
// 地址: 0x7172a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9d2301
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_104 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* result = arg3
char* result_1 = result
int32_t var_f4 = 0
int32_t var_8_1 = 1
*(result + 0x14) = 0xf
*(result + 0x10) = 0
*result = 0
sub_541eb0(arg3, &data_b0018c, nullptr)
int32_t var_f4_1 = 1
void* arg_4

if (arg2 - 1 u<= 8)
    void var_11c
    void* ecx_3
    
    switch (arg2)
        case 1
            char* eax_3
            int32_t edx
            eax_3, edx = sub_670320(&var_11c, &arg_4)
            void var_d4
            char* eax_4 = sub_7177b0(eax_3, edx, &var_d4, var_11c)
            var_8_1.b = 2
            
            if (result != eax_4)
                sub_541b40(result, eax_4, 0, 0xffffffff)
            
            ecx_3 = &var_d4
        case 2
            char* eax_5
            int32_t edx_1
            eax_5, edx_1 = sub_670320(&var_11c, &arg_4)
            void var_a4
            int32_t* eax_6 = sub_717940(eax_5, edx_1, &var_a4, var_11c)
            var_8_1.b = 3
            
            if (result != eax_6)
                sub_541b40(result, eax_6, 0, 0xffffffff)
            
            ecx_3 = &var_a4
        case 3
            char* eax_7
            int32_t edx_2
            eax_7, edx_2 = sub_670320(&var_11c, &arg_4)
            void var_2c
            int32_t* eax_8 = sub_717ec0(eax_7, edx_2, &var_2c, var_11c)
            var_8_1.b = 4
            
            if (result != eax_8)
                sub_541b40(result, eax_8, 0, 0xffffffff)
            
            ecx_3 = &var_2c
        case 4
            char* eax_9
            int32_t edx_3
            eax_9, edx_3 = sub_670320(&var_11c, &arg_4)
            void var_44
            char* eax_10 = sub_718600(eax_9, edx_3, &var_44, var_11c)
            var_8_1.b = 5
            
            if (result != eax_10)
                sub_541b40(result, eax_10, 0, 0xffffffff)
            
            ecx_3 = &var_44
        case 5
            char* eax_11
            int32_t edx_4
            eax_11, edx_4 = sub_670320(&var_11c, &arg_4)
            void var_8c
            char* eax_12 = sub_7188f0(eax_11, edx_4, &var_8c, var_11c)
            var_8_1.b = 6
            
            if (result != eax_12)
                sub_541b40(result, eax_12, 0, 0xffffffff)
            
            ecx_3 = &var_8c
        case 6
            sub_670320(&var_11c, &arg_4)
            void var_bc
            char* eax_13 = sub_718be0(&var_bc)
            var_8_1.b = 7
            
            if (result != eax_13)
                sub_541b40(result, eax_13, 0, 0xffffffff)
            
            ecx_3 = &var_bc
        case 7
            char* eax_14
            int32_t edx_5
            eax_14, edx_5 = sub_670320(&var_11c, &arg_4)
            void var_ec
            char* eax_15 = sub_71a020(eax_14, edx_5, &var_ec, var_11c)
            var_8_1.b = 8
            
            if (result != eax_15)
                sub_541b40(result, eax_15, 0, 0xffffffff)
            
            ecx_3 = &var_ec
        case 8
            char* eax_16
            int32_t edx_6
            eax_16, edx_6 = sub_670320(&var_11c, &arg_4)
            void var_74
            int32_t* eax_17 = sub_71b510(eax_16, edx_6, &var_74)
            var_8_1.b = 9
            
            if (result != eax_17)
                sub_541b40(result, eax_17, 0, 0xffffffff)
            
            ecx_3 = &var_74
        case 9
            char* eax_18
            int32_t edx_7
            eax_18, edx_7 = sub_670320(&var_11c, &arg_4)
            void var_5c
            int32_t* eax_19 = sub_71bd80(eax_18, edx_7, &var_5c)
            var_8_1.b = 0xa
            
            if (result != eax_19)
                sub_541b40(result, eax_19, 0, 0xffffffff)
            
            ecx_3 = &var_5c
    
    sub_53f510(ecx_3)

if (arg4 u>= 0x10)
    j__free(arg_4)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
