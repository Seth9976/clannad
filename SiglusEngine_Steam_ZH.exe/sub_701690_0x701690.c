// 函数: sub_701690
// 地址: 0x701690
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9ceb33
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_dc = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
char* var_cc = arg2
int32_t var_c8 = 0
int32_t var_8_2 = 1
char var_bc
char var_a4
char* eax_6 =
    sub_6fdcc0(arg1 + 0x1c, sub_70cd30(&ExceptionList, arg1 + 4, &var_bc,  "), &var_a4, arg1 + 0x1c)
var_8_2.b = 2
*(arg2 + 0x14) = 0xf
*(arg2 + 0x10) = 0
char* var_e8 = eax_6
*arg2 = 0
sub_541b40(arg2, var_e8, 0, 0xffffffff)
int32_t var_c8_1 = 1
int32_t var_90

if (var_90 u>= 0x10)
    j__free(var_a4.d)

var_8_2.b = 0
int32_t var_90_1 = 0xf
int32_t var_94 = 0
var_a4 = 0
int32_t var_a8

if (var_a8 u>= 0x10)
    j__free(var_bc.d)

bool cond:2 = *(arg1 + 0x44) == 0
int32_t var_a8_1 = 0xf
int32_t var_ac = 0
var_bc = 0

if (not(cond:2))
    sub_6b3720(arg2, 0xb08800, 3)
    var_e8 = arg1 + 0x34
    sub_6b3810(arg2, var_e8, nullptr, 0xffffffff)

if (*(arg1 + 0x5c) != 0)
    int32_t var_e0_3 = 1
    void* eax_8 = sub_70c590(arg1 + 0x4c, var_e8)
    void* var_5c
    int32_t var_48
    
    if (eax_8 == 0xffffffff)
        int32_t var_8_4 = 0xc
        sub_6b3810(arg2, sub_6fdbd0(eax_8, 0xb08818, &var_5c, arg1 + 0x4c), nullptr, 0xffffffff)
        var_8_4.b = 0
        
        if (var_48 u>= 0x10)
            j__free(var_5c)
    else
        int32_t var_e0_4 = 1
        int32_t var_e0_5 = 1
        void* var_c0 = sub_70c590(arg1 + 0x4c)
        void* eax_10 = sub_70c630(arg1 + 0x4c)
        char var_74
        char* eax_11 = sub_70c490(arg1 + 0x4c, &var_74, 0, var_c0)
        int32_t var_8_3 = 3
        int32_t var_30_1 = 0xf
        int32_t var_34_1 = 0
        char var_44 = 0
        sub_541b40(&var_44, eax_11, 0, 0xffffffff)
        var_8_3.b = 4
        void* var_8c
        sub_6af1e0(&var_8c)
        
        if (var_30_1 u>= 0x10)
            j__free(var_44.d)
        
        int32_t var_30_2 = 0xf
        int32_t var_34_2 = 0
        var_44 = 0
        var_8_3.b = 7
        int32_t var_60
        
        if (var_60 u>= 0x10)
            j__free(var_74.d)
        
        void* eax_12 = var_c0
        int32_t var_60_1 = 0xf
        int32_t var_64_1 = 0
        var_74 = 0
        char* eax_14 = sub_70c490(arg1 + 0x4c, &var_5c, eax_12 + 1, eax_10 - eax_12 - 1)
        var_8_3.b = 8
        int32_t var_18_1 = 0xf
        int32_t var_1c_1 = 0
        char var_2c = 0
        sub_541b40(&var_2c, eax_14, 0, 0xffffffff)
        var_8_3.b = 0xa
        
        if (var_48 u>= 0x10)
            j__free(var_5c)
        
        int32_t var_48_1 = 0xf
        int32_t var_4c_1 = 0
        var_5c.b = 0
        sub_6b3720(arg2, " = {", 4)
        sub_6b3810(arg2, &var_2c, nullptr, 0xffffffff)
        int32_t ebx_4 = 0
        int32_t var_78
        
        while (true)
            void* ecx_15 = &var_8c
            
            if (var_78 u>= 8)
                ecx_15 = var_8c
            
            int32_t var_7c
            void* eax_16 = ecx_15 + (var_7c << 1)
            void* ecx_16 = &var_8c
            
            if (var_78 u>= 8)
                ecx_16 = var_8c
            
            var_c0 = ecx_16
            int32_t ecx_18 = 0
            int32_t var_c4
            
            if (sub_6af490(eax_16, &var_c4, &var_c0, eax_16) != 0)
                ecx_18 = var_c4
            
            if (ebx_4 s>= ecx_18 - 1)
                break
            
            var_8_3.b = 0xb
            sub_6b3810(arg2, sub_6fdbd0(&var_2c, &data_af33a0, &var_74, &var_2c), nullptr, 
                0xffffffff)
            var_8_3.b = 0xa
            
            if (var_60_1 u>= 0x10)
                j__free(var_74.d)
            
            ebx_4 += 1
        
        sub_6b3720(arg2, 0xb08284, 1)
        
        if (var_18_1 u>= 0x10)
            j__free(var_2c.d)
        
        var_8_3.b = 0
        int32_t var_18_2 = 0xf
        int32_t var_1c_2 = 0
        var_2c = 0
        
        if (var_78 u>= 8)
            j__free(var_8c)

sub_6b3720(arg2, &data_b08814, 2)
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return arg2
