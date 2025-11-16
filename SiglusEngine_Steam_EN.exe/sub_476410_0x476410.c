// 函数: sub_476410
// 地址: 0x476410
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (data_702fc0 == 0)
    return 

arg1 = data_641ae8

if (arg1 s>= IDABORT || (data_63e160 == arg3 && data_63e15c == arg4))
    return 

data_63e160 = arg3
data_641ae8 = arg1 + 1
data_63e15c = arg4

if (arg3 s< 0 || arg3 s>= data_7031bc)
    int32_t var_14_3 = arg3
    sub_4c84d0(&data_7027c0, 0x619f60)
    arg1 = MessageBoxA(data_7027bc, &data_7027c0, 0x619e18, MB_OK)
    
    if (data_702fc0 != 0)
        sub_55f390(
            sub_55f1e0(sub_55ef70(arg1, data_72d6ac, data_719b6c, 0x619e50, &data_619fb0), 
                data_72d6ac, data_719b6c, 0x619e50, &data_619fb0), 
            data_72d6ac, data_719b6c, 0x619e50, &data_619fb0)
        sub_4a1e40(3)
else if (*((arg2 + (arg3 << 1)) * 0x7a0 + 0x98c180) == 0)
    int32_t var_14_2 = arg3
    sub_4c84d0(&data_7027c0, 0x619e70)
    arg1 = MessageBoxA(data_7027bc, &data_7027c0, 0x619e18, MB_OK)
    
    if (data_702fc0 != 0)
        sub_55f390(
            sub_55f1e0(sub_55ef70(arg1, data_72d6ac, data_719b6c, 0x619e50, &data_619f18), 
                data_72d6ac, data_719b6c, 0x619e50, &data_619f18), 
            data_72d6ac, data_719b6c, 0x619e50, &data_619f18)
        sub_4a1e40(3)
else if (arg4 s< 0 || arg4 s>= *((arg2 + (arg3 << 1)) * 0x7a0 + &data_98c178))
    int32_t ecx_2 = *((arg2 + (arg3 << 1)) * 0x7a0 + &data_98c178)
    int32_t var_14_1 = arg4
    int32_t var_18_1 = ecx_2 - 1
    int32_t var_1c_1 = ecx_2
    int32_t var_20_1 = arg3
    sub_4c84d0(&data_7027c0, 0x619d90)
    arg1 = MessageBoxA(data_7027bc, &data_7027c0, 0x619e18, MB_OK)
    
    if (data_702fc0 != 0)
        sub_55f390(
            sub_55f1e0(sub_55ef70(arg1, data_72d6ac, data_719b6c, 0x619e50, &data_619e30), 
                data_72d6ac, data_719b6c, 0x619e50, &data_619e30), 
            data_72d6ac, data_719b6c, 0x619e50, &data_619e30)
        sub_4a1e40(3)
