// 函数: sub_6d7510
// 地址: 0x6d7510
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

char* edx = *(arg3 + 0x128)
int32_t ebx = *(arg3 + 0x124)
*edx = 2
int32_t result = 0
int32_t edi = 0

if (arg2 != 0)
    void* eax_1 = *(arg3 + 0x128)
    void* ecx = eax_1 + 1
    void* edx_4 = *(arg3 + 0x120) - eax_1 + ecx
    void* ebx_2 = ebx - eax_1 + ecx
    
    do
        eax_1.b = *ebx_2
        eax_1.b -= *edx_4
        *(ecx + edi) = eax_1.b
        uint32_t ecx_1 = zx.d(eax_1.b)
        
        if (ecx_1 s>= 0x80)
            ecx_1 = 0x100 - ecx_1
        
        result += ecx_1
        
        if (result u> arg4)
            break
        
        ecx = &edx[1]
        edi += 1
        ebx_2 += 1
        edx_4 += 1
    while (edi u< arg2)

return result
