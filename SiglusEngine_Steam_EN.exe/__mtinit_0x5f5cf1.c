// 函数: __mtinit
// 地址: 0x5f5cf1
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

__init_pointers()
sub_5fc31b()
int32_t eax_2 = sub_5f3656(sub_5f5a82)
data_63be70 = eax_2

if (eax_2 == 0xffffffff)
    __mtterm()
    return 0

uint32_t* eax_3 = sub_5f6a6e(1, 0x3bc)

if (eax_3 != 0 && sub_5f36b2(data_63be70, eax_3) != 0)
    __initptd(eax_3, 0)
    uint32_t eax_5 = GetCurrentThreadId()
    eax_3[1] = 0xffffffff
    *eax_3 = eax_5
    return 1

__mtterm()
return 0
