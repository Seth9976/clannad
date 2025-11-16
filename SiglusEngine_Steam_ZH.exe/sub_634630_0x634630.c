// 函数: sub_634630
// 地址: 0x634630
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg3
void* eax = (arg2 << 1) + 2
void* ecx = arg2
bool cond:0 = eax != arg4

while (eax s< arg4)
    int32_t ecx_1 = *(arg3 + (eax << 3))
    int32_t edi_1 = *(arg3 + (eax << 3) - 8)
    
    if (ecx_1 s< edi_1)
        eax -= 1
    else if (ecx_1 s<= edi_1 && *(arg3 + (eax << 3) + 4) s< *(arg3 + (eax << 3) - 4))
        eax -= 1
    
    *(arg3 + (arg2 << 3)) = *(arg3 + (eax << 3))
    *(arg3 + (arg2 << 3) + 4) = *(arg3 + (eax << 3) + 4)
    arg2 = eax
    eax = (eax << 1) + 2
    cond:0 = eax != arg4

if (not(cond:0))
    *(arg3 + (arg2 << 3)) = *(arg3 + (arg4 << 3) - 8)
    eax = *(arg3 + (arg4 << 3) - 4)
    *(arg3 + (arg2 << 3) + 4) = eax
    arg2 = arg4 - 1

int32_t __saved_edi = arg6
return sub_634910(eax, arg2, arg3, ecx, arg5)
