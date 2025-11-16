// 函数: sub_415410
// 地址: 0x415410
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = arg1
int32_t var_c_1 = 0
int32_t* eax

if (*(arg1 * 0x10c + 0x1097fe4) != 0)
    uint32_t ecx
    eax, ecx = sub_4151f0(arg1, nullptr)
    
    if (eax == 1)
        int32_t var_1c_1 = 0
        data_131d304 = sub_4254a0(eax, arg1 * 0x10c + 0x1097fe4, ecx, 0xffffffff, 0, eax, eax, eax)
    else if (*(arg1 * 0x10c + 0x109802c) == 0)
        char* var_1c_2 = arg1 * 0x10c + 0x1097fe4
        int32_t var_20_2 = arg1
        
        if (data_702fc0 != 0)
            eax = sub_4c84d0(&data_7027c0, 0x6133c8)
            
            if (data_702fc0 != 0)
                sub_55f390(
                    sub_55f1e0(sub_55ef70(eax, data_72d6ac, data_719b6c, 0x6133e4, &data_7027c0), 
                        data_72d6ac, data_719b6c, 0x6133e4, &data_7027c0), 
                    data_72d6ac, data_719b6c, 0x6133e4, &data_7027c0)
                sub_4a1e40(3)
        else
            sub_4c84d0(&data_7027c0, 0x613378)
            sub_446a50()
        
        var_c_1 = 1

if (*(arg1 * 0x10c + 0x1098008) == 0)
    goto label_415540

uint32_t ecx_5
eax, ecx_5 = sub_415300(arg1, nullptr)

if (eax == 1)
    int32_t var_1c_3 = 0
    data_131d308 = sub_4254a0(eax, arg1 * 0x10c + 0x1098008, ecx_5, 0xffffffff, 0, eax, eax, eax)
label_415540:
    
    if (var_c_1 != 0)
        *(arg1 * 0x10c + 0x109802c) = 1
    
    return 

if (*(arg1 * 0x10c + 0x109802c) != 0)
    goto label_415540

char* var_1c_4 = arg1 * 0x10c + 0x1098008
int32_t var_20_4 = arg1

if (data_702fc0 == 0)
    sub_4c84d0(&data_7027c0, 0x613420)
    sub_446a50()
    *(arg1 * 0x10c + 0x109802c) = 1
    return 

eax = sub_4c84d0(&data_7027c0, 0x613470)

if (data_702fc0 != 0)
    sub_55f390(
        sub_55f1e0(sub_55ef70(eax, data_72d6ac, data_719b6c, 0x6133e4, &data_7027c0), data_72d6ac, 
            data_719b6c, 0x6133e4, &data_7027c0), 
        data_72d6ac, data_719b6c, 0x6133e4, &data_7027c0)
    sub_4a1e40(3)
    *(arg1 * 0x10c + 0x109802c) = 1
    return 

*(arg1 * 0x10c + 0x109802c) = 1
