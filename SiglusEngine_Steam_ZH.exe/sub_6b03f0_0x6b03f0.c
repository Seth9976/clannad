// 函数: sub_6b03f0
// 地址: 0x6b03f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if ((*arg3 == 0 || (arg2 & 4) != 0) && (arg3[1] == 0 || (*(arg1 + 0x1b) & 3) != 2))
    int32_t eax_1 = *(arg3 + 8)
    
    if ((eax_1 != 1 || *(arg1 + 0x1c) != 0x40) && (eax_1 != 2 || *(arg1 + 0x1c) == 0x40))
        if (eax_1 == 3)
            if (*(arg1 + 0x1c) == 0x40)
                sub_6b0eb0(&arg3[0x18], arg1)
                return 1
            
            sub_6b0eb0(&arg3[0xc], arg1)
            return 1
        
        sub_6b0eb0(&arg3[0x24], arg1)

return 1
