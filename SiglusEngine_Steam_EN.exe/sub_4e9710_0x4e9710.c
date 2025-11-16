// 函数: sub_4e9710
// 地址: 0x4e9710
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char* eax = arg2[0xc]
void* ebx = *(arg1 + 0x13b3c)

if (*eax == 0)
    int32_t result = sub_4d6c40(&arg2[0xa], &arg2[0xb])
    arg2[0xc] = 0
    return result

sub_4eeae0(eax, arg2, arg1, ebx, 3, nullptr, nullptr)

if (sub_57ce10() != 0)
    return sub_57e2b0(ebx, 0x3f) __tailcall

char* eax_3
eax_3.b = *arg2[0xc]

if (eax_3.b u>= 0x80 && (eax_3.b u< 0xa0 || eax_3.b u> 0xdf) && eax_3.b u< 0xfe)
    return sub_4eca80(eax_3, arg2, arg1, nullptr, 0)

return sub_4eca80(eax_3, arg2, arg1, 1, 0)
