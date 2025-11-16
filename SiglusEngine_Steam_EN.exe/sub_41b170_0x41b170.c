// 函数: sub_41b170
// 地址: 0x41b170
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = arg1 * 9

if (*((eax << 2) + &data_12dc39c) == 0)
    return 2

int32_t ebx = data_703180:4
int32_t eax_1 = sub_4c3da0(eax, 5, (eax << 2) + &data_12dc39c, 0x18)

if (eax_1 != 1)
    void* eax_2
    
    if (ebx != 0xffffffff)
        eax_2 = sub_4c51f0(eax_1, (eax << 2) + &data_12dc39c, ebx, nullptr)
    
    if (ebx == 0xffffffff || eax_2 == 0)
        if (arg2 != 0)
            sub_4cfd70(arg2, (eax << 2) + &data_12dc39c)
        
        return 0

return 1
