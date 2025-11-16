// 函数: sub_526830
// 地址: 0x526830
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = arg1

if (arg1 u<= 0x3f)
    *(arg1 * 0x3920 + &data_f8d2e0) = 0
    *(arg1 * 0x3920 + &data_f8d308) = 0

int32_t ecx = data_702fc0

if (ecx == 0)
    return 

int32_t edx_1 = data_13184f8
void* eax = 1

if (edx_1 == 0)
    if (data_13184e8:8 == edx_1 && (data_704870 != edx_1 || data_70486c != edx_1))
        eax = nullptr
    
    if (data_1311178 != 0 && data_13184e8:4 == 0)
        eax = nullptr
    
    if (data_1af174c == 0 && eax != 0)
        sub_55f390(
            sub_55f1e0(sub_55ef70(eax, data_72d6ac, data_719b6c, 0x61f2ec, 0x61f298), data_72d6ac, 
                data_719b6c, 0x61f2ec, 0x61f298), 
            data_72d6ac, data_719b6c, 0x61f2ec, 0x61f298)
        ecx = data_702fc0
        edx_1 = data_13184f8

if (ecx == 0)
    return 

eax = 1

if (edx_1 != 0)
    return 

if (data_13184e8:8 == edx_1 && (data_704870 != edx_1 || data_70486c != edx_1))
    eax = nullptr

if (data_1311178 != 0 && data_13184e8:4 == 0)
    eax = nullptr

if (data_1af174c == 0 && eax != 0)
    sub_55f390(
        sub_55f1e0(sub_55ef70(eax, data_72d6ac, data_719b6c, 0x61a5ec, "= -2 "), data_72d6ac, 
            data_719b6c, 0x61a5ec, "= -2 "), 
        data_72d6ac, data_719b6c, 0x61a5ec, "= -2 ")
