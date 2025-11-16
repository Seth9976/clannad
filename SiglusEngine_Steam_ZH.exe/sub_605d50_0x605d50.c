// 函数: sub_605d50
// 地址: 0x605d50
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = *arg1

if (result != 0)
    if ((result.b & 1) == 0)
        result = *(result & 0xfffffffe)
        
        if (result != 0)
            result = result(&arg1[2], &arg1[2], 2)
    
    *arg1 = 0

return result
