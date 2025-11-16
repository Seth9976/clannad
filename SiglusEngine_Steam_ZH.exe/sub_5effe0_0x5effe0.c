// 函数: sub_5effe0
// 地址: 0x5effe0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bcda8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_1c = nullptr
int32_t eax_3 = *(arg1 + 0x1ac)
int32_t arg_c

if (eax_3 == 2 || eax_3 == 8 || eax_3 == 0xb || eax_3 == 0xa || eax_3 == 9)
    int32_t* eax_5 = *(arg1 + 0x1568)
    int32_t esi = arg_c
    int32_t entry_ebx
    
    if (eax_5 != 0)
        return sub_5f006f(eax_5, &__saved_ebp, esi, arg3, arg2, entry_ebx) __tailcall
    
    if (0 != 0)
        int32_t var_8_1 = 0
        void var_20
        uint32_t result =
            zx.d(*(sub_6f54d0(*sub_54d980(*(arg1 + 0x1568), &var_20, esi), &arg_c, arg4, arg5) + 3))
        int32_t var_8_2 = 0xffffffff
        
        if (var_1c != 0)
            bool cond:1_1 = var_1c[1] != 1
            var_1c[1]
            var_1c[1] -= 1
            
            if (not(cond:1_1))
                (*(*var_1c + 4))(eax_2, arg3, arg2, entry_ebx)
                int32_t edi = var_1c[2]
                var_1c[2] -= 1
                
                if (edi == 1)
                    (*(*var_1c + 8))()
        
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
else if (eax_3 == 0xc)
    int32_t* ecx = *(arg1 + 0x15ec)
    
    if (ecx != 0)
        sub_6f54d0(ecx, &arg_c, arg4, arg5)
fsbase->NtTib.ExceptionList = ExceptionList
return 0
