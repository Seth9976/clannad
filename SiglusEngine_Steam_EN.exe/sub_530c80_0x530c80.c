// 函数: sub_530c80
// 地址: 0x530c80
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = data_1af178c

if (eax s<= 0)
    eax = 0
else if (eax s<= 7)
    eax = 7

int32_t edx = data_1b8a70c
int32_t ecx_1 = data_703690:4 * eax
int32_t var_8 = ecx_1

if (data_1392710 - edx u>= ecx_1)
    int32_t eax_3 = sub_530bd0(data_703690:8, arg1)
    data_1af178c = 0
    return eax_3

int32_t eax_6 = sub_530bd0(data_703690:8 + ecx_1, arg1)
data_107f0f4 = edx
data_1af178c = 0
return eax_6
