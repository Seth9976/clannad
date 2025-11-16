// 函数: sub_4a19a0
// 地址: 0x4a19a0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t result

if (arg1 u> 0xf)
    if (data_1af1768 != 0)
        data_1af177c = 1
        data_1af1768 = 0
    
    sub_48d140()
    result = data_1af1788
    
    if (data_71929c == 0x11)
        result = 1
    
    data_1af1788 = result
else
    result = sub_49e5a0(arg1 * 0x788 + 0x92b978, arg1 + 0x20)
    
    if (result == 0)
        return sub_42d590() __tailcall

return result
