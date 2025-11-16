// 函数: sub_636800
// 地址: 0x636800
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c1ba4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct NT3::C_window_base::VTable** var_14 = arg1
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct NT3::C_window_base::VTable** var_14_1 = arg1
int32_t var_8_1 = 0x12

if (arg1[0x722] u>= 8)
    j__free(arg1[0x71d])

arg1[0x722] = 7
arg1[0x721] = 0
arg1[0x71d].w = 0

if (arg1[0x714] u>= 8)
    j__free(arg1[0x70f])

arg1[0x714] = 7
arg1[0x713] = 0
arg1[0x70f].w = 0
int32_t* ebx = arg1[0x70b]

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

var_8_1.b = 0x11
int32_t* ebx_1 = arg1[0x709]

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

var_8_1.b = 0x10
int32_t* ebx_2 = arg1[0x707]

if (ebx_2 != 0)
    bool cond:3_1 = ebx_2[1] != 1
    ebx_2[1]
    ebx_2[1] -= 1
    
    if (not(cond:3_1))
        (*(*ebx_2 + 4))(eax_2)
        bool cond:6_1 = ebx_2[2] != 1
        ebx_2[2]
        ebx_2[2] -= 1
        
        if (not(cond:6_1))
            (*(*ebx_2 + 8))()

var_8_1.b = 0xf
int32_t* ebx_3 = arg1[0x705]

if (ebx_3 != 0)
    bool cond:5_1 = ebx_3[1] != 1
    ebx_3[1]
    ebx_3[1] -= 1
    
    if (not(cond:5_1))
        (*(*ebx_3 + 4))(eax_2)
        bool cond:8_1 = ebx_3[2] != 1
        ebx_3[2]
        ebx_3[2] -= 1
        
        if (not(cond:8_1))
            (*(*ebx_3 + 8))()

var_8_1.b = 0xe
int32_t* ebx_4 = arg1[0x703]

if (ebx_4 != 0)
    bool cond:7_1 = ebx_4[1] != 1
    ebx_4[1]
    ebx_4[1] -= 1
    
    if (not(cond:7_1))
        (*(*ebx_4 + 4))(eax_2)
        bool cond:10_1 = ebx_4[2] != 1
        ebx_4[2]
        ebx_4[2] -= 1
        
        if (not(cond:10_1))
            (*(*ebx_4 + 8))()

var_8_1.b = 0xd
int32_t* ebx_5 = arg1[0x701]

if (ebx_5 != 0)
    bool cond:9_1 = ebx_5[1] != 1
    ebx_5[1]
    ebx_5[1] -= 1
    
    if (not(cond:9_1))
        (*(*ebx_5 + 4))(eax_2)
        bool cond:12_1 = ebx_5[2] != 1
        ebx_5[2]
        ebx_5[2] -= 1
        
        if (not(cond:12_1))
            (*(*ebx_5 + 8))()

var_8_1.b = 0xc
int32_t* ebx_6 = arg1[0x6ff]

if (ebx_6 != 0)
    bool cond:11_1 = ebx_6[1] != 1
    ebx_6[1]
    ebx_6[1] -= 1
    
    if (not(cond:11_1))
        (*(*ebx_6 + 4))(eax_2)
        bool cond:14_1 = ebx_6[2] != 1
        ebx_6[2]
        ebx_6[2] -= 1
        
        if (not(cond:14_1))
            (*(*ebx_6 + 8))()

var_8_1.b = 0xb
int32_t* ebx_7 = arg1[0x6fd]

if (ebx_7 != 0)
    bool cond:13_1 = ebx_7[1] != 1
    ebx_7[1]
    ebx_7[1] -= 1
    
    if (not(cond:13_1))
        (*(*ebx_7 + 4))(eax_2)
        bool cond:16_1 = ebx_7[2] != 1
        ebx_7[2]
        ebx_7[2] -= 1
        
        if (not(cond:16_1))
            (*(*ebx_7 + 8))()

