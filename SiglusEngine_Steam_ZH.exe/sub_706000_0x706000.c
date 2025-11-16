// 函数: sub_706000
// 地址: 0x706000
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cf930
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct NT3::C_d3d_effect_semantics_struct::VTable** var_cc = arg1
int32_t var_8_1 = 0
void* var_fc = 0xffffffff
int32_t var_100 = 0
int32_t var_e4 = 0xf
int32_t var_e8 = 0
void* arg_8
void** var_104 = &arg_8
char var_f8 = 0
sub_541b40(&var_f8, var_104, var_100, var_fc)
sub_704aa0(arg1, var_f8)
var_8_1.b = 1
uint32_t var_e4_1 = 0x80
*arg1 = &NT3::C_d3d_effect_vertex_output_semantics_struct::`vftable'{for `NT3::C_d3d_effect_semantics_struct'}
struct NT3::C_d3d_effect_global_val::VTable** eax_4 = sub_745f3f(var_e4_1)
struct NT3::C_d3d_effect_global_val::VTable** var_b0 = eax_4
var_8_1.b = 2
void var_140
void var_128
void var_110
struct NT3::C_d3d_effect_global_val::VTable** edx

if (eax_4 == 0)
    edx = nullptr
else
    char* var_c0_1 = &var_f8
    sub_541920(&var_f8, "POSITION")
    void* const eax_5 = &data_b088fc
    var_8_1.b = 3
    
    if ((arg2.b & 1) == 0)
        eax_5 = "**/error/**"
    
    void* var_bc_1 = &var_110
    sub_541920(&var_110, eax_5)
    var_8_1.b = 4
    void* var_c4_1 = &var_128
    sub_541920(&var_128, "float4")
    var_8_1.b = 5
    sub_541920(&var_140, "Out")
    var_8_1.b = 2
    edx = sub_703610(eax_4)

arg1[9] = edx
int32_t* var_b4 = &arg1[9]
arg1[0xa] = 0
void* var_e4_2 = &arg1[0xa]
var_8_1.b = 6
sub_70d480(&arg1[0xa], edx, &arg1[9])
var_8_1.b = 7
struct NT3::C_d3d_effect_global_val::VTable** eax_8 = sub_745f3f(0x80)
struct NT3::C_d3d_effect_global_val::VTable** var_b4_1 = eax_8
var_8_1.b = 8
struct NT3::C_d3d_effect_global_val::VTable** edx_1

if (eax_8 == 0)
    edx_1 = nullptr
else
    char* var_c4_2 = &var_f8
    sub_541920(&var_f8, "COLOR0")
    char const* const eax_9 = "color0"
    var_8_1.b = 9
    
    if ((arg2 & 0x100) == 0)
        eax_9 = "**/error/**"
    
    void* var_bc_2 = &var_110
    sub_541920(&var_110, eax_9)
    var_8_1.b = 0xa
    void* var_c0_2 = &var_128
    sub_541920(&var_128, "float4")
    var_8_1.b = 0xb
    sub_541920(&var_140, "Out")
    var_8_1.b = 8
    edx_1 = sub_703610(eax_8)

arg1[0xb] = edx_1
int32_t* var_b4_2 = &arg1[0xb]
arg1[0xc] = 0
void* var_e4_3 = &arg1[0xc]
var_8_1.b = 0xc
sub_70d480(&arg1[0xc], edx_1, &arg1[0xb])
var_8_1.b = 0xd
struct NT3::C_d3d_effect_global_val::VTable** eax_12 = sub_745f3f(0x80)
struct NT3::C_d3d_effect_global_val::VTable** var_b4_3 = eax_12
var_8_1.b = 0xe
struct NT3::C_d3d_effect_global_val::VTable** edx_2

if (eax_12 == 0)
    edx_2 = nullptr
