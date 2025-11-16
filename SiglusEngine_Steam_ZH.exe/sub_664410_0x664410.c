// 函数: sub_664410
// 地址: 0x664410
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c5522
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_ac = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
int32_t var_88 = 0
int32_t* var_90 = arg1
*arg1 = 0
arg1[1] = 0
*arg1 = sub_642790()
int32_t var_8_2 = 0
int32_t* var_b0 = nullptr
int32_t* var_b4 = nullptr
int32_t var_88_1 = 1
int32_t* var_7c = nullptr
int32_t var_78 = 0
var_7c = sub_6699d0(var_b4, var_b0)
int32_t var_b0_1 = 1
int32_t var_8_3 = 1
void var_c4
sub_669b40(sub_669af0(&var_c4, 0xaf8b9c), arg2, &var_7c)
int32_t* eax_6 = var_7c
void** edi = *eax_6

if (edi != eax_6)
    do
        int32_t* var_b0_2 = nullptr
        int32_t* var_b4_1 = nullptr
        int32_t* var_84 = nullptr
        int32_t var_80_1 = 0
        var_84 = sub_6699d0(var_b4_1, var_b0_2)
        int32_t var_b0_3 = 1
        var_8_3.b = 2
        sub_669c20(sub_669af0(&var_c4, &data_af8ba0), &edi[2], &var_84)
        
        if (var_80_1 == 2)
            void* var_b0_4 = 0xffffffff
            int32_t var_b4_2 = 0
            int32_t* eax_10 = *var_84
            void* esi_1 = *eax_10
            int16_t var_74 = 0
            int32_t var_60_1 = 7
            int32_t var_64_1 = 0
            sub_52e3c0(&var_74, &eax_10[2], var_b4_2, var_b0_4)
            var_8_3.b = 3
            void* var_b0_5 = 0xffffffff
            int32_t var_b4_3 = 0
            int32_t var_18_1 = 7
            int32_t var_1c_1 = 0
            int16_t var_2c = 0
            sub_52e3c0(&var_2c, esi_1 + 8, var_b4_3, var_b0_5)
            var_8_3.b = 4
            void* var_b0_6 = 0xffffffff
            int32_t var_b4_4 = 0
            int16_t var_5c = 0
            int32_t var_48_1 = 7
            int32_t var_4c_1 = 0
            sub_52e3c0(&var_5c, &var_74, var_b4_4, var_b0_6)
            var_8_3.b = 5
            void* var_b0_7 = 0xffffffff
            int32_t var_b4_5 = 0
            int16_t var_44 = 0
            int32_t var_30_1 = 7
            int32_t var_34_1 = 0
            sub_52e3c0(&var_44, &var_2c, var_b4_5, var_b0_7)
            var_8_3.b = 6
            int32_t* eax_12
            void* ecx_9
            eax_12, ecx_9 = sub_66a910(&var_5c)
            int32_t* var_b0_9 = eax_12
            void* var_b4_6 = &eax_12[4]
            void* var_98
            sub_66a9a0(arg1, &var_98, ecx_9)
            
            if (var_30_1 u>= 8)
                j__free(var_44.d)
            
            int32_t var_30_2 = 7
            int32_t var_34_2 = 0
            var_44 = 0
            
            if (var_48_1 u>= 8)
                j__free(var_5c.d)
            
            if (var_18_1 u>= 8)
                j__free(var_2c.d)
            
            int32_t var_18_2 = 7
            int32_t var_1c_2 = 0
            var_2c = 0
            
            if (var_60_1 u>= 8)
                j__free(var_74.d)
        
        var_8_3.b = 1
        sub_669770(&var_84)
        j__free(var_84)
        edi = *edi
    while (edi != var_7c)

sub_669770(&var_7c)
j__free(var_7c)
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return arg1
