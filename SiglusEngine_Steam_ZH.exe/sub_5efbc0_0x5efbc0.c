// 函数: sub_5efbc0
// 地址: 0x5efbc0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bcda8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char ecx = 0
int32_t* var_1c = nullptr
int32_t eax_3 = *(arg1 + 0x1ac)
int32_t arg_c

if (eax_3 == 2 || eax_3 == 8 || eax_3 == 0xb || eax_3 == 0xa || eax_3 == 9)
    int32_t* eax_5 = *(arg1 + 0x1568)
    int32_t esi_1 = arg_c
    void var_20
    char var_15_1
    int32_t* eax_6
    
    if (eax_5 != 0)
        eax_6 = sub_54d980(eax_5, &var_20, esi_1)
        ecx = 1
        var_15_1 = 1
    
    if (eax_5 == 0 || *eax_6 == 0)
        var_15_1 = 0
    
    if ((ecx & 1) != 0)
        if (var_1c != 0)
            bool cond:0_1 = var_1c[1] != 1
            var_1c[1]
            var_1c[1] -= 1
            
            if (not(cond:0_1))
                (*(*var_1c + 4))(eax_2)
                bool cond:2_1 = var_1c[2] != 1
                var_1c[2]
                var_1c[2] -= 1
                
                if (not(cond:2_1))
                    (*(*var_1c + 8))()
        
        esi_1 = arg_c
    
    if (var_15_1 != 0)
        int32_t var_8_1 = 0
        uint32_t result = zx.d(
            *(sub_6f54d0(*sub_54d980(*(arg1 + 0x1568), &var_20, esi_1), &arg_c, arg2, arg3) + 2))
        int32_t var_8_2 = 0xffffffff
        
        if (var_1c != 0)
            bool cond:1_1 = var_1c[1] != 1
            var_1c[1]
            var_1c[1] -= 1
            
            if (not(cond:1_1))
                (*(*var_1c + 4))(eax_2)
                int32_t edi_1 = var_1c[2]
                var_1c[2] -= 1
                
                if (edi_1 == 1)
                    (*(*var_1c + 8))()
        
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
else if (eax_3 == 0xc)
    int32_t* ecx_1 = *(arg1 + 0x15ec)
    
    if (ecx_1 != 0)
        sub_6f54d0(ecx_1, &arg_c, arg2, arg3)
fsbase->NtTib.ExceptionList = ExceptionList
return 0
