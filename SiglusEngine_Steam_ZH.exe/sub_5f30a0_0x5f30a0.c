// 函数: sub_5f30a0
// 地址: 0x5f30a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* edx = arg3
int32_t* var_8 = edx
int32_t i_6 = (arg2 - edx) s>> 2
int32_t i_5 = (arg4 - edx) s>> 2
int32_t i_3 = i_6
int32_t i_2 = i_5
int32_t i_4 = i_5

if (i_6 != 0)
    int32_t i
    
    do
        int32_t i_7 = i_4
        i_4 = i_3
        i = mods.dp.d(sx.q(i_7), i_3)
        i_3 = i
    while (i != 0)
    edx = var_8
    i_2 = i_4

if (i_4 s>= i_5 || i_4 s<= 0)
    return 

arg1 = i_6 << 2
void* esi = &edx[i_4]
int32_t i_1

do
    int32_t* eax_1 = arg1 + esi
    
    if (eax_1 == arg4)
        eax_1 = edx
    
    int32_t* ebx_3 = esi
    
    do
        int32_t edx_3 = *ebx_3
        *ebx_3 = *eax_1
        ebx_3 = eax_1
        *eax_1 = edx_3
        edx = var_8
        int32_t ecx_4 = (arg4 - eax_1) s>> 2
        
        if (i_6 s>= ecx_4)
            eax_1 = &edx[i_6 - ecx_4]
        else
            eax_1 = &eax_1[i_6]
    while (eax_1 != esi)
    
    arg1 = i_6 << 2
    i_1 = i_2 - 1
    esi -= 4
    i_2 = i_1
while (i_1 s> 0)
