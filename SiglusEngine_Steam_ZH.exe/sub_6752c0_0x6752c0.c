// 函数: sub_6752c0
// 地址: 0x6752c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c6c20
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_38 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_3 = *(arg3 + 4)
int32_t esi = *arg6
int32_t* eax_12

if (eax_3 != 0xa)
    if (eax_3 == 0x14)
        sub_558480(eax_3, arg2, arg3 + 0xc, arg4, arg5, arg6)
        struct _EXCEPTION_REGISTRATION_RECORD** eax_7
        eax_7.b = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_7
    
    if (eax_3 == 0xb)
        void var_1c
        int32_t* eax_8 = sub_58c590(&var_1c, arg3 + 0x160)
        int32_t var_8_1 = 0
        sub_557680(eax_8, 0x20, *eax_8, arg2, arg4, arg5, arg6)
        int32_t var_8_2 = 0xffffffff
        sub_54b010(&var_1c)
        int32_t eax_9
        eax_9.b = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_9
    
    if (eax_3 == 0x15)
        void var_24
        int32_t** eax_10
        int32_t edx_2
        eax_10, edx_2 = sub_58c640(&var_24, arg3 + 0x160)
        int32_t var_8_3 = 1
        sub_558300(eax_10, edx_2, *eax_10, arg4, arg5, arg6)
        int32_t var_8_4 = 0xffffffff
        sub_54b010(&var_24)
        int32_t eax_11
        eax_11.b = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_11
    
    if (eax_3 == 0xd || eax_3 == 0x17 || eax_3 == 0xe || eax_3 == 0x18 || arg4 != arg5 || esi == 0)
        sub_677cd0(arg3 + 0x24)
    else
    label_67542d:
        
        if (esi == 1)
            eax_12.b = 1
            __builtin_memcpy(arg3 + 0x24, arg6[1] + 0x24, 0x80)
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_12
else
    if (esi == 0)
        sub_677bb0(*(arg3 + 8))
        int32_t eax_4
        eax_4.b = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_4
    
    if (esi == 1)
        *(arg3 + 8) = *(arg6[1] + 8)
        int32_t eax_6
        eax_6.b = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_6
    
    if (arg4 == arg5 && esi != 0)
        goto label_67542d
    
    sub_677cd0(arg3 + 0x24)

eax_12.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return eax_12
