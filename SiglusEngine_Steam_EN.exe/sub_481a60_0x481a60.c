// 函数: sub_481a60
// 地址: 0x481a60
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t result

if (modu.dp.d(0:(sub_4d18c0(2)), 0xa) == 9)
    uint32_t temp1_4 = modu.dp.d(0:(sub_4d18c0(2)), 3)
    
    if (temp1_4 == 0)
        int32_t eax_19
        
        if (arg1 s< 0x3e8)
            eax_19 = sub_4d18c0(2)
        
        if (arg1 s>= 0x3e8 || modu.dp.d(0:eax_19, 5) == 0)
            return 0x1f4
    else if (temp1_4 == 1)
        int32_t eax_15
        
        if (arg1 s< 0x3e8)
            eax_15 = sub_4d18c0(2)
        
        if (arg1 s>= 0x3e8 || modu.dp.d(0:eax_15, 3) == 0)
            return modu.dp.d(0:(sub_4d18c0(2)), 0x3e8) + 0x3e8
    else
        if (temp1_4 != 2)
            return result
        
        int32_t eax_10
        
        if (arg1 s> 0xbb8)
            eax_10 = sub_4d18c0(2)
        
        if (arg1 s<= 0xbb8 || modu.dp.d(0:eax_10, 3) == 0)
            return modu.dp.d(0:(sub_4d18c0(2)), 0x5dc) + 0xdac
else
    uint32_t temp1_1 = modu.dp.d(0:(sub_4d18c0(2)), 3)
    
    if (temp1_1 != 0)
        if (temp1_1 == 1)
            return modu.dp.d(0:(sub_4d18c0(2)), 0x5dc) + 0x9c4
        
        if (temp1_1 == 2)
            return modu.dp.d(0:(sub_4d18c0(temp1_1)), 0x3e8) + 0xbb8
        
        return result
return modu.dp.d(0:(sub_4d18c0(2)), 0x7d0) + 0x7d0
