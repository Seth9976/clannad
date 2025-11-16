// 函数: sub_65e3b0
// 地址: 0x65e3b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b2960
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_4c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* ecx = data_bac504
*(data_bac510 + 0x10b88)
int32_t result

if (*(ecx + 0x98) != *(ecx + 0x9c))
    int32_t ecx_2 = sub_654500(arg1)
    
    if (*(data_bac504 + 0x63104) != 0)
        sub_652570()
        ___std_fs_get_file_attributes_by_handle@8()
        sub_653870()
        ecx_2 = sub_654050()
    
    int32_t var_50_1 = ecx_2
    int32_t var_44
    int16_t* eax_5 = sub_6ad9b0(&var_44)
    int32_t var_8_1 = 0
    int16_t var_2c
    int16_t* eax_6 = sub_532b80(eax_5, eax_5, &var_2c, 0xaf81a4)
    var_8_1.b = 1
    sub_684160(data_bac424, 5, eax_6)
    int32_t var_18
    
    if (var_18 u>= 8)
        j__free(var_2c.d)
    
    int32_t var_18_1 = 7
    int32_t var_1c_1 = 0
    var_2c = 0
    int32_t var_30
    
    if (var_30 u>= 8)
        j__free(var_44)
    
    result.b = 1
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
