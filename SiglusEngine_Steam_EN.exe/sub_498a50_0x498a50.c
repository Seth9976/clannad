// 函数: sub_498a50
// 地址: 0x498a50
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

BOOL result = sub_4d6c40(&data_20740cc, &data_20740d0)
data_20740cc = 0
data_20740d0 = 0

if (arg1 != 0 && *arg1 != 0)
    uint32_t eax = sub_4cfc80(arg1)
    result = sub_4d6960(eax, &data_20740d0, &data_20740cc, eax, "SELBTNOBJ_MESSAGE_STR")
    sub_4d1c30(result, arg1, data_20740d0, eax)

return result
