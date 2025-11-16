// 函数: sub_6f7870
// 地址: 0x6f7870
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cda20
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_84 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = data_4ebee38
int32_t ebx = 0xf4240
int32_t eax_3 = *(arg1 + 0x1f0)
int32_t eax_4 = *(arg1 + 0x1f4)
int32_t var_64 = 0
int32_t var_58 = 0
int32_t eax_6 = (*(*ecx + 0x18))(ecx, *(arg1 + 4), *(arg1 + 0x198))
int32_t esi = 0

if (eax_6 s> 0)
    do
        int32_t* ecx_1 = data_4ebee38
        int32_t var_54
        (*(*ecx_1 + 0x1c))(ecx_1, *(arg1 + 4), *(arg1 + 0x198), esi, &var_54)
        int32_t var_50
        int32_t eax_9
        int32_t edx_2
        edx_2:eax_9 = sx.q(eax_4 - var_50)
        int32_t eax_12
        int32_t edx_3
        edx_3:eax_12 = sx.q(eax_3 - var_54)
        int32_t ecx_5 = (eax_9 ^ edx_2) - edx_2 + (eax_12 ^ edx_3) - edx_3
        
        if (ecx_5 s< ebx)
            ebx = ecx_5
            var_64.o = var_54.o
        
        esi += 1
    while (esi s< eax_6)

int32_t var_30_1 = 7
int32_t var_34_1 = 0
int16_t var_44 = 0
sub_52e720(&var_44, &data_ad7c90, nullptr)
int32_t var_8_1 = 0
int32_t var_18_1 = 7
int32_t var_1c_1 = 0
int16_t var_2c = 0
sub_52e720(&var_2c, 0xb07b48, 0x20)
var_8_1.b = 1
sub_6b9da0(&var_2c, &var_44)

if (var_18_1 u>= 8)
    j__free(var_2c.d)

int32_t var_18_2 = 7
int32_t var_1c_2 = 0
var_2c = 0

if (var_30_1 u>= 8)
    j__free(var_44.d)

int32_t result
result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
