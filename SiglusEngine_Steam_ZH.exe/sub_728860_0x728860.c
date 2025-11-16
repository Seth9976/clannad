// 函数: sub_728860
// 地址: 0x728860
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* result_1 = arg1

if (arg1[5] != 0xcd)
    *(*arg1 + 0x14) = 0x15
    *(*arg1 + 0x18) = arg1[5]
    (**arg1)(arg1)

int32_t eax_5 = arg1[0x1e]

if (eax_5 u>= arg1[0x18])
    *(*arg1 + 0x14) = 0x7e
    (*(*arg1 + 4))(arg1, 0xffffffff)
    return 0

void* ecx = arg1[2]

if (ecx != 0)
    *(ecx + 4) = eax_5
    *(arg1[2] + 8) = arg1[0x18]
    (*arg1[2])(arg1)

void* eax_13 = arg1[0x67]
result_1 = nullptr
(*(eax_13 + 4))(arg1, arg2, &result_1, 1)
int32_t* result = result_1
arg1[0x1e] += result
return result
