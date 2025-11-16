// 函数: sub_4ce420
// 地址: 0x4ce420
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = arg5
int32_t esi = arg2
int32_t eax_1 = ebx - arg3
int32_t var_8 = esi

if (eax_1 s<= esi)
    if (eax_1 s> 0)
        return eax_1
    
    return 0

int32_t eax_4 = arg4

if (arg3 + (esi s>> 1 << 1) - 2 u>= eax_4 && arg3 + (esi s>> 1 << 1) - 2 u< ebx)
    int32_t esi_1 = sx.d(*(arg3 + (esi s>> 1 << 1) - 2))
    
    if (esi_1 s< 0)
        esi_1 = neg.d(esi_1)
    
    void* ecx_2 = arg3 + (esi s>> 1 << 1) - 4
    int32_t edi_1 = 0
    int32_t edx_1 = 0
    
    while (ecx_2 u>= eax_4)
        if (ecx_2 u>= ebx)
            break
        
        int32_t eax_5 = sx.d(*ecx_2)
        
        if (eax_5 s< 0)
            eax_5 = neg.d(eax_5)
        
        if (eax_5 s< esi_1)
            esi_1 = eax_5
            edi_1 = edx_1 + 1
        
        eax_4 = arg4
        edx_1 += 1
        ecx_2 -= 2
        
        if (edx_1 s>= 0xa)
            break
    
    esi = var_8
    
    if (edi_1 != 0)
        esi -= edi_1 * 2
        var_8 = esi
    
    int32_t eax_8 = esi s>> 1
    int16_t* ecx_4 = arg3 + (eax_8 << 1)
    
    if (&ecx_4[-1] u>= arg4 && &ecx_4[-1] u< ebx)
        int32_t esi_2 = sx.d(ecx_4[-1])
        int32_t var_10_1 = esi_2
        int32_t edi_2
        
        if (esi_2 s>= 0)
            edi_2 = 0
        else
            esi_2 = neg.d(esi_2)
            edi_2 = 1
            var_10_1 = esi_2
        
        if (esi_2 s<= 0)
            return var_8
        
        int32_t edx_2 = 1
        int32_t eax_11 = var_8 s>> 3
        int32_t eax_12 = arg4
        arg5 = esi_2
        int32_t var_18 = 0
        
        if (ecx_4 u>= eax_12)
            while (ecx_4 u< ebx)
                int32_t eax_13 = sx.d(*ecx_4)
                
                if (eax_13 s< 0)
                    if (edi_2 == 0)
                        eax_12 = arg4
                        break
                        break
                    
                    eax_13 = neg.d(eax_13)
                else if (edi_2 == 1)
                    eax_12 = arg4
                    break
                    break
                
                if (eax_13 s< arg5)
                    var_18 = edx_2
                    arg5 = eax_13
                    
                    if (eax_13 == 0)
                        eax_12 = arg4
                        break
                
                eax_12 = arg4
                edx_2 += 1
                
                if (edx_2 s>= eax_11)
                    break
                
                ecx_4 = &ecx_4[1]
                
                if (ecx_4 u< eax_12)
                    break
        
        int32_t edx_3 = 1
        int32_t var_1c = 0
        int16_t* ecx_6 = arg3 - 4 + (eax_8 << 1)
        int32_t esi_6 = var_10_1
        
        if (ecx_6 u>= eax_12)
            while (ecx_6 u< ebx)
                int32_t eax_14 = sx.d(*ecx_6)
                
                if (eax_14 s< 0)
                    if (edi_2 == 0)
                        break
                    
                    eax_14 = neg.d(eax_14)
                else if (edi_2 == 1)
                    break
                
                if (eax_14 s< esi_6)
                    var_1c = edx_3
                    esi_6 = eax_14
                    
                    if (eax_14 == 0)
                        break
                
                edx_3 += 1
                
                if (edx_3 s>= eax_11)
                    break
                
                ecx_6 -= 2
                
                if (ecx_6 u< arg4)
                    break
        
        if (arg5 s> esi_6)
            return var_8 - var_1c * 2
        
        return var_8 + (var_18 << 1)

return esi
