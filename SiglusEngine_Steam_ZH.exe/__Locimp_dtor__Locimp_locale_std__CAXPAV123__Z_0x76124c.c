// 函数: ?_Locimp_dtor@_Locimp@locale@std@@CAXPAV123@@Z
// 地址: 0x76124c
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp_1 = 4
int32_t (* var_c)(void* arg1) = sub_9d3266
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_4 = __security_cookie ^ &__saved_ebp
void* const var_28_1 = &data_761258
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
void var_14
std::_Lockit::_Lockit(&var_14, 0)
int32_t var_8 = 0
int32_t i = *(arg1 + 0xc)

while (i != 0)
    i -= 1
    int32_t* ecx_1 = *(*(arg1 + 8) + (i << 2))
    
    if (ecx_1 != 0)
        int32_t* eax_2 = (*(*ecx_1 + 8))(eax_4)
        
        if (eax_2 != 0)
            (**eax_2)(1)

_free(*(arg1 + 8))
int32_t result = std::_Lockit::~_Lockit(&var_14)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_7612a4
return result
