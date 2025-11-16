// 函数: sub_551320
// 地址: 0x551320
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b1ae0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_14 = arg1
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_14_1 = arg1
int32_t var_8_1 = 0xc
int32_t* ebx = *(arg1 + 0x15f8)

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

var_8_1.b = 0xb
int32_t* ebx_1 = *(arg1 + 0x15f0)

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

var_8_1.b = 0xa
int32_t* ebx_2 = *(arg1 + 0x15e4)

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

var_8_1.b = 9
sub_67d400(arg1 + 0x159c)
var_8_1.b = 8
sub_5505f0(arg1 + 0x1588)
var_8_1.b = 7
int32_t* ebx_3 = *(arg1 + 0x1584)

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

var_8_1.b = 6
int32_t* ebx_4 = *(arg1 + 0x157c)

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

var_8_1.b = 5
int32_t* ebx_5 = *(arg1 + 0x1574)

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

var_8_1.b = 4
int32_t* ebx_6 = *(arg1 + 0x156c)

if (ebx_6 != 0)
    bool cond:11_1 = ebx_6[1] != 1
    ebx_6[1]
    ebx_6[1] -= 1
    
    if (not(cond:11_1))
        (*(*ebx_6 + 4))(eax_2)
        int32_t edi_1 = ebx_6[2]
        ebx_6[2] -= 1
        
        if (edi_1 == 1)
            (*(*ebx_6 + 8))()

int32_t eax_31 = *(arg1 + 0x155c)

if (eax_31 != 0)
    j__free(eax_31)
    *(arg1 + 0x155c) = 0
    *(arg1 + 0x1560) = 0
    *(arg1 + 0x1564) = 0

int32_t eax_32 = *(arg1 + 0x154c)

if (eax_32 != 0)
    j__free(eax_32)
    *(arg1 + 0x154c) = 0
    *(arg1 + 0x1550) = 0
    *(arg1 + 0x1554) = 0

sub_54eb90(arg1 + 0x1390)
var_8_1.b = 0
sub_54e970(arg1 + 0x1ac)

if (*(arg1 + 0x98) u>= 8)
    j__free(*(arg1 + 0x84))

*(arg1 + 0x98) = 7
*(arg1 + 0x94) = 0
*(arg1 + 0x84) = 0
fsbase->NtTib.ExceptionList = ExceptionList
return 0
