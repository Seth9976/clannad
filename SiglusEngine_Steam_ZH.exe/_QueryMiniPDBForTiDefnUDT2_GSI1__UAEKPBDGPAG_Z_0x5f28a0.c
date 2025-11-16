// 函数: ?QueryMiniPDBForTiDefnUDT2@GSI1@@UAEKPBDGPAG@Z
// 地址: 0x5f28a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bcef8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_40 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_14 = arg2
int32_t* edi = arg3
int32_t eax_3 = arg6
void* esi = arg7
int32_t ecx = arg8
int32_t var_8_1 = 0
int32_t ebx = eax_3 * 2
int32_t var_30

if (ebx s<= esi)
    int32_t eax_4 = eax_3 << 2
    int32_t var_18_1 = eax_4
    
    do
        int32_t var_44_1 = ecx
        void* edx = eax_4 + edi
        void* eax_5 = eax_4 + edx
        int32_t var_4c_1 = 0
        int32_t var_48_1 = arg5
        arg5 = sub_5f2db0(arg5, edi, &var_30, edx, edx, eax_5, 0, nullptr, 0)[4]
        int32_t eax_9 = var_30
        
        if (eax_9 != 0)
            j__free(eax_9)
        
        edi = eax_5
        esi -= ebx
        eax_4 = var_18_1
        ecx = arg8
    while (esi s>= ebx)
    
    eax_3 = arg6
    arg2 = var_14

if (esi s> eax_3)
    int32_t var_44_4 = ecx
    int32_t* edx_3 = &edi[eax_3]
    int32_t var_4c_3 = 0
    int32_t var_48_3 = arg5
    sub_5f2db0(arg5, edi, &var_30, edx_3, edx_3, var_14, 0, nullptr, 0)
else
    int32_t var_4c_2 = 0
    int32_t var_48_2 = 0
    int32_t var_44_3 = arg5
    sub_5f2aa0(arg5, edi, &var_30, arg2, 0, 0)

int32_t eax_12 = var_30

if (eax_12 != 0)
    j__free(eax_12)

int32_t result = arg4

if (result != 0)
    result = j__free(result)

fsbase->NtTib.ExceptionList = ExceptionList
return result
