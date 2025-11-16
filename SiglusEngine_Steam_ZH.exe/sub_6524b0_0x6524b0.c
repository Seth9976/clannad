// 函数: sub_6524b0
// 地址: 0x6524b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c3fc8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* edx = *arg1
int32_t esi = arg1[1]
void* eax_3 = edx

if (edx == esi)
    eax_3 = nullptr

void* esi_1 = esi - edx
int32_t edx_1 = 0

if (esi_1 s> 0)
    do
        uint32_t ecx = zx.d(edx_1.b)
        eax_3 += 1
        edx_1 += 1
        ecx.b = *(ecx + 0xadc4b0)
        *(eax_3 - 1) ^= ecx.b
    while (edx_1 s< esi_1)

void* const ecx_1 = *arg1

if (ecx_1 == arg1[1])
    ecx_1 = nullptr

char* var_1c
sub_5b9470(&var_1c, sub_71cd20(ecx_1, nullptr))
int32_t var_8_1 = 0
char* esi_2 = var_1c
char* edx_2 = esi_2
void* const ecx_3 = *arg1
int32_t var_18

if (esi_2 == var_18)
    edx_2 = nullptr

if (ecx_3 == arg1[1])
    ecx_3 = nullptr

sub_71cd20(ecx_3, edx_2)
sub_5970d0(arg1, &var_1c)

if (esi_2 != 0)
    j__free(esi_2)

int32_t* result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
