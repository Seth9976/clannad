// 函数: __mtinit
// 地址: 0x1000532b
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\RealLiveSteam.dll

__init_pointers()
sub_1000647c()
int32_t eax_2 = sub_10005afd(sub_10005086)
data_100172cc = eax_2

if (eax_2 == 0xffffffff)
    __mtterm()
    return 0

uint32_t* eax_3 = sub_10004212(1, 0x3bc)

if (eax_3 != 0 && sub_10005b59(data_100172cc, eax_3) != 0)
    __initptd(eax_3, 0)
    uint32_t eax_5 = GetCurrentThreadId()
    eax_3[1] = 0xffffffff
    *eax_3 = eax_5
    return 1

__mtterm()
return 0
