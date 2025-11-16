// 函数: sub_464d80
// 地址: 0x464d80
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx = arg1[5]

if (ecx != 0xc8 && ecx != 0xc9)
    void* eax_1 = *arg1
    *(eax_1 + 0x14) = 0x14
    *(eax_1 + 0x18) = ecx
    (*eax_1)(arg1)

int32_t result = sub_464c00(arg1)

if (result == 1)
    return 1

if (result != 2)
    return result

if (arg2 != 0)
    void* eax_3 = *arg1
    *(eax_3 + 0x14) = 0x33
    (*eax_3)(arg1)

sub_498460(arg1)
return 2
