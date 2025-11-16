// 函数: sub_4a8610
// 地址: 0x4a8610
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char* var_4 = arg1

if (data_12dc30c == 0)
    return 2

int32_t edi = data_703180:4
int32_t eax
int32_t eax_1 = sub_4c3da0(eax, 5, &data_12dc30c, 0x18)

if (eax_1 != 1)
    void* eax_2
    
    if (edi != 0xffffffff)
        eax_2 = sub_4c51f0(eax_1, &data_12dc30c, edi, nullptr)
    
    if (edi == 0xffffffff || eax_2 == 0)
        if (arg1 != 0)
            sub_4cfd70(arg1, &data_12dc30c)
        
        return 0

return 1
