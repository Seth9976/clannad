// 函数: sub_6e1190
// 地址: 0x6e1190
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9ccc73
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct NT3::C_sound_stream_base::NT3::C_ogg_stream::VTable** var_14 = arg1
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct NT3::C_sound_stream_base::NT3::C_ogg_stream::VTable** var_14_1 = arg1
*arg1 = &NT3::C_ogg_stream::`vftable'{for `NT3::C_sound_stream_base'}
int32_t var_8_1 = 1
int32_t* result = sub_6e1520(arg1)
arg1[5] = 0
int32_t* edi = arg1[6]
arg1[6] = 0

if (edi != 0)
    result = &edi[1]
    bool cond:0_1 = *result != 1
    *result
    *result -= 1
    
    if (not(cond:0_1))
        (*(*edi + 4))(eax_2)
        result = &edi[2]
        bool cond:2_1 = *result != 1
        *result
        *result -= 1
        
        if (not(cond:2_1))
            result = (*(*edi + 8))()

var_8_1.b = 0
int32_t* edi_1 = arg1[6]

if (edi_1 != 0)
    result = &edi_1[1]
    bool cond:1_1 = *result != 1
    *result
    *result -= 1
    
    if (not(cond:1_1))
        (*(*edi_1 + 4))(eax_2)
        result = &edi_1[2]
        int32_t ebx_1 = *result
        *result -= 1
        
        if (ebx_1 == 1)
            result = (*(*edi_1 + 8))()

*arg1 = &NT3::C_sound_stream_base::`vftable'
fsbase->NtTib.ExceptionList = ExceptionList
return result
