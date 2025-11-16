// 函数: sub_48d4c0
// 地址: 0x48d4c0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_c = arg1
*arg1 = 0

if (data_702fc0 != 0)
    int32_t eax_1 = 1
    
    if (data_13184f8 == 0)
        if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
            eax_1 = 0
        
        if (data_1311178 != 0 && data_13184e8:4 == 0)
            eax_1 = 0
        
        if (data_1af174c == 0 && eax_1 != 0)
            sub_55f390(
                sub_55f1e0(sub_55ef70(eax_1, data_72d6ac, data_719b6c, "CALL", nullptr), 
                    data_72d6ac, data_719b6c, "CALL", nullptr), 
                data_72d6ac, data_719b6c, "CALL", nullptr)

LRESULT result = sub_55c6f0(*arg1)
data_1af08bc = 0
return result
