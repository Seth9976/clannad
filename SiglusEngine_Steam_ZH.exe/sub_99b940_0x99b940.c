// 函数: sub_99b940
// 地址: 0x99b940
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg3
int32_t i = arg4
void* var_8_1 = arg2
int32_t* esi = arg3

for (; i != 0; i -= 1)
    int32_t edx = esi[4]
    int32_t ebx_1 = *esi
    int32_t edi_2 = esi[1] + 8
    char ebx_2
    
    if (ebx_1 s< edx - 4)
    label_99b99b:
        char* eax_4 = esi[3]
        arg3.b = esi[1].b
        uint32_t ebx_4 = zx.d(*eax_4) u>> arg3.b
        
        if (edi_2 s> 8)
            int32_t edx_2 = neg.d(esi[1])
            ebx_4 |= zx.d(eax_4[1]) << (edx_2 + 8).b
            
            if (edi_2 s> 0x10)
                ebx_4 |= zx.d(*(esi[3] + 2)) << (edx_2 + 0x10).b
                
                if (edi_2 s> 0x18)
                    ebx_4 |= zx.d(*(esi[3] + 3)) << (edx_2 + 0x18).b
                    
                    if (edi_2 s> 0x20 && esi[1] != 0)
                        ebx_4 |= zx.d(*(esi[3] + 4)) << (edx_2 + 0x20).b
        
        int32_t eax_17
        int32_t edx_3
        edx_3:eax_17 = sx.q(edi_2)
        esi[1] = edi_2 & 7
        int32_t eax_19 = (eax_17 + (edx_3 & 7)) s>> 3
        esi[3] += eax_19
        *esi += eax_19
        ebx_2 = ebx_4.b & 0xff
    else if (ebx_1 s> edx - ((edi_2 + 7) s>> 3))
        esi[3] = 0
        ebx_2 = -1
        *esi = edx
        esi[1] = 1
    else
        if (edi_2 != 0)
            goto label_99b99b
        
        ebx_2 = 0
    
    char* eax_20 = var_8_1
    *eax_20 = ebx_2
    var_8_1 = &eax_20[1]

return i