var_8_1.b = 0xa
int32_t* ebx_8 = arg1[0x6fb]

if (ebx_8 != 0)
    bool cond:15_1 = ebx_8[1] != 1
    ebx_8[1]
    ebx_8[1] -= 1
    
    if (not(cond:15_1))
        (*(*ebx_8 + 4))(eax_2)
        bool cond:18_1 = ebx_8[2] != 1
        ebx_8[2]
        ebx_8[2] -= 1
        
        if (not(cond:18_1))
            (*(*ebx_8 + 8))()

var_8_1.b = 9
int32_t* ebx_9 = arg1[0x6f9]

if (ebx_9 != 0)
    bool cond:17_1 = ebx_9[1] != 1
    ebx_9[1]
    ebx_9[1] -= 1
    
    if (not(cond:17_1))
        (*(*ebx_9 + 4))(eax_2)
        bool cond:20_1 = ebx_9[2] != 1
        ebx_9[2]
        ebx_9[2] -= 1
        
        if (not(cond:20_1))
            (*(*ebx_9 + 8))()

var_8_1.b = 8
int32_t* ebx_10 = arg1[0x6f7]

if (ebx_10 != 0)
    bool cond:19_1 = ebx_10[1] != 1
    ebx_10[1]
    ebx_10[1] -= 1
    
    if (not(cond:19_1))
        (*(*ebx_10 + 4))(eax_2)
        bool cond:22_1 = ebx_10[2] != 1
        ebx_10[2]
        ebx_10[2] -= 1
        
        if (not(cond:22_1))
            (*(*ebx_10 + 8))()

var_8_1.b = 7
int32_t* ebx_11 = arg1[0x6f5]

if (ebx_11 != 0)
    bool cond:21_1 = ebx_11[1] != 1
    ebx_11[1]
    ebx_11[1] -= 1
    
    if (not(cond:21_1))
        (*(*ebx_11 + 4))(eax_2)
        bool cond:24_1 = ebx_11[2] != 1
        ebx_11[2]
        ebx_11[2] -= 1
        
        if (not(cond:24_1))
            (*(*ebx_11 + 8))()

var_8_1.b = 6
int32_t* ebx_12 = arg1[0x6f3]

if (ebx_12 != 0)
    bool cond:23_1 = ebx_12[1] != 1
    ebx_12[1]
    ebx_12[1] -= 1
    
    if (not(cond:23_1))
        (*(*ebx_12 + 4))(eax_2)
        int32_t edi_1 = ebx_12[2]
        ebx_12[2] -= 1
        
        if (edi_1 == 1)
            (*(*ebx_12 + 8))()

var_8_1.b = 5
int32_t* ecx_39 = arg1[0x6e9]

if (ecx_39 != 0)
    (*(*ecx_39 + 8))(ecx_39)

var_8_1.b = 4
int32_t* ecx_40 = arg1[0x6e4]

if (ecx_40 != 0)
    (*(*ecx_40 + 8))(ecx_40)

var_8_1.b = 3
int32_t* ecx_41 = arg1[0x6df]

if (ecx_41 != 0)
    (*(*ecx_41 + 8))(ecx_41)

var_8_1.b = 2
int32_t* ecx_42 = arg1[0x6da]

if (ecx_42 != 0)
    (*(*ecx_42 + 8))(ecx_42)

sub_639d50(&arg1[0x6bc])
var_8_1.b = 0
sub_639b70(&arg1[0x24])
*arg1 = &NT3::C_window::`vftable'{for `NT3::C_window_base'}

if (arg1[0x23] u>= 8)
    j__free(arg1[0x1e])

arg1[0x23] = 7
arg1[0x22] = 0
arg1[0x1e].w = 0
sub_6bfb10(arg1)
fsbase->NtTib.ExceptionList = ExceptionList
return 0
