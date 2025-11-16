// 函数: sub_49aa5d
// 地址: 0x49aa5d
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int16_t* esi = arg3
int16_t ecx = esi[5]
int32_t edi
int32_t var_c = edi
uint32_t result

if (ecx == 0)
    uint32_t eax_4
    uint32_t ecx_4
    
    if (*(arg2 + 4) != 0)
        uint32_t ecx_5
        
        if (*esi == 3)
            ecx_5 = zx.d(esi[2])
            eax_4 = zx.d(esi[3])
        else
            ecx_5 = zx.d(esi[3])
            eax_4 = zx.d(esi[2])
        
        ecx_4 = (ecx_5 + 3) s>> 2
    else
        ecx_4 = zx.d(esi[3])
        eax_4 = zx.d(esi[2])
    
    *arg5 += ecx_4 * eax_4 * arg4
    result = arg6
    *result += zx.d(esi[3]) * zx.d(esi[2]) * arg4
else
    result = *(esi + 0xc) + *(arg1 + 8)
    arg3 = nullptr
    
    if (ecx u> 0)
        int32_t* ebx_1 = result + 4
        
        do
            int32_t ecx_1 = *ebx_1
            
            if (ecx_1 != 0)
                void* eax_2 = *(arg1 + 8) + ecx_1
                sub_49aa5d(arg1, arg2, eax_2, zx.d(*(eax_2 + 8)) * arg4, arg5, arg6)
            
            result = zx.d(esi[5])
            arg3 += 1
            ebx_1 = &ebx_1[2]
        while (arg3 u< result)

return result
