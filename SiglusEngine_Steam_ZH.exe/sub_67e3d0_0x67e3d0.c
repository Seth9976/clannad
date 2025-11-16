// 函数: sub_67e3d0
// 地址: 0x67e3d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c7678
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_ec = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
void* arg_4
int32_t* ebx

if (arg2 != 0)
    void* var_f0_1 = 3
    int32_t var_18_1 = 7
    void* const var_f4_1 = &data_af9c18
    int32_t var_1c_1 = 0
    int16_t var_2c = 0
    sub_52e720(&var_2c, var_f4_1, var_f0_1)
    var_8_1.b = 1
    int16_t var_44
    int16_t* eax_4 = sub_6b4010(&var_2c, &arg_4, &var_44, &var_2c)
    var_8_1.b = 2
    
    if (&arg_4 != eax_4)
        sub_52e3c0(&arg_4, eax_4, 0, 0xffffffff)
    
    int32_t var_30
    
    if (var_30 u>= 8)
        j__free(var_44.d)
    
    int32_t var_30_1 = 7
    var_8_1.b = 0
    int32_t var_34_1 = 0
    var_44 = 0
    
    if (var_18_1 u>= 8)
        j__free(var_2c.d)
    
    int16_t var_5c
    sub_60eaf0(&var_5c, &arg_4)
    var_8_1.b = 3
    int16_t* ecx_5 = &var_2c
    
    if (sub_67ea30(arg1, &var_5c) != 0)
        void* const var_f0_12 = 0xd
        int32_t var_18_2 = 7
        int32_t* var_f4_4 = u"cg_table.flag"
        int32_t var_1c_2 = 0
        var_2c = 0
        int32_t var_f0_13 = sub_52e720(ecx_5, var_f4_4, var_f0_12)
        var_8_1.b = 6
        int32_t var_f4_5 = 0
        int32_t var_60_1 = 0
        int32_t var_f8_2 = *(data_bac510 + 0x12730)
        int16_t* var_fc_1 = &var_2c
        void var_180
        void var_dc
        __builtin_memcpy(&var_180, &var_dc, 0x80)
        sub_5c3640(&arg1[0xe])
        
        if (var_18_2 u>= 8)
            j__free(var_2c.d)
        
        ebx.b = 1
    else
        int16_t* eax_7 = sub_548cb0(&arg_4, 0xaf9c20, ecx_5, &arg_4)
        var_8_1.b = 4
        int16_t* eax_8 = sub_532b80(eax_7, eax_7, &var_44, &data_af1b40)
        var_8_1.b = 5
        ebx.b = sub_684160(data_bac424, 9, eax_8)
        
        if (var_30_1 u>= 8)
            j__free(var_44.d)
        
        int32_t var_30_2 = 7
        int32_t var_34_2 = 0
        var_44 = 0
        
        if (var_18_1 u>= 8)
            j__free(var_2c.d)
    
    int32_t var_48
    
    if (var_48 u>= 8)
        j__free(var_5c.d)
    
    int32_t var_48_1 = 7
    int32_t var_4c_1 = 0
    var_5c = 0
else
    ebx.b = 1

if (arg3 u>= 8)
    j__free(arg_4)

struct _EXCEPTION_REGISTRATION_RECORD** result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
