// 函数: sub_735c50
// 地址: 0x735c50
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t (** eax_2)(int32_t* arg1, int32_t arg2) = (**(arg1 + 4))(arg1, 1, 0x1c)
int32_t (** ebx)(int32_t* arg1, int32_t arg2) = eax_2
*(arg1 + 0x1a4) = ebx
*ebx = sub_735990
ebx[2] = 0
ebx[3] = 0

if (*(arg1 + 0x4a) != 0)
    int32_t edx = *(arg1 + 0x11c)
    ebx[4] = edx
    
    if (arg2 != 0)
        int32_t ecx_2 = *(arg1 + 0x60) - 1 + edx
        int32_t eax_8 = (*(*(arg1 + 4) + 0x10))(arg1, 1, 0, *(arg1 + 0x64) * *(arg1 + 0x5c), 
            ecx_2 - mods.dp.d(sx.q(ecx_2), edx), edx)
        ebx[2] = eax_8
        return eax_8
    
    eax_2 = (*(*(arg1 + 4) + 8))(arg1, 1, *(arg1 + 0x64) * *(arg1 + 0x5c), edx)
    ebx[3] = eax_2

return eax_2
