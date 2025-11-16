// 函数: sub_4cbad0
// 地址: 0x4cbad0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int64_t var_c = (zx.o(0)).q
WaitForSingleObject(data_702788, 0xffffffff)

if (arg1 u<= 0x3f)
    int32_t eax_4
    
    if (*(arg1 * 0x3c0 + &data_20af854) != 0 && *(arg1 * 0x3c0 + &data_20af850) == 3)
        int32_t* ecx = *(arg1 * 0x3c0 + 0x20af864)
        eax_4 = (*(*ecx + 0x24))(ecx, arg1 * 0x3c0 + &data_20af9e0)
    
    int64_t xmm0_1
    
    if (*(arg1 * 0x3c0 + &data_20af854) == 0 || *(arg1 * 0x3c0 + &data_20af850) != 3 || eax_4 s< 0)
        xmm0_1 = (zx.o(0)).q
    else
        xmm0_1 = *(arg1 * 0x3c0 + &data_20af9e0)
    
    var_c = xmm0_1

return ReleaseSemaphore(data_702788, 1, nullptr)