else
    char* var_c4_3 = &var_f8
    sub_541920(&var_f8, "COLOR1")
    char const* const eax_13 = "color1"
    var_8_1.b = 0xf
    
    if ((arg2 & 0x80000) == 0)
        eax_13 = "**/error/**"
    
    void* var_bc_3 = &var_110
    sub_541920(&var_110, eax_13)
    var_8_1.b = 0x10
    void* var_c0_3 = &var_128
    sub_541920(&var_128, "float4")
    var_8_1.b = 0x11
    sub_541920(&var_140, "Out")
    var_8_1.b = 0xe
    edx_2 = sub_703610(eax_12)

arg1[0xd] = edx_2
int32_t* var_b4_4 = &arg1[0xd]
arg1[0xe] = 0
void* var_e4_4 = &arg1[0xe]
var_8_1.b = 0x12
sub_70d480(&arg1[0xe], edx_2, &arg1[0xd])
var_8_1.b = 0x13
struct NT3::C_d3d_effect_global_val::VTable** eax_16 = sub_745f3f(0x80)
struct NT3::C_d3d_effect_global_val::VTable** var_b4_5 = eax_16
var_8_1.b = 0x14
struct NT3::C_d3d_effect_global_val::VTable** edx_3

if (eax_16 == 0)
    edx_3 = nullptr
else
    char* var_c4_4 = &var_f8
    sub_541920(&var_f8, "TEXCOORD0")
    char const* const eax_17 = "tex0"
    var_8_1.b = 0x15
    
    if ((arg2.b & 0x20) == 0)
        eax_17 = "**/error/**"
    
    void* var_bc_4 = &var_110
    sub_541920(&var_110, eax_17)
    var_8_1.b = 0x16
    void* var_c0_4 = &var_128
    sub_541920(&var_128, "float4")
    var_8_1.b = 0x17
    sub_541920(&var_140, "Out")
    var_8_1.b = 0x14
    edx_3 = sub_703610(eax_16)

arg1[0xf] = edx_3
int32_t* var_b4_6 = &arg1[0xf]
arg1[0x10] = 0
void* var_e4_5 = &arg1[0x10]
var_8_1.b = 0x18
sub_70d480(&arg1[0x10], edx_3, &arg1[0xf])
var_8_1.b = 0x19
struct NT3::C_d3d_effect_global_val::VTable** eax_20 = sub_745f3f(0x80)
struct NT3::C_d3d_effect_global_val::VTable** var_b4_7 = eax_20
var_8_1.b = 0x1a
struct NT3::C_d3d_effect_global_val::VTable** edx_4

if (eax_20 == 0)
    edx_4 = nullptr
else
    char* var_c4_5 = &var_f8
    sub_541920(&var_f8, "TEXCOORD1")
    char const* const eax_21 = "tex1"
    var_8_1.b = 0x1b
    
    if ((arg2 & 0x800) == 0)
        eax_21 = "**/error/**"
    
    void* var_bc_5 = &var_110
    sub_541920(&var_110, eax_21)
    var_8_1.b = 0x1c
    void* var_c0_5 = &var_128
    sub_541920(&var_128, "float4")
    var_8_1.b = 0x1d
    sub_541920(&var_140, "Out")
    var_8_1.b = 0x1a
    edx_4 = sub_703610(eax_20)

arg1[0x11] = edx_4
int32_t* var_b4_8 = &arg1[0x11]
arg1[0x12] = 0
void* var_e4_6 = &arg1[0x12]
var_8_1.b = 0x1e
sub_70d480(&arg1[0x12], edx_4, &arg1[0x11])
var_8_1.b = 0x1f
struct NT3::C_d3d_effect_global_val::VTable** eax_24 = sub_745f3f(0x80)
struct NT3::C_d3d_effect_global_val::VTable** var_b4_9 = eax_24
var_8_1.b = 0x20
struct NT3::C_d3d_effect_global_val::VTable** edx_5

if (eax_24 == 0)
    edx_5 = nullptr
else
    char* var_c4_6 = &var_f8
    sub_541920(&var_f8, "TEXCOORD2")
    char const* const eax_25 = "tex2"
    var_8_1.b = 0x21
    
    if ((arg2 & 0x1000) == 0)
        eax_25 = "**/error/**"
    
    void* var_bc_6 = &var_110
    sub_541920(&var_110, eax_25)
    var_8_1.b = 0x22
    void* var_c0_6 = &var_128
    sub_541920(&var_128, "float4")
    var_8_1.b = 0x23
    sub_541920(&var_140, "Out")
    var_8_1.b = 0x20
    edx_5 = sub_703610(eax_24)

