// 函数: sub_5a8950
// 地址: 0x5a8950
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9afe48
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t eax_2 = __security_cookie ^ &var_4
int32_t var_18 = eax_2
int32_t var_40 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (arg1[0xa] != arg2)
    sub_5a88e0(arg1)
    arg1[0xa] = arg2
    void var_30
    void** eax_3
    eax_3, ebp_1 = sub_61ffe0(&var_30, arg2, arg2)
    ebp_1[-1] = 0
    sub_6b80e0(eax_3, arg1)
    ebp_1[-1] = 0xffffffff
    
    if (ebp_1[-6] u>= 8)
        j__free(ebp_1[-0xb])
    
    int32_t ecx_2 = arg1[1]
    ebp_1[-0xb].w = 0
    result = *arg1
    ebp_1[-6] = 7
    ebp_1[-7] = 0
    
    if (result != ecx_2)
        sub_55c6f0(&arg1[3], (ecx_2 - result) s/ 0x18)
        int32_t eax_5
        int32_t edx_5
        edx_5:eax_5 = muls.dp.d(0x2aaaaaab, arg1[1] - *arg1)
        int32_t edx_6 = edx_5 s>> 2
        sub_55c6f0(&arg1[6], (edx_6 u>> 0x1f) + edx_6)
    
    result.b = 1
else
    result.b = 0

fsbase->NtTib.ExceptionList = ebp_1[-3]
sub_745f2b(ebp_1[-5] ^ ebp_1)
*ebp_1
return result
