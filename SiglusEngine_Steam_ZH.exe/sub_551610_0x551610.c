// 函数: sub_551610
// 地址: 0x551610
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b1bc6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_14 = arg1
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 9
sub_6efc80(arg1 + 0x450)
var_8_1.b = 8
sub_6efc80(arg1 + 0x320)
var_8_1.b = 7
int32_t* edi = *(arg1 + 0x31c)

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
int32_t* edi_1 = *(arg1 + 0x314)

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

var_8_1.b = 5
void* ecx_8 = *(arg1 + 0x304)

if (ecx_8 != 0)
    void* var_28_1 = arg1
    void* var_2c_1 = ecx_8
    sub_551590(ecx_8, *(arg1 + 0x308))
    j__free(*(arg1 + 0x304))
    *(arg1 + 0x304) = 0
    *(arg1 + 0x308) = 0
    *(arg1 + 0x30c) = 0

var_8_1.b = 4
sub_67d400(arg1 + 0x2c0)

if (*(arg1 + 0x2a4) u>= 8)
    j__free(*(arg1 + 0x290))

*(arg1 + 0x2a4) = 7
*(arg1 + 0x2a0) = 0
*(arg1 + 0x290) = 0

if (*(arg1 + 0x28c) u>= 8)
    j__free(*(arg1 + 0x278))

*(arg1 + 0x28c) = 7
*(arg1 + 0x288) = 0
*(arg1 + 0x278) = 0

if (*(arg1 + 0x274) u>= 8)
    j__free(*(arg1 + 0x260))

*(arg1 + 0x274) = 7
*(arg1 + 0x270) = 0
*(arg1 + 0x260) = 0
sub_54eb90(arg1 + 0xa0)

if (*(arg1 + 0x98) u>= 8)
    j__free(*(arg1 + 0x84))

*(arg1 + 0x98) = 7
*(arg1 + 0x94) = 0
*(arg1 + 0x84) = 0
fsbase->NtTib.ExceptionList = ExceptionList
return 0
