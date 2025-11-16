// 函数: sub_58c640
// 地址: 0x58c640
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b7738
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_14 = 0

if (arg2 != 0)
    int32_t* ecx = *arg2
    void** eax_4
    int32_t __saved_ebp
    
    if (ecx == 0)
        eax_4 = &data_b90a58
    else
        eax_4 = (*(*ecx + 4))(__security_cookie ^ &__saved_ebp)
    
    if (type_info::operator==(eax_4, &data_b90870) != 0)
        void* ecx_2 = *arg2
        
        if (ecx_2 != 0xfffffffc)
            *arg1 = *(ecx_2 + 4)
            void* eax_7 = *(ecx_2 + 8)
            arg1[1] = eax_7
            
            if (eax_7 != 0)
                *(eax_7 + 4)
                *(eax_7 + 4) += 1
            
            fsbase->NtTib.ExceptionList = ExceptionList
            return arg1

char const* const var_30 = "bad cast"
struct std::exception::VTable* var_20
sub_746c87(&var_20)
var_20 = &boost::bad_any_cast::`vftable'{for `std::bad_cast'}
int32_t var_8_1 = 0
sub_58c730(&var_20)
noreturn
