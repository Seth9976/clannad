// 函数: sub_5719b0
// 地址: 0x5719b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b4117
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_14 = arg1
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_14_1 = arg1
int32_t var_8_1 = 4
int32_t* ecx = *(arg1 + 0x7c)

if (ecx != 0)
    bool cond:0_1 = ecx[2] != 1
    ecx[2]
    ecx[2] -= 1
    
    if (not(cond:0_1))
        (*(*ecx + 8))(eax_2)

var_8_1.b = 3
int32_t* ecx_1 = *(arg1 + 0x74)

if (ecx_1 != 0)
    bool cond:1_1 = ecx_1[2] != 1
    ecx_1[2]
    ecx_1[2] -= 1
    
    if (not(cond:1_1))
        (*(*ecx_1 + 8))(eax_2)

var_8_1.b = 2
int32_t* ecx_2 = *(arg1 + 0x6c)

if (ecx_2 != 0)
    bool cond:2_1 = ecx_2[2] != 1
    ecx_2[2]
    ecx_2[2] -= 1
    
    if (not(cond:2_1))
        (*(*ecx_2 + 8))(eax_2)

var_8_1.b = 1
int32_t* ecx_3 = *(arg1 + 0x64)

if (ecx_3 != 0)
    bool cond:3_1 = ecx_3[2] != 1
    ecx_3[2]
    ecx_3[2] -= 1
    
    if (not(cond:3_1))
        (*(*ecx_3 + 8))(eax_2)

var_8_1.b = 0
int32_t* ecx_4 = *(arg1 + 0x5c)

if (ecx_4 != 0)
    int32_t edi_1 = ecx_4[2]
    ecx_4[2] -= 1
    
    if (edi_1 == 1)
        (*(*ecx_4 + 8))(eax_2)

if (*(arg1 + 0x3c) u>= 8)
    j__free(*(arg1 + 0x28))

*(arg1 + 0x3c) = 7
*(arg1 + 0x38) = 0
*(arg1 + 0x28) = 0
fsbase->NtTib.ExceptionList = ExceptionList
return 0
