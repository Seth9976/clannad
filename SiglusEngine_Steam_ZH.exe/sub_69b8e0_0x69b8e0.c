// 函数: sub_69b8e0
// 地址: 0x69b8e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c9413
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 7
int32_t var_1c = 0
int16_t var_2c = 0
sub_52e720(&var_2c, u"siglus_engine", 0xd)
int32_t var_8_1 = 0
sub_52e3c0(&data_4ebe3f8, &var_2c, 0, 0xffffffff)
int32_t var_8_2 = 0xffffffff

if (var_18 u>= 8)
    j__free(var_2c.d)

TIMECAPS ptc
__builtin_memset(&ptc, 0, 8)
timeGetDevCaps(&ptc, 8)
uint32_t eax_3
int32_t ecx_1
int32_t edx
eax_3, ecx_1, edx = timeBeginPeriod(ptc.wPeriodMin)
_srand(sub_746b5d(eax_3, edx, ecx_1, nullptr))
sub_69b770()
sub_5c97d0()
int16_t* eax_5 = sub_745f3f(&(*u"en-BZ")[4])
int32_t* var_38 = eax_5
int32_t var_8_3 = 1
int16_t* esi

if (eax_5 == 0)
    esi = nullptr
else
    esi = sub_69baa0(eax_5)

int16_t* var_34 = esi
int32_t var_30 = 0
int32_t var_8_4 = 2
int32_t* eax_7 = sub_69cd90(&var_38, esi)
int32_t* ecx_4 = *eax_7
*eax_7 = var_30
int32_t* edi = var_38

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

int16_t* var_58_5 = esi
int16_t* var_5c_1 = esi
int16_t** var_60_1 = &var_34
int32_t var_8_5 = 3
sub_67ceb0(var_34)
int32_t var_8_6 = 0xffffffff

if (ecx_4 != 0)
    bool cond:1_1 = ecx_4[1] != 1
    ecx_4[1]
    ecx_4[1] -= 1
    
    if (not(cond:1_1))
        (*(*ecx_4 + 4))(eax_2)
        int32_t ebx_1 = ecx_4[2]
        ecx_4[2] -= 1
        
        if (ebx_1 == 1)
            (*(*ecx_4 + 8))()

sub_69b7e0()
timeEndPeriod(ptc.wPeriodMin)
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return 0
