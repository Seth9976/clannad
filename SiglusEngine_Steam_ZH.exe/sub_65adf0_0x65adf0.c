// 函数: sub_65adf0
// 地址: 0x65adf0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg1[0x2d].b == 0)
    int32_t result_1
    sub_65bfe0(arg2, &arg1[0x29], &result_1)
    int32_t eax_8
    int32_t edx_7
    edx_7:eax_8 = muls.dp.d(0x30c30c31, arg1[0x2a] - arg1[0x29])
    int32_t edx_8 = edx_7 s>> 6
    (*(*arg1 + 8))(arg2, 0, (edx_8 u>> 0x1f) + edx_8)
    int32_t* ecx_9 = *arg2
    
    if (ecx_9 == arg2[1])
        ecx_9 = nullptr
    
    int32_t result = result_1
    *(ecx_9 + result) = arg2[3]
    return result

int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x30c30c31, arg1[0x2a] - arg1[0x29])
int32_t edx_3 = edx_2 s>> 6
sub_5979b0(arg2, &arg2[3][1])
int32_t* edx_4 = *arg2

if (edx_4 == arg2[1])
    edx_4 = nullptr

*(edx_4 + arg2[3]) = (edx_3 u>> 0x1f) + edx_3
arg2[3] = &arg2[3][1]
int32_t eax_3
int32_t edx_5
edx_5:eax_3 = muls.dp.d(0x30c30c31, arg1[0x2a] - arg1[0x29])
int32_t edx_6 = edx_5 s>> 6
return (*(*arg1 + 8))(arg2, 0, (edx_6 u>> 0x1f) + edx_6)
