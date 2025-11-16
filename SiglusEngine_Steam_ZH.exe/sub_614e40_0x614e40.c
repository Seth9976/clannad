// 函数: sub_614e40
// 地址: 0x614e40
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bf230
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_6c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_3 = data_bac4a0
int32_t eax_4 = *(eax_3 + 0x34)
data_4ebe608 = *(eax_3 + 0x30)
data_4ebe60c = eax_4
int32_t var_44
int16_t var_2c

if (sub_6f7eb0(&data_4ebe4b0) != 0)
    char i
    
    do
        if (data_4ebe680 == 0)
            char edi = __builtin_memset(0x4ebe6b0, 0xffffffff, 0x400)
            char result
            
            if (sub_6f5550(0x4ebe6b0) == 0)
                result = 0
            else if (sub_6a0fb0((Sleep).b, edi) == 0)
                result = 0
            else
                int32_t* eax_7 = data_b89654
                int32_t eax_8 = (*(*eax_7 + 0x44))(eax_7)
                void var_84
                int16_t* eax_11
                
                if (eax_8 s>= 0)
                    void* esi_3 = data_bac454
                    int32_t* eax_12 = *(esi_3 + 0x128)
                    int32_t eax_13 = (*(*eax_12 + 0x120))(eax_12)
                    
                    if (eax_13 s< 0)
                        int16_t* eax_14
                        int32_t edx_2
                        eax_14, edx_2 = sub_52e820(&var_84, u"OnResetDevice")
                        sub_6f1a40(eax_14, edx_2, eax_13, var_84)
                        void** eax_15 = sub_6b9ed0(&var_44)
                        int32_t var_8_3 = 3
                        eax_11 = sub_548cb0(eax_15, 0xaf3c14, &var_2c, eax_15)
                        var_8_3.b = 4
                        goto label_614f63
                    
                    sub_6fd3e0(esi_3 + 0x128)
                    void* var_70_9 = 0x16
                    int32_t var_48_1 = 7
                    void* const var_74_3 = &data_af3c38
                    int32_t var_4c_1 = 0
                    int16_t var_5c = 0
                    sub_52e720(&var_5c, var_74_3, var_70_9)
                    int32_t var_8_4 = 5
                    sub_684160(data_bac424, 5, &var_5c)
                    
                    if (var_48_1 u>= 8)
                        j__free(var_5c.d)
                    
                    result = 1
                else
                    int16_t* eax_9
                    int32_t edx_1
                    eax_9, edx_1 = sub_52e820(&var_84, u"OnResetDevice")
                    sub_6f1a40(eax_9, edx_1, eax_8, var_84)
                    int16_t* eax_10 = sub_6b9ed0(&var_44)
                    int32_t var_8_2 = 1
                    eax_11 = sub_548cb0(eax_10, 0xaf3bf0, &var_2c, eax_10)
                    var_8_2.b = 2
                label_614f63:
                    sub_684160(data_bac424, 2, eax_11)
                    int32_t var_18
                    
                    if (var_18 u>= 8)
                        j__free(var_2c.d)
                    
                    int32_t var_18_1 = 7
                    int32_t var_1c_1 = 0
                    var_2c = 0
                    int32_t var_30
                    
                    if (var_30 u>= 8)
                        j__free(var_44)
                    
                    result = 0
            
            fsbase->NtTib.ExceptionList = ExceptionList
            sub_745f2b(eax_2 ^ &__saved_ebp)
            return result
        
        Sleep(0x64)
        i = sub_6f7eb0(&data_4ebe4b0)
    while (i != 0)

int16_t* eax_6 = sub_6b9ed0(&var_2c)
int32_t var_8_1 = 0
sub_548cb0(eax_6, 0xaf3bcc, &var_44, eax_6)
sub_748f1b(&var_44, &data_b496bc)
noreturn
