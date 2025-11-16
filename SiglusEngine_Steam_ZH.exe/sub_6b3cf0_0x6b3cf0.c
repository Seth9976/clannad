// 函数: sub_6b3cf0
// 地址: 0x6b3cf0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg1 == 0)
    return 1

int32_t eax_2
int32_t edx
edx:eax_2 = sx.q(arg1)
int32_t i = (eax_2 ^ edx) - edx
int32_t result = 0

for (; i s> 0; i s/= 0xa)
    result += 1

return result
