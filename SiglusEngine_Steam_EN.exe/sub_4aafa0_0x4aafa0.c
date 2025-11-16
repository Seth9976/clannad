// 函数: sub_4aafa0
// 地址: 0x4aafa0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t ebx = data_7030c4

if (data_703060 != 0)
    data_1bff8a0 = 0xff
    data_1bff8a4 = 0
    data_1bff8a8 = ebx

int32_t edx = data_703058
int32_t ecx_1 = 0xe10

if (edx - 1 u<= 2)
    ecx_1 = edx * 0xe10

if (data_703054 != 0)
    ecx_1 = neg.d(ecx_1)

int32_t result_2 = data_7030ac
int32_t edi = data_7030b0
int32_t eax_3
int32_t edx_1
edx_1:eax_3 = sx.q(data_7030b4 - result_2)
data_1bffce8 = ecx_1
int32_t ecx_3 = data_70305c - 1
int32_t result_1 = ((eax_3 - edx_1) s>> 1) + result_2
data_1bffce4 = 0
int32_t eax_7 = data_7030b8 - edi
data_1bffcec = ebx
int32_t eax_8
int32_t edx_2
edx_2:eax_8 = sx.q(eax_7)
data_1bffd18 = 0x3e8
data_1bffd1c = 0
int32_t edx_5 = ((eax_8 - edx_2) s>> 1) + edi
data_1bffd20 = ebx
data_1bffd4c = 0x3e8
data_1bffd50 = 0
data_1bffd54 = ebx
int32_t result

if (ecx_3 u> 3)
    result = result_1
    edi = edx_5
    result_2 = result
else
    switch (ecx_3)
        case 0
            result = result_1
        case 1
            result_2 = data_7030b4
            result = result_1
        case 2
            edi = data_7030b8
            result = result_1
        case 3
            result_2 = data_7030b4
            edi = data_7030b8
            result = result_1

data_1bffdb8 = edi
data_1bffd84 = result_2
data_1bffd88 = ebx
data_1bffdbc = ebx
data_1bffd80 = result
data_1bffdb4 = edx_5
return result
