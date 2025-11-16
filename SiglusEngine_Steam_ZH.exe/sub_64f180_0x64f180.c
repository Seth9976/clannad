// 函数: sub_64f180
// 地址: 0x64f180
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int16_t* edx = *arg3

if (edx != arg4 && *edx == 0xff03 && &edx[1] != arg4)
    int16_t eax_1 = edx[1]
    int32_t var_10_1 = 0xff21
    
    if (eax_1 == 0xff21 || eax_1 == 0xff22)
        int32_t ecx
        ecx.b = eax_1 != 0xff21
        
        if (&edx[2] != arg4)
            int16_t ecx_2 = edx[2]
            
            if (ecx_2 + 0xf0 u<= 9)
                void* esi_3 = &edx[3]
                uint32_t ebx_1 = sub_64f100(ecx_2)
                
                while (esi_3 != arg4)
                    int16_t ecx_3 = *esi_3
                    
                    if (ecx_3 + 0xf0 u> 9)
                        break
                    
                    esi_3 += 2
                    ebx_1 = sub_64f100(ecx_3) + ebx_1 * 0xa
                
                if (ebx_1 s>= 0)
                    *arg2 = ecx + 1
                    *arg5 = ebx_1
                    *arg3 = esi_3
                    int32_t* eax_8
                    eax_8.b = 1
                    return eax_8

if (edx == arg4)
    int32_t* eax
    eax.b = 0
    return eax

*arg2 = 0
*arg5 = zx.d(*edx)
uint32_t* eax_9
eax_9.b = 1
*arg3 = &edx[1]
return eax_9
