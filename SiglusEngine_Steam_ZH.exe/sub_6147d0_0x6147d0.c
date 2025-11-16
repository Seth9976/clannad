// 函数: sub_6147d0
// 地址: 0x6147d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bf048
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_14 = arg3
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* i = arg2
int32_t var_14_1 = 0
int32_t var_8_1 = 0
void* arg_8

for (; i != arg4; i = &i[4])
    sub_614a30(&arg_8, i)

int32_t var_8_2 = 0xffffffff
void* esi = arg_8
*arg3 = 0
arg3[1] = 0
arg3[2] = 0
arg3[3] = 0
arg3[4] = arg6

if (esi != 0)
    if (esi != arg5)
        do
            sub_5b4e70(esi + 4)
            esi += 0x10
        while (esi != arg5)
        
        esi = arg_8
    
    j__free(esi)

fsbase->NtTib.ExceptionList = ExceptionList
return arg3
