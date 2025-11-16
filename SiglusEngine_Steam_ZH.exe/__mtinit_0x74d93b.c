// 函数: __mtinit
// 地址: 0x74d93b
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

__init_pointers()
sub_753f46()
int32_t eax_2 = sub_74d105(sub_74d6cc)
data_b4c494 = eax_2

if (eax_2 == 0xffffffff)
    __mtterm()
    return 0

uint32_t* eax_3 = sub_74cccf(1, 0x3bc)

if (eax_3 != 0 && sub_74d161(data_b4c494, eax_3) != 0)
    __initptd(eax_3, 0)
    uint32_t eax_5 = GetCurrentThreadId()
    eax_3[1] = 0xffffffff
    *eax_3 = eax_5
    return 1

__mtterm()
return 0
