// 函数: sub_5d50d0
// 地址: 0x5d50d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bc0a0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_30
int32_t* edx = arg1
int32_t* var_1c = edx
int32_t var_8_1 = 0
char eax_3 = 1
int32_t* ecx = *edx
void** edi = ecx
int32_t* arg_c
int16_t* ebx = arg_c
int32_t* var_20 = ecx
char var_18 = 1
void** esi = ecx[1]

if (*(esi + 0xd) == 0)
    do
        edi = esi
        eax_3 = sub_5cd6f0(ebx, &esi[4])
        var_18 = eax_3
        
        if (eax_3 == 0)
            esi = esi[2]
        else
            esi = *esi
    while (*(esi + 0xd) == 0)
    
    ecx = var_20
    edx = var_1c

void** esi_1 = edi
arg_c = esi_1

if (eax_3 == 0)
    goto label_5d5194

char var_40
void** var_3c
int32_t* var_38
int32_t** eax_4
int32_t* ecx_2

if (edi != *ecx)
    sub_579b50(&arg_c)
    esi_1 = arg_c
label_5d5194:
    char eax_7
    int32_t* ecx_8
    eax_7, ecx_8 = sub_5cd6f0(&esi_1[4], ebx)
    
    if (eax_7 == 0)
        sub_5d5350(arg3)
        *arg2 = esi_1
        arg2[1].b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg2
    
    var_38 = ecx_8
    ecx_2 = var_1c
    eax_4 = &var_20
    var_3c = edi
    var_40 = var_18
else
    void* var_34 = arg3
    eax_4 = &arg_c
    var_38 = ecx
    var_3c = edi
    var_40 = 1
    ecx_2 = edx

*arg2 = *sub_5d53e0(ecx_2, eax_4, var_40, var_3c, var_38)
arg2[1].b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return arg2
