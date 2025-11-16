// 函数: sub_4161cc
// 地址: 0x4161cc
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8_2 = 0xffffffff
int32_t (* var_c)() = sub_9d3254
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
void* const var_14_2 = &data_4161d6
int32_t var_14 = arg1
uint32_t __security_cookie_1 = __security_cookie
int32_t __saved_edi
int32_t* var_14_1 = &__saved_edi
int32_t result_1 = 0
int32_t var_2c
__builtin_strncpy(&var_2c, "Genu", 4)
void var_28
void* edi = &var_28
char const* const esi = "ineIntel"
*edi = *esi
void* edi_1 = edi + 4
void* esi_1 = &esi[4]
*edi_1 = *esi_1
*(edi_1 + 4) = *(esi_1 + 4)
int32_t var_8 = 0
int32_t eax
int32_t ecx
int32_t edx
int32_t ebx
eax, ebx, ecx, edx = __cpuid(0, arg1)
int32_t var_40 = ebx
int32_t var_3c = edx
int32_t var_38 = ecx
int32_t var_8_1 = 0xffffffff
int32_t result

if (eax != 0)
    int32_t eax_1
    int32_t ecx_1
    int32_t edx_1
    int32_t ebx_1
    eax_1, ebx_1, ecx_1, edx_1 = __cpuid(1, ecx)
    int32_t var_34_1 = eax_1
    int32_t var_30 = edx_1
    
    if ((var_30 & &data_2000000) != 0)
        result_1 |= 4
    
    if ((var_30 & &data_4000000) != 0)
        result_1 |= 8
    
    result = result_1
else
    result = result_1

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(__security_cookie_1)
return result
