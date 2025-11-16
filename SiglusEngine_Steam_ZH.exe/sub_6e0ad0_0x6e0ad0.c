// 函数: sub_6e0ad0
// 地址: 0x6e0ad0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9ccc43
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct NT3::C_sound_stream_base::NT3::C_nwa_stream::VTable** var_14 = arg1
arg1[1] = 0
arg1[2] = 0
arg1[3] = 0
arg1[4] = 0
int32_t var_8_1 = 0
*arg1 = &NT3::C_nwa_stream::`vftable'{for `NT3::C_sound_stream_base'}
arg1[5] = 0
arg1[6] = 0
var_8_1.b = 1
int32_t* eax_3
int32_t* ecx
eax_3, ecx = sub_745f3f(0x5c)

if (eax_3 == 0)
    eax_3 = nullptr
else
    eax_3[0xe] = 0
    eax_3[0xf] = 0
    eax_3[0x10] = 0
    eax_3[0x12] = 0
    eax_3[0x13] = 0
    eax_3[0x14] = 0
    *eax_3 = 0
    eax_3[2] = 0
    eax_3[0x15] = 0xffffffff

int32_t* var_18 = nullptr
var_8_1.b = 2
int32_t* var_30 = &var_18
sub_6e0eb0(eax_3, eax_3, ecx)
var_8_1.b = 3
int32_t* edi = nullptr
int32_t* ecx_1 = var_18
arg1[5] = eax_3
int32_t* ebx = arg1[6]
arg1[6] = ecx_1
var_18 = nullptr
int32_t var_1c_1 = 0

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
    
    edi = var_18

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

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
