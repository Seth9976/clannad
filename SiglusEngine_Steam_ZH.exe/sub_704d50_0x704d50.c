// 函数: sub_704d50
// 地址: 0x704d50
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cf43e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct NT3::C_d3d_effect_semantics_struct::VTable** var_c0 = arg1
int32_t var_8_1 = 0
void* var_ec = 0xffffffff
int32_t var_f0 = 0
int32_t var_d4 = 0xf
int32_t var_d8 = 0
void* arg_8
void** var_f4 = &arg_8
char var_e8 = 0
sub_541b40(&var_e8, var_f4, var_f0, var_ec)
sub_704aa0(arg1, var_e8)
var_8_1.b = 1
uint32_t var_d4_1 = 0xa0
*arg1 = &NT3::C_d3d_effect_vertex_input_semantics_struct::`vftable'{for `NT3::C_d3d_effect_semantics_struct'}
struct NT3::C_d3d_effect_semantics_struct::SemanticsVal::NT3::C_d3d_effect_vertex_input_semantics_struct::VertexInputSemanticsVal::VTable
    ** eax_3 = sub_745f3f(var_d4_1)
struct NT3::C_d3d_effect_semantics_struct::SemanticsVal::NT3::C_d3d_effect_vertex_input_semantics_struct::VertexInputSemanticsVal::VTable
    ** var_a8 = eax_3
var_8_1.b = 2
void var_134
void var_11c
void var_104
struct NT3::C_d3d_effect_semantics_struct::SemanticsVal::NT3::C_d3d_effect_vertex_input_semantics_struct::VertexInputSemanticsVal::VTable
    ** edx

if (eax_3 == 0)
    edx = nullptr
else
    int32_t var_d4_2 = 1
    void** var_b0_1 = &var_ec
    sub_541920(&var_ec, "POSITION")
    var_8_1.b = 3
    void* const eax_4 = &data_b088fc
    
    if ((arg2.b & 1) == 0)
        eax_4 = "**/error/**"
    
    void* var_a4_1 = &var_104
    sub_541920(&var_104, eax_4)
    var_8_1.b = 4
    void* var_bc_1 = &var_11c
    sub_541920(&var_11c, "float4")
    var_8_1.b = 5
    sub_541920(&var_134, "In")
    var_8_1.b = 2
    edx = sub_704b40(eax_3)

arg1[9] = edx
int32_t* var_b4 = &arg1[9]
arg1[0xa] = 0
void* var_d4_3 = &arg1[0xa]
var_8_1.b = 6
sub_70d180(&arg1[0xa], edx, &arg1[9])
var_8_1.b = 7
struct NT3::C_d3d_effect_semantics_struct::SemanticsVal::NT3::C_d3d_effect_vertex_input_semantics_struct::VertexInputSemanticsVal::VTable
    ** eax_7 = sub_745f3f(0xa0)
struct NT3::C_d3d_effect_semantics_struct::SemanticsVal::NT3::C_d3d_effect_vertex_input_semantics_struct::VertexInputSemanticsVal::VTable
    ** var_b4_1 = eax_7
var_8_1.b = 8
struct NT3::C_d3d_effect_semantics_struct::SemanticsVal::NT3::C_d3d_effect_vertex_input_semantics_struct::VertexInputSemanticsVal::VTable
    ** edx_1

if (eax_7 == 0)
    edx_1 = nullptr
else
    int32_t var_d4_4 = 2
    void** var_bc_2 = &var_ec
    sub_541920(&var_ec, "BLENDWEIGHT")
    var_8_1.b = 9
    char const* const eax_8 = "blendWeight"
    
    if ((arg2.b & 2) == 0)
        eax_8 = "**/error/**"
    
    void* var_a8_1 = &var_104
    sub_541920(&var_104, eax_8)
    var_8_1.b = 0xa
    void* var_b0_2 = &var_11c
    sub_541920(&var_11c, "float4")
    var_8_1.b = 0xb
    sub_541920(&var_134, "In")
    var_8_1.b = 8
    edx_1 = sub_704b40(eax_7)

void* var_b4_2 = &arg1[0xb]
arg1[0xb] = edx_1
arg1[0xc] = 0
void* var_d4_5 = &arg1[0xc]
var_8_1.b = 0xc
sub_70d180(&arg1[0xc], edx_1, &arg1[0xb])
var_8_1.b = 0xd
struct NT3::C_d3d_effect_semantics_struct::SemanticsVal::NT3::C_d3d_effect_vertex_input_semantics_struct::VertexInputSemanticsVal::VTable
    ** eax_11 = sub_745f3f(0xa0)
