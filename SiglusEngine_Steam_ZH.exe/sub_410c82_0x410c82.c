// 函数: sub_410c82
// 地址: 0x410c82
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t var_8 = arg1
int32_t edi
int32_t var_10 = edi
int32_t edi_1 = 0
uint32_t esi = arg1
int32_t result = 0

if (*(esi + 0x10) != 0)
label_410ce1:
    arg1.w = arg3
    *(esi + 8) = 0xffff
    *(esi + 0xa) = 0xffff
    *(esi + 0xc) = 0xffff
    *(esi + 0xe) = 0xffff
    *(esi + 0x16) = arg1.w
    uint32_t i = zx.d(arg2)
    uint32_t ecx_1 = zx.d(arg1.w)
    *(esi + 0x14) = arg2
    
    if (i s< i + ecx_1)
        do
            int16_t* eax_10 = *(esi + 4) + i * 6
            int32_t ecx_2
            ecx_2.b = 0
            int32_t j_1 = 3
            int32_t j
            
            do
                if (*eax_10 != 0xffff)
                    ecx_2.b += 1
                
                eax_10 = &eax_10[1]
                j = j_1
                j_1 -= 1
            while (j != 1)
            uint32_t eax_14 = zx.d(edi_1.w) * 6
            *(eax_14 + *(esi + 0x10)) = 0
            *(eax_14 + *(esi + 0x10) + 1) = ecx_2.b
            sub_40d5af(esi, edi_1.w)
            edi_1 += 1
            i = zx.d(edi_1.w + arg2)
        while (i s< zx.d(*(esi + 0x14)) + ecx_1)
    
    int32_t edi_3 = *(esi + 0x20)
    
    if (edi_3 != 0)
        __builtin_memset(edi_3, 0, ecx_1 << 2)
        *(esi + 0x1c) = 0
else
    int32_t eax_4 = sub_745f3f(zx.d(*(esi + 0x18)) * 6)
    *(esi + 0x10) = eax_4
    
    if (eax_4 == 0)
        result = 0x8007000e
        j__free(*(esi + 0x10))
    else
        if (arg4.b == 0)
            goto label_410ce1
        
        int32_t eax_7 = sub_745f3f(zx.d(*(esi + 0x18)) << 2)
        *(esi + 0x20) = eax_7
        
        if (eax_7 != 0)
            goto label_410ce1
        
        result = 0x8007000e
        j__free(*(esi + 0x10))

return result
