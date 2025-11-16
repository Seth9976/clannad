// 函数: sub_475580
// 地址: 0x475580
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg8 != 0 && data_13702a9 != 0)
    sub_42d590()
    return 1

enum MESSAGEBOX_RESULT eax_2

if (arg6 != 0xffffffff || arg7 != 0xffffffff)
    eax_2 = sub_478c00(arg7, arg5, arg4, arg6, arg7, arg3, arg2)
else
    eax_2 = sub_478ca0(arg7, arg5, arg4, arg3, arg2)

if (eax_2 == 0)
    if (data_1af1768 != eax_2)
        data_1af177c = 1
        data_1af1768 = eax_2
    
    sub_48d140()
    int32_t eax_3 = data_1af1788
    
    if (data_71929c == 0x11)
        eax_3 = 1
    
    data_1af1788 = eax_3

return 0
