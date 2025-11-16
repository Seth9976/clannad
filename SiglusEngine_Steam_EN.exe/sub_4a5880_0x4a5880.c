// 函数: sub_4a5880
// 地址: 0x4a5880
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg3 == 0 || *arg3 == 0)
    return 0

int32_t ebx = 0
int32_t edx_1 = arg4 s>> 1
int32_t var_c = edx_1
int32_t esi_4

do
    arg1.b = *arg3
    
    if (arg1.b u< 0x80)
    label_4a59a5:
        esi_4 = arg4
        arg3 = &arg3[1]
        arg1 = 0
        ebx += edx_1
    else
        if (arg1.b u< 0xa0)
            if (arg1.b u>= 0xfe)
                goto label_4a59a5
        else if (arg1.b u<= 0xdf || arg1.b u>= 0xfe)
            goto label_4a59a5
        
        if (arg1.b u< 0xa0)
            if ((zx.d(arg1.b) << 8 | zx.d(arg3[1])) != 0x8194)
                goto label_4a5993
            
            goto label_4a58f2
        
        if (arg1.b u<= 0xdf || (zx.d(arg1.b) << 8 | zx.d(arg3[1])) != 0x8194)
        label_4a5993:
            arg3 = &arg3[2]
        label_4a5996:
            esi_4 = arg4
            arg1 = 1
            edx_1 = var_c
            ebx += esi_4
        else
        label_4a58f2:
            uint32_t eax
            eax.b = arg3[2]
            uint32_t edx_7
            
            if (eax.b u< 0x80)
                edx_7 = 0
            else if (eax.b u< 0xa0)
                if (eax.b u>= 0xfe)
                    edx_7 = 0
                else
                    edx_7 = zx.d(eax.b) << 8 | zx.d(arg3[3])
            else if (eax.b u<= 0xdf || eax.b u>= 0xfe)
                edx_7 = 0
            else
                edx_7 = zx.d(eax.b) << 8 | zx.d(arg3[3])
            
            eax.b = arg3[4]
            uint32_t edi_3
            
            if (eax.b u< 0x80)
                edi_3 = 0
            else if (eax.b u< 0xa0)
                if (eax.b u>= 0xfe)
                    edi_3 = 0
                else
                    edi_3 = zx.d(eax.b) << 8 | zx.d(arg3[5])
            else if (eax.b u<= 0xdf || eax.b u>= 0xfe)
                edi_3 = 0
            else
                edi_3 = zx.d(eax.b) << 8 | zx.d(arg3[5])
            
            eax.b = arg3[6]
            uint32_t esi_3
            
            if (eax.b u< 0x80)
                esi_3 = 0
            else if (eax.b u< 0xa0)
                if (eax.b u>= 0xfe)
                    esi_3 = 0
                else
                    esi_3 = zx.d(eax.b) << 8 | zx.d(arg3[7])
            else if (eax.b u<= 0xdf || eax.b u>= 0xfe)
                esi_3 = 0
            else
                esi_3 = zx.d(eax.b) << 8 | zx.d(arg3[7])
            
            if (edx_7 == 0x8260)
                if (edi_3 - 0x824f u> 9 || esi_3 - 0x824f u> 9)
                    goto label_4a5996
            else if (edx_7 != 0x8261 || edi_3 - 0x824f u> 9 || esi_3 - 0x824f u> 9)
                goto label_4a5996
            
            esi_4 = arg4
            arg3 = &arg3[8]
            edx_1 = var_c
            arg1 = 1
            ebx += esi_4
while (*arg3 != 0)

if (arg1 != 0)
    return ebx + arg2 - esi_4

return ebx + (arg2 s>> 1) - edx_1