arg1[0x13] = edx_5
int32_t* var_b4_10 = &arg1[0x13]
arg1[0x14] = 0
void* var_e4_7 = &arg1[0x14]
var_8_1.b = 0x24
sub_70d480(&arg1[0x14], edx_5, &arg1[0x13])
var_8_1.b = 0x25
struct NT3::C_d3d_effect_global_val::VTable** eax_28 = sub_745f3f(0x80)
struct NT3::C_d3d_effect_global_val::VTable** var_b4_11 = eax_28
var_8_1.b = 0x26
struct NT3::C_d3d_effect_global_val::VTable** edx_6

if (eax_28 == 0)
    edx_6 = nullptr
else
    char* var_c4_7 = &var_f8
    sub_541920(&var_f8, "TEXCOORD3")
    char const* const eax_29 = "tex3"
    var_8_1.b = 0x27
    
    if ((arg2 & 0x2000) == 0)
        eax_29 = "**/error/**"
    
    void* var_bc_7 = &var_110
    sub_541920(&var_110, eax_29)
    var_8_1.b = 0x28
    void* var_c0_7 = &var_128
    sub_541920(&var_128, "float4")
    var_8_1.b = 0x29
    sub_541920(&var_140, "Out")
    var_8_1.b = 0x26
    edx_6 = sub_703610(eax_28)

arg1[0x15] = edx_6
int32_t* var_b4_12 = &arg1[0x15]
arg1[0x16] = 0
void* var_e4_8 = &arg1[0x16]
var_8_1.b = 0x2a
sub_70d480(&arg1[0x16], edx_6, &arg1[0x15])
var_8_1.b = 0x2b
struct NT3::C_d3d_effect_global_val::VTable** eax_32 = sub_745f3f(0x80)
struct NT3::C_d3d_effect_global_val::VTable** var_b4_13 = eax_32
var_8_1.b = 0x2c
struct NT3::C_d3d_effect_global_val::VTable** edx_7

if (eax_32 == 0)
    edx_7 = nullptr
else
    char* var_c4_8 = &var_f8
    sub_541920(&var_f8, "TEXCOORD4")
    char const* const eax_33 = "tex4"
    var_8_1.b = 0x2d
    
    if ((arg2 & 0x4000) == 0)
        eax_33 = "**/error/**"
    
    void* var_bc_8 = &var_110
    sub_541920(&var_110, eax_33)
    var_8_1.b = 0x2e
    void* var_c0_8 = &var_128
    sub_541920(&var_128, "float4")
    var_8_1.b = 0x2f
    sub_541920(&var_140, "Out")
    var_8_1.b = 0x2c
    edx_7 = sub_703610(eax_32)

arg1[0x17] = edx_7
int32_t* var_b4_14 = &arg1[0x17]
arg1[0x18] = 0
void* var_e4_9 = &arg1[0x18]
var_8_1.b = 0x30
sub_70d480(&arg1[0x18], edx_7, &arg1[0x17])
var_8_1.b = 0x31
struct NT3::C_d3d_effect_global_val::VTable** eax_36 = sub_745f3f(0x80)
struct NT3::C_d3d_effect_global_val::VTable** var_b4_15 = eax_36
var_8_1.b = 0x32
struct NT3::C_d3d_effect_global_val::VTable** edx_8

if (eax_36 == 0)
    edx_8 = nullptr
else
    char* var_c4_9 = &var_f8
    sub_541920(&var_f8, "TEXCOORD5")
    char const* const eax_37 = "tex5"
    var_8_1.b = 0x33
    
    if ((arg2 & 0x8000) == 0)
        eax_37 = "**/error/**"
    
    void* var_bc_9 = &var_110
    sub_541920(&var_110, eax_37)
    var_8_1.b = 0x34
    void* var_c0_9 = &var_128
    sub_541920(&var_128, "float4")
    var_8_1.b = 0x35
    sub_541920(&var_140, "Out")
    var_8_1.b = 0x32
    edx_8 = sub_703610(eax_36)

