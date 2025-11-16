// 函数: sub_66dd70
// 地址: 0x66dd70
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg3
int32_t* eax

if (arg3[5] u< 8)
    eax = arg3
else
    eax = *arg3

int32_t var_18 = arg3[4]
int32_t eax_1
int32_t ecx_1
eax_1, ecx_1 = sub_536340(arg2, arg3, arg2[4], eax)

if (eax_1 s< 0 && arg2 != arg3)
    sub_66f040(arg2, arg3)
    ecx_1 = sub_66f040(&arg2[6], &arg3[6])

void** eax_2

if (arg2[5] u< 8)
    eax_2 = arg2
else
    eax_2 = *arg2

int32_t var_18_1 = arg2[4]
int32_t* result
int32_t ecx_5
result, ecx_5 = sub_536340(arg4, ecx_1, *(arg4 + 0x10), eax_2)

if (result s< 0)
    if (arg4 != arg2)
        sub_66f040(arg4, arg2)
        ecx_5 = sub_66f040(arg4 + 0x18, &arg2[6])
    
    int32_t* eax_3
    
    if (arg3[5] u< 8)
        eax_3 = arg3
    else
        eax_3 = *arg3
    
    int32_t var_18_2 = arg3[4]
    result = sub_536340(arg2, ecx_5, arg2[4], eax_3)
    
    if (result s< 0 && arg2 != arg3)
        sub_66f040(arg2, arg3)
        return sub_66f040(&arg2[6], &arg3[6])

return result
