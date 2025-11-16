// 函数: sub_605110
// 地址: 0x605110
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9be048
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_4c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
sub_603660(arg1)
void* ecx

if (arg2 s>= 0)
    ecx = data_bac510

char result

if (arg2 s< 0 || *(ecx + 0xa4df68) s<= arg2)
    result = 0
else
    int32_t var_18_1 = 7
    int32_t var_1c_1 = 0
    void* var_50_1 = 0xffffffff
    int32_t var_54_1 = 0
    int16_t var_2c = 0
    sub_52e3c0(&var_2c, ecx + ((arg2 * 3 + 0x1498ed) << 3), var_54_1, var_50_1)
    int32_t var_8_1 = 0
    int16_t var_64
    int16_t* var_38_1 = &var_64
    void* const var_68_1 = 0xffffffff
    int32_t var_50_2 = 7
    int32_t var_54_2 = 0
    int32_t var_6c_1 = 0
    var_64 = 0
    sub_52e3c0(&var_64, &var_2c, var_6c_1, var_68_1)
    var_8_1.b = 1
    void var_7c
    void* var_30_1 = &var_7c
    sub_52e820(&var_7c, &data_af33a4)
    var_8_1.b = 2
    void** eax_7 = data_bac4d8 + 0x18
    int32_t var_80_2 = 7
    int32_t var_84_1 = 0
    int16_t var_94 = 0
    sub_52e3c0(&var_94, eax_7, 0, 0xffffffff)
    var_8_1.b = 0
    int32_t ebx
    
    if (___std_atomic_wait_indirect@24(arg1, 0, 0, arg3, 0, var_94) != 0)
        arg1[0x4a] = 3
        ebx.b = 1
        arg1[0x53] = arg2
    else
        ebx.b = 0
    
    if (var_18_1 u>= 8)
        j__free(var_2c.d)
    
    result = ebx.b

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
