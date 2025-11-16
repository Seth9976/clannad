// 函数: sub_72ffe0
// 地址: 0x72ffe0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void** (* (** eax_2)(int32_t arg1))(void* arg1, int32_t* arg2, void** arg3, int32_t arg4) =
    (*arg1[1])(arg1, 1, 0x58)
arg1[0x70] = eax_2
*eax_2 = sub_72fee0
eax_2[2] = sub_52e4f0
eax_2[3] = sub_72ffc0
eax_2[0x11] = 0
eax_2[0xd] = 0

if (arg1[0x19] s> 4)
    *(*arg1 + 0x14) = 0x39
    *(*arg1 + 0x18) = 4
    (**arg1)(arg1)

if (arg1[0x15] s> 0x100)
    *(*arg1 + 0x14) = 0x3b
    *(*arg1 + 0x18) = 0x100
    (**arg1)(arg1)

sub_72f640(arg1)
int32_t result = sub_72f790(arg1)

if (arg1[0x13] != 2)
    return result

return sub_72fe90(arg1) __tailcall
