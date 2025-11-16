// 函数: sub_4d5970
// 地址: 0x4d5970
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax_1 = data_1356ed4 * arg1
data_131d2cc = arg1
data_1320e58 = arg2
int32_t eax_5 = data_1356ec0 * arg2
int32_t ecx_1 = divs.dp.d(sx.q(eax_1), data_1332b60) + data_1356ec4
data_1c051a4 = ecx_1
POINT point
point.x = ecx_1
data_1332b64
int32_t eax_8 = divs.dp.d(sx.q(eax_5), data_1332b64) + data_1356ec8
data_1c051a8 = eax_8
point.y = eax_8
ClientToScreen(data_7027bc, &point)
int32_t eax_10 = SetCursorPos(point.x, point.y) - 1
int32_t eax_11 = neg.d(eax_10)
return neg.d(sbb.d(eax_11, eax_11, eax_10 != 0))
