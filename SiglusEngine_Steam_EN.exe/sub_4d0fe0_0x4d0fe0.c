// 函数: sub_4d0fe0
// 地址: 0x4d0fe0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg3 == 0 || arg2 == 0)
    return 1

arg1 = *arg3
int32_t esi = 0

if (arg1 != 0)
    while (true)
        if (arg1 == *arg2)
            if (arg1 u< 0x80)
            label_4d101f:
                arg3 = &arg3[1]
                arg2 = &arg2[1]
                esi += 1
            label_4d1022:
                
                if (esi == arg4)
                    return 0
                
                arg1 = *arg3
                
                if (arg1 == 0)
                    break
                
                continue
            else
                if (arg1 u< 0xa0)
                    if (arg1 u>= 0xfe)
                        goto label_4d101f
                else if (arg1 u<= 0xdf || arg1 u>= 0xfe)
                    goto label_4d101f
                
                if (arg3[1] == arg2[1])
                    arg3 = &arg3[2]
                    arg2 = &arg2[2]
                    esi += 2
                    goto label_4d1022
        
        return 1

int32_t result
result.b = *arg2 != 0
return result