struct NT3::C_d3d_effect_semantics_struct::SemanticsVal::NT3::C_d3d_effect_vertex_input_semantics_struct::VertexInputSemanticsVal::VTable
    ** var_b4_3 = eax_11
var_8_1.b = 0xe
struct NT3::C_d3d_effect_semantics_struct::SemanticsVal::NT3::C_d3d_effect_vertex_input_semantics_struct::VertexInputSemanticsVal::VTable
    ** edx_2

if (eax_11 == 0)
    edx_2 = nullptr
else
    int32_t var_d4_6 = 4
    void** var_bc_3 = &var_ec
    sub_541920(&var_ec, "BLENDINDICES")
    var_8_1.b = 0xf
    char const* const eax_12 = "blendIndices"
    
    if ((arg2.b & 4) == 0)
        eax_12 = "**/error/**"
    
    void* var_a8_2 = &var_104
    sub_541920(&var_104, eax_12)
    var_8_1.b = 0x10
    void* var_b0_3 = &var_11c
    sub_541920(&var_11c, "float4")
    var_8_1.b = 0x11
    sub_541920(&var_134, "In")
    var_8_1.b = 0xe
    edx_2 = sub_704b40(eax_11)

int32_t* var_b4_4 = &arg1[0xd]
arg1[0xd] = edx_2
arg1[0xe] = 0
void* var_d4_7 = &arg1[0xe]
var_8_1.b = 0x12
sub_70d180(&arg1[0xe], edx_2, &arg1[0xd])
var_8_1.b = 0x13
struct NT3::C_d3d_effect_semantics_struct::SemanticsVal::NT3::C_d3d_effect_vertex_input_semantics_struct::VertexInputSemanticsVal::VTable
    ** eax_15 = sub_745f3f(0xa0)
struct NT3::C_d3d_effect_semantics_struct::SemanticsVal::NT3::C_d3d_effect_vertex_input_semantics_struct::VertexInputSemanticsVal::VTable
    ** var_b4_5 = eax_15
var_8_1.b = 0x14
struct NT3::C_d3d_effect_semantics_struct::SemanticsVal::NT3::C_d3d_effect_vertex_input_semantics_struct::VertexInputSemanticsVal::VTable
    ** edx_3

if (eax_15 == 0)
    edx_3 = nullptr
else
    int32_t var_d4_8 = 8
    void** var_bc_4 = &var_ec
    sub_541920(&var_ec, "NORMAL")
    var_8_1.b = 0x15
    char const* const eax_16 = "normal"
    
    if ((arg2.b & 8) == 0)
        eax_16 = "**/error/**"
    
    void* var_a8_3 = &var_104
    sub_541920(&var_104, eax_16)
    var_8_1.b = 0x16
    void* var_b0_4 = &var_11c
    sub_541920(&var_11c, "float4")
    var_8_1.b = 0x17
    sub_541920(&var_134, "In")
    var_8_1.b = 0x14
    edx_3 = sub_704b40(eax_15)

int32_t* var_b4_6 = &arg1[0xf]
arg1[0xf] = edx_3
arg1[0x10] = 0
void* var_d4_9 = &arg1[0x10]
var_8_1.b = 0x18
sub_70d180(&arg1[0x10], edx_3, &arg1[0xf])
var_8_1.b = 0x19
struct NT3::C_d3d_effect_semantics_struct::SemanticsVal::NT3::C_d3d_effect_vertex_input_semantics_struct::VertexInputSemanticsVal::VTable
    ** eax_19 = sub_745f3f(0xa0)
struct NT3::C_d3d_effect_semantics_struct::SemanticsVal::NT3::C_d3d_effect_vertex_input_semantics_struct::VertexInputSemanticsVal::VTable
    ** var_b4_7 = eax_19
var_8_1.b = 0x1a
struct NT3::C_d3d_effect_semantics_struct::SemanticsVal::NT3::C_d3d_effect_vertex_input_semantics_struct::VertexInputSemanticsVal::VTable
    ** edx_4

if (eax_19 == 0)
    edx_4 = nullptr
