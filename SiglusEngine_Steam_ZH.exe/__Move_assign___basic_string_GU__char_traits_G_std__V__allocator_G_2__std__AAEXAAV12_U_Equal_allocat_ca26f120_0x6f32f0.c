// 函数: ?_Move_assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AAEXAAV12@U_Equal_allocators@2@@Z
// 地址: 0x6f32f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cd628
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
void arg_4
int32_t* ecx
sub_6f3450(ecx, &arg_4)
int32_t var_8_2 = 0xffffffff

if (arg1 != 0)
    bool cond:0_1 = arg1[1] != 1
    arg1[1]
    arg1[1] -= 1
    
    if (not(cond:0_1))
        (*(*arg1 + 4))(eax_2)
        int32_t edi_1 = arg1[2]
        arg1[2] -= 1
        
        if (edi_1 == 1)
            (*(*arg1 + 8))()

int32_t result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
