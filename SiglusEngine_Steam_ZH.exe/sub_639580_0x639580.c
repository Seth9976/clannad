// 函数: sub_639580
// 地址: 0x639580
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c245a
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_14 = arg1
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_14_1 = arg1
int32_t var_8_1 = 7
int32_t* edi = *(arg1 + 0x4b4)

if (edi != 0)
    bool cond:0_1 = edi[1] != 1
    edi[1]
    edi[1] -= 1
    
    if (not(cond:0_1))
        (*(*edi + 4))(eax_2)
        bool cond:2_1 = edi[2] != 1
        edi[2]
        edi[2] -= 1
        
        if (not(cond:2_1))
            (*(*edi + 8))()

var_8_1.b = 6
int32_t* edi_1 = *(arg1 + 0x4ac)

if (edi_1 != 0)
    bool cond:1_1 = edi_1[1] != 1
    edi_1[1]
    edi_1[1] -= 1
    
    if (not(cond:1_1))
        (*(*edi_1 + 4))(eax_2)
        bool cond:4_1 = edi_1[2] != 1
        edi_1[2]
        edi_1[2] -= 1
        
        if (not(cond:4_1))
            (*(*edi_1 + 8))()

var_8_1.b = 5
int32_t* edi_2 = *(arg1 + 0x4a4)

if (edi_2 != 0)
    bool cond:3_1 = edi_2[1] != 1
    edi_2[1]
    edi_2[1] -= 1
    
    if (not(cond:3_1))
        (*(*edi_2 + 4))(eax_2)
        int32_t ebx_1 = edi_2[2]
        edi_2[2] -= 1
        
        if (ebx_1 == 1)
            (*(*edi_2 + 8))()

sub_63c850(arg1 + 0x3bc)
var_8_1.b = 3
sub_6003c0(arg1 + 0x3ac)

if (*(arg1 + 0x39c) u>= 8)
    j__free(*(arg1 + 0x388))

*(arg1 + 0x39c) = 7
*(arg1 + 0x398) = 0
*(arg1 + 0x388) = 0
var_8_1.b = 2
sub_5fe550(arg1 + 0x2f0)

if (*(arg1 + 0x2e8) u>= 8)
    j__free(*(arg1 + 0x2d4))

*(arg1 + 0x2e8) = 7
*(arg1 + 0x2e4) = 0
*(arg1 + 0x2d4) = 0
var_8_1.b = 1
sub_6003c0(arg1 + 0x23c)

if (*(arg1 + 0x22c) u>= 8)
    j__free(*(arg1 + 0x218))

*(arg1 + 0x22c) = 7
*(arg1 + 0x228) = 0
*(arg1 + 0x218) = 0
var_8_1.b = 0
sub_6003c0(arg1 + 0x178)

if (*(arg1 + 0x170) u>= 8)
    j__free(*(arg1 + 0x15c))

*(arg1 + 0x170) = 7
*(arg1 + 0x16c) = 0
*(arg1 + 0x15c) = 0
sub_63c650(arg1)
fsbase->NtTib.ExceptionList = ExceptionList
return 0
