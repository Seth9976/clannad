// 函数: sub_5764f0
// 地址: 0x5764f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b4672
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_128 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_114 = arg1
void** esi = nullptr
LPARAM result = arg2
LPARAM result_1 = result
LRESULT var_10c = 0
int32_t ebx_3 = (*(arg3 + 0xa4) - *(arg3 + 0xa0)) s>> 2 << 5
void var_14c

if (ebx_3 s> 0)
    do
        void* var_12c_1 = arg1
        void* var_130_1 = esi + 0x3e7
        void** var_134_1 = esi
        int32_t var_d8
        int16_t* eax_4 = sub_5483b0(arg3, &var_d8)
        int32_t var_8_1 = 0
        sub_532b80(eax_4, eax_4, &var_14c, u".bit1[%05d-%05d]")
        var_8_1.b = 1
        int16_t var_78
        LRESULT eax_6
        eax_6, arg1 =
            sub_5771d0(var_114, result_1, var_10c, arg3, 1, esi, sub_6ae4c0(&var_78, var_14c))
        var_10c = eax_6
        int32_t var_64
        
        if (var_64 u>= 8)
            arg1 = j__free(var_78.d)
        
        result = 0
        int32_t var_8_2 = 0xffffffff
        var_64 = 7
        int32_t var_68_1 = 0
        var_78 = 0
        int32_t var_c4
        
        if (var_c4 u>= 8)
            result, arg1 = j__free(var_d8)
        
        esi = &esi[0xfa]
    while (esi s< ebx_3)

void** esi_1 = nullptr
int32_t ebx_7 = (*(arg3 + 0xa4) - *(arg3 + 0xa0)) s>> 2 << 4

if (ebx_7 s> 0)
    do
        void* var_12c_4 = arg1
        void* var_130_3 = esi_1 + 0x3e7
        void** var_134_3 = esi_1
        int32_t var_c0
        int16_t* eax_8 = sub_5483b0(arg3, &var_c0)
        int32_t var_8_3 = 2
        sub_532b80(eax_8, eax_8, &var_14c, u".bit2[%05d-%05d]")
        var_8_3.b = 3
        int16_t var_90
        LRESULT eax_10
        eax_10, arg1 =
            sub_5771d0(var_114, result_1, var_10c, arg3, 2, esi_1, sub_6ae4c0(&var_90, var_14c))
        var_10c = eax_10
        int32_t var_7c
        
        if (var_7c u>= 8)
            arg1 = j__free(var_90.d)
        
        result = 0
        int32_t var_8_4 = 0xffffffff
        var_7c = 7
        int32_t var_80_1 = 0
        var_90 = 0
        int32_t var_ac
        
        if (var_ac u>= 8)
            result, arg1 = j__free(var_c0)
        
        esi_1 = &esi_1[0xfa]
    while (esi_1 s< ebx_7)

void** esi_2 = nullptr
int32_t ebx_11 = (*(arg3 + 0xa4) - *(arg3 + 0xa0)) s>> 2 << 3

if (ebx_11 s> 0)
    do
        void* var_12c_7 = arg1
        void* var_130_5 = esi_2 + 0x3e7
        void** var_134_5 = esi_2
        int32_t var_108
        int16_t* eax_12 = sub_5483b0(arg3, &var_108)
        int32_t var_8_5 = 4
        sub_532b80(eax_12, eax_12, &var_14c, u".bit4[%05d-%05d]")
        var_8_5.b = 5
        int16_t var_30
        LRESULT eax_14
        eax_14, arg1 =
            sub_5771d0(var_114, result_1, var_10c, arg3, 4, esi_2, sub_6ae4c0(&var_30, var_14c))
        var_10c = eax_14
        int32_t var_1c
        
        if (var_1c u>= 8)
            arg1 = j__free(var_30.d)
        
        result = 0
        int32_t var_8_6 = 0xffffffff
        var_1c = 7
        int32_t var_20_1 = 0
        var_30 = 0
        int32_t var_f4
        
        if (var_f4 u>= 8)
            result, arg1 = j__free(var_108)
        
        esi_2 = &esi_2[0xfa]
    while (esi_2 s< ebx_11)

void** esi_3 = nullptr
int32_t ebx_14 = (*(arg3 + 0xa4) - *(arg3 + 0xa0)) & 0xfffffffc

if (ebx_14 s> 0)
    do
        void* var_12c_10 = arg1
        void* var_130_7 = esi_3 + 0x3e7
        void** var_134_7 = esi_3
        int32_t var_f0
        int16_t* eax_16 = sub_5483b0(arg3, &var_f0)
        int32_t var_8_7 = 6
        sub_532b80(eax_16, eax_16, &var_14c, u".bit8[%05d-%05d]")
        var_8_7.b = 7
        int16_t var_48
        LRESULT eax_18
        eax_18, arg1 =
            sub_5771d0(var_114, result_1, var_10c, arg3, 8, esi_3, sub_6ae4c0(&var_48, var_14c))
        var_10c = eax_18
        int32_t var_34
        
        if (var_34 u>= 8)
            arg1 = j__free(var_48.d)
        
        result = 0
        int32_t var_8_8 = 0xffffffff
        var_34 = 7
        int32_t var_38_1 = 0
        var_48 = 0
        int32_t var_dc
        
        if (var_dc u>= 8)
            result, arg1 = j__free(var_f0)
        
        esi_3 = &esi_3[0xfa]
    while (esi_3 s< ebx_14)

void** esi_4 = nullptr
int32_t ebx_18 = ((*(arg3 + 0xa4) - *(arg3 + 0xa0)) s>> 2) * 2

if (ebx_18 s> 0)
    do
        void* var_12c_13 = arg1
        void* var_130_9 = esi_4 + 0x3e7
        void** var_134_9 = esi_4
        int32_t var_a8
        int16_t* eax_20 = sub_5483b0(arg3, &var_a8)
        int32_t var_8_9 = 8
        sub_532b80(eax_20, eax_20, &var_14c, u".bit16[%05d-%05d]")
        var_8_9.b = 9
        int16_t var_60
        LRESULT eax_22
        eax_22, arg1 =
            sub_5771d0(var_114, result_1, var_10c, arg3, 0x10, esi_4, sub_6ae4c0(&var_60, var_14c))
        var_10c = eax_22
        int32_t var_4c
        
        if (var_4c u>= 8)
            arg1 = j__free(var_60.d)
        
        result = 0
        int32_t var_8_10 = 0xffffffff
        var_4c = 7
        int32_t var_50_1 = 0
        var_60 = 0
        int32_t var_94
        
        if (var_94 u>= 8)
            result, arg1 = j__free(var_a8)
        
        esi_4 = &esi_4[0xfa]
    while (esi_4 s< ebx_18)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
