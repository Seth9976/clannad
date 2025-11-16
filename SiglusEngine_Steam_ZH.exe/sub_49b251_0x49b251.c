// 函数: sub_49b251
// 地址: 0x49b251
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_8 = edi
int32_t i_2 = arg5 << 2

if (i_2 != 0)
    int32_t* eax_1 = arg4
    int32_t* ecx_2 = arg3 - eax_1
    int32_t i_1 = i_2
    int32_t i
    
    do
        int32_t edx_1
        edx_1.b = *(ecx_2 + eax_1) != 0
        *eax_1 = edx_1
        eax_1 = &eax_1[1]
        i = i_1
        i_1 -= 1
    while (i != 1)

return (*(*arg1 + 0x180))(arg1, arg2, arg3, arg5)
