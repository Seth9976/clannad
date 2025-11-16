// 函数: sub_4a5d20
// 地址: 0x4a5d20
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

HWND result = GetActiveWindow()

if (result != data_7027bc && (data_139270c == 0xffffffff || result != data_1bfe270)
        && sub_41e4e0(result) == 0)
    result = GetActiveWindow()
    
    if (data_702fc0 != 0)
        for (int32_t* i = &data_1af0a10; i s< &data_1af0b10; i = &i[1])
            int32_t edx_1 = *i
            
            if (edx_1 != 0 && edx_1 == result)
                goto label_4a5d86
    
    int32_t ecx_2 = data_1c054ec
    
    if (ecx_2 == 0 || ecx_2 != result)
        result.b = 0
        return result

label_4a5d86:
result.b = 1
return result
