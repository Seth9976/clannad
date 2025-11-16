// 函数: sub_5eae60
// 地址: 0x5eae60
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bcc36
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t ebx
int32_t var_a0 = ebx
fsbase->NtTib.ExceptionList = &ExceptionList
void** edi = arg1 + 0xd74
void* var_8c
sub_60f840(&var_8c, edi)
int32_t var_8_1 = 0
int32_t var_7c
int32_t var_74
int16_t var_5c
int32_t var_48
int16_t var_44
int32_t var_30
int16_t var_2c
int32_t var_18

if (var_7c == 0)
    int16_t* eax_3 = sub_6b9ed0(&var_74)
    var_8_1.b = 1
    int16_t* eax_4 = sub_548cb0(eax_3, 0xaf3134, &var_5c, edi)
    var_8_1.b = 2
    int16_t* eax_5 = sub_532b80(eax_4, eax_4, &var_2c, &data_af1b40)
    var_8_1.b = 3
    int16_t* eax_6 = sub_5327a0(eax_5, eax_5, &var_44, eax_3)
    var_8_1.b = 4
    sub_684160(data_bac424, 0xa, eax_6)
    
    if (var_30 u>= 8)
        j__free(var_44.d)
    
    int32_t var_30_1 = 7
    int32_t var_34_1 = 0
    var_44 = 0
    
    if (var_18 u>= 8)
        j__free(var_2c.d)
    
    int32_t var_18_1 = 7
    int32_t var_1c_1 = 0
    var_2c = 0
    
    if (var_48 u>= 8)
        j__free(var_5c.d)
    
    int32_t var_48_1 = 7
    int32_t var_4c_1 = 0
    var_5c = 0
    goto label_5eb0bc

var_8_1.b = 5
int32_t* var_98
sub_54d190(arg1 + 0x1570, sub_6a39a0(&var_98, &var_8c))
var_8_1.b = 0
int32_t* var_94

if (var_94 != 0)
    bool cond:0_1 = var_94[1] != 1
    var_94[1]
    var_94[1] -= 1
    
    if (not(cond:0_1))
        (*(*var_94 + 4))(eax_2)
        int32_t ebx_1 = var_94[2]
        var_94[2] -= 1
        
        if (ebx_1 == 1)
            (*(*var_94 + 8))()

if (*(arg1 + 0x1570) != 0)
    ebx.b = 1
else
    void** eax_12 = sub_6b9ed0(&var_74)
    var_8_1.b = 6
    int16_t* eax_13 = sub_548cb0(eax_12, 0xaf3134, &var_44, edi)
    var_8_1.b = 7
    int16_t* eax_14 = sub_532b80(eax_13, eax_13, &var_2c, &data_af1b6c)
    var_8_1.b = 8
    int16_t* eax_15 = sub_5327a0(eax_14, eax_14, &var_5c, eax_12)
    var_8_1.b = 9
    sub_684160(data_bac424, 0xa, eax_15)
    
    if (var_48 u>= 8)
        j__free(var_5c.d)
    
    int32_t var_48_2 = 7
    int32_t var_4c_2 = 0
    var_5c = 0
    
    if (var_18 u>= 8)
        j__free(var_2c.d)
    
    int32_t var_18_2 = 7
    int32_t var_1c_2 = 0
    var_2c = 0
    
    if (var_30 u>= 8)
        j__free(var_44.d)
    
    int32_t var_30_2 = 7
    int32_t var_34_2 = 0
    var_44 = 0
label_5eb0bc:
    int32_t var_60
    
    if (var_60 u>= 8)
        j__free(var_74)
    
    bool cond:5_1 = edi[5] u< 8
    edi[4] = 0
    
    if (not(cond:5_1))
        edi = *edi
    
    ebx.b = 0
    *edi = nullptr

int32_t var_78

if (var_78 u>= 8)
    j__free(var_8c)

void* result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
