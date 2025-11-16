// 函数: sub_492bb0
// 地址: 0x492bb0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg1 u> 3)
    return 0

int32_t ecx

if (*(arg1 * 0x248 + 0x924908) == 0
        || (*(arg1 * 0x248 + 0x92491c) s<= 0 && *(arg1 * 0x248 + &data_924920) s<= 0))
    ecx = 0
else
    ecx = 1

int32_t edx

if (*(arg1 * 0x248 + &data_924950) == 0
        || (*(arg1 * 0x248 + 0x924964) s<= 0 && *(arg1 * 0x248 + 0x924968) s<= 0))
    edx = 0
else
    edx = 1

int32_t edx_1

if (*(arg1 * 0x248 + 0x924998) == 0
        || (*(arg1 * 0x248 + 0x9249ac) s<= 0 && *(arg1 * 0x248 + 0x9249b0) s<= 0))
    edx_1 = 0
else
    edx_1 = 1

int32_t result = ecx | edx | edx_1

if (*(arg1 * 0x248 + 0x9249e0) != 0
        && (*(arg1 * 0x248 + 0x9249f4) s> 0 || *(arg1 * 0x248 + 0x9249f8) s> 0))
    return 1 | result

return result
