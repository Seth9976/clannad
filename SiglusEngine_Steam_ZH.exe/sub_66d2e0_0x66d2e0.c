// 函数: sub_66d2e0
// 地址: 0x66d2e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c65e1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_5c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ebx = 0xf
int32_t* var_48 = arg1
void* edi = nullptr
int32_t var_18 = 0xf
void* var_1c = nullptr
char var_2c = 0
int32_t var_8_1 = 0

while (true)
    if (arg2[3].b == 0)
        char* ecx = *arg2
        
        if (ecx == arg2[1])
            arg2[2] = 0xffffffff
            break
        
        if (arg2[2] == 0xa)
            arg2[4] += 1
        
        arg2[2] = zx.d(*ecx)
        *arg2 = &ecx[1]
    else
        arg2[3].b = 0
    
    int32_t edx = arg2[2]
    
    if ((edx s< 0x30 || edx s> 0x39) && edx != 0x2b && edx != 0x2d && edx != 0x2e && edx != 0x65
            && edx != 0x45)
        break
    
    char* eax_5 = &var_2c
    
    if (ebx u>= 0x10)
        eax_5 = var_2c.d
    
    void* eax_6 = eax_5 + edi
    char* edi_1 = &var_2c
    
    if (ebx u>= 0x10)
        edi_1 = var_2c.d
    
    if (eax_6 != 0)
        eax_6 -= edi_1
    
    sub_66f7b0(&var_2c, eax_6, 1, edx.b)
    ebx = var_18
    edi = var_1c

if (arg2[2] != 0xffffffff)
    arg2[3].b = 1

char* eax_7 = &var_2c

if (ebx u>= 0x10)
    eax_7 = var_2c.d

int32_t var_34
int32_t eax_8 = int.d(fconvert.t(fconvert.d(__atodbl(eax_7, &var_34))))
int32_t var_44 = 2
double var_3c
var_3c.d = eax_8
var_8_1.b = 1

if (arg1 != &var_44)
    sub_670c00(arg1)
    int32_t* var_30_1 = arg1
    var_8_1.b = 2
    
    if (arg1 != 0)
        sub_6703f0(arg1, &var_44)

sub_670c00(&var_44)
char* ecx_5 = &var_2c
char* esi_1 = var_2c.d

if (var_18 u>= 0x10)
    ecx_5 = esi_1

int32_t* ebx_1
ebx_1.b = var_34 == var_1c + ecx_5

if (var_18 u>= 0x10)
    j__free(esi_1)

void* result
result.b = ebx_1.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
