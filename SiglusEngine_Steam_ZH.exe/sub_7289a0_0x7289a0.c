// 函数: sub_7289a0
// 地址: 0x7289a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t i = arg2
int32_t* esi = *(arg1 + 0x18)

if (i s<= 0)
    return 

while (i s> esi[1])
    i -= esi[1]
    esi[3](arg1)

*esi += i
esi[1] -= i
