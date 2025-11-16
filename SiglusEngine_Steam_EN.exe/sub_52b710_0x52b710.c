// 函数: sub_52b710
// 地址: 0x52b710
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* var_c = arg3
int32_t eax = *(arg3 + 0x13b3c)

if (eax s< 0 || eax s>= 0x40)
    if (data_702fc0 != 0)
        sub_55f390(
            sub_55f1e0(sub_55ef70(eax, data_72d6ac, data_719b6c, 0x61e830, nullptr), data_72d6ac, 
                data_719b6c, 0x61e830, nullptr), 
            data_72d6ac, data_719b6c, 0x61e830, nullptr)
        eax = sub_4a1e40(3)
    
    *arg2 = 1
    return eax

if (arg4 == 0)
    *(eax * 0x2d0 + 0x8fcb14) = 0
    *(eax * 0x3920 + 0xf8d324) = 0
    return eax

int32_t eax_1 = *(eax * 0x2d0 + 0x8fcb0c)
*(eax * 0x2d0 + 0x8fcb14) = eax_1
*(eax * 0x3920 + 0xf8d324) = 0
return eax_1
