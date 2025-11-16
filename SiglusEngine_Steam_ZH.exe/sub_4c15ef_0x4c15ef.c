// 函数: sub_4c15ef
// 地址: 0x4c15ef
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_10 = edi
int32_t eax_1 = (*(*arg1 + 0x54))(*(arg2 + 0x6c))
int32_t eax_3 = (*(*arg1 + 0x58))(*(arg2 + 0x6c))
*arg3 = eax_3

if (eax_1 != 0xb)
    if (eax_1 != 6)
        if (eax_1 == 0xffff)
            *arg4 = 0
            return 0
    else if (eax_3 u< 8)
        *arg4 = 3
        return 0
else if (eax_3 u< arg1[0xa])
    *arg4 = 1
    return 0

return 0x80004005
