// 函数: sub_4ec270
// 地址: 0x4ec270
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char* var_8 = arg3
int32_t* esi = arg5
*esi = 0xffffffff
arg1.b = *arg3

if (arg1.b u< 0x80)
    arg5 = nullptr
else if (arg1.b u< 0xa0)
    if (arg1.b u< 0xfe)
        goto label_4ec297
    
    arg5 = nullptr
else if (arg1.b u<= 0xdf || arg1.b u>= 0xfe)
    arg5 = nullptr
else
label_4ec297:
    arg5 = 1
    
    if ((zx.d(arg1.b) << 8 | zx.d(arg3[1])) != 0x8196)
        arg5 = nullptr

arg1.b = arg3[2]
uint32_t ecx_5

if (arg1.b u< 0x80)
    ecx_5 = 0
else if (arg1.b u< 0xa0)
    if (arg1.b u>= 0xfe)
        ecx_5 = 0
    else
        ecx_5 = zx.d(arg1.b) << 8 | zx.d(arg3[3])
else if (arg1.b u<= 0xdf || arg1.b u>= 0xfe)
    ecx_5 = 0
else
    ecx_5 = zx.d(arg1.b) << 8 | zx.d(arg3[3])

arg1.b = arg3[4]
int32_t eax_4
void* edi_1

if (arg1.b u< 0x80)
    eax_4 = ecx_5 - 0x8260
    edi_1 = &arg3[4]
else if (arg1.b u< 0xa0)
    if (arg1.b u< 0xfe)
        goto label_4ec2f9
    
    eax_4 = ecx_5 - 0x8260
    edi_1 = &arg3[4]
else if (arg1.b u<= 0xdf || arg1.b u>= 0xfe)
    eax_4 = ecx_5 - 0x8260
    edi_1 = &arg3[4]
else
label_4ec2f9:
    uint32_t edx_2 = zx.d(arg1.b) << 8 | zx.d(arg3[5])
    
    if (edx_2 - 0x8260 u> 0x19)
        eax_4 = ecx_5 - 0x8260
        edi_1 = &arg3[4]
    else
        eax_4 = ecx_5 * 0x1a - 0xdc006 + edx_2
        edi_1 = &arg3[6]

*arg4 = eax_4
eax_4.b = *edi_1

if (eax_4.b u>= 0x80 && (eax_4.b u< 0xa0 || eax_4.b u> 0xdf) && eax_4.b u< 0xfe)
    uint32_t ebx_3 = zx.d(eax_4.b) << 8 | zx.d(*(edi_1 + 1))
    
    if (ebx_3 - 0x824f u<= 9)
        int32_t ecx_7 = *arg4
        edi_1 += 2
        void* edx_3 = ecx_7 + &data_132a150
        
        if (arg5 == 0)
            edx_3 = ecx_7 + &data_710418
        
        char* edx_4 = edx_3 + (ecx_7 << 5)
        int32_t ecx_8 = 0
        *esi = 0
        int32_t eax_8
        eax_8.b = *edx_4
        
        if (eax_8.b == 0)
        label_4ec3ad:
            *esi = 0xfffffffe
        else
            while (true)
                if (eax_8.b u< 0x80)
                label_4ec39f:
                    
                    if (ecx_8 == ebx_3 - 0x824f)
                        *arg6 = 1
                        break
                    
                    *esi += 1
                    ecx_8 += 1
                    edx_4 = &edx_4[1]
                else
                    if (eax_8.b u< 0xa0)
                        if (eax_8.b u>= 0xfe)
                            goto label_4ec39f
                        
                        goto label_4ec394
                    
                    if (eax_8.b u<= 0xdf || eax_8.b u>= 0xfe)
                        goto label_4ec39f
                    
                label_4ec394:
                    
                    if (ecx_8 == ebx_3 - 0x824f)
                        *arg6 = 2
                        break
                    
                    *esi += 2
                    ecx_8 += 1
                    edx_4 = &edx_4[2]
                
                eax_8.b = *edx_4
                
                if (eax_8.b == 0)
                    goto label_4ec3ad

if (arg2 != 0)
    *arg2 = edi_1

return arg2
