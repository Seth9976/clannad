// 函数: sub_49e162
// 地址: 0x49e162
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = arg3
int32_t edi
int32_t var_c = edi

if (ebx == 0 && arg4 == 0)
    return 0x8876086c

int32_t* i_1

if (arg2 s>= 0)
    int32_t result = sub_49df5b(arg1, arg2, &arg3)
    
    if (result s< 0)
        return result
    
    i_1 = arg3
else
    i_1 = neg.d(arg2)

int32_t edx_1 = 0
int32_t esi_1 = 1
int32_t* i = i_1

if (i_1 != 0)
    do
        i = i[9]
        edx_1 += 1
    while (i != 0)

if (arg4 != 0)
    int32_t eax_1 = *arg4
    
    if (eax_1 != 0)
        esi_1 = eax_1
    
    if (esi_1 u> edx_1)
        esi_1 = edx_1
    
    *arg4 = edx_1

if (ebx != 0)
    while (i_1 != 0)
        if (esi_1 == 0)
            break
        
        sub_49acc4(i_1, ebx)
        i_1 = i_1[9]
        ebx += 0x30
        esi_1 -= 1

return 0
