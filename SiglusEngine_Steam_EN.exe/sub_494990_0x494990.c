// 函数: sub_494990
// 地址: 0x494990
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg3 u> 0x270f)
    return 0xffffffff

int32_t ebx = arg3 * 9

if (*((ebx << 2) + &data_1b8c890) != 0)
    int32_t edi_1 = *((ebx << 2) + &data_1b8c8a8)
    
    if (edi_1 s> 0)
        if (arg2 s< 0)
            arg2 = edi_1 - 1
        else if (arg2 s>= edi_1)
            arg2 = 0
        
        int32_t ecx = *((ebx << 2) + &data_1b8c894)
        int32_t esi_1 = 0
        
        if (arg4 != 0)
            if (edi_1 s> 0)
                while (true)
                    ecx.b = *((arg2 s>> 3) + ecx)
                    int32_t eax_11 = arg2 & 0x80000007
                    
                    if (eax_11 s< 0)
                        eax_11 = ((eax_11 - 1) | 0xfffffff8) + 1
                    
                    if ((*((eax_11 << 2) + &data_611440) & ecx.b) == 0)
                        if (arg2 == 0)
                            return 0
                        
                        int32_t eax_15
                        eax_15.b = *(((arg2 - 1) s>> 3) + *((ebx << 2) + &data_1b8c894))
                        int32_t ecx_6 = (arg2 - 1) & 0x80000007
                        
                        if (ecx_6 s< 0)
                            ecx_6 = ((ecx_6 - 1) | 0xfffffff8) + 1
                        
                        edi_1 = *((ebx << 2) + &data_1b8c8a8)
                        
                        if ((*((ecx_6 << 2) + &data_611440) & eax_15.b) != 0)
                            return arg2
                    
                    int32_t temp0_1 = arg2
                    arg2 -= 1
                    
                    if (temp0_1 - 1 s< 0)
                        arg2 = *((ebx << 2) + &data_1b8c8a8) - 1
                    
                    esi_1 += 1
                    
                    if (esi_1 s>= edi_1)
                        return 0xffffffff
                    
                    ecx = *((ebx << 2) + &data_1b8c894)
        else if (edi_1 s> 0)
            while (true)
                ecx.b = *((arg2 s>> 3) + ecx)
                int32_t eax_3 = arg2 & 0x80000007
                
                if (eax_3 s< 0)
                    eax_3 = ((eax_3 - 1) | 0xfffffff8) + 1
                
                if ((*((eax_3 << 2) + &data_611440) & ecx.b) == 0)
                    if (arg2 == 0)
                        return 0
                    
                    int32_t eax_7
                    eax_7.b = *(((arg2 - 1) s>> 3) + *((ebx << 2) + &data_1b8c894))
                    int32_t ecx_2 = (arg2 - 1) & 0x80000007
                    
                    if (ecx_2 s< 0)
                        ecx_2 = ((ecx_2 - 1) | 0xfffffff8) + 1
                    
                    edi_1 = *((ebx << 2) + &data_1b8c8a8)
                    
                    if ((*((ecx_2 << 2) + &data_611440) & eax_7.b) != 0)
                        return arg2
                
                arg2 += 1
                
                if (arg2 s>= *((ebx << 2) + &data_1b8c8a8))
                    arg2 = 0
                
                esi_1 += 1
                
                if (esi_1 s>= edi_1)
                    break
                
                ecx = *((ebx << 2) + &data_1b8c894)

return 0xffffffff
