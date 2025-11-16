// 函数: sub_681b70
// 地址: 0x681b70
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9b7268
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_44
int32_t eax_2 = __security_cookie ^ &var_44
int32_t __saved_edi
int32_t var_54 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
HWND result = GetFocus()
int32_t edi = *(arg1 + 0x68)
int32_t* esi = *(arg1 + 0x64)
HWND result_1 = result

if (esi == edi)
label_681c3d:
    result.b = 0
else
    while (true)
        void* ebx_1 = *esi
        
        if (result == *(ebx_1 + 4))
            int32_t var_34
            int16_t* eax_5
            int32_t ecx_1
            eax_5, ecx_1 = sub_6c1010(ebx_1, &var_34)
            int32_t var_58_2 = 6
            int32_t var_c_1 = 0
            int32_t var_c_2 = 0xffffffff
            int32_t eax_6
            eax_6.b = sub_536340(eax_5, ecx_1, *(eax_5 + 0x10), 
                &NT3::Cc_check::`vftable'{for `NT3::C_control'}.vFunc_2) == 0
            char var_3d_1 = eax_6.b
            int32_t var_20
            
            if (var_20 u>= 8)
                j__free(var_34)
                eax_6.b = var_3d_1
            
            if (eax_6.b != 0)
                int32_t eax_8 = GetWindowLongW(*(ebx_1 + 4), 0xfffffff0) & 0xf
                
                if (eax_8 == 4 || eax_8 == 9)
                    result = *(arg1 + 4)
                    
                    if (result != 0)
                        SendMessageW(result, 0x28, result, 1)
                    
                    result.b = 1
                    break
            
            result = result_1
        
        esi = &esi[1]
        
        if (esi == edi)
            goto label_681c3d

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_44)
return result
