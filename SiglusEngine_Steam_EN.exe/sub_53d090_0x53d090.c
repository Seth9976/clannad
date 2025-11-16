// 函数: sub_53d090
// 地址: 0x53d090
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax

if (arg1 u<= 0x100)
    int32_t eax_1 = sub_496b50(eax, 1, arg1, arg4, 0)
    
    if (eax_1 == 0)
        if (data_702fc0 != 0)
            sub_55f390(
                sub_55f1e0(sub_55ef70(eax_1, data_72d6ac, data_719b6c, 0x61f9d4, &data_6191cc), 
                    data_72d6ac, data_719b6c, 0x61f9d4, &data_6191cc), 
                data_72d6ac, data_719b6c, 0x61f9d4, &data_6191cc)
            sub_4a1e40(3)
    else if (eax_1 == 1)
        int32_t edx_1 = 0xffffffff
        
        if (arg2 != 0)
            edx_1 = 5
        
        sub_496930(5, edx_1, arg1, 1, 1)
        int32_t ecx_3 = data_1af19d8
        
        if (arg3 != 0)
            ecx_3 = 1
        
        data_1af19d8 = ecx_3
        return 1
else if (data_702fc0 != 0)
    sub_55f390(
        sub_55f1e0(sub_55ef70(eax, data_72d6ac, data_719b6c, 0x61f9d4, &data_61f9bc), data_72d6ac, 
            data_719b6c, 0x61f9d4, &data_61f9bc), 
        data_72d6ac, data_719b6c, 0x61f9d4, &data_61f9bc)
    sub_4a1e40(3)
return 0
