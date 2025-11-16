// 函数: sub_4b88a0
// 地址: 0x4b88a0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* var_4 = arg1

if (*(arg1 + 0x74) s<= 1)
    return 0

int32_t eax = *(arg1 + 0x78)
int32_t eax_1

if (eax s<= 0)
    eax_1 = 7
else if (eax == 1)
    eax_1 = 7 - modu.dp.d(0:(sub_4d18c0(2)), 3)
else if (eax != 2)
    eax_1 = sub_4d18c0(2) & 7
else
    eax_1 = 7 - modu.dp.d(0:(sub_4d18c0(2)), 6)

int32_t result = *(arg1 + (eax_1 << 2) + 0x17c)

if (*(arg1 + 0x178) s<= 1)
    return result

return modu.dp.d(0:(sub_4d18c0(2)), *(arg1 + 0x178)) + result
