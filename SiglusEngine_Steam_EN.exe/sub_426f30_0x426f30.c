// 函数: sub_426f30
// 地址: 0x426f30
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t result = 0

if (arg2 != 0)
    uint32_t ecx = zx.d(*arg2)
    int32_t* edx_2
    
    if (ecx == 0 || ecx == 1)
        edx_2 = &arg2[5]
    label_426f6d:
        result = 1
        
        if (arg2 - edx_2 + arg4 != *edx_2)
            if (arg3 != 0)
                int32_t var_14_1 = arg3
                char* eax_2 = sub_4c84d0(&data_7027c0, 0x614110)
                
                if (data_702fc0 != 0)
                    sub_55f390(
                        sub_55f1e0(
                            sub_55ef70(eax_2, data_72d6ac, data_719b6c, 0x613340, &data_7027c0), 
                            data_72d6ac, data_719b6c, 0x613340, &data_7027c0), 
                        data_72d6ac, data_719b6c, 0x613340, &data_7027c0)
                    sub_4a1e40(3)
                
                sub_446a50()
            
            return 0
    else if (ecx == 2)
        edx_2 = &arg2[*(arg2 + 5) * 0x18 + 9]
        goto label_426f6d

return result
