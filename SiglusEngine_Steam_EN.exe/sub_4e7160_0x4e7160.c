// 函数: sub_4e7160
// 地址: 0x4e7160
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t i = 0

if (arg1[2] s> 0)
    do
        if (lstrcmpiA(*(*arg1 + (i << 2)), *arg2) == 0)
            if (i == 0xffffffff)
                break
            
            if (i s>= 0 && i s< arg1[2])
                return *(arg1[1] + (i << 2))
            
            RaiseException(0xc000008c, 1, 0, nullptr)
            noreturn
        
        i += 1
    while (i s< arg1[2])

return 0
