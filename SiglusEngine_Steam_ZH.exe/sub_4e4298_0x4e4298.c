// 函数: sub_4e4298
// 地址: 0x4e4298
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_10 = edi

if (arg3 != 0)
    *arg3 = arg1[0xf]

int32_t eax_1 = *arg1

if (eax_1 == 4 || eax_1 == 5)
    (*(arg2 + 0x24))(*(arg2 + 0x28), arg1[3])

if (*arg1 == 6)
    sub_4e8020(arg1[1], arg2)

int32_t eax_2 = arg1[0xa]
arg1[0xd] = eax_2
arg1[0xc] = eax_2
int32_t result = arg1[0xe]
*arg1 = 0
arg1[7] = 0
arg1[8] = 0

if (result != 0)
    result = result(0, 0, 0)
    arg1[0xf] = result
    *(arg2 + 0x30) = result

return result
