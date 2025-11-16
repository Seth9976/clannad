// 函数: sub_407320
// 地址: 0x407320
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

double var_8 = fconvert.d(float.t(arg1 & 0x1fffff))

if ((arg1 & 0x80000000) != 0)
    var_8 = fconvert.d(fneg(fconvert.t(var_8)))

int32_t var_10 = var_8:4.d
int32_t edi
return sub_5f2a5d(edi, var_8.d, (arg1 s>> 0x15 & 0x3ff) - 0x314)
