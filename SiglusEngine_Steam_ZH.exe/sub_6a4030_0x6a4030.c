// 函数: sub_6a4030
// 地址: 0x6a4030
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9ca082
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t var_14 = ecx
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = arg1
int32_t* eax_3 = data_4ebe2a0

if (esi u< eax_3)
    ecx = data_4ebe29c

if (esi u>= eax_3 || ecx u> esi)
    if (eax_3 == data_4ebe2a4)
        int32_t var_20_2 = ecx
        sub_6a4150()
        eax_3 = data_4ebe2a0
    
    arg1 = eax_3
    int32_t* var_14_2 = eax_3
    int32_t var_8_2 = 1
else
    void* esi_1 = esi - ecx
    
    if (eax_3 == data_4ebe2a4)
        int32_t var_20_1 = ecx
        sub_6a4150()
        eax_3 = data_4ebe2a0
        ecx = data_4ebe29c
    
    arg1 = eax_3
    esi = (esi_1 & 0xffffff80) + ecx
    int32_t* var_14_1 = eax_3
    int32_t var_8_1 = 0

if (eax_3 != 0)
    sub_571ac0(eax_3, esi)
    eax_3 = data_4ebe2a0

data_4ebe2a0 = eax_3 + 0x80
fsbase->NtTib.ExceptionList = ExceptionList
return eax_3 + 0x80
