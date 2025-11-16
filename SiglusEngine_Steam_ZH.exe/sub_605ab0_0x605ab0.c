// 函数: sub_605ab0
// 地址: 0x605ab0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9be14c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebx = arg2
int32_t var_8_1 = 0
int32_t ecx = ebx[5]
int32_t* eax_3

if (ecx u< 0x10)
    eax_3 = ebx
else
    eax_3 = *ebx

void* esi_1 = ebx[4] + eax_3

if (ecx u>= 0x10)
    ebx = *ebx

int32_t var_d0
int32_t var_f8 = var_d0
void* var_108
void** eax_4 = &var_108
void** var_d0_1 = &var_108
void* var_100 = arg4
var_108 = nullptr
int32_t* arg_4
void** ecx_2
int32_t* edx

if (arg4 u> 8)
    void* var_10c_1 = arg4
    ecx_2 = sub_7431ed()
    eax_4 = var_d0_1
    *eax_4 = ecx_2
    edx = arg_4
else
    ecx_2 = &var_108
    edx = &arg_4

sub_748840(ecx_2, edx, eax_4[2])
var_d0_1[3] = arg5
var_8_1.b = 1
int32_t var_104
int32_t var_cc
int32_t* var_134 = sub_6061a0(&var_cc, ebx, esi_1, var_108, var_104)
int32_t var_130
sub_605e10(&var_130, var_134)
int32_t var_54
sub_6062a0(&var_54)
var_8_1.b = 3
int32_t eax_8 = var_cc

if (eax_8 != 0)
    if ((eax_8.b & 1) == 0)
        int32_t eax_10 = *(eax_8 & 0xfffffffe)
        void var_c4
        
        if (eax_10 != 0)
            eax_10(&var_c4, &var_c4, 2, eax_2)
    
    var_cc = 0

void** var_f8_2 = var_d0_1
var_130 = 0
int32_t var_110_2 = 0
int32_t var_10c_4 = 0
var_108 = nullptr
int32_t var_104_1 = 0
var_100.b = 1
int32_t var_94
var_134 = sub_6062a0(&var_94)
var_8_1.b = 4
int32_t** var_d0_2 = &var_134
sub_605e10(&var_134, &var_94)
var_8_1.b = 5
void var_174
sub_605e10(&var_174, &var_54)
var_8_1.b = 4
int32_t* var_dc
sub_606320(&var_dc)
int32_t* edx_1
int32_t esi_2
int32_t var_d8

if (arg3 == &var_dc)
    esi_2 = var_d8
    edx_1 = var_dc
else
    edx_1 = *arg3
    *arg3 = var_dc
    esi_2 = arg3[1]
    arg3[1] = var_d8
    int32_t ecx_12 = arg3[2]
    var_dc = edx_1
    int32_t var_d8_1 = esi_2
    int32_t var_d4
    arg3[2] = var_d4
    int32_t var_d4_1 = ecx_12

if (edx_1 != 0)
    sub_605410(edx_1, esi_2)
    j__free(var_dc)
    var_dc = nullptr
    int32_t var_d8_2 = 0
    int32_t var_d4_2 = 0

var_8_1.b = 3
int32_t eax_14 = var_94

if (eax_14 != 0)
    if ((eax_14.b & 1) == 0)
        int32_t eax_16 = *(eax_14 & 0xfffffffe)
        void var_8c
        
        if (eax_16 != 0)
            eax_16(&var_8c, &var_8c, 2, eax_2)
    
    var_94 = 0

var_8_1.b = 0
int32_t eax_17 = var_54

if (eax_17 != 0)
    if ((eax_17.b & 1) == 0)
        int32_t eax_19 = *(eax_17 & 0xfffffffe)
        void var_4c
        
        if (eax_19 != 0)
            eax_19(&var_4c, &var_4c, 2, eax_2)
    
    var_54 = 0

if (arg4 u> 8)
    int32_t* ecx_13 = arg_4
    
    if (ecx_13 != 0)
        j__free(ecx_13)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return arg3
