// 函数: sub_5f12a0
// 地址: 0x5f12a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg1[0x2d].b == 0)
    return (*(*arg1 + 4))(0, arg1[0x2c])

int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x2e8ba2e9, arg1[0x2a] - arg1[0x29])
int32_t ebx = arg1[0x2c]
int32_t edx_3 = edx_2 s>> 3
int32_t edi_2 = (edx_3 u>> 0x1f) + edx_3
sub_55c860(&arg1[0x29], ebx)
int32_t eax_1 = *arg1

if (ebx s<= edi_2)
    return (*(eax_1 + 4))(0, ebx)

(*(eax_1 + 4))(0, edi_2)
return (**arg1)(edi_2, ebx)