else
    int32_t var_d4_10 = 0x10
    void** var_bc_5 = &var_ec
    sub_541920(&var_ec, "PSIZE")
    var_8_1.b = 0x1b
    char const* const eax_20 = "psize"
    
    if ((arg2.b & 0x10) == 0)
        eax_20 = "**/error/**"
    
    void* var_a8_4 = &var_104
    sub_541920(&var_104, eax_20)
    var_8_1.b = 0x1c
    void* var_b0_5 = &var_11c
    sub_541920(&var_11c, "float")
    var_8_1.b = 0x1d
    sub_541920(&var_134, "In")
    var_8_1.b = 0x1a
    edx_4 = sub_704b40(eax_19)

int32_t* var_b4_8 = &arg1[0x11]
arg1[0x11] = edx_4
arg1[0x12] = 0
void* var_d4_11 = &arg1[0x12]
var_8_1.b = 0x1e
sub_70d180(&arg1[0x12], edx_4, &arg1[0x11])
var_8_1.b = 0x1f
struct NT3::C_d3d_effect_semantics_struct::SemanticsVal::NT3::C_d3d_effect_vertex_input_semantics_struct::VertexInputSemanticsVal::VTable
    ** eax_23 = sub_745f3f(0xa0)
struct NT3::C_d3d_effect_semantics_struct::SemanticsVal::NT3::C_d3d_effect_vertex_input_semantics_struct::VertexInputSemanticsVal::VTable
    ** var_b4_9 = eax_23
var_8_1.b = 0x20
struct NT3::C_d3d_effect_semantics_struct::SemanticsVal::NT3::C_d3d_effect_vertex_input_semantics_struct::VertexInputSemanticsVal::VTable
    ** edx_5

if (eax_23 == 0)
    edx_5 = nullptr
else
    int32_t var_d4_12 = 0x20
    void** var_bc_6 = &var_ec
    sub_541920(&var_ec, "TEXCOORD0")
    var_8_1.b = 0x21
    void* const eax_24 = &data_b08980
    
    if ((arg2.b & 0x20) == 0)
        eax_24 = "**/error/**"
    
    void* var_a8_5 = &var_104
    sub_541920(&var_104, eax_24)
    var_8_1.b = 0x22
    void* var_b0_6 = &var_11c
    sub_541920(&var_11c, "float2")
    var_8_1.b = 0x23
    sub_541920(&var_134, "In")
    var_8_1.b = 0x20
    edx_5 = sub_704b40(eax_23)

int32_t* var_b4_10 = &arg1[0x13]
arg1[0x13] = edx_5
arg1[0x14] = 0
void* var_d4_13 = &arg1[0x14]
var_8_1.b = 0x24
sub_70d180(&arg1[0x14], edx_5, &arg1[0x13])
var_8_1.b = 0x25
struct NT3::C_d3d_effect_semantics_struct::SemanticsVal::NT3::C_d3d_effect_vertex_input_semantics_struct::VertexInputSemanticsVal::VTable
    ** eax_27 = sub_745f3f(0xa0)
struct NT3::C_d3d_effect_semantics_struct::SemanticsVal::NT3::C_d3d_effect_vertex_input_semantics_struct::VertexInputSemanticsVal::VTable
    ** var_b4_11 = eax_27
var_8_1.b = 0x26
struct NT3::C_d3d_effect_semantics_struct::SemanticsVal::NT3::C_d3d_effect_vertex_input_semantics_struct::VertexInputSemanticsVal::VTable
    ** edx_6

if (eax_27 == 0)
    edx_6 = nullptr
else
    int32_t var_d4_14 = 0x40
    void** var_bc_7 = &var_ec
    sub_541920(&var_ec, "TANGENT")
    var_8_1.b = 0x27
    char const* const eax_28 = "tangent"
    
    if ((arg2.b & 0x40) == 0)
        eax_28 = "**/error/**"
    
    void* var_a8_6 = &var_104
    sub_541920(&var_104, eax_28)
    var_8_1.b = 0x28
    void* var_b0_7 = &var_11c
    sub_541920(&var_11c, "float4")
    var_8_1.b = 0x29
    sub_541920(&var_134, "In")
    var_8_1.b = 0x26
    edx_6 = sub_704b40(eax_27)

