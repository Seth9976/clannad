// 函数: sub_702ff0
// 地址: 0x702ff0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9ceeed
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_a0 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
int32_t* var_94 = arg2
int32_t var_90 = 0
int32_t var_8_2 = 1
char var_8c
char var_5c
char* eax_6 =
    sub_6fdcc0(arg1 + 0x1c, sub_70cd30(&ExceptionList, arg1 + 4, &var_5c,  "), &var_8c, arg1 + 0x1c)
var_8_2.b = 2
arg2[5] = 0xf
arg2[4] = 0
*arg2 = 0
sub_541b40(arg2, eax_6, 0, 0xffffffff)
int32_t var_90_1 = 1
int32_t var_78

if (var_78 u>= 0x10)
    j__free(var_8c.d)

var_8_2.b = 0
int32_t var_78_1 = 0xf
int32_t var_7c = 0
var_8c = 0
int32_t var_48

if (var_48 u>= 0x10)
    j__free(var_5c.d)

int32_t var_48_1 = 0xf
int32_t var_4c = 0
var_5c = 0
sub_6b3720(arg2, " = sampler_state {\n", 0x13)
int32_t var_44
int32_t* eax_8 = (*(*(arg1 + 0x68) + 4))(&var_44)
int32_t var_8_3 = 3
char var_2c
char* eax_9 = sub_70ce80(eax_8.b, "\ttexture = <", &var_2c, eax_8)
var_8_3.b = 4
var_8_3.b = 5
char var_74
sub_6b3810(arg2, sub_6bdb10(eax_9.b, eax_9, &var_74, ">;\n"), nullptr, 0xffffffff)
int32_t var_60

if (var_60 u>= 0x10)
    j__free(var_74.d)

int32_t var_60_1 = 0xf
int32_t var_64 = 0
var_74 = 0
int32_t var_18

if (var_18 u>= 0x10)
    j__free(var_2c.d)

var_8_3.b = 0
int32_t var_18_1 = 0xf
int32_t var_1c = 0
var_2c = 0
int32_t var_30

if (var_30 u>= 0x10)
    j__free(var_44)

if (*(arg1 + 0x124) != 0)
    int32_t* eax_12 = sub_6fdbd0(arg1 + 0x114, "\tAddressU = ", &var_44, arg1 + 0x114)
    int32_t var_8_4 = 6
    var_8_4.b = 7
    sub_6b3810(arg2, sub_6bdb10(eax_12.b, eax_12, &var_2c, ";\n"), nullptr, 0xffffffff)
    
    if (var_18_1 u>= 0x10)
        j__free(var_2c.d)
    
    var_8_4.b = 0
    var_18_1 = 0xf
    int32_t var_1c_1 = 0
    var_2c = 0
    
    if (var_30 u>= 0x10)
        j__free(var_44)

if (*(arg1 + 0x13c) != 0)
    int32_t* eax_15 = sub_6fdbd0(arg1 + 0x12c, "\tAddressV = ", &var_44, arg1 + 0x12c)
    int32_t var_8_5 = 8
    var_8_5.b = 9
    sub_6b3810(arg2, sub_6bdb10(eax_15.b, eax_15, &var_2c, ";\n"), nullptr, 0xffffffff)
    
    if (var_18_1 u>= 0x10)
        j__free(var_2c.d)
    
    var_8_5.b = 0
    var_18_1 = 0xf
    int32_t var_1c_2 = 0
    var_2c = 0
    
    if (var_30 u>= 0x10)
        j__free(var_44)

if (*(arg1 + 0x154) != 0)
    int32_t* eax_18 = sub_6fdbd0(arg1 + 0x144, "\tMinFilter = ", &var_44, arg1 + 0x144)
    int32_t var_8_6 = 0xa
    var_8_6.b = 0xb
    sub_6b3810(arg2, sub_6bdb10(eax_18.b, eax_18, &var_2c, ";\n"), nullptr, 0xffffffff)
    
    if (var_18_1 u>= 0x10)
        j__free(var_2c.d)
    
    var_8_6.b = 0
    var_18_1 = 0xf
    int32_t var_1c_3 = 0
    var_2c = 0
    
    if (var_30 u>= 0x10)
        j__free(var_44)

if (*(arg1 + 0x16c) != 0)
    int32_t* eax_21 = sub_6fdbd0(arg1 + 0x15c, "\tMagFilter = ", &var_44, arg1 + 0x15c)
    int32_t var_8_7 = 0xc
    var_8_7.b = 0xd
    sub_6b3810(arg2, sub_6bdb10(eax_21.b, eax_21, &var_2c, ";\n"), nullptr, 0xffffffff)
    
    if (var_18_1 u>= 0x10)
        j__free(var_2c.d)
    
    var_8_7.b = 0
    var_18_1 = 0xf
    int32_t var_1c_4 = 0
    var_2c = 0
    
    if (var_30 u>= 0x10)
        j__free(var_44)

if (*(arg1 + 0x184) != 0)
    int32_t* eax_24 = sub_6fdbd0(arg1 + 0x174, "\tMipFilter = ", &var_44, arg1 + 0x174)
    int32_t var_8_8 = 0xe
    var_8_8.b = 0xf
    sub_6b3810(arg2, sub_6bdb10(eax_24.b, eax_24, &var_2c, ";\n"), nullptr, 0xffffffff)
    
    if (var_18_1 u>= 0x10)
        j__free(var_2c.d)
    
    var_8_8.b = 0
    var_18_1 = 0xf
    int32_t var_1c_5 = 0
    var_2c = 0
    
    if (var_30 u>= 0x10)
        j__free(var_44)

if (*(arg1 + 0x19c) != 0)
    int32_t* eax_27 = sub_6fdbd0(arg1 + 0x18c, "\tBorderColor = ", &var_44, arg1 + 0x18c)
    int32_t var_8_9 = 0x10
    var_8_9.b = 0x11
    sub_6b3810(arg2, sub_6bdb10(eax_27.b, eax_27, &var_2c, ";\n"), nullptr, 0xffffffff)
    
    if (var_18_1 u>= 0x10)
        j__free(var_2c.d)
    
    var_8_9.b = 0
    int32_t var_18_2 = 0xf
    int32_t var_1c_6 = 0
    var_2c = 0
    
    if (var_30 u>= 0x10)
        j__free(var_44)

sub_6b3720(arg2, 0xb088ec, 3)
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return arg2
