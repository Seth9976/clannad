// 函数: sub_67add0
// 地址: 0x67add0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c73b1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_80 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_68 = 0
*(arg2 + 0x14) = 7
*(arg2 + 0x10) = 0
int16_t* var_6c = arg2
*arg2 = 0
int32_t var_8_1 = 0
void* eax_3 = data_bac510
int32_t var_68_1 = 1
void** eax_4

if (*(arg1 + 0xc) != 0x3e8)
    eax_4 = eax_3 + 0x10a80
else
    eax_4 = eax_3 + 0x109c0

if (arg2 != eax_4)
    sub_52e3c0(arg2, eax_4, 0, 0xffffffff)

int32_t eax_5 = *(arg1 + 0x6dc)
int32_t var_84_2 = arg3
void var_9c
void* ecx_2 = &var_9c
int16_t var_30
int32_t var_1c

if (eax_5 == 0)
    sub_52e820(ecx_2, u" [ %02d ]")
    int32_t var_8_4 = 1
    sub_532870(arg2, sub_6ae4c0(&var_30, var_9c), 0, 0xffffffff)
    var_8_4.b = 0
    
    if (var_1c u>= 8)
        j__free(var_30.d)
    
    var_1c = 7
    int32_t var_20_1 = 0
    var_30 = 0
else if (eax_5 == 1)
    sub_52e820(ecx_2, u" [ %03d ]")
    int32_t var_8_3 = 2
    int16_t var_48
    sub_532870(arg2, sub_6ae4c0(&var_48, var_9c), 0, 0xffffffff)
    var_8_3.b = 0
    int32_t var_34
    
    if (var_34 u>= 8)
        j__free(var_48.d)
    
    int32_t var_34_1 = 7
    int32_t var_38_1 = 0
    var_48 = 0
else
    sub_52e820(ecx_2, u" [ %04d ]")
    int32_t var_8_2 = 3
    int16_t var_60
    sub_532870(arg2, sub_6ae4c0(&var_60, var_9c), 0, 0xffffffff)
    var_8_2.b = 0
    int32_t var_4c
    
    if (var_4c u>= 8)
        j__free(var_60.d)
    
    int32_t var_4c_1 = 7
    int32_t var_50_1 = 0
    var_60 = 0

if (arg4 == 0)
    sub_532870(arg2, data_bac510 + 0x10ba8, 0, 0xffffffff)
else
    int32_t var_8_5 = 4
    sub_532870(arg2, sub_67ad80(&var_30, arg4), 0, 0xffffffff)
    var_8_5.b = 0
    
    if (var_1c u>= 8)
        j__free(var_30.d)
    
    void* var_84_11 = arg4 + 0x428
    sub_52e820(&var_9c, 0xaf98d8)
    int32_t var_8_6 = 5
    sub_532870(arg2, sub_6ae4c0(&var_30, var_9c), 0, 0xffffffff)
    
    if (var_1c u>= 8)
        j__free(var_30.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return arg2
