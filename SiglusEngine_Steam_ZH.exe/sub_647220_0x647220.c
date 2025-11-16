// 函数: sub_647220
// 地址: 0x647220
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg2 s> 0)
    void* esi_1 = arg4
    
    if (esi_1 s> 0)
        arg3[3] = arg2
        arg3[4] = esi_1
        sub_5979b0(arg3, (arg2 * esi_1) << 2)
        int32_t eax_4 = arg3[3] - 1
        int32_t eax_6 = arg3[4] - 1
        int32_t eax_7 = *arg3
        
        if (eax_7 == arg3[1])
            eax_7 = 0
        
        int32_t eax_9
        int32_t edx
        edx:eax_9 = sx.q(esi_1)
        int32_t eax_11 = (eax_9 + (edx & 0xf)) s>> 4
        
        if (eax_11 == 0)
            eax_11 = 1
        
        int32_t edx_2 = 0
        uint32_t var_8 = arg2 - 1
        int32_t var_2c = eax_11
        int32_t edi_1 = 0
        int32_t var_c = 0
        int32_t* var_18 = esi_1 - 1
        
        if (eax_11 s> 0)
            int32_t esi_2 = eax_11 - 1
            
            do
                int32_t ecx_2 = edi_1
                int32_t eax_12
                
                if (esi_2 != 0)
                    if (esi_2 s<= 0)
                        if (esi_2 s< 0)
                            if (edi_1 s< esi_2)
                                ecx_2 = esi_2
                            else if (edi_1 s> 0)
                                ecx_2 = 0
                    else if (edi_1 s< 0)
                        ecx_2 = 0
                    else if (edi_1 s> esi_2)
                        ecx_2 = esi_2
                    
                    eax_12 = divs.dp.d(sx.q(ecx_2 * 0xf), esi_2)
                    edx_2 = var_c
                else
                    eax_12 = esi_2 + 0xf
                
                int32_t var_3c_1 = eax_6
                int32_t* ebx
                ebx.b = 0xff
                int32_t var_40_1 = eax_4
                ebx.b = 0xff - eax_12.b
                int32_t var_44_1 = 0
                int32_t var_48_1 = 0
                int32_t var_4c_1 = arg5
                int32_t* var_50_1 = ebx
                int32_t var_54_1 = edx_2
                uint32_t var_58_1 = var_8
                sub_64ce10(eax_12, arg3[3], eax_7, arg3[4], 0, edx_2.b)
                int32_t var_68_1 = eax_6
                int32_t var_6c_1 = eax_4
                int32_t var_70_1 = 0
                int32_t var_74_1 = 0
                int32_t var_78_1 = arg5
                int32_t* var_7c_1 = ebx
                int32_t* var_80_1 = var_18
                uint32_t var_84_1 = var_8
                sub_64ce10(arg3, arg3[3], eax_7, arg3[4], 0, var_18.b)
                eax_11 = var_2c
                edx_2 = var_c + 1
                edi_1 += 1
                var_c = edx_2
                var_18 -= 1
            while (edi_1 s< eax_11)
            
            esi_1 = arg4
        
        int32_t eax_19
        int32_t edx_8
        edx_8:eax_19 = sx.q(esi_1 - eax_11 * 2)
        int32_t eax_22
        int32_t edx_9
        edx_9:eax_22 = sx.q(arg2)
        int32_t ecx_7 = (eax_19 - edx_8) s>> 1
        uint32_t eax_24 = (eax_22 - edx_9) s>> 1
        int32_t var_2c_1 = ecx_7
        uint32_t var_28_1 = eax_24
        
        if ((eax_24.b & 1) != 0)
            eax_24 += 1
            var_28_1 = eax_24
        
        uint32_t edi_2 = 0
        
        if (eax_24 s> 0)
            uint32_t esi_4 = eax_24 - 1
            uint32_t ebx_2 = 0
            
            do
                uint32_t eax_25 = edi_2
                char var_24_1
                
                if (esi_4 != 0)
                    if (esi_4 s<= 0)
                        if (esi_4 s< 0)
                            if (edi_2 s< esi_4)
                                eax_25 = esi_4
                            else if (edi_2 s> 0)
                                eax_25 = 0
                    else if (edi_2 s< 0)
                        eax_25 = 0
                    else if (edi_2 s> esi_4)
                        eax_25 = esi_4
                    
                    var_24_1 = (divs.dp.d(sx.q(eax_25 * 0xef), esi_4)).b + 0x10
                    ecx_7 = var_2c_1
                else
                    var_24_1 = -1
                
                uint32_t eax_29 = ebx_2
                int32_t edx_12
                
                if (esi_4 != 0)
                    if (esi_4 s<= 0)
                        if (esi_4 s< 0)
                            if (ebx_2 s< esi_4)
                                eax_29 = esi_4
                            else if (ebx_2 s> 0)
                                eax_29 = 0
                    else if (ebx_2 s< 0)
                        eax_29 = 0
                    else if (ebx_2 s> esi_4)
                        eax_29 = esi_4
                    
                    edx_12 = divs.dp.d(sx.q(eax_29 * ecx_7), esi_4)
                else
                    edx_12 = ecx_7
                
                int32_t var_3c_2 = eax_6
                ecx_7.b = 0xff
                int32_t var_40_2 = eax_4
                ecx_7.b = 0xff - var_24_1
                int32_t var_44_2 = 0
                int32_t var_48_2 = 0
                sub_64d0a0(arg3, arg3[3], eax_7, arg3[4], edi_2, var_c + edx_12, var_8, 
                    var_18 - edx_12, ecx_7.b, arg5.b)
                var_8 -= 1
                edi_2 += 1
                ecx_7 = var_2c_1
                ebx_2 += 3
            while (edi_2 s< var_28_1)
        
        eax_24.b = 1
        return eax_24

arg1.b = 0
return arg1
