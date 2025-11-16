// 函数: sub_69e1e0
// 地址: 0x69e1e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c9870
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28
int32_t var_8_1 = 0
char eax_3 = 1
int32_t* ecx = data_4ebe380
void** edi = ecx
void** arg_c
int32_t* ebx = arg_c
char var_18 = 1
void** esi = ecx[1]

if (*(esi + 0xd) == 0)
    do
        edi = esi
        eax_3 = sub_69cee0(ebx, &esi[4])
        var_18 = eax_3
        
        if (eax_3 == 0)
            esi = esi[2]
        else
            esi = *esi
    while (*(esi + 0xd) == 0)
    
    ecx = data_4ebe380

void** esi_1 = edi
arg_c = esi_1

if (eax_3 == 0)
    goto label_69e2a2

char var_38
void** var_34
int32_t* var_30
void*** eax_5

if (edi != *ecx)
    sub_579b50(&arg_c)
    esi_1 = arg_c
label_69e2a2:
    char eax_8
    int32_t* ecx_7
    eax_8, ecx_7 = sub_69cee0(&esi_1[4], ebx)
    
    if (eax_8 == 0)
        sub_69e360(arg2)
        *arg1 = esi_1
        arg1[1].b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg1
    
    var_30 = ecx_7
    var_34 = edi
    var_38 = (var_18.d).b
    eax_5 = &var_18
else
    void* var_2c_2 = arg2
    eax_5 = &arg_c
    var_30 = ecx
    var_34 = edi
    var_38 = 1

*arg1 = *sub_69e3f0(eax_5, var_38, var_34, var_30)
arg1[1].b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
