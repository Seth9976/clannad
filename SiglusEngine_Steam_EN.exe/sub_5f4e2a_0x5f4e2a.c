// 函数: sub_5f4e2a
// 地址: 0x5f4e2a
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg1 == 0)
    return _flsall(arg1)

if (__flush(arg1) != 0)
    return 0xffffffff

if ((arg1[3] & 0x4000) == 0)
    return 0

enum WIN32_ERROR eax_3 = sub_5fdd0f(__fileno(arg1))
int32_t eax_4 = neg.d(eax_3)
return sbb.d(eax_4, eax_4, eax_3 != NO_ERROR)
