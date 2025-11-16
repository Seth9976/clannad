// 函数: sub_417be7
// 地址: 0x417be7
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* ebx = arg1[0x15]
int32_t edi
int32_t var_10 = edi

if (arg3 u> ebx[1])
    sub_46691d(arg1, "read error")
    noreturn

int32_t esi_2
int32_t edi_2
edi_2, esi_2 = __builtin_memcpy(arg2, *ebx, arg3 u>> 2 << 2)
__builtin_memcpy(edi_2, esi_2, arg3 & 3)
*ebx += arg3
ebx[1] -= arg3
return arg3
