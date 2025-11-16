// 函数: sub_462ce9
// 地址: 0x462ce9
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg1 == 0)
    return 0x80004003

void*** eax = sub_745f3f(0x18)
void*** eax_1

if (eax == 0)
    eax_1 = nullptr
else
    eax_1 = sub_4619f4(eax)

*arg1 = eax_1
sub_4863c7()
void*** eax_2 = *arg1
int32_t eax_3 = neg.d(eax_2)
return (sbb.d(eax_3, eax_3, eax_2 != 0) & 0x7ff8fff2) - 0x7ff8fff2
