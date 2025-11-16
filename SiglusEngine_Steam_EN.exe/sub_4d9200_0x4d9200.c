// 函数: sub_4d9200
// 地址: 0x4d9200
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg1 == 0 || arg2 == 0)
    return 0

*arg1 = 0
int32_t eax = MultiByteToWideChar(arg4, 0, arg2, 0xffffffff, arg1, arg3)
int32_t eax_1 = neg.d(eax)
return sbb.d(eax_1, eax_1, eax != 0) & arg1
