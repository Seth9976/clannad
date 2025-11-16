// 函数: sub_6e0fe0
// 地址: 0x6e0fe0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cccd3
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct NT3::C_sound_stream_base::NT3::C_ogg_stream::VTable** var_18 = arg1
arg1[1] = 0
arg1[2] = 0
arg1[3] = 0
arg1[4] = 0
int32_t var_8_1 = 0
*arg1 = &NT3::C_ogg_stream::`vftable'{for `NT3::C_sound_stream_base'}
arg1[5] = 0
arg1[6] = 0
var_8_1.b = 1
int32_t* eax_3
int32_t* ecx
eax_3, ecx = sub_745f3f(0x2e0)
int32_t* var_1c = nullptr
var_8_1.b = 2
int32_t* var_34 = &var_1c
sub_6e1780(eax_3, eax_3, ecx)
var_8_1.b = 3
int32_t* edi = nullptr
int32_t* ecx_1 = var_1c
arg1[5] = eax_3
int32_t* ebx = arg1[6]
arg1[6] = ecx_1
var_1c = nullptr
int32_t var_20_1 = 0

if (ebx != 0)
    bool cond:0_1 = ebx[1] != 1
    ebx[1] -= 1
    
    if (not(cond:0_1))
        (*(*ebx + 4))(eax_2)
        bool cond:2_1 = ebx[2] != 1
        ebx[2]
        ebx[2] -= 1
        
        if (not(cond:2_1))
            (*(*ebx + 8))()
    
    edi = var_1c

var_8_1.b = 1

if (edi != 0)
    bool cond:1_1 = edi[1] != 1
    edi[1]
    edi[1] -= 1
    
    if (not(cond:1_1))
        (*(*edi + 4))(eax_2)
        int32_t ecx_6 = edi[2]
        edi[2] -= 1
        
        if (ecx_6 == 1)
            (*(*edi + 8))()

int32_t* eax_4
eax_4.b = arg2
*(arg1[5] + 0x2dc) = eax_4.b
_memset(arg1[5], 0, 0x2d0)
*(arg1[5] + 0x2d0) = 0
*(arg1[5] + 0x2d4) = 0
arg1[7] = 0
arg1[1] = 0
arg1[2] = 0
arg1[3] = 0
arg1[4] = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
