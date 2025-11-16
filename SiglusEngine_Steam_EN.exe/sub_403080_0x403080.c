// 函数: sub_403080
// 地址: 0x403080
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg1 != 0)
    int32_t i = 0
    
    if (arg1[2] s> 0)
        do
            int32_t eax_3 = *(*arg1 + (i << 2))
            
            if (eax_3 != 0)
                _free(eax_3)
            
            i += 1
        while (i s< arg1[2])
    
    int32_t eax_5 = *arg1
    
    if (eax_5 != 0)
        _free(eax_5)
    
    int32_t eax_6 = arg1[1]
    
    if (eax_6 != 0)
        _free(eax_6)
    
    int32_t eax = arg1[3]
    
    if (eax != 0)
        _free(eax)

*arg1 = 0
arg1[1] = 0
arg1[2] = 0
arg1[3] = 0
