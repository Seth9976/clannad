// 函数: sub_4a5770
// 地址: 0x4a5770
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg1 == 0)
    return 0

int32_t result = 0

while (*arg1 != 0)
    uint32_t eax
    eax.b = *arg1
    
    if (eax.b u< 0x80)
        arg1 = &arg1[1]
        result += 1
    else if (eax.b u< 0xa0)
        if (eax.b u< 0xfe)
            goto label_4a57a8
        
        arg1 = &arg1[1]
        result += 1
    else if (eax.b u<= 0xdf || eax.b u>= 0xfe)
        arg1 = &arg1[1]
        result += 1
    else
    label_4a57a8:
        
        if (eax.b u< 0xa0 || eax.b u> 0xdf)
            if ((zx.d(eax.b) << 8 | zx.d(arg1[1])) != 0x8194)
                arg1 = &arg1[2]
                result += 2
            else
                eax.b = arg1[2]
                uint32_t edx_6
                
                if (eax.b u< 0x80)
                    edx_6 = 0
                else if (eax.b u< 0xa0)
                    if (eax.b u>= 0xfe)
                        edx_6 = 0
                    else
                        edx_6 = zx.d(eax.b) << 8 | zx.d(arg1[3])
                else if (eax.b u<= 0xdf || eax.b u>= 0xfe)
                    edx_6 = 0
                else
                    edx_6 = zx.d(eax.b) << 8 | zx.d(arg1[3])
                
                eax.b = arg1[4]
                uint32_t esi_3
                
                if (eax.b u< 0x80)
                    esi_3 = 0
                else if (eax.b u< 0xa0)
                    if (eax.b u>= 0xfe)
                        esi_3 = 0
                    else
                        esi_3 = zx.d(eax.b) << 8 | zx.d(arg1[5])
                else if (eax.b u<= 0xdf || eax.b u>= 0xfe)
                    esi_3 = 0
                else
                    esi_3 = zx.d(eax.b) << 8 | zx.d(arg1[5])
                
                eax.b = arg1[6]
                uint32_t edi_3
                
                if (eax.b u< 0x80)
                    edi_3 = 0
                else if (eax.b u< 0xa0)
                    if (eax.b u>= 0xfe)
                        edi_3 = 0
                    else
                        edi_3 = zx.d(eax.b) << 8 | zx.d(arg1[7])
                else if (eax.b u<= 0xdf || eax.b u>= 0xfe)
                    edi_3 = 0
                else
                    edi_3 = zx.d(eax.b) << 8 | zx.d(arg1[7])
                
                if (edx_6 == 0x8260)
                    if (esi_3 - 0x824f u> 9 || edi_3 - 0x824f u> 9)
                        arg1 = &arg1[2]
                        result += 2
                    else
                        arg1 = &arg1[8]
                        result += 2
                else if (edx_6 != 0x8261 || esi_3 - 0x824f u> 9 || edi_3 - 0x824f u> 9)
                    arg1 = &arg1[2]
                    result += 2
                else
                    arg1 = &arg1[8]
                    result += 2
        else
            arg1 = &arg1[2]
            result += 2

return result
