// 函数: sub_700fd0
// 地址: 0x700fd0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9ce990
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
int32_t var_8_1 = 0
int32_t* ecx
ecx.b = 0
void** ebx = data_4ebe4a8
struct _EXCEPTION_REGISTRATION_RECORD** eax_3
eax_3.b = 1
void** arg_c
int32_t* edi = arg_c
char var_15 = 0
char var_1c = 1
void** esi = ebx[1]

while (*(esi + 0xd) == 0)
    ebx = esi
    
    if (ecx.b == 0)
        void* eax_5 = &esi[4]
        int32_t ecx_2 = *(eax_5 + 0x10)
        
        if (esi[9] u>= 8)
            eax_5 = *eax_5
        
        int32_t var_30_2 = ecx_2
        eax_3, ecx = sub_536340(edi, ecx_2, edi[4], eax_5)
        eax_3.b = eax_3 s< 0
    else
        int32_t* eax_4
        
        if (edi[5] u< 8)
            eax_4 = edi
        else
            eax_4 = *edi
        
        int32_t var_30_1 = edi[4]
        eax_3, ecx = sub_536340(&esi[4], &esi[4], esi[8], eax_4)
        eax_3.b = eax_3 s>= 0
    
    ecx.b = var_15
    var_1c = eax_3.b
    
    if (eax_3.b == 0)
        esi = esi[2]
    else
        esi = *esi

void** esi_1 = ebx
arg_c = esi_1

if (eax_3.b == 0)
    goto label_7010cd

char var_3c_3
void** var_38_3
int32_t* var_34_3

if (ebx != *data_4ebe4a8)
    sub_579b50(&arg_c)
    esi_1 = arg_c
label_7010cd:
    int32_t eax_9 = edi[4]
    
    if (edi[5] u>= 8)
        edi = *edi
    
    int32_t var_30_4 = eax_9
    int32_t eax_10
    int32_t* ecx_9
    eax_10, ecx_9 = sub_536340(&esi_1[4], &esi_1[4], esi_1[8], edi)
    
    if (eax_10 s>= 0)
        sub_687cd0(arg2 + 0x10)
        j__free(arg2)
        *arg1 = esi_1
        arg1[1].b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg1
    
    void* var_30_5 = arg2
    var_34_3 = ecx_9
    var_38_3 = ebx
    var_3c_3 = var_1c
else
    void* var_30_3 = arg2
    var_34_3 = ecx
    var_38_3 = ebx
    var_3c_3 = 1

*arg1 = *sub_701200(&arg_c, var_3c_3, var_38_3, var_34_3)
arg1[1].b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
