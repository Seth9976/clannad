// 函数: sub_75ea0d
// 地址: 0x75ea0d
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg1 != 0xfffffffe)
    if (arg1 s>= 0 && arg1 u< data_4ecd224)
        int32_t* eax_5 = (&data_b95720)[arg1 s>> 5]
        
        if ((eax_5[(arg1 & 0x1f) * 0x10 + 1].b & 1) != 0)
            return eax_5[(arg1 & 0x1f) * 0x10]
    
    *___doserrno() = 0
    *__errno() = 9
    __invalid_parameter_noinfo()
else
    *___doserrno() = 0
    *__errno() = 9

return 0xffffffff
