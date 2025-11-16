// 函数: sub_5530d0
// 地址: 0x5530d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

*arg1 = 0
arg1[1] = 0
arg1[2] = 0

if (arg2 == 0)
    int32_t eax
    eax.b = 0
    return eax

if (arg2 u> 0x2e8ba2e)
    sub_743191("vector<T> too long")
    noreturn

uint32_t edi = arg2 * 0x58
int32_t eax_1 = sub_745f3f(edi)

if (eax_1 == 0)
    sub_743132()
    noreturn

*arg1 = eax_1
arg1[1] = eax_1
arg1[2] = eax_1 + edi
int32_t eax_2
eax_2.b = 1
return eax_2
