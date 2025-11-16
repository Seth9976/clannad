// 函数: sub_475420
// 地址: 0x475420
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t result
int32_t edx

if (arg1 != 0xffffffff)
    result = sub_478260(arg1, edx, ecx, arg1)
else
    result = sub_4782d0(ecx, edx)

if (result == 0)
    if (data_1af1768 != result)
        data_1af177c = 1
        data_1af1768 = result
    
    sub_48d140()
    result = data_1af1788
    
    if (data_71929c == 0x11)
        result = 1
    
    data_1af1788 = result

return result
