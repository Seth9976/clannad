// 函数: sub_660d90
// 地址: 0x660d90
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c4f7b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_198 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edi = data_bac4a8
int32_t var_180 = arg5
void** ebx = *edi
int16_t var_17c = arg6
int64_t var_188
int64_t* var_19c = &var_188
var_188 = arg4
void** eax_5 = sub_5d48a0(edi, var_19c)
void** var_178
char eax_6

if (eax_5 != ebx)
    eax_6 = sub_5cd6f0(&var_188, &eax_5[4])
    var_178 = eax_5

if (eax_5 == ebx || eax_6 != 0)
    var_178 = ebx

void*** result

if (var_178 != ebx)
    if (arg3 != 0 && *(data_bac4e4 + 0x19b) != 0)
        result = sub_60e120(data_bac510 + 0x10af8)
    
    if (arg3 != 0 && *(data_bac4e4 + 0x19b) != 0 && result == 7)
        result.b = 0
    else
        *(data_bac4a0 + 0x1e4) = 0
        int32_t var_170
        sub_54aed0(&var_170)
        int32_t var_8_1 = 0
        int32_t var_20_1 = arg5
        int16_t var_1c_1 = arg6
        var_170 = 0x31
        int64_t var_28_1 = arg4
        void var_2f0
        sub_54cf80(&var_2f0, &var_170)
        int32_t ecx_6 = sub_6766e0()
        
        if (arg7 != 0)
            sub_676610(4)
            ecx_6 = sub_676610(2)
        
        if (arg2 != 0)
            int32_t var_19c_1 = ecx_6
            sub_6018e0(data_bac468 + 0x304, 5)
        
        void var_e4
        sub_54ae40(&var_e4)
        result.b = 1
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
