// 函数: sub_66a9a0
// 地址: 0x66a9a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c61b0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_30
int32_t var_8_1 = 0
char edx = 0
void** ebx = *arg1
struct _EXCEPTION_REGISTRATION_RECORD** eax_3
eax_3.b = 1
void** arg_c
int32_t* edi = arg_c
char var_15 = 0
char var_19 = 1
void** esi = ebx[1]

while (*(esi + 0xd) == 0)
    ebx = esi
    
    if (edx == 0)
        void* eax_5 = &esi[4]
        int32_t ecx_1 = *(eax_5 + 0x10)
        
        if (esi[9] u>= 8)
            eax_5 = *eax_5
        
        int32_t var_34_2 = ecx_1
        eax_3.b = sub_536340(edi, ecx_1, edi[4], eax_5) s< 0
    else
        int32_t* eax_4
        
        if (edi[5] u< 8)
            eax_4 = edi
        else
            eax_4 = *edi
        
        int32_t var_34_1 = edi[4]
        eax_3.b = sub_536340(&esi[4], &esi[4], esi[8], eax_4) s>= 0
    
    edx = var_15
    var_19 = eax_3.b
    
    if (eax_3.b == 0)
        esi = esi[2]
    else
        esi = *esi

void** esi_1 = ebx
arg_c = esi_1

if (eax_3.b == 0)
    goto label_66aa9c

int32_t* ecx_3 = arg1
char var_40_3
void** var_3c_3
int32_t* var_38_3

if (ebx != **ecx_3)
    sub_579b50(&arg_c)
    esi_1 = arg_c
label_66aa9c:
    int32_t eax_9 = edi[4]
    
    if (edi[5] u>= 8)
        edi = *edi
    
    int32_t var_34_4 = eax_9
    int32_t eax_10
    int32_t* ecx_9
    eax_10, ecx_9 = sub_536340(&esi_1[4], &esi_1[4], esi_1[8], edi)
    
    if (eax_10 s>= 0)
        int32_t* var_34_6 = ecx_9
        sub_57a040(arg3 + 0x10)
        j__free(arg3)
        *arg2 = esi_1
        arg2[1].b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg2
    
    void* var_34_5 = arg3
    var_38_3 = ecx_9
    ecx_3 = arg1
    var_3c_3 = ebx
    var_40_3 = var_19
else
    void* var_34_3 = arg3
    var_38_3 = ecx_3
    var_3c_3 = ebx
    var_40_3 = 1

*arg2 = *sub_66b770(ecx_3, &arg_c, var_40_3, var_3c_3, var_38_3)
arg2[1].b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return arg2
