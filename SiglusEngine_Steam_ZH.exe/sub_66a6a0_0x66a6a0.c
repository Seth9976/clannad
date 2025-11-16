// 函数: sub_66a6a0
// 地址: 0x66a6a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c614c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebx = arg2
int32_t var_8_1 = 0
int32_t edx = ebx[5]
int32_t* ecx

if (edx u< 8)
    ecx = ebx
else
    ecx = *ebx

void* esi = ecx + (ebx[4] << 1)

if (edx u>= 8)
    ebx = *ebx

int32_t var_d0
int32_t var_f0 = var_d0
void* const var_108
void** eax_4 = &var_108
void** var_d0_1 = &var_108
void* var_f8 = arg4
var_108 = nullptr
int32_t* arg_4
void** ecx_1
int32_t* edx_2

if (arg4 u> 8)
    int32_t ecx_2
    ecx_2.b = mulu.dp.d(arg4, 2) u>> 0x20 != 0
    int32_t var_10c_1 = neg.d(ecx_2) | (arg4 * 2)
    ecx_1 = sub_7431ed()
    eax_4 = var_d0_1
    *eax_4 = ecx_1
    edx_2 = arg_4
else
    ecx_1 = &var_108
    edx_2 = &arg_4

sub_748840(ecx_1, edx_2, eax_4[4] * 2)
var_d0_1[5] = arg5
var_8_1.b = 1
int32_t var_104
int32_t var_cc
int32_t* var_12c = sub_66b470(&var_cc, ebx, esi, var_108, var_104)
int32_t var_128
sub_605e10(&var_128, var_12c)
int32_t var_54
sub_6062a0(&var_54)
var_8_1.b = 3
int32_t eax_12 = var_cc

if (eax_12 != 0)
    if ((eax_12.b & 1) == 0)
        int32_t eax_14 = *(eax_12 & 0xfffffffe)
        void var_c4
        
        if (eax_14 != 0)
            eax_14(&var_c4, &var_c4, 2, eax_2)
    
    var_cc = 0

void** var_f0_2 = var_d0_1
var_128 = 0
var_108 = nullptr
int32_t var_104_1 = 0
int32_t var_100 = 0
int32_t var_fc = 0
var_f8.b = 1
int32_t var_94
var_12c = sub_6062a0(&var_94)
var_8_1.b = 4
int32_t** var_d0_2 = &var_12c
sub_605e10(&var_12c, &var_94)
var_8_1.b = 5
void var_16c
sub_605e10(&var_16c, &var_54)
var_8_1.b = 4
int32_t var_d8
sub_66b680(&var_d8)

if (arg3 != &var_d8)
    int32_t ecx_14 = *arg3
    *arg3 = var_d8
    var_d8 = ecx_14
    int32_t ecx_15 = arg3[1]
    int32_t var_d4
    arg3[1] = var_d4
    int32_t var_d4_1 = ecx_15

sub_669770(&var_d8)
j__free(var_d8)
var_8_1.b = 3
int32_t eax_17 = var_94

if (eax_17 != 0)
    if ((eax_17.b & 1) == 0)
        int32_t eax_19 = *(eax_17 & 0xfffffffe)
        void var_8c
        
        if (eax_19 != 0)
            eax_19(&var_8c, &var_8c, 2, eax_2)
    
    var_94 = 0

var_8_1.b = 0
int32_t eax_20 = var_54

if (eax_20 != 0)
    if ((eax_20.b & 1) == 0)
        int32_t eax_22 = *(eax_20 & 0xfffffffe)
        void var_4c
        
        if (eax_22 != 0)
            eax_22(&var_4c, &var_4c, 2, eax_2)
    
    var_54 = 0

if (arg4 u> 8)
    int32_t* ecx_17 = arg_4
    
    if (ecx_17 != 0)
        j__free(ecx_17)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return arg3
