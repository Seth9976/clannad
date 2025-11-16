// 函数: sub_643460
// 地址: 0x643460
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t eax_2 = arg5
int32_t var_8c = 0xccddeeff
int32_t var_88 = 0x8899aabb
int32_t var_84
__builtin_strncpy(&var_84, "wfUD", 4)
int32_t var_80 = 0x112233
int32_t var_7c = 0xffeeddcc
int32_t var_78 = 0xbbaa9988
int32_t var_74
__builtin_strncpy(&var_74, "DUfw", 4)
int32_t var_70 = 0x33221100
int32_t var_6c = 0x112233
int32_t var_68
__builtin_strncpy(&var_68, "wfUD", 4)
int32_t var_64 = 0x8899aabb
int32_t var_60 = 0xccddeeff
int32_t var_5c = 0x33221100
int32_t var_58
__builtin_strncpy(&var_58, "DUfw", 4)
int32_t var_54
__builtin_memcpy(&var_54, 
    "\x88\x99\xaa\xbb\xcc\xdd\xee\xff\xff\xbb\x77\x33\xee\xaa\x66\x22\xdd\x99\x55\x11\xcc\x88\x44\x00\x"
"cc\x88\x44\x00\xdd\x99\x55\x11\xee\xaa\x66\x22\xff\xbb\x77\x33\x33\x77\xbb\xff\x22\x66\xaa\xee\x11"
"55\x99\xdd\x00\x44\x88\xcc\x00\x44\x88\xcc\x11\x55\x99\xdd\x22\x66\xaa\xee\x33\x77\xbb\xff", 
    0x48)

if (eax_2 s< 0 || eax_2 s>= 8)
    eax_2 = 0

int32_t* ecx
int32_t edx
int32_t result = sub_643250(&(&__saved_ebp)[eax_2 * 4 - 0x22], edx, ecx, arg1, arg2, arg3, arg4, 
    &(&__saved_ebp)[eax_2 * 4 - 0x22])
sub_745f2b(eax_1 ^ &__saved_ebp)
return result
