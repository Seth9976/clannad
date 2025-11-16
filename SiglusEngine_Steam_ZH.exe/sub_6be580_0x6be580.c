// 函数: sub_6be580
// 地址: 0x6be580
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cbd51
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_120 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx
int32_t var_104 = ecx
int32_t var_ac = 7
int32_t var_b0 = 0
int16_t var_c0 = 0
int128_t var_a8
__builtin_memset(&var_a8, 0, 0x1a)
int32_t var_7c = 7
int32_t var_80 = 0
int32_t var_8_1 = 0
int32_t var_100 = *arg1
int32_t var_e8 = 7
int32_t var_ec = 0
int16_t var_fc = 0
int32_t var_e4 = 0
int32_t var_e0 = 0
int32_t var_dc = 0
var_8_1.b = 1
int16_t var_90
int32_t* ebx

if (sub_6be1d0(&var_100, arg2, &var_fc) != 0)
    sub_52e3c0(&var_c0, &var_fc, 0, 0xffffffff)
    sub_6bf270(&var_a8, &var_e4)
    int16_t var_60
    int128_t var_48
    int16_t var_30_1
    int32_t var_1c_1
    
    while (true)
        int32_t var_4c_1 = 7
        int32_t var_50_1 = 0
        var_60 = 0
        __builtin_memset(&var_48, 0, 0x1a)
        var_1c_1 = 7
        int32_t var_20_1 = 0
        var_8_1.b = 2
        
        if (sub_6be580(&var_100, arg2, &var_60) == 0)
            break
        
        sub_6bba50(&var_a8:0xc, &var_60)
        
        if (var_1c_1 u>= 8)
            j__free(var_30_1.d)
        
        int32_t* esi_1 = var_48:0xc.d
        int32_t var_1c_2 = 7
        int32_t var_20_2 = 0
        int16_t var_30_2 = 0
        
        if (esi_1 != 0)
            int32_t var_38_1
            
            if (esi_1 != var_38_1)
                do
                    sub_6ba6b0(esi_1)
                    esi_1 = &esi_1[0x12]
                while (esi_1 != var_38_1)
                
                esi_1 = var_48:0xc.d
            
            j__free(esi_1)
            var_48:0xc.d = 0
            int32_t var_38_2 = 0
            int32_t var_34_1 = 0
        
        void* ecx_6 = var_48.d
        
        if (ecx_6 != 0)
            int32_t* var_124_6 = arg3
            void* var_128_2 = ecx_6
            sub_66b250(ecx_6, var_48:4.d)
            j__free(var_48.d)
            var_48.d = 0
            var_48:4.d = 0
            var_48:8.d = 0
        
        if (var_4c_1 u>= 8)
            j__free(var_60.d)
    
    if (var_1c_1 u>= 8)
        j__free(var_30_1.d)
    
    int32_t var_1c_3 = 7
    int32_t var_20_3 = 0
    int16_t var_30_3 = 0
    sub_6bbbb0(&var_48:0xc)
    sub_6ba6f0(&var_60)
    int32_t var_98
    
    if (var_a8:0xc.d == var_98)
        int32_t var_c4_1 = 7
        int32_t var_c8_1 = 0
        int16_t var_d8 = 0
        var_8_1.b = 3
        sub_6be380(&var_100, arg2, &var_d8)
        sub_52e3c0(&var_90, &var_d8, 0, 0xffffffff)
        
        if (var_c4_1 u>= 8)
            j__free(var_d8.d)
    
    int32_t var_64_1 = 7
    int32_t var_68_1 = 0
    int16_t var_78 = 0
    var_8_1.b = 4
    
    if (sub_6be2a0(&var_100, arg2, &var_78) != 0)
        *arg1 = var_100
        sub_6be180(arg3, &var_c0)
        ebx.b = 1
    else
        ebx.b = 0
    
    if (var_64_1 u>= 8)
        j__free(var_78.d)
    
    int32_t var_64_2 = 7
    int32_t var_68_2 = 0
    var_78 = 0
else
    ebx.b = 0

sub_6ba6f0(&var_fc)

if (var_7c u>= 8)
    j__free(var_90.d)

int32_t var_7c_1 = 7
int32_t var_80_1 = 0
var_90 = 0
sub_6bbbb0(&var_a8:0xc)
sub_6ba6f0(&var_c0)
int32_t result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
