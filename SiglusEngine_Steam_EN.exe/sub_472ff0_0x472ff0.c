// 函数: sub_472ff0
// 地址: 0x472ff0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t i = 0
char* edi = arg1 + 0x22c
int32_t i_1 = 0

do
    int32_t edx = *(edi + 4)
    
    if (edx != 0 && i == 0)
        uint32_t esi_1 = 0xff
        
        if (*edi != i.b)
            *edi = 0
        else
            *(edi + 0xc) += zx.d(edi[0x10]) * data_1b14a28
        
        int32_t ecx = *(edi + 0xc)
        
        if (ecx u> *(edi + 8))
            int32_t ecx_1 = ecx - *(edi + 8)
            int32_t eax_4 = sx.d(*(edi + 0x28))
            int32_t var_c = 0
            i = i_1
            
            if (sub_472f90(eax_4, edx, ecx_1, eax_4, &edi[0xc], &var_c) != 0)
                int32_t edx_1 = *(edi + 0x14)
                int32_t esi_2 = *(edi + 0x18)
                int32_t ebx = *(edi + 0x20)
                int32_t eax_6 = esi_2 + edx_1
                int32_t ecx_3 = *(edi + 0x1c) + eax_6
                int32_t var_14_2 = ebx + ecx_3 + *(edi + 0x24)
                int32_t eax_9 = var_c
                uint32_t eax_13
                bool cond:0_1
                
                if (edx_1 u> eax_9)
                label_473103:
                    eax_13 = 0
                    esi_1 = 0xff
                    cond:0_1 = edi[0x11] == 0
                label_47310d:
                    
                    if (cond:0_1)
                        esi_1 = eax_13
                else
                    uint32_t eax_12
                    
                    if (eax_6 u<= eax_9)
                        if (ecx_3 u> eax_9)
                        label_4730d0:
                            esi_1 = 0
                            eax_13 = 0xff
                            cond:0_1 = edi[0x11] == 0
                            goto label_47310d
                        
                        if (ebx + ecx_3 u<= eax_9 || ebx == 0)
                            goto label_473103
                        
                        eax_12 = divu.dp.d(0:((eax_9 - ecx_3) * 0xff), ebx)
                        
                        if (edi[0x11] != 0)
                            esi_1 = eax_12
                        else
                            esi_1 = 0xff - eax_12
                    else
                        if (esi_2 == 0)
                            goto label_4730d0
                        
                        eax_12 = divu.dp.d(0:((eax_9 - edx_1) * 0xff), esi_2)
                        
                        if (edi[0x11] != 0)
                            esi_1 = 0xff - eax_12
                        else
                            esi_1 = eax_12
                i = i_1
            else
                *(edi + 4) = 0
        else if (edi[0x11] == 0)
            esi_1 = 0
        
        *(arg2 + 0x48) = (zx.d(*(arg2 + 0x48)) * esi_1 s/ 0xff).b
    
    i += 1
    edi = &edi[0x2c]
    i_1 = i
while (i s< 1)
