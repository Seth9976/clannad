// 函数: sub_6c32f0
// 地址: 0x6c32f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9b0438
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_34
int32_t eax_2 = __security_cookie ^ &var_34
int32_t __saved_edi
int32_t var_44 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t ecx = arg2
LRESULT result

if (ecx != 0x87)
    if (ecx == 0x233)
        int32_t var_c_1 = 0
        sub_6c2db0(arg1, sub_6b4d60(&var_34, arg3))
        int32_t var_20
        
        if (var_20 u>= 8)
            j__free(var_34)
        
        ecx = arg2
    
    result = sub_6c0020(arg1, ecx, arg3, arg4)
else if (arg4 == 0)
    result = sub_6c0020(arg1, ecx, arg3, arg4)
else
    int32_t eax_6 = arg4[1]
    
    if (eax_6 != 0x100 || (arg4[2] != 0xd && (eax_6 != eax_6 || (arg4[2] != 0x1b
            && (eax_6 != eax_6 || (arg4[2] != 0x26 && (eax_6 != eax_6 || arg4[2] != 0x28)))))))
        result = sub_6c0020(arg1, ecx, arg3, arg4)
    else
        result = sub_6c0020(arg1, 0x87, arg3, arg4) | 4

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_34)
return result
