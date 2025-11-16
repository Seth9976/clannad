// 函数: sub_4992b4
// 地址: 0x4992b4
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg1 != 0)
    void* eax_1 = *(arg1 + 0x1c)
    
    if (eax_1 != 0 && *(arg1 + 0x24) != 0)
        int32_t* eax_2 = *(eax_1 + 0x14)
        
        if (eax_2 != 0)
            sub_4e4ad0(eax_2, arg1)
        
        (*(arg1 + 0x24))(*(arg1 + 0x28), *(arg1 + 0x1c))
        *(arg1 + 0x1c) = 0
        return 0

return 0xfffffffe
