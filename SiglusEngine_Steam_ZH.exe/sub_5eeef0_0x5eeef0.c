// 函数: sub_5eeef0
// 地址: 0x5eeef0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9bcd18
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_c_1 = 0
void var_28
void var_20
int32_t* eax_4 = sub_6f12f0(*sub_5e4810(arg2, &var_20), &var_28, 0)
var_c_1.b = 2
void var_38
void var_30
int32_t ebx
ebx.b = sub_6f12f0(*sub_5e4810(arg1, &var_30), &var_38, 0)[1] u< eax_4[1]
int32_t* var_34

if (var_34 != 0)
    bool cond:0_1 = var_34[1] != 1
    var_34[1]
    var_34[1] -= 1
    
    if (not(cond:0_1))
        (*(*var_34 + 4))(eax_2)
        bool cond:2_1 = var_34[2] != 1
        var_34[2]
        var_34[2] -= 1
        
        if (not(cond:2_1))
            (*(*var_34 + 8))()

var_c_1.b = 1
int32_t* var_2c

if (var_2c != 0)
    bool cond:1_1 = var_2c[1] != 1
    var_2c[1]
    var_2c[1] -= 1
    
    if (not(cond:1_1))
        (*(*var_2c + 4))(eax_2)
        bool cond:4_1 = var_2c[2] != 1
        var_2c[2]
        var_2c[2] -= 1
        
        if (not(cond:4_1))
            (*(*var_2c + 8))()

var_c_1.b = 0
int32_t* var_24

if (var_24 != 0)
    bool cond:3_1 = var_24[1] != 1
    var_24[1]
    var_24[1] -= 1
    
    if (not(cond:3_1))
        (*(*var_24 + 4))(eax_2)
        bool cond:6_1 = var_24[2] != 1
        var_24[2]
        var_24[2] -= 1
        
        if (not(cond:6_1))
            (*(*var_24 + 8))()

int32_t var_c_2 = 0xffffffff
int32_t* var_1c

if (var_1c != 0)
    bool cond:5_1 = var_1c[1] != 1
    var_1c[1]
    var_1c[1] -= 1
    
    if (not(cond:5_1))
        (*(*var_1c + 4))(eax_2)
        int32_t esi_1 = var_1c[2]
        var_1c[2] -= 1
        
        if (esi_1 == 1)
            (*(*var_1c + 8))()

int32_t* result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
