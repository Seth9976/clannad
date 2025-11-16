// 函数: sub_6390d0
// 地址: 0x6390d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c23c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_14 = arg1
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_14_1 = arg1
int32_t var_8_1 = 0x10
sub_551320(arg1 + 0x9dfc)
var_8_1.b = 0xf
sub_551320(arg1 + 0x8800)
var_8_1.b = 0xe
sub_551320(arg1 + 0x7204)
var_8_1.b = 0xd
sub_551320(arg1 + 0x5c08)
var_8_1.b = 0xc
sub_551320(arg1 + 0x460c)
var_8_1.b = 0xb
sub_551320(arg1 + 0x3010)
var_8_1.b = 0xa
sub_551320(arg1 + 0x1a14)
var_8_1.b = 9
sub_551320(arg1 + 0x418)
var_8_1.b = 8
int32_t* ebx = *(arg1 + 0x414)

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

var_8_1.b = 7
int32_t* ebx_1 = *(arg1 + 0x40c)

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

var_8_1.b = 6
int32_t* ebx_2 = *(arg1 + 0x404)

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

var_8_1.b = 5
sub_6efc80(arg1 + 0x2d0)
var_8_1.b = 4
int32_t* ebx_3 = *(arg1 + 0x2cc)

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

var_8_1.b = 3
sub_6efc80(arg1 + 0x198)
var_8_1.b = 2
int32_t* ebx_4 = *(arg1 + 0x194)

if (ebx_4 != 0)
    bool cond:7_1 = ebx_4[1] != 1
    ebx_4[1]
    ebx_4[1] -= 1
    
    if (not(cond:7_1))
        (*(*ebx_4 + 4))(eax_2)
        int32_t edi_1 = ebx_4[2]
        ebx_4[2] -= 1
        
        if (edi_1 == 1)
            (*(*ebx_4 + 8))()

var_8_1.b = 1
sub_641b60(arg1 + 0x12c)
var_8_1.b = 0
sub_5d4720(arg1 + 0x10c)

if (*(arg1 + 0x98) u>= 8)
    j__free(*(arg1 + 0x84))

*(arg1 + 0x98) = 7
*(arg1 + 0x94) = 0
*(arg1 + 0x84) = 0
fsbase->NtTib.ExceptionList = ExceptionList
return 0
