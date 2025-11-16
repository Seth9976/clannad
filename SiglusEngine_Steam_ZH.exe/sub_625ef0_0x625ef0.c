// 函数: sub_625ef0
// 地址: 0x625ef0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

for (; arg2 != arg4; arg2 = &arg2[2])
    void* ecx = arg6
    int32_t* esi_1 = *(ecx + 4)
    
    if (esi_1 u>= *(ecx + 8))
        if (esi_1 != 0)
            *esi_1 = *arg2
            esi_1[1] = arg2[1]
            ecx = arg6
        
        *(ecx + 4) += 8
        *(arg6 + 8) = *(ecx + 4)
    else
        *esi_1 = *arg2
        esi_1[1] = arg2[1]
        *(arg6 + 4) += 8

arg3[4] = arg6
*arg3 = 0
arg3[1] = 0
arg3[2] = 0
arg3[3] = 0

if (arg5 != 0)
    j__free(arg5)

return arg3
