// 函数: sub_619640
// 地址: 0x619640
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bf908
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_64 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_68 = arg1
int32_t* var_58
int32_t* eax_3
int32_t ecx_1
eax_3, ecx_1 = sub_6f3910(*(arg1 + 0x1c28), &var_58)
int32_t var_8_1 = 0
int32_t var_68_1 = *eax_3
bool cond:0 = sub_6f39a0(*(arg1 + 0x1c18), ecx_1) == 0
int32_t var_8_2 = 0xffffffff
int32_t* ecx_3 = var_58
int32_t ebx
ebx.b = cond:0

if (ecx_3 != 0)
    (*(*ecx_3 + 8))(ecx_3)

char result

if (ebx.b == 0)
    result = 1
else
    int32_t var_44
    int16_t* eax_5 = sub_6b9ed0(&var_44)
    int32_t var_8_3 = 1
    int16_t var_2c
    int16_t* eax_6 = sub_548cb0(eax_5, 0xaf3ff0, &var_2c, eax_5)
    var_8_3.b = 2
    sub_684160(data_bac424, 2, eax_6)
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