int32_t* var_b4_12 = &arg1[0x15]
arg1[0x15] = edx_6
arg1[0x16] = 0
void* var_d4_15 = &arg1[0x16]
var_8_1.b = 0x2a
sub_70d180(&arg1[0x16], edx_6, &arg1[0x15])
var_8_1.b = 0x2b
struct NT3::C_d3d_effect_semantics_struct::SemanticsVal::NT3::C_d3d_effect_vertex_input_semantics_struct::VertexInputSemanticsVal::VTable
    ** eax_31 = sub_745f3f(0xa0)
struct NT3::C_d3d_effect_semantics_struct::SemanticsVal::NT3::C_d3d_effect_vertex_input_semantics_struct::VertexInputSemanticsVal::VTable
    ** var_b4_13 = eax_31
var_8_1.b = 0x2c
struct NT3::C_d3d_effect_semantics_struct::SemanticsVal::NT3::C_d3d_effect_vertex_input_semantics_struct::VertexInputSemanticsVal::VTable
    ** edx_7

if (eax_31 == 0)
    edx_7 = nullptr
else
    int32_t var_d4_16 = 0x80
    void** var_bc_8 = &var_ec
    sub_541920(&var_ec, "BINORMAL")
    var_8_1.b = 0x2d
    char const* const eax_32 = "binormal"
    
    if ((arg2.b & 0x80) == 0)
        eax_32 = "**/error/**"
    
    void* var_a8_7 = &var_104
    sub_541920(&var_104, eax_32)
    var_8_1.b = 0x2e
    void* var_b0_8 = &var_11c
    sub_541920(&var_11c, "float4")
    var_8_1.b = 0x2f
    sub_541920(&var_134, "In")
    var_8_1.b = 0x2c
    edx_7 = sub_704b40(eax_31)

int32_t* var_b4_14 = &arg1[0x17]
arg1[0x17] = edx_7
arg1[0x18] = 0
void* var_d4_17 = &arg1[0x18]
var_8_1.b = 0x30
sub_70d180(&arg1[0x18], edx_7, &arg1[0x17])
var_8_1.b = 0x31
struct NT3::C_d3d_effect_semantics_struct::SemanticsVal::NT3::C_d3d_effect_vertex_input_semantics_struct::VertexInputSemanticsVal::VTable
    ** eax_35 = sub_745f3f(0xa0)
struct NT3::C_d3d_effect_semantics_struct::SemanticsVal::NT3::C_d3d_effect_vertex_input_semantics_struct::VertexInputSemanticsVal::VTable
    ** var_b4_15 = eax_35
var_8_1.b = 0x32
struct NT3::C_d3d_effect_semantics_struct::SemanticsVal::NT3::C_d3d_effect_vertex_input_semantics_struct::VertexInputSemanticsVal::VTable
    ** edx_8

if (eax_35 == 0)
    edx_8 = nullptr
else
    int32_t var_d4_18 = 0x100
    void** var_bc_9 = &var_ec
    sub_541920(&var_ec, "COLOR0")
    var_8_1.b = 0x33
    char const* const eax_36 = "color"
    
    if ((arg2 & 0x100) == 0)
        eax_36 = "**/error/**"
    
    void* var_a8_8 = &var_104
    sub_541920(&var_104, eax_36)
    var_8_1.b = 0x34
    void* var_b0_9 = &var_11c
    sub_541920(&var_11c, "float4")
    var_8_1.b = 0x35
    sub_541920(&var_134, "In")
    var_8_1.b = 0x32
    edx_8 = sub_704b40(eax_35)

int32_t* var_b4_16 = &arg1[0x19]
arg1[0x19] = edx_8
arg1[0x1a] = 0
void* var_d4_19 = &arg1[0x1a]
var_8_1.b = 0x36
sub_70d180(&arg1[0x1a], edx_8, &arg1[0x19])
var_8_1.b = 0x37
struct NT3::C_d3d_effect_semantics_struct::SemanticsVal::NT3::C_d3d_effect_vertex_input_semantics_struct::VertexInputSemanticsVal::VTable
    ** eax_39 = sub_745f3f(0xa0)
var_8_1.b = 0x38
struct NT3::C_d3d_effect_semantics_struct::SemanticsVal::NT3::C_d3d_effect_vertex_input_semantics_struct::VertexInputSemanticsVal::VTable
    ** edx_9

if (eax_39 == 0)
    edx_9 = nullptr
