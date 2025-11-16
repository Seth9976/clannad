// 函数: sub_6bf6a0
// 地址: 0x6bf6a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg1 == 0 || arg2 == 0)
    return 1

int32_t result = arg1[0x19]

if (result != 0)
    return result

if (arg1[0x18] == result)
    sub_6bf9f0(arg1)
    __builtin_memset(&arg1[8], 0, 0x40)
    arg1[5] = 0
    arg1[6] = 0
    arg1[0x18] = 1

for (uint8_t* i = nullptr; i s< 0x14; i = &i[1])
    i[arg2] = (arg1[i s>> 2] u>> ((3 - (i & 3)) << 3).b).b

return 0
