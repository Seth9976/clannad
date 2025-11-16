// 函数: ?DumpThisThreadExceptionFilter@__vcasan@@YAHPAU_EXCEPTION_POINTERS@@PAPAUEXCEPTION_SANITIZER_ERROR@1@PBGAAK@Z
// 地址: 0x644a60
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c3748
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_44 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg2 s<= 0 || arg4 s<= 0)
    struct _EXCEPTION_REGISTRATION_RECORD** eax_3
    eax_3.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_3

arg3[3] = arg2
arg3[4] = arg4
sub_5979b0(arg3, (arg2 * arg4) << 2)
int32_t eax_7 = *arg3
bool cond:0 = eax_7 == arg3[1]
struct _EXCEPTION_REGISTRATION_RECORD** var_34 = nullptr

if (cond:0)
    eax_7 = 0

int32_t var_30 = 0
int32_t var_2c = 0
int32_t var_8_1 = 0
int32_t* ecx = &var_34
char var_11
struct _EXCEPTION_REGISTRATION_RECORD** eax_8
struct _EXCEPTION_REGISTRATION_RECORD** ebx_2
int32_t var_28
int32_t var_24

if (arg5 != 0)
    if (sub_6447a0(eax_7, 1, ecx, arg4, 1, arg6).b != 0)
        ebx_2 = var_34
        eax_8 = ebx_2
        
        if (ebx_2 == var_30)
            eax_8 = nullptr
        
        int32_t edi_2 = 0
        struct _EXCEPTION_REGISTRATION_RECORD** var_20_1 = eax_8
        
        if (arg2 s<= 0)
            var_11 = 1
        else
            do
                sub_6c97b0(eax_8, arg3[3], eax_7, arg3[4], eax_8, var_28, var_24, edi_2, 0)
                eax_8 = var_20_1
                edi_2 += 1
            while (edi_2 s< arg2)
            
            ebx_2 = var_34
            var_11 = 1
    else
        ebx_2 = var_34
        var_11 = 0
else if (sub_6447a0(eax_7, arg2, ecx, 1, arg6, 1).b == 0)
    ebx_2 = var_34
    var_11 = 0
else
    ebx_2 = var_34
    eax_8 = ebx_2
    
    if (ebx_2 == var_30)
        eax_8 = nullptr
    
    int32_t edi_1 = 0
    struct _EXCEPTION_REGISTRATION_RECORD** var_18_1 = eax_8
    
    if (arg4 s<= 0)
        var_11 = 1
    else
        do
            sub_6c97b0(eax_8, arg3[3], eax_7, arg3[4], eax_8, var_28, var_24, 0, edi_1)
            eax_8 = var_18_1
            edi_1 += 1
        while (edi_1 s< arg4)
        
        ebx_2 = var_34
        var_11 = 1

if (ebx_2 != 0)
    j__free(ebx_2)

eax_8.b = var_11
fsbase->NtTib.ExceptionList = ExceptionList
return eax_8
