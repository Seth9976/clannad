// 函数: sub_6252d0
// 地址: 0x6252d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = arg4

if (esi s<= 0x20)
    if (arg3 == arg2)
        return arg2
    
    return sub_625740(arg2, arg2, arg3, arg6)

int32_t eax_3
int32_t edx
edx:eax_3 = sx.q(esi + 1)
void* eax_5 = *(arg5 + 0x10)
int32_t ecx_1 = (eax_3 - edx) s>> 1
arg4 = ecx_1
void* edx_1 = &arg3[ecx_1 * 2]
void* var_c_1 = edx_1

if (*eax_5 == 0)
    int32_t eax_6 = *(eax_5 + 0xc)
    
    if (eax_6 s> 0)
        int32_t var_18
        sub_6256d0(&var_18, eax_6)
        int32_t ecx_3 = var_18
        edx_1 = var_c_1
        **(arg5 + 0x10) = ecx_3
        *(*(arg5 + 0x10) + 4) = ecx_3
        *(*(arg5 + 0x10) + 8) = ecx_3
        int32_t var_14
        *(*(arg5 + 0x10) + 0xc) = var_14
        ecx_1 = arg4

int32_t eax_11 = *(arg5 + 0x10)
int32_t* var_34_1 = ecx_1
int32_t* eax_13
int32_t* esi_1

if (ecx_1 s> *(eax_11 + 0xc))
    sub_6252d0(var_34_1, arg5, arg6)
    esi_1 = esi - arg4
    eax_13 = sub_6252d0(esi_1, arg5, arg6)
else
    esi_1 = esi - arg4
    eax_13 = sub_625410(sub_625410(eax_11, edx_1, arg3, var_34_1, arg5, arg6), arg2, var_c_1, 
        esi_1, arg5, arg6)

return sub_6254d0(eax_13, var_c_1, arg3, arg2, arg4, esi_1, arg5, arg6)
