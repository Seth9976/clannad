// 函数: sub_4c36bc
// 地址: 0x4c36bc
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_10 = edi
int32_t eax_1 = (*(*arg1 + 0x54))(*(arg2 + 0x6c))
*arg3 = (*(*arg1 + 0x58))(*(arg2 + 0x6c))

if (arg5 != 0)
    *arg5 = 0

if (eax_1 != 1)
    if (eax_1 != 5)
        if (eax_1 != 0xc)
            if (eax_1 != 0xb)
                if (eax_1 != 6)
                    if (eax_1 == 0xffff)
                        *arg4 = 0
                        return 0
                else if (*arg3 u< 8)
                    *arg4 = 6
                    return 0
            else if (*arg3 u< 2)
                *arg4 = 5
                return 0
        else if (*arg3 == 0)
            *arg4 = 4
            *arg3 = 1
            goto label_4c371f
    else if (*arg3 == 0)
        *arg4 = 4
        *arg3 = 2
    label_4c371f:
        
        if (arg5 == 0)
            return 0
        
        *arg5 = 1
        return 0
else if (*arg3 == 0)
    *arg4 = 4
    *arg3 = 0
    return 0

return 0x80004005
