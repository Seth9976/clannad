// 函数: sub_539f50
// 地址: 0x539f50
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9b0468
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_38
int32_t eax_2 = __security_cookie ^ &var_38
int32_t __saved_edi
int32_t var_44 = __security_cookie ^ &__saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 8) != 0)
    result = *(arg1 + 0x6e0)
    
    if (result != *(arg1 + 0x6e4))
        HWND hWnd = *(arg1 + 0xb0)
        struct _EXCEPTION_REGISTRATION_RECORD** result_1
        
        if (hWnd != 0)
            result = SendMessageW(hWnd, 0x188, 0, 0)
            result_1 = result
            
            if (result_1 s>= 0)
                goto label_539fd3
        else
            result_1 = nullptr
        label_539fd3:
            result = (*(arg1 + 0x6e4) - *(arg1 + 0x6e0)) s/ 0x11c
            
            if (result_1 s< result)
                void var_34
                sub_52e820(&var_34, result_1 * 0x11c + 0x1c + *(arg1 + 0x6e0))
                int32_t var_c_1 = 0
                int32_t* ecx_4 = data_bac4e4 + 0x11c
                
                if (ecx_4 != &var_34)
                    sub_52e3c0(ecx_4, &var_34, 0, 0xffffffff)
                
                result = sub_52e8a0(&var_34)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_38)
return result
