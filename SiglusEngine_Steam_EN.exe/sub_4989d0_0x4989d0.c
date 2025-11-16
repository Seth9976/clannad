// 函数: sub_4989d0
// 地址: 0x4989d0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (data_1311178 == 0)
    if (*arg1 == 0)
        bool cond:1_1 = arg1[0x44] != 0
        *arg1 = 1
        
        if (not(cond:1_1))
            if (arg1[0x45] s<= 1)
                sub_498710(arg1, &data_61b038)
                sub_498850(arg1, arg2)
                arg1[0xc9] = 1
                
                if (data_1311178 == 0)
                    arg1[0x44] = 1
                    *arg1 = 1
                
                int32_t eax_1
                eax_1.b = 1
                return eax_1
            
            arg1[0x44] = 1
    else
        arg1[0x44] = 1

int32_t eax
eax.b = 0
return eax
