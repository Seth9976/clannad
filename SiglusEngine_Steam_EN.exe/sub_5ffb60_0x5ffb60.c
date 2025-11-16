// 函数: sub_5ffb60
// 地址: 0x5ffb60
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* var_14
sub_5f1b77(&var_14, arg1)
uint32_t esi = zx.d(arg2)
int32_t var_10
int32_t eax_5
int32_t result

if ((*(var_10 + esi + 0x19) & arg4) == 0)
    result = 0
    
    if (arg3 == 0)
        eax_5 = 0
    else
        eax_5 = zx.d(*(*(var_14 + 0x90) + (esi << 1))) & arg3

if ((*(var_10 + esi + 0x19) & arg4) != 0 || eax_5 != 0)
    result = 1

char var_8
void* var_c

if (var_8 != 0)
    *(var_c + 0x70) &= 0xfffffffd
return result
