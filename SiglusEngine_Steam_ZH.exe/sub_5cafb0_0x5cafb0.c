// 函数: sub_5cafb0
// 地址: 0x5cafb0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b8868
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_3c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* result = *(arg1 + 0xa0)

if (result != 0xffffffff)
    if (result == 1 && *(arg1 + 0xa8) != 0)
        int32_t* eax_3 = data_4ebe290
        
        if (eax_3 != 0)
            int32_t var_30
            (*(*eax_3 + 0x2c))(eax_3, &var_30)
            
            if (var_30 == 3)
                Sleep(0x64)
                ShowWindow(data_4ebe284, SW_SHOW)
                int32_t var_18_1 = 7
                int32_t var_1c_1 = 0
                int16_t var_2c = 0
                sub_52e720(&var_2c, &data_af2bb8, 0xf)
                int32_t var_8_1 = 0
                sub_684160(data_bac424, 5, &var_2c)
                int32_t var_8_2 = 0xffffffff
                sub_52e8a0(&var_2c)
                *(arg1 + 0xa8) = 0
                sub_5cb0c0(arg1)
    
    result = sub_5cb350(arg1)
    
    if (result == 1)
        result = sub_5cacb0(arg1)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
