// 函数: sub_6e1a90
// 地址: 0x6e1a90
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9ccd18
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct NT3::C_sound_stream_base::NT3::C_sound_stream::VTable** var_14 = arg1
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct NT3::C_sound_stream_base::NT3::C_sound_stream::VTable** var_14_1 = arg1
*arg1 = &NT3::C_sound_stream::`vftable'{for `NT3::C_sound_stream_base'}
int32_t var_8_1 = 0
int32_t* edi = arg1[6]

if (edi != 0)
    bool cond:1_1 = edi[1] != 1
    edi[1]
    edi[1] -= 1
    
    if (not(cond:1_1))
        (*(*edi + 4))(eax_2)
        int32_t ebx_1 = edi[2]
        edi[2] -= 1
        
        if (ebx_1 == 1)
            (*(*edi + 8))()

*arg1 = &NT3::C_sound_stream_base::`vftable'

if ((arg2 & 1) != 0)
    j__free(arg1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
