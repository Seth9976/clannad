// 函数: sub_6fbd70
// 地址: 0x6fbd70
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = arg5
int32_t edx_1 = esi * 0x50
int32_t edx_2 = edx_1 + arg4[1]

if (edx_1 != neg.d(arg4[1]))
    int32_t eax_2 = *(*arg1 + 0x1c)
    arg5 = 0
    
    if (eax_2(arg2, arg3, edx_2, &arg5) != 0)
        int32_t* eax_3 = *arg4
        (*(*eax_3 + 0xc))(eax_3, esi)
        return (*(*arg1 + 0x2c))(arg2, arg5) != 0

return 0
