// 函数: sub_5f9c40
// 地址: 0x5f9c40
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bd40b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t esi = *arg1
sub_5979b0(arg2, arg2[3] + 4)
int32_t* ecx_1 = *arg2

if (ecx_1 == arg2[1])
    ecx_1 = nullptr

*(ecx_1 + arg2[3]) = esi
int32_t eax_7 = arg2[3] + 4
arg2[3] = eax_7
int32_t esi_1 = arg1[1]
sub_5979b0(arg2, eax_7 + 4)
int32_t* ecx_3 = *arg2

if (ecx_3 == arg2[1])
    ecx_3 = nullptr

*(ecx_3 + arg2[3]) = esi_1
int32_t eax_11 = arg2[3] + 4
arg2[3] = eax_11
int32_t esi_2 = arg1[2]
sub_5979b0(arg2, eax_11 + 4)
int32_t* ecx_5 = *arg2
void* var_d4_3 = 0xffffffff

if (ecx_5 == arg2[1])
    ecx_5 = nullptr

int32_t var_9c = 7
int32_t var_a0 = 0
*(ecx_5 + arg2[3]) = esi_2
arg2[3] += 4
int32_t var_d8 = 0
int16_t var_b0 = 0
sub_52e3c0(&var_b0, &arg1[3], var_d8, var_d4_3)
int32_t var_8_1 = 0
sub_5b0590(arg2, &var_b0)
int32_t var_8_2 = 0xffffffff

if (var_9c u>= 8)
    j__free(var_b0.d)

int32_t eax_15 = arg2[3]
void var_94
__builtin_memcpy(&var_94, &arg1[9], 0x80)
sub_5979b0(arg2, eax_15 + 0x80)
int32_t eax_17 = *arg2
int32_t** var_d4_7 = arg2

if (eax_17 == arg2[1])
    eax_17 = 0

__builtin_memcpy(arg2[3] + eax_17, &var_94, 0x80)
arg2[3] -= 0xffffff80
sub_5be990(&arg1[0x29], var_d4_7)
int32_t esi_4 = arg1[0x57]
sub_5979b0(arg2, arg2[3] + 4)
int32_t* ecx_11 = *arg2

if (ecx_11 == arg2[1])
    ecx_11 = nullptr

*(ecx_11 + arg2[3]) = esi_4
arg2[3] += 4
int32_t eax_21 = arg1[1]

if (eax_21 != 0xb)
    if (eax_21 == 0x15)
        void var_b8
        int32_t* esi_7 = *sub_58c640(&var_b8, &arg1[0x58])
        sub_54b010(&var_b8)
        eax_21 = sub_5b62b0(esi_7, arg2)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_21

void var_c0
int32_t* esi_5 = *sub_58c590(&var_c0, &arg1[0x58])
int32_t* var_bc

if (var_bc != 0)
    bool cond:2_1 = var_bc[1] != 1
    var_bc[1]
    var_bc[1] -= 1
    
    if (not(cond:2_1))
        (*(*var_bc + 4))(eax_2)
        int32_t edi_4 = var_bc[2]
        var_bc[2] -= 1
        
        if (edi_4 == 1)
            (*(*var_bc + 8))()

int32_t* eax_27 = sub_5b6110(esi_5, arg2)
fsbase->NtTib.ExceptionList = ExceptionList
return eax_27
