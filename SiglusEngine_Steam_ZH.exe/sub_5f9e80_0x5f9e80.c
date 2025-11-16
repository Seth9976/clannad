// 函数: sub_5f9e80
// 地址: 0x5f9e80
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bd438
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edx = *arg2

if (edx == arg2[1])
    edx = nullptr

*arg1 = *(edx + arg2[3])
arg2[3] += 4
int32_t eax_5 = *arg2

if (eax_5 == arg2[1])
    eax_5 = 0

arg1[1] = *(arg2[3] + eax_5)
arg2[3] += 4
int32_t eax_7 = *arg2

if (eax_7 == arg2[1])
    eax_7 = 0

arg1[2] = *(arg2[3] + eax_7)
arg2[3] += 4
int32_t var_30
int16_t* eax_9 = sub_5b0600(arg2, &var_30)
int32_t var_8_1 = 0

if (&arg1[3] != eax_9)
    sub_52e3c0(&arg1[3], eax_9, 0, 0xffffffff)

int32_t var_8_2 = 0xffffffff
int32_t var_1c

if (var_1c u>= 8)
    j__free(var_30)

int32_t eax_10 = *arg2

if (eax_10 == arg2[1])
    eax_10 = 0

__builtin_memcpy(&arg1[9], arg2[3] + eax_10, 0x80)
arg2[3] -= 0xffffff80
sub_5bea80(&arg1[0x29], arg2)
int32_t* ecx_5 = *arg2

if (ecx_5 == arg2[1])
    ecx_5 = nullptr

arg1[0x57] = *(ecx_5 + arg2[3])
arg2[3] += 4
int32_t result = arg1[1]

if (result == 0xb)
    void var_3c
    int32_t* esi_4 = *sub_58c590(&var_3c, &arg1[0x58])
    int32_t* var_38
    
    if (var_38 != 0)
        bool cond:3_1 = var_38[1] != 1
        var_38[1]
        var_38[1] -= 1
        
        if (not(cond:3_1))
            (*(*var_38 + 4))(eax_2)
            int32_t edi_2 = var_38[2]
            var_38[2] -= 1
            
            if (edi_2 == 1)
                (*(*var_38 + 8))()
    
    result = sub_5b61c0(esi_4, arg2)
else if (result == 0x15)
    void var_44
    int32_t* esi_6 = *sub_58c640(&var_44, &arg1[0x58])
    sub_54b010(&var_44)
    result = sub_5b6390(esi_6, arg2)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
