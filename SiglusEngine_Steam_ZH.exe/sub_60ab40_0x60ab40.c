// 函数: sub_60ab40
// 地址: 0x60ab40
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edx = arg1[3]
*arg3 = edx
sub_5979b0(arg1, edx + 4)
int32_t* ecx = *arg1

if (ecx == arg1[1])
    ecx = nullptr

*(ecx + arg1[3]) = 0
arg1[3] += 4
int32_t eax_4
int32_t edx_1
edx_1:eax_4 = muls.dp.d(0x51eb851f, arg2[1] - *arg2)
int32_t edx_2 = edx_1 s>> 8
sub_5979b0(arg1, arg1[3] + 4)
int32_t* ecx_4 = *arg1

if (ecx_4 == arg1[1])
    ecx_4 = nullptr

int32_t result = arg1[3]
*(ecx_4 + result) = (edx_2 u>> 0x1f) + edx_2
arg1[3] += 4
return result
