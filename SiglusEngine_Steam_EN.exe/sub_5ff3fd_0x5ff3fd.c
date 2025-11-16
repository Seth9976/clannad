// 函数: sub_5ff3fd
// 地址: 0x5ff3fd
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (__getptd()[0xeb] != 0 || *arg1 == 0xe06d7363 || *arg1 == 0x80000026
        || (*arg5 & 0x1fffffff) u< 0x19930522 || (arg5[8].b & 1) == 0)
    if ((arg1[1].b & 0x66) == 0)
        if (arg5[3] != 0)
        label_5ff48f:
            
            if (*arg1 == 0xe06d7363 && arg1[4] u>= 3 && arg1[5] u> 0x19930522)
                int32_t esi_1 = *(arg1[7] + 8)
                
                if (esi_1 != 0)
                    return esi_1(arg1, arg2, arg3, arg4, arg5, arg6, arg7, zx.d(arg8))
            
            sub_5feb20(arg1, arg2, arg3, arg4, arg5, arg8, arg6, arg7)
        else if ((*arg5 & 0x1fffffff) u>= 0x19930521 && arg5[7] != 0)
            goto label_5ff48f
    else if (arg5[1] != 0 && arg6 == 0)
        int32_t var_14_1 = 0xffffffff
        ___FrameUnwindToState(arg2, arg4, arg5)

return 1
