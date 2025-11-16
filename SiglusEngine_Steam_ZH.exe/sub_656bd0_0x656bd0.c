// 函数: sub_656bd0
// 地址: 0x656bd0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

char* edx = arg3
void* ecx = arg4
void* i_6 = arg2 - edx
char* var_8 = edx
int32_t i_1 = ecx - edx
void* i_7 = i_6
int32_t i_3 = i_1
int32_t i_2 = i_1
int32_t i_4 = i_6

if (i_6 != 0)
    int32_t i
    
    do
        int32_t i_5 = i_3
        i_3 = i_4
        i = mods.dp.d(sx.q(i_5), i_4)
        i_4 = i
    while (i != 0)
    edx = var_8
    i_2 = i_3

if (i_3 s< i_1 && i_3 s> 0)
    int32_t eax_6 = neg.d(i_6)
    int32_t eax_8 = neg.d(ecx)
    char* ebx = &edx[i_3]
    
    do
        char* eax_9 = ebx + i_6
        char* edx_3 = ebx
        char* var_c_1 = edx_3
        
        if (eax_9 == ecx)
            eax_9 = var_8
        
        int32_t esi_1 = neg.d(eax_9)
        
        do
            ecx.b = *eax_9
            edx_3.b = *edx_3
            *var_c_1 = ecx.b
            i_6 = i_7
            *eax_9 = edx_3.b
            edx_3 = eax_9
            var_c_1 = edx_3
            
            if (i_6 s>= arg4 + esi_1)
                eax_9 += i_6 - arg4 + var_8
                esi_1 = neg.d(edx) + eax_6 + esi_1 - eax_8
                edx_3 = var_c_1
            else
                eax_9 += i_6
                esi_1 += eax_6
        while (eax_9 != ebx)
        
        ebx -= 1
        ecx = arg4
        i_1 = i_2 - 1
        i_2 = i_1
    while (i_1 s> 0)

return i_1
