// 函数: sub_6512f0
// 地址: 0x6512f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* edx = arg3
int64_t* eax = edx + 0xe
int32_t esi = *(arg1 + 4)

if (eax != esi)
    do
        edx += 0xe
        *(edx - 0xe) = *eax
        *(edx - 6) = eax[1].d
        int32_t ecx
        ecx.w = *(eax + 0xc)
        eax += 0xe
        *(edx - 2) = ecx.w
    while (eax != esi)
    
    edx = arg3

*(arg1 + 4) -= 0xe
*arg2 = edx
return arg2
