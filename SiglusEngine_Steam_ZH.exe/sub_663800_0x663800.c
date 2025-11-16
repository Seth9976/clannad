// 函数: sub_663800
// 地址: 0x663800
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c5478
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_6c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char result

if (data_4ebe680 == 0)
    result = 1
else
    void* var_70_1 = 0x17
    int32_t var_18_1 = 7
    void* const var_74_1 = &data_af8ad0
    int32_t var_1c_1 = 0
    int16_t var_2c = 0
    sub_52e720(&var_2c, var_74_1, var_70_1)
    int32_t var_8_1 = 0
    sub_684160(data_bac424, 5, &var_2c)
    int32_t var_8_2 = 0xffffffff
    
    if (var_18_1 u>= 8)
        j__free(var_2c.d)
    
    int32_t var_18_2 = 7
    var_2c = 0
    int32_t var_1c_2 = 0
    int32_t* eax_4 = *(data_bac454 + 0x128)
    int32_t eax_5 = (*(*eax_4 + 0x11c))(eax_4)
    void var_84
    int32_t var_44
    int16_t* eax_8
    
    if (eax_5 s>= 0)
        int32_t* eax_9 = data_b89654
        int32_t eax_10 = (*(*eax_9 + 0x40))(eax_9)
        
        if (eax_10 s< 0)
            int16_t* eax_11
            int32_t edx_2
            eax_11, edx_2 = sub_52e820(&var_84, u"OnLostDevice")
            sub_6f1a40(eax_11, edx_2, eax_10, var_84)
            void** eax_12 = sub_6b9ed0(&var_44)
            int32_t var_8_4 = 3
            eax_8 = sub_548cb0(eax_12, 0xaf3ba8, &var_2c, eax_12)
            var_8_4.b = 4
            goto label_6638ff
        
        TPI1::QueryTiForCVRecord()
        
        if (sub_6f7eb0(&data_4ebe4b0) == 0)
        label_6639ce:
            int16_t* eax_15 = sub_6b9ed0(&var_2c)
            int32_t var_8_5 = 5
            sub_548cb0(eax_15, 0xaf3bcc, &var_44, eax_15)
            sub_748f1b(&var_44, &data_b496bc)
            noreturn
        
        while (data_4ebe680 != 0)
            Sleep(0x64)
            
            if (sub_6f7eb0(&data_4ebe4b0) == 0)
                goto label_6639ce
        
        char edi_1 = __builtin_memset(0x4ebe6b0, 0xffffffff, 0x400)
        
        if (sub_6f5550(0x4ebe6b0) == 0)
            result = 0
        else if (sub_6a0fb0((Sleep).b, edi_1) == 0)
            result = 0
        else
            int32_t* eax_16 = data_b89654
            int32_t eax_17 = (*(*eax_16 + 0x44))(eax_16)
            
            if (eax_17 s< 0)
                int16_t* eax_18
                int32_t edx_3
                eax_18, edx_3 = sub_52e820(&var_84, u"OnResetDevice")
                sub_6f1a40(eax_18, edx_3, eax_17, var_84)
                void** eax_19 = sub_6b9ed0(&var_44)
                int32_t var_8_6 = 6
                eax_8 = sub_548cb0(eax_19, 0xaf3bf0, &var_2c, eax_19)
                var_8_6.b = 7
                goto label_6638ff
            
            void* esi_5 = data_bac454
            int32_t* eax_20 = *(esi_5 + 0x128)
            int32_t eax_21 = (*(*eax_20 + 0x120))(eax_20)
            
            if (eax_21 s< 0)
                int16_t* eax_22
                int32_t edx_4
                eax_22, edx_4 = sub_52e820(&var_84, u"OnResetDevice")
                sub_6f1a40(eax_22, edx_4, eax_21, var_84)
                void** eax_23 = sub_6b9ed0(&var_44)
                int32_t var_8_7 = 8
                eax_8 = sub_548cb0(eax_23, 0xaf3c14, &var_2c, eax_23)
                var_8_7.b = 9
                goto label_6638ff
            
            sub_6fd3e0(esi_5 + 0x128)
            void* var_70_14 = 0x16
            int32_t var_48_1 = 7
            void* const var_74_5 = &data_af3c38
            int32_t var_4c_1 = 0
            int16_t var_5c = 0
            sub_52e720(&var_5c, var_74_5, var_70_14)
            int32_t var_8_8 = 0xa
            sub_684160(data_bac424, 5, &var_5c)
            
            if (var_48_1 u>= 8)
                j__free(var_5c.d)
            
            result = 1
    else
        int16_t* eax_6
        int32_t edx_1
        eax_6, edx_1 = sub_52e820(&var_84, u"OnLostDevice")
        sub_6f1a40(eax_6, edx_1, eax_5, var_84)
        int16_t* eax_7 = sub_6b9ed0(&var_44)
        int32_t var_8_3 = 1
        eax_8 = sub_548cb0(eax_7, 0xaf3b84, &var_2c, eax_7)
        var_8_3.b = 2
    label_6638ff:
        sub_684160(data_bac424, 2, eax_8)
        
        if (var_18_2 u>= 8)
            j__free(var_2c.d)
        
        int32_t var_18_3 = 7
        int32_t var_1c_3 = 0
        var_2c = 0
        int32_t var_30
        
        if (var_30 u>= 8)
            j__free(var_44)
        
        result = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