else
    int32_t var_d4_20 = 0x200
    void** var_b4_17 = &var_ec
    sub_541920(&var_ec, "POSITIONT")
    var_8_1.b = 0x39
    char const* const eax_40 = "positionT"
    
    if ((arg2 & 0x200) == 0)
        eax_40 = "**/error/**"
    
    void* var_bc_10 = &var_104
    sub_541920(&var_104, eax_40)
    var_8_1.b = 0x3a
    void* var_a8_9 = &var_11c
    sub_541920(&var_11c, "float4")
    var_8_1.b = 0x3b
    sub_541920(&var_134, "In")
    var_8_1.b = 0x38
    edx_9 = sub_704b40(eax_39)

int32_t* var_b4_18 = &arg1[0x1b]
arg1[0x1b] = edx_9
arg1[0x1c] = 0
void* var_d4_21 = &arg1[0x1c]
var_8_1.b = 0x3c
sub_70d180(&arg1[0x1c], edx_9, &arg1[0x1b])
arg1[0x1d] = 0
arg1[0x1e] = 0
arg1[0x1f] = 0
int32_t var_68 = arg1[9]
void* eax_45 = arg1[0xa]
void* var_64 = eax_45

if (eax_45 != 0)
    *(eax_45 + 4)
    *(eax_45 + 4) += 1

int32_t var_60 = arg1[0xb]
void* eax_48 = arg1[0xc]
void* var_5c = eax_48

if (eax_48 != 0)
    *(eax_48 + 4)
    *(eax_48 + 4) += 1

int32_t var_58 = arg1[0xd]
void* eax_51 = arg1[0xe]
void* var_54 = eax_51

if (eax_51 != 0)
    *(eax_51 + 4)
    *(eax_51 + 4) += 1

int32_t var_50 = arg1[0xf]
void* eax_54 = arg1[0x10]
void* var_4c = eax_54

if (eax_54 != 0)
    *(eax_54 + 4)
    *(eax_54 + 4) += 1

int32_t var_48 = arg1[0x11]
void* eax_57 = arg1[0x12]
void* var_44 = eax_57

if (eax_57 != 0)
    *(eax_57 + 4)
    *(eax_57 + 4) += 1

int32_t var_40 = arg1[0x13]
void* eax_60 = arg1[0x14]
void* var_3c = eax_60

if (eax_60 != 0)
    *(eax_60 + 4)
    *(eax_60 + 4) += 1

int32_t var_38 = arg1[0x15]
void* eax_63 = arg1[0x16]
void* var_34 = eax_63

if (eax_63 != 0)
    *(eax_63 + 4)
    *(eax_63 + 4) += 1

int32_t var_30 = arg1[0x17]
void* eax_66 = arg1[0x18]
void* var_2c = eax_66

if (eax_66 != 0)
    *(eax_66 + 4)
    *(eax_66 + 4) += 1

int32_t var_28 = arg1[0x19]
void* eax_69 = arg1[0x1a]
void* var_24 = eax_69

if (eax_69 != 0)
    *(eax_69 + 4)
    *(eax_69 + 4) += 1

int32_t var_20 = arg1[0x1b]
void* eax_72 = arg1[0x1c]
void* var_1c = eax_72

if (eax_72 != 0)
    *(eax_72 + 4)
    *(eax_72 + 4) += 1

var_8_1.b = 0x3f
void* ebx_3 = &arg1[7]
void* var_a8_10 = ebx_3
int32_t* edi_2 = &var_68
int32_t i_1 = 0xa
int32_t i

