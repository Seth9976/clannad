// 函数: sub_71d710
// 地址: 0x71d710
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9d31b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg1[0x15] == arg2)
    struct _EXCEPTION_REGISTRATION_RECORD** eax_3
    eax_3.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_3

sub_749feb(*arg1, *(arg1[0xe] + (arg2 << 2)) + arg1[1], nullptr, FILE_BEGIN)
int32_t eax_9
uint32_t esi

if (arg2 != arg1[7] - 1)
    int32_t eax_10 = arg1[0xe]
    esi = *(eax_10 + (arg2 << 2) + 4) - *(eax_10 + (arg2 << 2))
    eax_9 = arg1[0xb]
else
    esi = arg1[0xd]
    eax_9 = arg1[0xc]

arg1[0x16] = eax_9
char* var_1c = nullptr
int32_t var_18 = 0
int32_t var_14 = 0
int32_t var_8_1 = 0
sub_5979b0(&var_1c, esi)
char* ebx_1 = var_1c

if (_fread(ebx_1, 1, esi, *arg1) == esi)
    sub_5979b0(&arg1[0x12], (zx.d(*(arg1 + 0xe)) u>> 3) * arg1[0x16])
    void* ecx_4 = arg1[0x12]
    void* edx_1 = arg1[0x16]
    
    if (*(arg1 + 0xe) == 0x10)
        void* var_30_3 = &arg1[3]
        int16_t* ecx_5 = ebx_1
        
        if (arg1[3].w != 1)
            sub_71e840(&arg1[3], edx_1, ecx_5, ecx_4, edx_1, ecx_4)
        else
            sub_71d980(&arg1[3], edx_1, ecx_5, ecx_4, edx_1, ecx_4)
    
    arg1[0x15] = arg2
    arg2:3.b = 1
else
    arg2:3.b = 0

if (ebx_1 != 0)
    j__free(ebx_1)

uint32_t eax_11
eax_11.b = arg2:3.b
fsbase->NtTib.ExceptionList = ExceptionList
return eax_11
