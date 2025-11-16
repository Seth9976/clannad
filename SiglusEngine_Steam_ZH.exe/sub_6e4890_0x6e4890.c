// 函数: sub_6e4890
// 地址: 0x6e4890
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg1 != 0)
    int32_t eax_1 = *arg1
    
    if (eax_1 != 0)
        _free(eax_1)
    
    int32_t eax_2 = arg1[4]
    
    if (eax_2 != 0)
        _free(eax_2)
    
    int32_t eax_3 = arg1[5]
    
    if (eax_3 != 0)
        _free(eax_3)
    
    _memset(arg1, 0, 0x168)

return 0