do
    int32_t var_a0
    int32_t* eax_75 = (*(**edi_2 + 4))(&var_a0)
    int32_t var_74_1 = 0xf
    int32_t var_78_1 = 0
    char var_88 = 0
    
    if (eax_75[5] u>= 0x10)
        var_88.d = *eax_75
        *eax_75 = 0
    else
        void* eax_76 = eax_75[4]
        
        if (eax_76 != 0xffffffff)
            _memcpy(&var_88, eax_75, eax_76 + 1, eax_2)
    
    int32_t var_78_2 = eax_75[4]
    int32_t eax_80 = eax_75[5]
    eax_75[5] = 0xf
    eax_75[4] = 0
    *eax_75 = 0
    int32_t var_70_1 = *edi_2
    int32_t* eax_82 = edi_2[1]
    
    if (eax_82 != 0)
        eax_82[1]
        eax_82[1] += 1
    
    var_8_1.b = 0x41
    int32_t* eax_84
    void* ecx_81
    eax_84, ecx_81 = sub_70d1f0(&var_88)
    int32_t* var_d4_25 = eax_84
    void* var_d8_11 = &eax_84[4]
    void** var_b8
    sub_70d2b0(ebx_3, &var_b8, ecx_81)
    var_8_1.b = 0x42
    
    if (eax_82 != 0)
        bool cond:10_1 = eax_82[1] != 1
        eax_82[1]
        eax_82[1] -= 1
        
        if (not(cond:10_1))
            (*(*eax_82 + 4))(eax_2)
            bool cond:12_1 = eax_82[2] != 1
            eax_82[2]
            eax_82[2] -= 1
            
            if (not(cond:12_1))
                (*(*eax_82 + 8))()
    
    if (eax_80 u>= 0x10)
        j__free(var_88.d)
    
    var_8_1.b = 0x3f
    int32_t var_74_3 = 0xf
    int32_t var_78_3 = 0
    var_88 = 0
    int32_t var_8c
    
    if (var_8c u>= 0x10)
        j__free(var_a0)
    
    char* ecx_87 = sub_701a60(*edi_2, &var_a0)
    int32_t ebx_4 = *(ecx_87 + 0x10)
    
    if (*(ecx_87 + 0x14) u>= 0x10)
        ecx_87 = *ecx_87
    
    int32_t edx_12 = 0xb
    
    if (ebx_4 u< 0xb)
        edx_12 = ebx_4
    
    int32_t eax_92
    bool cond:14_1
    
    if (edx_12 == 0)
    label_705843:
        
        if (ebx_4 u>= 0xb)
            eax_92.b = ebx_4 != 0xb
        else
            eax_92 = 0xffffffff
        
        cond:14_1 = eax_92 == 0
    else
        char const* const esi_13 = "**/error/**"
        int32_t j_1 = edx_12 - 4
        
        if (edx_12 u>= 4)
            int32_t j
            
            do
                if (*ecx_87 != *esi_13)
                    goto label_705806
                
                ecx_87 = &ecx_87[4]
                esi_13 = &esi_13[4]
                j = j_1
                j_1 -= 4
            while (j u>= 4)
        
        if (j_1 == 0xfffffffc)
            eax_92 = 0
        else
        label_705806:
            char* eax_90
            eax_90.b = *ecx_87
            char const temp5_1 = *esi_13
            
            if (eax_90.b != temp5_1)
                eax_92 = sbb.d(eax_90, eax_90, eax_90.b u< temp5_1) | 1
            else if (j_1 == 0xfffffffd)
                eax_92 = 0
            else
                eax_90.b = ecx_87[1]
                char temp8_1 = esi_13[1]
                
                if (eax_90.b != temp8_1)
                    eax_92 = sbb.d(eax_90, eax_90, eax_90.b u< temp8_1) | 1
                else if (j_1 == 0xfffffffe)
                    eax_92 = 0
                else
                    eax_90.b = ecx_87[2]
                    char temp10_1 = esi_13[2]
                    
                    if (eax_90.b != temp10_1)
                        eax_92 = sbb.d(eax_90, eax_90, eax_90.b u< temp10_1) | 1
                    else if (j_1 == 0xffffffff)
                        eax_92 = 0
                    else
                        eax_90.b = ecx_87[3]
                        char temp11_1 = esi_13[3]
                        
                        if (eax_90.b == temp11_1)
                            eax_92 = 0
                        else
                            eax_92 = sbb.d(eax_90, eax_90, eax_90.b u< temp11_1) | 1
        
        cond:14_1 = eax_92 == 0
        
        if (eax_92 == 0)
            goto label_705843
    
    eax_92.b = cond:14_1
    var_8_1.b = 0x3f
    ebx_4.b = eax_92.b == 0
    
    if (var_8c u>= 0x10)
        j__free(var_a0)
    
    if (ebx_4.b != 0)
        sub_578460(&arg1[0x1d], edi_2)
    
    ebx_3 = var_a8_10
    edi_2 = &edi_2[2]
    i = i_1
    i_1 -= 1
while (i != 1)
var_8_1.b = 0x3e
`eh vector vbase constructor iterator'(&var_68, 8, 0xa, sub_54b010)

if (arg3 u>= 0x10)
    j__free(arg_8)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return arg1
