// 函数: sub_4dc340
// 地址: 0x4dc340
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* edi = arg3

if (edi == 0)
    return 0x80004003

*edi = 0
int32_t result = 1
int32_t* ecx = *(arg1 + 0x34)

if (ecx != 0)
    arg3 = nullptr
    int32_t result_1 = (*(*ecx + 0x54))(ecx, arg2, &arg3)
    int32_t* ecx_1 = arg3
    result = result_1
    
    if (ecx_1 != 0)
        int32_t result_2 = (**(arg1 - 0x24))(arg1 - 0x24, 0x61d3d0, edi)
        ecx_1 = arg3
        result = result_2
    
    if (result s< 0 || *edi == 0)
        result = 1
    
    if (ecx_1 != 0)
        (*(*ecx_1 + 8))(ecx_1)

return result
