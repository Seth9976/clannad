// 函数: sub_48d1a0
// 地址: 0x48d1a0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t result = 0
bool cond:0_1

do
    char edx = *arg1
    
    if (edx != 0x40 && edx != 0xa && edx != 0x21)
        goto label_48d1c7
    
    result += 1
    arg1 = &arg1[1]
    cond:0_1 = result != 0x20
    
    if (result s< 0x20)
        *arg1 = 0
        result += 1
        arg1 = &arg1[1]
        cond:0_1 = result != 0x20
        
        if (result s< 0x20)
            *arg1 = 0
        label_48d1c7:
            result += 1
            arg1 = &arg1[1]
            cond:0_1 = result != 0x20
while (cond:0_1)
return result
