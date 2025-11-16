// 函数: sub_705b90
// 地址: 0x705b90
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cf516
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_a4 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_3 = *(arg1 + 0x4c)
void* ecx = *(arg1 + 0x50)
void* var_9c = eax_3
void* var_98 = ecx

if (ecx != 0)
    *(ecx + 4)
    *(ecx + 4) += 1
    eax_3 = var_9c

int32_t var_8_1 = 0

if (*(eax_3 + 0x98) == 0x20)
    int32_t var_ac
    var_ac.q = _mm_cvtps_pd(*(arg2 + 4))
    int32_t var_b4
    var_b4.q = _mm_cvtps_pd(*arg2)
    char var_94
    sub_70ced0(&var_94, "float2( %f, %f )")
    void* ecx_2
    
    if (var_94 != 0)
        char* ecx_3 = &var_94
        char i
        
        do
            i = *ecx_3
            ecx_3 = &ecx_3[1]
        while (i != 0)
        void var_93
        ecx_2 = ecx_3 - &var_93
    else
        ecx_2 = nullptr
    
    sub_541eb0(var_9c + 0x80, &var_94, ecx_2)

int32_t var_8_2 = 0xffffffff
int32_t result = `eh vector vbase constructor iterator'(&var_9c, 8, 1, sub_54b010)
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
