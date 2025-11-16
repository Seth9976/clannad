// 函数: sub_48d040
// 地址: 0x48d040
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = data_7192e8
data_71929c = arg1

if (eax s>= 0x20)
    int32_t var_c = 0x20
    char* eax_3 = sub_4c84d0(&data_7027c0, 0x61a664)
    
    if (data_702fc0 == 0)
        return eax_3
    
    sub_55f390(
        sub_55f1e0(sub_55ef70(eax_3, data_72d6ac, data_719b6c, &data_7027c0, nullptr), data_72d6ac, 
            data_719b6c, &data_7027c0, nullptr), 
        data_72d6ac, data_719b6c, &data_7027c0, nullptr)
    return sub_4a1e40(3)

*((eax << 2) + &data_7192ec) = arg1

if (arg2 != 0)
    sub_4d1c30(eax, arg2, (data_7192e8 << 6) + 0x71936c, 0x40)
    data_7192e8 += 1
    return eax

int32_t eax_2 = data_7192e8 << 6
*(eax_2 + 0x71936c) = 0
data_7192e8 += 1
return eax_2
