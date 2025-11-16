// 函数: sub_65afc0
// 地址: 0x65afc0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax
int32_t edx
edx:eax = muls.dp.d(0x2fa0be83, arg2[1] - *arg2)
int32_t edx_1 = edx s>> 6
sub_5979b0(arg1, &arg1[3][1])
int32_t* ecx_3 = *arg1

if (ecx_3 == arg1[1])
    ecx_3 = nullptr

int32_t result = arg1[3]
*(ecx_3 + result) = (edx_1 u>> 0x1f) + edx_1
arg1[3] = &arg1[3][1]

for (int32_t* i = *arg2; i != arg2[1]; i = &i[0x56])
    result = sub_6762f0(i, arg1)

return result
