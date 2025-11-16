// 函数: sub_64e3e0
// 地址: 0x64e3e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c3ac8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_5c = eax_2
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
void* arg_c

if (arg3 != 0)
    int32_t var_18_1 = 7
    int32_t var_1c_1 = 0
    int16_t var_2c = 0
    var_8_1.b = 1
    void* eax_3 = data_bac458
    *(eax_3 + 0x340) = arg2
    *(eax_3 + 0x344) = arg4
    sub_620fd0()
    sub_621090()
    sub_64dcd0(&arg_c)
    sub_65a080(&arg_c)
    sub_532870(data_bac458 + 0x2fc, &arg_c, 0, 0xffffffff)
    
    if (*(arg3 + 0x1e0) s>= 0)
        int32_t ecx_5 = *(arg3 + 0x1e0)
        
        if ((*(arg3 + 0x22c) - *(arg3 + 0x228)) s/ 0x1c0 s> ecx_5)
            sub_5de2d0(ecx_5 * 0x1c0 + *(arg3 + 0x228), &arg_c, &var_2c)
            sub_5d91e0(arg3)
    
    sub_5d8d60(arg3)
    
    if (var_1c_1 != 0)
        sub_64e880(&var_2c, &arg_c, arg3, &var_2c, arg2, arg4)
    
    int32_t var_4c = arg2
    int32_t var_48_1 = arg4
    sub_5da520(arg3 + 0x1ec, &var_4c)
    void* edi_1
    
    if (arg5 == 0)
        edi_1 = data_bac458
    else
        edi_1 = data_bac458
        
        if (*(edi_1 + 0x380) == 0)
            int32_t var_44
            int16_t* eax_10 = sub_5d8dd0(arg3, &var_44)
            var_8_1.b = 2
            void* ecx_13 = data_bac45c
            sub_64e5e0(eax_10, eax_10, &arg_c, *(ecx_13 + 0x64), *(ecx_13 + 0x68))
            var_8_1.b = 1
            int32_t var_30
            
            if (var_30 u>= 8)
                j__free(var_44)
            
            edi_1 = data_bac458
    
    *(arg3 + 0x1d5) = 1
    sub_5d7d30(arg3)
    
    if (*(edi_1 + 0x375) == 0 && *(edi_1 + 0x377) == 0 && var_1c_1 == 0)
        sub_64fd10(arg3)
    
    if (var_18_1 u>= 8)
        j__free(var_2c.d)
    
    result = nullptr
    int32_t var_18_2 = 7
    int32_t var_1c_2 = 0
    var_2c = 0

if (arg6 u>= 8)
    result = j__free(arg_c)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
