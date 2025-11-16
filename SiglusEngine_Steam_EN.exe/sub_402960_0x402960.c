// 函数: sub_402960
// 地址: 0x402960
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = *(arg1 + 0x58)

if (eax s<= 3)
    if (eax s< 3)
        return 0xffffff7f
    
    void* var_10_1
    
    if (*(arg1 + 4) == 0)
        var_10_1 = *(arg1 + 0x48)
    else
        var_10_1 = (*(arg1 + 0x60) << 5) + *(arg1 + 0x48)
    
    if (sub_404030(arg1 + 0x1e0, var_10_1) != 0)
        return 0xffffff77
    
    sub_403820(arg1 + 0x1e0, arg1 + 0x250)
    *(arg1 + 0x68) = 0
    *(arg1 + 0x70) = 0
    *(arg1 + 0x58) = 4
    *(arg1 + 0x6c) = 0
    *(arg1 + 0x74) = 0

return 0