arg1[0x19] = edx_8
int32_t* var_b4_16 = &arg1[0x19]
arg1[0x1a] = 0
void* var_e4_10 = &arg1[0x1a]
var_8_1.b = 0x36
sub_70d480(&arg1[0x1a], edx_8, &arg1[0x19])
var_8_1.b = 0x37
struct NT3::C_d3d_effect_global_val::VTable** eax_40 = sub_745f3f(0x80)
struct NT3::C_d3d_effect_global_val::VTable** var_b4_17 = eax_40
var_8_1.b = 0x38
struct NT3::C_d3d_effect_global_val::VTable** edx_9

if (eax_40 == 0)
    edx_9 = nullptr
else
    char* var_c4_10 = &var_f8
    sub_541920(&var_f8, "TEXCOORD6")
    char const* const eax_41 = "tex6"
    var_8_1.b = 0x39
    
    if ((arg2 & 0x10000) == 0)
        eax_41 = "**/error/**"
    
    void* var_bc_10 = &var_110
    sub_541920(&var_110, eax_41)
    var_8_1.b = 0x3a
    void* var_c0_10 = &var_128
    sub_541920(&var_128, "float4")
    var_8_1.b = 0x3b
    sub_541920(&var_140, "Out")
    var_8_1.b = 0x38
    edx_9 = sub_703610(eax_40)

arg1[0x1b] = edx_9
int32_t* var_b4_18 = &arg1[0x1b]
arg1[0x1c] = 0
void* var_e4_11 = &arg1[0x1c]
var_8_1.b = 0x3c
sub_70d480(&arg1[0x1c], edx_9, &arg1[0x1b])
var_8_1.b = 0x3d
struct NT3::C_d3d_effect_global_val::VTable** eax_44 = sub_745f3f(0x80)
struct NT3::C_d3d_effect_global_val::VTable** var_b4_19 = eax_44
var_8_1.b = 0x3e
struct NT3::C_d3d_effect_global_val::VTable** edx_10

if (eax_44 == 0)
    edx_10 = nullptr
else
    char* var_c4_11 = &var_f8
    sub_541920(&var_f8, "TEXCOORD7")
    char const* const eax_45 = "tex7"
    var_8_1.b = 0x3f
    
    if ((arg2 & 0x20000) == 0)
        eax_45 = "**/error/**"
    
    void* var_bc_11 = &var_110
    sub_541920(&var_110, eax_45)
    var_8_1.b = 0x40
    void* var_c0_11 = &var_128
    sub_541920(&var_128, "float4")
    var_8_1.b = 0x41
    sub_541920(&var_140, "Out")
    var_8_1.b = 0x3e
    edx_10 = sub_703610(eax_44)

arg1[0x1d] = edx_10
int32_t* var_b4_20 = &arg1[0x1d]
arg1[0x1e] = 0
void* var_e4_12 = &arg1[0x1e]
var_8_1.b = 0x42
sub_70d480(&arg1[0x1e], edx_10, &arg1[0x1d])
int32_t var_70[0x2]
var_70[0] = arg1[9]
void* eax_49 = arg1[0xa]
var_70[1] = eax_49

if (eax_49 != 0)
    *(eax_49 + 4)
    *(eax_49 + 4) += 1

int32_t var_68 = arg1[0xb]
void* eax_52 = arg1[0xc]
void* var_64 = eax_52

if (eax_52 != 0)
    *(eax_52 + 4)
    *(eax_52 + 4) += 1

int32_t var_60 = arg1[0xd]
void* eax_55 = arg1[0xe]
void* var_5c = eax_55

if (eax_55 != 0)
    *(eax_55 + 4)
    *(eax_55 + 4) += 1

int32_t var_58 = arg1[0xf]
void* eax_58 = arg1[0x10]
void* var_54 = eax_58

