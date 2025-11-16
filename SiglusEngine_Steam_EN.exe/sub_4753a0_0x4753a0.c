// 函数: sub_4753a0
// 地址: 0x4753a0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_4 = arg1
int32_t result

if (arg1 != 0xffffffff)
    if (arg2 != 0xffffffff)
        goto label_4753e4
    
    result = sub_465dc0(arg1, 0)
    
    if (result == 0)
        arg2 = 1
    label_4753e4:
        result = sub_465dc0(arg1, arg2)
        goto label_4753e9
else if (arg2 != arg1)
    result = sub_465e20(arg2)
label_4753e9:
    
    if (result == 0)
        if (data_1af1768 != result)
            data_1af177c = 1
            data_1af1768 = result
        
        sub_48d140()
        result = data_1af1788
        
        if (data_71929c == 0x11)
            result = 1
        
        data_1af1788 = result
else
    result = sub_465e20(0)
    
    if (result == 0)
        result = sub_465e20(1)
        goto label_4753e9

return result
