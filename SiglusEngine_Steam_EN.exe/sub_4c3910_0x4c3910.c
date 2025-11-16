// 函数: sub_4c3910
// 地址: 0x4c3910
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char* esi = arg1
char* edi = arg2

if (esi == 0)
    return &arg1[3]

arg2.b = 0x5c
int32_t eax_1 = sub_4d1610(arg1, arg2.b)

if (eax_1 != 0xffffffff)
    esi = &esi[1 + eax_1]

arg2.b = 0x2e
void* eax_2 = sub_4d1610(esi, arg2.b)

if (eax_2 == 0xffffffff)
    return 2

int32_t eax_4 = sub_4d0f10(eax_2 + 1 + esi, edi)
int32_t eax_5 = neg.d(eax_4)
return neg.d(sbb.d(eax_5, eax_5, eax_4 != 0))
