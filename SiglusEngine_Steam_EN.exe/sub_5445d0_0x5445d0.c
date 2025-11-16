// 函数: sub_5445d0
// 地址: 0x5445d0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg2 == 0x110)
    data_20c1680 = arg1
    sub_5441b0()
else
    if (arg2 != 0x111)
        return 0
    
    uint32_t eax_5 = zx.d(arg3)
    
    if (eax_5 == 0x4f4f)
        sub_544570()
        return 1
    
    if (eax_5 == 0x5019)
        sub_544520()

return 1
