// 函数: sub_54d5d0
// 地址: 0x54d5d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b1419
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_14 = arg1
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* edi = arg1
void* var_14_1 = edi

while (edi != arg2)
    int32_t var_8_1 = 1
    int32_t* ecx = *(edi + 0x160)
    
    if (ecx != 0)
        (**ecx)(1)
    
    var_8_1.b = 0
    sub_54d390(edi + 0x148)
    sub_548f60(edi + 0xa8)
    int32_t var_8_2 = 0xffffffff
    
    if (*(edi + 0x20) u>= 8)
        j__free(*(edi + 0xc))
    
    *(edi + 0x20) = 7
    *(edi + 0x1c) = 0
    *(edi + 0xc) = 0
    edi += 0x164
    void* var_14_2 = edi

fsbase->NtTib.ExceptionList = ExceptionList