if (eax_58 != 0)
    *(eax_58 + 4)
    *(eax_58 + 4) += 1

int32_t var_50 = arg1[0x11]
void* eax_61 = arg1[0x12]
void* var_4c = eax_61

if (eax_61 != 0)
    *(eax_61 + 4)
    *(eax_61 + 4) += 1

int32_t var_48 = arg1[0x13]
void* eax_64 = arg1[0x14]
void* var_44 = eax_64

if (eax_64 != 0)
    *(eax_64 + 4)
    *(eax_64 + 4) += 1

int32_t var_40 = arg1[0x15]
void* eax_67 = arg1[0x16]
void* var_3c = eax_67

if (eax_67 != 0)
    *(eax_67 + 4)
    *(eax_67 + 4) += 1

int32_t var_38 = arg1[0x17]
void* eax_70 = arg1[0x18]
void* var_34 = eax_70

if (eax_70 != 0)
    *(eax_70 + 4)
    *(eax_70 + 4) += 1

int32_t var_30 = arg1[0x19]
void* eax_73 = arg1[0x1a]
void* var_2c = eax_73

if (eax_73 != 0)
    *(eax_73 + 4)
    *(eax_73 + 4) += 1

int32_t var_28 = arg1[0x1b]
void* eax_76 = arg1[0x1c]
void* var_24 = eax_76

if (eax_76 != 0)
    *(eax_76 + 4)
    *(eax_76 + 4) += 1

int32_t var_20 = arg1[0x1d]
void* eax_79 = arg1[0x1e]
void* var_1c = eax_79

if (eax_79 != 0)
    *(eax_79 + 4)
    *(eax_79 + 4) += 1

var_8_1.b = 0x44

for (int32_t i = 0; i s< 0xb; i += 1)
    int32_t var_a8
    int32_t* eax_83 = (*(*(&var_70)[i][0] + 4))(&var_a8)
    int32_t var_7c_1 = 0xf
    int32_t var_80_1 = 0
    char var_90 = 0
    
    if (eax_83[5] u>= 0x10)
        var_90.d = *eax_83
        *eax_83 = 0
    else
        void* eax_84 = eax_83[4]
        
        if (eax_84 != 0xffffffff)
            _memcpy(&var_90, eax_83, eax_84 + 1, eax_2)
    
    int32_t var_80_2 = eax_83[4]
    int32_t eax_88 = eax_83[5]
    eax_83[5] = 0xf
    eax_83[4] = 0
    *eax_83 = 0
    int32_t var_78_1 = (&var_70)[i][0]
    var_6c
    int32_t* eax_90 = *(&var_6c + (i << 3))
    
    if (eax_90 != 0)
        eax_90[1]
        eax_90[1] += 1
    
    var_8_1.b = 0x46
    int32_t* eax_92
    void* ecx_82
    eax_92, ecx_82 = sub_70d1f0(&var_90)
    int32_t* var_e4_16 = eax_92
    void* var_e8_12 = &eax_92[4]
    void** var_b8
    sub_70d2b0(&arg1[7], &var_b8, ecx_82)
    var_8_1.b = 0x47
    
    if (eax_90 != 0)
        bool cond:11_1 = eax_90[1] != 1
        eax_90[1]
        eax_90[1] -= 1
        
        if (not(cond:11_1))
            (*(*eax_90 + 4))(eax_2)
            bool cond:13_1 = eax_90[2] != 1
            eax_90[2]
            eax_90[2] -= 1
            
            if (not(cond:13_1))
                (*(*eax_90 + 8))()
    
    if (eax_88 u>= 0x10)
        j__free(var_90.d)
    
    var_8_1.b = 0x44
    int32_t var_7c_3 = 0xf
    int32_t var_80_3 = 0
    var_90 = 0
    int32_t var_94
    
    if (var_94 u>= 0x10)
        j__free(var_a8)

var_8_1.b = 0x43
`eh vector vbase constructor iterator'(&var_70, 8, 0xb, sub_54b010)

if (arg3 u>= 0x10)
    j__free(arg_8)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return arg1
