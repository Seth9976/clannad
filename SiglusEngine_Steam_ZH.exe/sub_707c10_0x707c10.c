// 函数: sub_707c10
// 地址: 0x707c10
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cfaf8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct NT3::C_d3d_effect_semantics_struct::VTable** var_8c = arg1
int32_t var_8_1 = 0
void* var_bc = 0xffffffff
int32_t var_c0 = 0
int32_t var_a4 = 0xf
int32_t var_a8 = 0
void* arg_8
void** var_c4 = &arg_8
char var_b8 = 0
sub_541b40(&var_b8, var_c4, var_c0, var_bc)
sub_704aa0(arg1, var_b8)
var_8_1.b = 1
uint32_t var_a4_1 = 0x80
*arg1 = &NT3::C_d3d_effect_pixel_output_semantics_struct::`vftable'{for `NT3::C_d3d_effect_semantics_struct'}
struct NT3::C_d3d_effect_global_val::VTable** eax_3 = sub_745f3f(var_a4_1)
struct NT3::C_d3d_effect_global_val::VTable** var_6c = eax_3
var_8_1.b = 2
void var_100
void var_e8
void var_d0
struct NT3::C_d3d_effect_global_val::VTable** edx

if (eax_3 == 0)
    edx = nullptr
else
    char* var_88_1 = &var_b8
    sub_541920(&var_b8, "COLOR0")
    var_8_1.b = 3
    char const* const eax_4 = "color0"
    
    if ((arg2 & 0x100) == 0)
        eax_4 = "**/error/**"
    
    void* var_78_1 = &var_d0
    sub_541920(&var_d0, eax_4)
    var_8_1.b = 4
    void* var_80_1 = &var_e8
    sub_541920(&var_e8, "float4")
    var_8_1.b = 5
    sub_541920(&var_100, "Out")
    var_8_1.b = 2
    edx = sub_703610(eax_3)

arg1[9] = edx
int32_t* var_70 = &arg1[9]
arg1[0xa] = 0
void* var_a4_2 = &arg1[0xa]
var_8_1.b = 6
sub_70d480(&arg1[0xa], edx, &arg1[9])
var_8_1.b = 7
struct NT3::C_d3d_effect_global_val::VTable** eax_7 = sub_745f3f(0x80)
struct NT3::C_d3d_effect_global_val::VTable** var_70_1 = eax_7
var_8_1.b = 8
struct NT3::C_d3d_effect_global_val::VTable** edx_1

if (eax_7 == 0)
    edx_1 = nullptr
else
    char* var_80_2 = &var_b8
    sub_541920(&var_b8, "COLOR1")
    char const* const eax_8 = "color1"
    var_8_1.b = 9
    
    if ((arg2 & 0x80000) == 0)
        eax_8 = "**/error/**"
    
    void* var_78_2 = &var_d0
    sub_541920(&var_d0, eax_8)
    var_8_1.b = 0xa
    void* var_88_2 = &var_e8
    sub_541920(&var_e8, "float4")
    var_8_1.b = 0xb
    sub_541920(&var_100, "Out")
    var_8_1.b = 8
    edx_1 = sub_703610(eax_7)

arg1[0xb] = edx_1
int32_t* var_70_2 = &arg1[0xb]
arg1[0xc] = 0
void* var_a4_3 = &arg1[0xc]
var_8_1.b = 0xc
sub_70d480(&arg1[0xc], edx_1, &arg1[0xb])
var_8_1.b = 0xd
struct NT3::C_d3d_effect_global_val::VTable** eax_11 = sub_745f3f(0x80)
var_8_1.b = 0xe
struct NT3::C_d3d_effect_global_val::VTable** edx_2

if (eax_11 == 0)
    edx_2 = nullptr
else
    char* var_70_3 = &var_b8
    sub_541920(&var_b8, "DEPTH")
    char const* const eax_12 = "depth"
    var_8_1.b = 0xf
    
    if ((arg2 & 0x400) == 0)
        eax_12 = "**/error/**"
    
    void* var_80_3 = &var_d0
    sub_541920(&var_d0, eax_12)
    var_8_1.b = 0x10
    void* var_78_3 = &var_e8
    sub_541920(&var_e8, "float")
    var_8_1.b = 0x11
    sub_541920(&var_100, "Out")
    var_8_1.b = 0xe
    edx_2 = sub_703610(eax_11)

void* var_70_4 = &arg1[0xd]
arg1[0xd] = edx_2
arg1[0xe] = 0
void* var_a4_4 = &arg1[0xe]
var_8_1.b = 0x12
sub_70d480(&arg1[0xe], edx_2, &arg1[0xd])
int32_t var_30[0x2]
var_30[0] = arg1[9]
void* eax_16 = arg1[0xa]
var_30[1] = eax_16

if (eax_16 != 0)
    *(eax_16 + 4)
    *(eax_16 + 4) += 1

int32_t var_28 = arg1[0xb]
void* eax_19 = arg1[0xc]
void* var_24 = eax_19

if (eax_19 != 0)
    *(eax_19 + 4)
    *(eax_19 + 4) += 1

int32_t var_20 = arg1[0xd]
void* eax_22 = arg1[0xe]
void* var_1c = eax_22

if (eax_22 != 0)
    *(eax_22 + 4)
    *(eax_22 + 4) += 1

var_8_1.b = 0x14

for (int32_t i = 0; i s< 3; i += 1)
    int32_t var_68
    int32_t* eax_27 = (*(*(&var_30)[i][0] + 4))(&var_68)
    int32_t var_3c_1 = 0xf
    int32_t var_40_1 = 0
    char var_50 = 0
    
    if (eax_27[5] u>= 0x10)
        var_50.d = *eax_27
        *eax_27 = 0
    else
        void* eax_28 = eax_27[4]
        
        if (eax_28 != 0xffffffff)
            _memcpy(&var_50, eax_27, eax_28 + 1, eax_2)
    
    int32_t var_40_2 = eax_27[4]
    int32_t eax_32 = eax_27[5]
    eax_27[5] = 0xf
    eax_27[4] = 0
    *eax_27 = 0
    int32_t var_38_1 = (&var_30)[i][0]
    var_2c
    int32_t* eax_34 = *(&var_2c + (i << 3))
    
    if (eax_34 != 0)
        eax_34[1]
        eax_34[1] += 1
    
    var_8_1.b = 0x16
    int32_t* eax_36
    void* ecx_26
    eax_36, ecx_26 = sub_70d1f0(&var_50)
    int32_t* var_a4_8 = eax_36
    void* var_a8_4 = &eax_36[4]
    void** var_74
    sub_70d2b0(&arg1[7], &var_74, ecx_26)
    var_8_1.b = 0x17
    
    if (eax_34 != 0)
        bool cond:3_1 = eax_34[1] != 1
        eax_34[1]
        eax_34[1] -= 1
        
        if (not(cond:3_1))
            (*(*eax_34 + 4))(eax_2)
            bool cond:5_1 = eax_34[2] != 1
            eax_34[2]
            eax_34[2] -= 1
            
            if (not(cond:5_1))
                (*(*eax_34 + 8))()
    
    if (eax_32 u>= 0x10)
        j__free(var_50.d)
    
    var_8_1.b = 0x14
    int32_t var_3c_3 = 0xf
    int32_t var_40_3 = 0
    var_50 = 0
    int32_t var_54
    
    if (var_54 u>= 0x10)
        j__free(var_68)

var_8_1.b = 0x13
`eh vector vbase constructor iterator'(&var_30, 8, 3, sub_54b010)

if (arg3 u>= 0x10)
    j__free(arg_8)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return arg1
