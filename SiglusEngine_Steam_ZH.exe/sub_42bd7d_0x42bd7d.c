// 函数: sub_42bd7d
// 地址: 0x42bd7d
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* eax = *(arg1 + 0x268)

while (true)
    int32_t* ecx = eax[0x1b]
    
    if (ecx == 0)
        break
    
    eax = ecx

if (arg2 != 0)
    *arg2 = *eax

if (arg3 != 0)
    int32_t ecx_2 = eax[1]
    int32_t eax_1 = *eax
    
    if (ecx_2 u< eax_1)
        *arg3 = 0
    else
        *arg3 = ecx_2 - eax_1

return 0
