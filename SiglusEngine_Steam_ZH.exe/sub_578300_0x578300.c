// 函数: sub_578300
// 地址: 0x578300
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = *(arg1 + 0x490)
int128_t var_24
__builtin_memset(&var_24, 0, 0x19)
char* result = sub_54b210(eax, &(arg1 + 0x414)[eax], arg1 + 0x414, &var_24)
void* var_10

if (var_10 == 0)
    return result

uint32_t eax_1 = zx.d(*(arg1 + 0x4b8))
uint32_t var_2c_1 = eax_1
return sub_5876c0(eax_1, arg2, arg1 + 0xe0, arg3, arg4, var_10, *(arg1 + 0x494), *(arg1 + 0x4b0), 
    (*(arg1 + 0x4b4)).b)
