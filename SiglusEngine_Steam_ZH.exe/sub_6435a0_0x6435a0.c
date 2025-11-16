// 函数: sub_6435a0
// 地址: 0x6435a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t eax_2 = arg5
int32_t var_8c = 0xccddeeff
int32_t var_88 = 0xbbaa9988
int32_t var_84
__builtin_strncpy(&var_84, "wfUD", 4)
int32_t var_80 = 0x33221100
int32_t var_7c = 0xffeeddcc
int32_t var_78 = 0x8899aabb
int32_t var_74
__builtin_strncpy(&var_74, "DUfw", 4)
int32_t var_70 = 0x112233
int32_t var_6c = 0x33221100
int32_t var_68
__builtin_strncpy(&var_68, "wfUD", 4)
int32_t var_64 = 0xbbaa9988
int32_t var_60 = 0xccddeeff
int32_t var_5c = 0x112233
int32_t var_58
__builtin_strncpy(&var_58, "DUfw", 4)
int32_t var_54
__builtin_memcpy(&var_54, 
    "\xbb\xaa\x99\x88\xcc\xdd\xee\xff\xff\x88\x77\x00\xee\x99\x66\x11\xdd\xaa\x55\x22\xcc\xbb\x44\x33\x"
"cc\xbb\x44\x33\xdd\xaa\x55\x22\xee\x99\x66\x11\xff\x88\x77\x00\x00\x77\x88\xff\x11\x66\x99\xee\x22"
"55\xaa\xdd\x33\x44\xbb\xcc\x33\x44\xbb\xcc\x22\x55\xaa\xdd\x11\x66\x99\xee\x00\x77\x88\xff", 
    0x48)

if (eax_2 s< 0 || eax_2 s>= 8)
    eax_2 = 0

int32_t* ecx
int32_t edx
int32_t result = sub_643250(&(&__saved_ebp)[eax_2 * 4 - 0x22], edx, ecx, arg1, arg2, arg3, arg4, 
    &(&__saved_ebp)[eax_2 * 4 - 0x22])
sub_745f2b(eax_1 ^ &__saved_ebp)
return result
