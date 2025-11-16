// 函数: sub_437498
// 地址: 0x437498
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg1 != arg2)
    if (arg1 - 1 u> 0xb)
        return 1
    
    int32_t eax_6
    bool cond:0_1
    bool cond:1_1
    bool cond:2_1
    
    switch (arg1)
        case 1, 5
            if (arg2 s<= 0)
                return 1
            
            cond:1_1 = arg2 s<= 8
        label_4374bb:
            
            if (not(cond:1_1))
                return 1
        case 2, 6
            if (arg2 s<= 0)
                return 1
            
            if (arg2 s> 2)
                if (arg2 s<= 4)
                    return 1
                
                cond:1_1 = arg2 s<= 6
                goto label_4374bb
        case 3, 7
            if (arg2 != 1 && arg2 != 3)
                eax_6 = arg2 - 5
                cond:0_1 = arg2 == 5
                goto label_4374e0
        case 4, 8
            if (arg2 != 1)
                if (arg2 s<= 3)
                    return 1
                
                if (arg2 s> 5)
                    cond:2_1 = arg2 != 8
                    goto label_43751b
        case 9
            if (arg2 s< 9)
                return 1
            
            cond:1_1 = arg2 s<= 0xc
            goto label_4374bb
        case 0xa
            if (arg2 s< 9)
                return 1
            
            cond:1_1 = arg2 s<= 0xa
            goto label_4374bb
        case 0xb
            eax_6 = arg2 - 9
            cond:0_1 = arg2 == 9
        label_4374e0:
            
            if (not(cond:0_1))
                cond:2_1 = eax_6 != 2
                goto label_43751b
        case 0xc
            if (arg2 != 9)
                cond:2_1 = arg2 != 0xc
            label_43751b:
                
                if (cond:2_1)
                    return 1

return 0
