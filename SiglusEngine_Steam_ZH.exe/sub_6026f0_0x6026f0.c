// 函数: sub_6026f0
// 地址: 0x6026f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* edi = arg1
void* eax

if (arg2 s>= 0)
    arg1 = 0xff
    eax = arg2
    
    if (arg2 s> 0xff)
        eax = 0xff
else
    eax = nullptr

void* var_10 = arg1
struct _EXCEPTION_REGISTRATION_RECORD** result = sub_6df430(edi + 0xf4, 1, eax, arg3)
*(edi + 0xe0) = arg2
return result
