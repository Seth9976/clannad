// 函数: sub_734e20
// 地址: 0x734e20
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx_1 = *arg5
void* esi = *(arg1 + 0x1b8)
int32_t edi

if (*(esi + 0x24) == 0)
    edi = 2
    
    if (*(esi + 0x2c) u< 2)
        edi = *(esi + 0x2c)
    
    int32_t eax_2 = arg6 - ecx_1
    
    if (edi u> eax_2)
        edi = eax_2
    
    int32_t* ecx_2 = arg4 + (ecx_1 << 2)
    int32_t var_c = *ecx_2
    
    if (edi u<= 1)
        int32_t var_8_2 = *(esi + 0x20)
        *(esi + 0x24) = 1
    else
        int32_t var_8_1 = ecx_2[1]
    
    (*(esi + 0xc))(arg1, arg2, *arg3, &var_c)
else
    sub_748840(*(arg4 + (ecx_1 << 2)), *(esi + 0x20), *(esi + 0x28))
    *(esi + 0x24) = 0
    edi = 1

*arg5 += edi
*(esi + 0x2c) -= edi

if (*(esi + 0x24) == 0)
    *arg3 += 1

return arg5
