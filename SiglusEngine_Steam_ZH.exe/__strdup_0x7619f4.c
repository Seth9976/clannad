// 函数: __strdup
// 地址: 0x7619f4
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg1 == 0)
    return 0

void* edi = _strlen(arg1) + 1
char* result = _malloc(edi)

if (result == 0)
    return nullptr

if (_strcpy_s(result, edi, arg1) == 0)
    return result

int32_t var_20
__builtin_memset(&var_20, 0, 0x14)
__invoke_watson()
noreturn
