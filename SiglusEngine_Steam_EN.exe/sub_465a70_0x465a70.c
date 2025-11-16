// 函数: sub_465a70
// 地址: 0x465a70
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* var_4 = arg1

if (*(arg1 + 0x254) != 0)
    return 

int32_t eax_1 = *(arg1 + 0xc)

if (eax_1 == 1)
    int32_t ecx_3 = arg2[1]
    
    if (ecx_3 != 0xffffffff)
        if (*(arg1 + 0x248) - 9 u<= 1)
            sub_428f50(ecx_3, *(arg1 + 0x84), arg1 + 0x248, arg1 + 0x14c)
    else if (*(arg1 + 0x248) - 9 u<= 1)
        void* var_10_2 = arg1 + 0x14c
        sub_41d9d0(arg1 + 0x14c, *arg2, arg1 + 0x248, arg1 + 0x248)
        *(arg1 + 0x254) = 1
        arg2[0xbd] += 1
        return 
else if (eax_1 == 2)
    int32_t eax = *(arg1 + 0x248) - 9
    
    if (eax u<= 1)
        void* var_10_1 = arg1 + 0x248
        void* var_14_1 = arg1 + 0x248
        sub_481e00(eax, *arg2, arg1 + 0x248)
        *(arg1 + 0x254) = 1
        arg2[0xbd] += 1
        return 
else if (eax_1 == 7)
    sub_418380(arg1, arg2)
    *(arg1 + 0x254) = 1
    arg2[0xbd] += 1
    return 

*(arg1 + 0x254) = 1
arg2[0xbd] += 1
