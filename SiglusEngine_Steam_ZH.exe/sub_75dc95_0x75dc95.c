// 函数: sub_75dc95
// 地址: 0x75dc95
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int16_t* ecx = arg1

if (arg2 != 0)
    *arg2 = ecx

if (ecx != 0)
    uint32_t eax_3 = arg3
    
    if (eax_3 == 0)
    label_75dcd6:
        uint32_t edi_1 = zx.d(*ecx)
        void* esi_1 = &ecx[1]
        int32_t result = 0
        
        while (true)
            int32_t edx
            eax_3, edx = sub_75eb5f(eax_3.w, edx, ecx, edi_1.w)
            ecx = 8
            
            if (eax_3 == 0)
                break
            
            edi_1 = zx.d(*esi_1)
            esi_1 += 2
        
        int32_t eax_4 = arg4
        
        if (edi_1.w == 0x2d)
            eax_4 |= 2
            edi_1 = zx.d(*esi_1)
            esi_1 += 2
        else if (edi_1.w == 0x2b)
            edi_1 = zx.d(*esi_1)
            esi_1 += 2
        
        int32_t var_8_1 = eax_4
        uint32_t eax_5 = arg3
        
        if (eax_5 != 0)
            goto label_75dd4e
        
        if (__wchartodigit(edi_1.w) == 0)
            int16_t eax_7 = *esi_1
            
            if (eax_7 == 0x78 || eax_7 == 0x58)
                eax_5 = 0x10
                arg3 = 0x10
            label_75dd4e:
                
                if (eax_5 == 0x10 && __wchartodigit(edi_1.w) == 0)
                    int16_t eax_9 = *esi_1
                    
                    if (eax_9 == 0x78 || eax_9 == 0x58)
                        edi_1 = zx.d(*(esi_1 + 2))
                        esi_1 += 4
            else
                arg3 = 8
        else
            arg3 = 0xa
        
        int32_t eax_10 = 0xffffffff
        int32_t edx_1 = 0
        uint32_t temp0_1 = divu.dp.d(edx_1:eax_10, arg3)
        int32_t eax_14
        int32_t* edi_2
        
        while (true)
            int32_t edx_3 = __wchartodigit(edi_1.w)
            
            if (edx_3 != 0xffffffff)
            label_75dddf:
                eax_14 = var_8_1
                
                if (edx_3 u< arg3)
                    int32_t eax_16 = eax_14 | 8
                    var_8_1 = eax_16
                    
                    if (result u< temp0_1
                            || (result == temp0_1 && edx_3 u<= modu.dp.d(edx_1:eax_10, arg3)))
                        result = result * arg3 + edx_3
                    else
                        edi_2 = arg2
                        eax_14 = eax_16 | 4
                        var_8_1 = eax_14
                        
                        if (edi_2 == 0)
                            break
                    
                    edi_1 = zx.d(*esi_1)
                    esi_1 += 2
                    continue
            else
                if ((0x41 u<= edi_1.w && edi_1.w u<= 0x5a) || edi_1.w - 0x61 u<= 0x19)
                    uint32_t edx_4 = zx.d(edi_1.w)
                    
                    if (edi_1.w - 0x61 u<= 0x19)
                        edx_4 -= 0x20
                    
                    edx_3 = edx_4 - 0x37
                    goto label_75dddf
                
                eax_14 = var_8_1
            
            edi_2 = arg2
            break
        
        void* esi_2 = esi_1 - 2
        
        if ((eax_14.b & 8) == 0)
            if (edi_2 != 0)
                esi_2 = arg1
            
            result = 0
        else if ((eax_14.b & 4) != 0)
        label_75de41:
            *__errno() = 0x22
            eax_14 = var_8_1
            
            if ((eax_14.b & 1) == 0)
                int32_t ebx_2
                ebx_2.b = (eax_14.b & 2) != 0
                result = ebx_2 + 0x7fffffff
            else
                result = 0xffffffff
        else if ((eax_14.b & 1) == 0)
            int32_t ecx_6 = eax_14 & 2
            
            if (ecx_6 != 0 && result u> 0x80000000)
                goto label_75de41
            
            if (ecx_6 == 0 && result u> 0x7fffffff)
                goto label_75de41
        
        if (edi_2 != 0)
            *edi_2 = esi_2
        
        if ((eax_14.b & 2) == 0)
            return result
        
        return neg.d(result)
    
    if (eax_3 s>= 2 && eax_3 s<= 0x24)
        goto label_75dcd6

*__errno() = 0x16
__invalid_parameter_noinfo()
return 0
