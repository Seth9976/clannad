// 函数: sub_6fe940
// 地址: 0x6fe940
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9ce6a1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_14 = arg1
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14_1 = arg1
int32_t var_8_1 = 2
int32_t eax_3 = arg1[0x32]

if (eax_3 != 0)
    j__free(eax_3)
    arg1[0x32] = 0
    arg1[0x33] = 0
    arg1[0x34] = 0

int32_t eax_4 = arg1[0x2f]

if (eax_4 != 0)
    j__free(eax_4)
    arg1[0x2f] = 0
    arg1[0x30] = 0
    arg1[0x31] = 0

int32_t eax_5 = arg1[0x2c]

if (eax_5 != 0)
    j__free(eax_5)
    arg1[0x2c] = 0
    arg1[0x2d] = 0
    arg1[0x2e] = 0

int32_t* edi = arg1[0x2b]

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

var_8_1.b = 1
int32_t* edi_1 = arg1[0x29]

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

if (arg1[0xc] u>= 8)
    j__free(arg1[7])

arg1[0xc] = 7
arg1[0xb] = 0
arg1[7].w = 0

if (arg1[5] u>= 8)
    j__free(*arg1)

arg1[5] = 7
arg1[4] = 0
*arg1 = 0
fsbase->NtTib.ExceptionList = ExceptionList
return 0
