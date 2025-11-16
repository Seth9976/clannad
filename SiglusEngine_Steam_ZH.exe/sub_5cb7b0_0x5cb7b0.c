// 函数: sub_5cb7b0
// 地址: 0x5cb7b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t var_24 = arg1
int32_t var_20
int16_t* lpFileName = sub_5c4880(&var_20)

if (*(lpFileName + 0x14) u>= 8)
    lpFileName = *lpFileName

uint32_t result = GetFileAttributesW(lpFileName)
int32_t esi

if (result != 0xffffffff)
    result.b = not.b(result.b)
    esi = zx.d(result.b) u>> 4 & 1
else
    esi = arg1 | result

int32_t var_c

if (var_c u>= 8)
    j__free(var_20)

result.b = esi == 1
sub_745f2b(eax_1 ^ &__saved_ebp)
return result
