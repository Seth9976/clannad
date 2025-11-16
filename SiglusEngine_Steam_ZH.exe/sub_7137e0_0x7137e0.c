// 函数: sub_7137e0
// 地址: 0x7137e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9d1611
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_14 = 0
struct NT3::C_d3d_light_interface::NT3::C_d3d_spot_light::VTable** eax_3
struct NT3::C_d3d_light_interface::NT3::C_d3d_spot_light::VTable** ecx
eax_3, ecx = sub_745f3f(0x70)
struct NT3::C_d3d_light_interface::NT3::C_d3d_spot_light::VTable** eax_4

if (eax_3 == 0)
    eax_4 = nullptr
else
    ecx = eax_3
    eax_4 = sub_6ff690(ecx)

int32_t* var_18 = nullptr
int32_t var_8_1 = 1
int32_t* var_30 = &var_18
sub_713db0(eax_4, eax_4, ecx)
int32_t var_1c_1 = 0
*arg1 = eax_4
int32_t* eax_6 = var_18
arg1[1] = 0
int32_t* edi = arg1[1]
var_18 = edi
arg1[1] = eax_6
int32_t var_8_2 = 0
int32_t var_14_1 = 1

if (edi != 0)
    bool cond:0_1 = edi[1] != 1
    edi[1]
    edi[1] -= 1
    
    if (not(cond:0_1))
        (*(*edi + 4))(eax_2)
        int32_t ebx_1 = edi[2]
        edi[2] -= 1
        
        if (ebx_1 == 1)
            (*(*edi + 8))()

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
