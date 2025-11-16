// 函数: sub_5f2280
// 地址: 0x5f2280
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg4 s<= 0x20)
    if (arg3 == arg2)
        return arg2
    
    return sub_5f27f0(arg2, arg2, arg3, arg6)

int32_t eax_3
int32_t edx
edx:eax_3 = sx.q(arg4 + 1)
void* eax_5 = *(arg5 + 0x10)
int32_t ecx_1 = (eax_3 - edx) s>> 1
int32_t var_1c_1 = ecx_1
void* edx_1 = &arg3[ecx_1]
void* var_18_1 = edx_1

if (*eax_5 == 0)
    int32_t eax_6 = *(eax_5 + 0xc)
    
    if (eax_6 s> 0)
        int32_t var_10
        sub_5f2750(&var_10, eax_6)
        int32_t ecx_3 = var_10
        edx_1 = var_18_1
        **(arg5 + 0x10) = ecx_3
        *(*(arg5 + 0x10) + 4) = ecx_3
        *(*(arg5 + 0x10) + 8) = ecx_3
        int32_t var_c
        *(*(arg5 + 0x10) + 0xc) = var_c
        ecx_1 = var_1c_1

int32_t eax_11 = *(arg5 + 0x10)
int32_t* eax_13
int32_t esi_1

if (ecx_1 s> *(eax_11 + 0xc))
    sub_5f2280(ecx_1, arg5, arg6)
    esi_1 = arg4 - var_1c_1
    eax_13 = sub_5f2280(esi_1, arg5, arg6)
else
    esi_1 = arg4 - var_1c_1
    eax_13 = sub_5f24a0(sub_5f24a0(eax_11, edx_1, arg3, ecx_1, arg5, arg6), arg2, var_18_1, esi_1, 
        arg5, arg6)

return sub_5f2560(eax_13, var_18_1, arg3, arg2, var_1c_1, esi_1, arg5, arg6)
