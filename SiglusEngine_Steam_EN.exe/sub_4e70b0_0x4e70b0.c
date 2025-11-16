// 函数: sub_4e70b0
// 地址: 0x4e70b0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = *arg1

if (eax != 0)
    _free(eax)
    *arg1 = 0

int32_t result = arg1[1]

if (result != 0)
    result = _free(result)
    arg1[1] = 0

arg1[2] = 0
return result
