// 函数: sub_70f990
// 地址: 0x70f990
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9d0f28
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_60 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebx = arg1
int32_t var_50 = 0
int32_t var_8_1 = 0
void* arg_8
void** eax_3 = sub_6700c0(arg1, &arg_8)
char eax_5

if (eax_3 != *ebx)
    eax_5 = sub_670200(&arg_8, &eax_3[4])

void** var_4c

if (eax_3 == *ebx || eax_5 != 0)
    var_4c = *ebx
else
    var_4c = eax_3

void** eax_7 = var_4c

if (eax_7 != *ebx)
    char var_48
    sub_701a60(&eax_7[0xa], &var_48)
    void* var_64_3 = 0xffffffff
    var_8_1.b = 1
    int32_t var_68_2 = 0
    *(arg2 + 0x14) = 0xf
    *(arg2 + 0x10) = 0
    void** var_6c_1 = &var_48
    *arg2 = 0
    sub_541b40(arg2, var_6c_1, var_68_2, var_64_3)
    int32_t var_34
    
    if (var_34 u>= 0x10)
        j__free(var_48.d)
    
    int32_t var_34_1 = 0xf
    int32_t var_38_1 = 0
    var_48 = 0
    goto label_70fbb9

int32_t var_1c_1 = 0xf
int32_t var_20_1 = 0
char var_30 = 0
var_8_1.b = 2
int32_t var_64_5 = 0xf
int32_t var_68_3 = 0
char var_78 = 0
sub_541b40(&var_78, &arg_8, 0, 0xffffffff)
char eax_8 = sub_70e5a0(&ebx[4], &var_30, var_78)

if (eax_8 != 0)
label_70fb76:
    void* var_64_11 = 0xffffffff
    int32_t var_68_7 = 0
    *(arg2 + 0x14) = 0xf
    *(arg2 + 0x10) = 0
    void** var_6c_2 = &var_30
    *arg2 = 0
    sub_541b40(arg2, var_6c_2, var_68_7, var_64_11)
    
    if (var_1c_1 u>= 0x10)
        j__free(var_30.d)
    
    int32_t var_1c_2 = 0xf
    int32_t var_20_2 = 0
    var_30 = 0
label_70fbb9:
    
    if (arg3 u>= 0x10)
        j__free(arg_8)
else
    int32_t var_64_6 = 0xf
    int32_t var_68_4 = 0
    var_78 = eax_8
    sub_541b40(&var_78, &arg_8, 0, 0xffffffff)
    char eax_9 = sub_70e5a0(&ebx[0x24], &var_30, var_78)
    
    if (eax_9 != 0)
        goto label_70fb76
    
    int32_t var_64_7 = 0xf
    int32_t var_68_5 = 0
    var_78 = eax_9
    sub_541b40(&var_78, &arg_8, 0, 0xffffffff)
    
    if (sub_70e5a0(&ebx[0x43], &var_30, var_78) != 0)
        goto label_70fb76
    
    sub_670320(&var_78, &arg_8)
    
    if (sub_70e5a0(&ebx[0x62], &var_30, var_78) != 0)
        goto label_70fb76
    
    sub_670260(&ebx[2], &var_4c, &arg_8)
    void** eax_12 = var_4c
    
    if (eax_12 == ebx[2])
        sub_541920(arg2, "**/not found the val./**")
    else
        sub_70e500(&eax_12[0xa], arg2)
    
    sub_53f510(&var_30)
    sub_53f510(&arg_8)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return arg2
