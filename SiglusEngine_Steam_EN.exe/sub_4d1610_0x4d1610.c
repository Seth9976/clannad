// 函数: sub_4d1610
// 地址: 0x4d1610
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t result = 0xffffffff

if (*arg1 != 0)
    int32_t result_1 = 0
    
    do
        char eax = *arg1
        
        if (eax u< 0x80)
        label_4d163c:
            
            if (eax == arg2)
                result = result_1
            
            arg1 = &arg1[1]
            result_1 += 1
        else if (eax u< 0xa0)
            if (eax u>= 0xfe)
                goto label_4d163c
            
            arg1 = &arg1[2]
            result_1 += 2
        else
            if (eax u<= 0xdf || eax u>= 0xfe)
                goto label_4d163c
            
            arg1 = &arg1[2]
            result_1 += 2
    while (*arg1 != 0)

return result
