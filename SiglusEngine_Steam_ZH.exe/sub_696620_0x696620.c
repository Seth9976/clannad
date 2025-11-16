// 函数: sub_696620
// 地址: 0x696620
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c8f0c
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
int32_t var_f8 = var_d0
void* const var_110
void** eax_4 = &var_110
void** var_d0_1 = &var_110
void* var_100 = arg4
var_110 = nullptr
int32_t* arg_4
void** ecx_1
int32_t* edx_2

if (arg4 u> 8)
    int32_t ecx_2
    ecx_2.b = mulu.dp.d(arg4, 2) u>> 0x20 != 0
    int32_t var_114_1 = neg.d(ecx_2) | (arg4 * 2)
    ecx_1 = sub_7431ed()
    eax_4 = var_d0_1
    *eax_4 = ecx_1
    edx_2 = arg_4
else
    ecx_1 = &var_110
    edx_2 = &arg_4

sub_748840(ecx_1, edx_2, eax_4[4] * 2)
var_d0_1[5] = arg5
var_8_1.b = 1
int32_t var_10c
int32_t var_cc
int32_t* var_134 = sub_66b470(&var_cc, ebx, esi, var_110, var_10c)
int32_t var_130
sub_605e10(&var_130, var_134)
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

void** var_f8_2 = var_d0_1
var_130 = 0
var_110 = nullptr
int32_t var_10c_1 = 0
int32_t var_108 = 0
int32_t var_104 = 0
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
int32_t ecx_14 = sub_6968d0(&var_dc)
int32_t edx_3
int32_t* esi_1
int32_t var_d8

if (arg3 == &var_dc)
    edx_3 = var_d8
    esi_1 = var_dc
else
    esi_1 = *arg3
    *arg3 = var_dc
    edx_3 = arg3[1]
    arg3[1] = var_d8
    ecx_14 = arg3[2]
    var_dc = esi_1
    int32_t var_d8_1 = edx_3
    int32_t var_d4
    arg3[2] = var_d4
    int32_t var_d4_1 = ecx_14

if (esi_1 != 0)
    int32_t var_e0
    int32_t var_f8_3 = var_e0
    int32_t var_fc_2 = ecx_14
    sub_55d500(esi_1, edx_3)
    j__free(var_dc)
    var_dc = nullptr
    int32_t var_d8_2 = 0
    int32_t var_d4_2 = 0

var_8_1.b = 3
int32_t eax_18 = var_94

if (eax_18 != 0)
    if ((eax_18.b & 1) == 0)
        int32_t eax_20 = *(eax_18 & 0xfffffffe)
        void var_8c
        
        if (eax_20 != 0)
            eax_20(&var_8c, &var_8c, 2, eax_2)
    
    var_94 = 0

var_8_1.b = 0
int32_t eax_21 = var_54

if (eax_21 != 0)
    if ((eax_21.b & 1) == 0)
        int32_t eax_23 = *(eax_21 & 0xfffffffe)
        void var_4c
        
        if (eax_23 != 0)
            eax_23(&var_4c, &var_4c, 2, eax_2)
    
    var_54 = 0

if (arg4 u> 8)
    int32_t* ecx_16 = arg_4
    
    if (ecx_16 != 0)
        j__free(ecx_16)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return arg3
