// 函数: sub_65e4c0
// 地址: 0x65e4c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b14a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_34 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_3 = data_bac510
void* ecx = data_bac504
*(eax_3 + 0x10b8c) + *(eax_3 + 0x10b88)
char* result

if (*(ecx + 0x98) != *(ecx + 0x9c))
    int32_t esi
    sub_654500(esi)
    
    if (*(data_bac504 + 0x63104) != 0)
        sub_652570()
        ___std_fs_get_file_attributes_by_handle@8()
        sub_653870()
        sub_654050()
    
    int32_t var_18_1 = 7
    int32_t var_1c_1 = 0
    int16_t var_2c = 0
    sub_52e720(&var_2c, 0xaf81c4, 0xb)
    int32_t var_8_1 = 0
    sub_684160(data_bac424, 5, &var_2c)
    
    if (var_18_1 u>= 8)
        j__free(var_2c.d)
    
    result.b = 1
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
