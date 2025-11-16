// 函数: sub_708060
// 地址: 0x708060
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cfb3e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct NT3::C_d3d_effect_semantics_struct::NT3::C_d3d_effect_pixel_output_semantics_struct::VTable**
     var_14 = arg1
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
var_14 = arg1
*arg1 = &NT3::C_d3d_effect_pixel_output_semantics_struct::`vftable'{for `NT3::C_d3d_effect_semantics_struct'}
int32_t var_8_1 = 2
int32_t* ebx = arg1[0xe]

if (ebx != 0)
    bool cond:0_1 = ebx[1] != 1
    ebx[1]
    ebx[1] -= 1
    
    if (not(cond:0_1))
        (*(*ebx + 4))(eax_2)
        bool cond:2_1 = ebx[2] != 1
        ebx[2]
        ebx[2] -= 1
        
        if (not(cond:2_1))
            (*(*ebx + 8))()

var_8_1.b = 1
int32_t* ebx_1 = arg1[0xc]

if (ebx_1 != 0)
    bool cond:1_1 = ebx_1[1] != 1
    ebx_1[1]
    ebx_1[1] -= 1
    
    if (not(cond:1_1))
        (*(*ebx_1 + 4))(eax_2)
        bool cond:4_1 = ebx_1[2] != 1
        ebx_1[2]
        ebx_1[2] -= 1
        
        if (not(cond:4_1))
            (*(*ebx_1 + 8))()

var_8_1.b = 0
int32_t* ebx_2 = arg1[0xa]

if (ebx_2 != 0)
    bool cond:3_1 = ebx_2[1] != 1
    ebx_2[1]
    ebx_2[1] -= 1
    
    if (not(cond:3_1))
        (*(*ebx_2 + 4))(eax_2)
        int32_t esi_1 = ebx_2[2]
        ebx_2[2] -= 1
        
        if (esi_1 == 1)
            (*(*ebx_2 + 8))()

int32_t var_8_2 = 0xffffffff
int32_t** eax_15 = arg1[7]
sub_70c7b0(&arg1[7], &var_14, *eax_15, eax_15)
int32_t result = j__free(arg1[7])

if (arg1[6] u>= 0x10)
    result = j__free(arg1[1])

arg1[6] = 0xf
arg1[5] = 0
arg1[1].b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
