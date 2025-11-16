// 函数: sub_4b28dc
// 地址: 0x4b28dc
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_c = edi
int32_t eax_1 = (*(*arg1 + 0x54))(*(arg2 + 0x6c))

if (eax_1 == 0xffff)
    *arg4 = 0
    *arg3 = (*(*arg1 + 0x58))(*(arg2 + 0x6c))
else if (eax_1 == 0x11)
    *arg4 = 0x11
    *arg3 = 1
else if (eax_1 != 0x12)
    *arg4 = 1
    *arg3 = *(arg2 + 0xc)
else
    *arg4 = 0x11
    *arg3 = 0

return 0
