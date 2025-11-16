// 函数: sub_748f1b
// 地址: 0x748f1b
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t dwExceptionCode
__builtin_memcpy(&dwExceptionCode, 0xaad184, 0x20)
char* esi = arg2

if (esi != 0 && (*esi & 0x10) != 0)
    int32_t* ecx_2 = *arg1 - 4
    void* eax_1 = *ecx_2
    esi = *(eax_1 + 0x18)
    (*(eax_1 + 0x20))(ecx_2)

int32_t* var_c = arg1
char* var_8 = esi
uint32_t arguments

if (esi != 0 && (*esi & 8) != 0)
    arguments = 0x1994000

uint32_t dwExceptionFlags
uint32_t nNumberOfArguments
RaiseException(dwExceptionCode, dwExceptionFlags, nNumberOfArguments, &arguments)
noreturn
