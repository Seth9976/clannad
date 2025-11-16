// 函数: sub_407d50
// 地址: 0x407d50
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

__builtin_memset(arg2, 0, 0x34)
arg2[0xc] = 1

if (sub_410bd0(arg1, 0x18) == 0x564342)
    *arg2 = sub_410bd0(arg1, 0x10)
    int32_t eax_2 = sub_410bd0(arg1, 0x18)
    arg2[1] = eax_2
    
    if (eax_2 != 0xffffffff)
        int32_t eax_3 = sub_410bd0(arg1, 1)
        
        if (eax_3 == 0)
            arg2[2] = _malloc(arg2[1] << 2)
            
            if (sub_410bd0(arg1, 1) == 0)
                int32_t i = 0
                
                if (arg2[1] s> 0)
                    do
                        int32_t eax_24 = sub_410bd0(arg1, 5)
                        
                        if (eax_24 == 0xffffffff)
                            goto label_407f77
                        
                        *(arg2[2] + (i << 2)) = eax_24 + 1
                        i += 1
                    while (i s< arg2[1])
            else
                int32_t i_1 = 0
                
                if (arg2[1] s> 0)
                    do
                        if (sub_410bd0(arg1, 1) == 0)
                            *(arg2[2] + (i_1 << 2)) = 0
                        else
                            int32_t eax_20 = sub_410bd0(arg1, 5)
                            
                            if (eax_20 == 0xffffffff)
                                goto label_407f77
                            
                            *(arg2[2] + (i_1 << 2)) = eax_20 + 1
                        
                        i_1 += 1
                    while (i_1 s< arg2[1])
        else
            if (eax_3 != 1)
                return 0xffffffff
            
            int32_t ebp_2 = sub_410bd0(arg1, 5) + 1
            arg2[2] = _malloc(arg2[1] << 2)
            int32_t eax_10 = arg2[1]
            int32_t i_2 = 0
            
            if (eax_10 s> 0)
                do
                    int32_t eax_13 = sub_410bd0(arg1, sub_40c650(eax_10 - i_2))
                    
                    if (eax_13 == 0xffffffff)
                        goto label_407f77
                    
                    int32_t ecx_1 = 0
                    
                    if (eax_13 s> 0)
                        while (i_2 s< arg2[1])
                            ecx_1 += 1
                            *(arg2[2] + (i_2 << 2)) = ebp_2
                            i_2 += 1
                            
                            if (ecx_1 s>= eax_13)
                                break
                    
                    eax_10 = arg2[1]
                    ebp_2 += 1
                while (i_2 s< eax_10)
        
        int32_t eax_27 = sub_410bd0(arg1, 4)
        arg2[3] = eax_27
        
        if (eax_27 == 0)
            return 0
        
        if (eax_27 s> 0 && eax_27 s<= 2)
            arg2[4] = sub_410bd0(arg1, 0x20)
            arg2[5] = sub_410bd0(arg1, 0x20)
            arg2[6] = sub_410bd0(arg1, 4) + 1
            arg2[7] = sub_410bd0(arg1, 1)
            int32_t eax_33 = arg2[3]
            int32_t edi_1 = 0
            long double x87_r0
            
            if (eax_33 == 1)
                edi_1 = sub_4074f0(x87_r0, arg2)
            else if (eax_33 == 2)
                edi_1 = *arg2 * arg2[1]
            int32_t* eax_37 = edi_1 << 2
            int32_t ebp_3 = 0
            bool cond:2_1 = edi_1 == 0
            arg2[8] = _malloc(eax_37)
            
            if (edi_1 s> 0)
                do
                    *(arg2[8] + (ebp_3 << 2)) = sub_410bd0(arg1, arg2[6])
                    ebp_3 += 1
                while (ebp_3 s< edi_1)
                
                cond:2_1 = edi_1 == 0
            
            if (cond:2_1 || *(eax_37 + arg2[8] - 4) != 0xffffffff)
                return 0

label_407f77:
sub_407750(arg2)
return 0xffffffff
