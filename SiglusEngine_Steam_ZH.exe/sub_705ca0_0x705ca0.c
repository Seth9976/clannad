// 函数: sub_705ca0
// 地址: 0x705ca0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cf556
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_e4 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_d4 = *(arg1 + 0x24)
void* eax_4 = *(arg1 + 0x28)
void* var_d0 = eax_4

if (eax_4 != 0)
    *(eax_4 + 4)
    *(eax_4 + 4) += 1

int32_t var_cc = *(arg1 + 0x2c)
void* eax_7 = *(arg1 + 0x30)
void* var_c8 = eax_7

if (eax_7 != 0)
    *(eax_7 + 4)
    *(eax_7 + 4) += 1

int32_t var_c4 = *(arg1 + 0x34)
void* eax_10 = *(arg1 + 0x38)
void* var_c0 = eax_10

if (eax_10 != 0)
    *(eax_10 + 4)
    *(eax_10 + 4) += 1

int32_t var_bc = *(arg1 + 0x3c)
void* eax_13 = *(arg1 + 0x40)
void* var_b8 = eax_13

if (eax_13 != 0)
    *(eax_13 + 4)
    *(eax_13 + 4) += 1

int32_t var_b4 = *(arg1 + 0x54)
void* eax_16 = *(arg1 + 0x58)
void* var_b0 = eax_16

if (eax_16 != 0)
    *(eax_16 + 4)
    *(eax_16 + 4) += 1

int32_t var_ac = *(arg1 + 0x5c)
void* eax_19 = *(arg1 + 0x60)
void* var_a8 = eax_19

if (eax_19 != 0)
    *(eax_19 + 4)
    *(eax_19 + 4) += 1

int32_t var_a4 = *(arg1 + 0x64)
void* eax_22 = *(arg1 + 0x68)
void* var_a0 = eax_22

if (eax_22 != 0)
    *(eax_22 + 4)
    *(eax_22 + 4) += 1

int32_t var_9c = *(arg1 + 0x6c)
void* eax_25 = *(arg1 + 0x70)
void* var_98 = eax_25

if (eax_25 != 0)
    *(eax_25 + 4)
    *(eax_25 + 4) += 1

int32_t i = 0
int32_t var_8_1 = 0
int64_t var_f4

do
    if (*((&var_d4)[i * 2] + 0x98) == arg2)
        int64_t var_ec = _mm_cvtps_pd(*(arg3 + 0xc))
        var_f4 = _mm_cvtps_pd(arg3[1].d)
        int64_t var_fc_1 = _mm_cvtps_pd(*(arg3 + 4))
        int64_t var_104_1 = _mm_cvtps_pd(*arg3)
        char var_94
        sub_70ced0(&var_94, "float4( %f, %f, %f, %f )")
        int32_t ecx_8
        
        if (var_94 != 0)
            char* ecx_9 = &var_94
            char j
            
            do
                j = *ecx_9
                ecx_9 = &ecx_9[1]
            while (j != 0)
            void var_93
            ecx_8 = ecx_9 - &var_93
        else
            ecx_8 = 0
        
        var_ec:4.d = ecx_8
        var_ec.d = &var_94
        sub_541eb0((&var_d4)[i * 2] + 0x80, var_ec)
        break
    
    i += 1
while (i s< 8)

var_f4:4.d = 8
int32_t var_8_2 = 0xffffffff
var_f4.d = &var_d4
int32_t result = `eh vector vbase constructor iterator'(var_f4, 0x54b01000000008)
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
