// 函数: sub_726640
// 地址: 0x726640
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t eax = *(arg3 + 0x1450)
int32_t ebx = arg4
int32_t edi = *(arg3 + (ebx << 2) + 0xb5c)
int32_t esi = ebx * 2
arg4 = edi
bool cond:2 = esi s>= eax

if (esi s<= eax)
    int16_t* edx = arg2 + (edi << 2)
    
    do
        if (not(cond:2))
            int16_t eax_2 = *(arg2 + (*(arg3 + (esi << 2) + 0xb60) << 2))
            int16_t edx_2 = *(arg2 + (*(arg3 + (esi << 2) + 0xb5c) << 2))
            
            if (eax_2 u< edx_2)
                esi += 1
            else if (eax_2 == edx_2)
                eax_2.b = *(*(arg3 + (esi << 2) + 0xb60) + arg3 + 0x1458)
                
                if (eax_2.b u<= *(*(arg3 + (esi << 2) + 0xb5c) + arg3 + 0x1458))
                    esi += 1
        
        int32_t edx_4 = *(arg3 + (esi << 2) + 0xb5c)
        eax = zx.d(*edx)
        int16_t edi_5 = *(arg2 + (edx_4 << 2))
        
        if (eax.w u< edi_5)
            *(arg3 + (ebx << 2) + 0xb5c) = arg4
            return arg4
        
        edi = arg4
        
        if (eax.w == edi_5)
            eax.b = *(edi + arg3 + 0x1458)
            
            if (eax.b u<= *(edx_4 + arg3 + 0x1458))
                break
        
        *(arg3 + (ebx << 2) + 0xb5c) = edx_4
        ebx = esi
        eax = *(arg3 + 0x1450)
        esi *= 2
        cond:2 = esi s>= eax
    while (esi s<= eax)

*(arg3 + (ebx << 2) + 0xb5c) = edi
return eax
