// 函数: sub_562510
// 地址: 0x562510
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b2e7c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_14 = arg1
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_14_1 = arg1
int32_t var_8_1 = 9
sub_6efc80(arg1 + 0x8d0)
var_8_1.b = 8
sub_6efc80(arg1 + 0x7a0)
var_8_1.b = 7
int32_t* edi = *(arg1 + 0x79c)

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
int32_t* edi_1 = *(arg1 + 0x794)

if (edi_1 != 0)
    bool cond:1_1 = edi_1[1] != 1
    edi_1[1]
    edi_1[1] -= 1
    
    if (not(cond:1_1))
        (*(*edi_1 + 4))(eax_2)
        int32_t ebx_1 = edi_1[2]
        edi_1[2] -= 1
        
        if (ebx_1 == 1)
            (*(*edi_1 + 8))()

sub_54eb90(arg1 + 0x5d4)
sub_54eb90(arg1 + 0x418)
sub_54eb90(arg1 + 0x25c)
var_8_1.b = 2
sub_5629c0(arg1 + 0x100)

if (*(arg1 + 0xcc) u>= 8)
    j__free(*(arg1 + 0xb8))

*(arg1 + 0xcc) = 7
*(arg1 + 0xc8) = 0
*(arg1 + 0xb8) = 0

if (*(arg1 + 0xb4) u>= 8)
    j__free(*(arg1 + 0xa0))

*(arg1 + 0xb4) = 7
*(arg1 + 0xb0) = 0
*(arg1 + 0xa0) = 0

if (*(arg1 + 0x98) u>= 8)
    j__free(*(arg1 + 0x84))

*(arg1 + 0x98) = 7
*(arg1 + 0x94) = 0
*(arg1 + 0x84) = 0
fsbase->NtTib.ExceptionList = ExceptionList
return 0
