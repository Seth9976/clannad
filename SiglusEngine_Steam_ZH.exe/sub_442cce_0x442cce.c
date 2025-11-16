// 函数: sub_442cce
// 地址: 0x442cce
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* edx = arg1
int32_t* eax = *edx
int32_t ecx = eax[1]
int32_t esi = eax[4]
int32_t edi
int32_t var_34 = edi
int32_t edi_1 = 0
int32_t var_14 = 0
int32_t var_c = esi

if (esi == 0)
    var_c = 1

if (ecx s< 0)
    var_14 = 0x80004005
else if (ecx s<= 3)
    int32_t i_6 = eax[5]
    int32_t esi_2 = eax[6]
    int32_t eax_3 = *eax
    int32_t edx_2 = i_6 & 3
    char temp1_1 = edx_2.b
    edx_2.b = neg.b(edx_2.b)
    int32_t i_5 = i_6
    int32_t ebx_4 = (i_6 u>> 2) + neg.d(sbb.d(edx_2, edx_2, temp1_1 != 0))
    int32_t var_20_1 = ebx_4
    int32_t var_10_2 = ebx_4
    int16_t x87control
    
    if (eax_3 == 1)
        int32_t var_18_3 = 0
        
        if (var_c u> 0)
            while (true)
                int32_t* eax_26 = arg4
                
                if (*eax_26 == 0)
                    break
                
                if (esi_2 u> 0)
                    do
                        int32_t ecx_13 = *eax_26
                        
                        if (ecx_13 == 0)
                            break
                        
                        if (var_20_1 u> ecx_13)
                            i_5 = ecx_13 << 2
                            var_10_2 = ecx_13
                        
                        if (i_5 u> 0)
                            int32_t var_1c_2 = edi_1 << 2
                            int32_t ebx_18 = edi_1 << 3
                            int32_t i_4 = i_5
                            int32_t i
                            
                            do
                                int32_t eax_32
                                eax_32, x87control =
                                    __ftol(x87control, fconvert.t(*(ebx_18 + *arg3)))
                                *(var_1c_2 + *arg2) = eax_32
                                ebx_18 += esi_2 << 3
                                var_1c_2 += esi_2 << 2
                                i = i_4
                                i_4 -= 1
                            while (i != 1)
                            eax_26 = arg4
                        
                        ebx_4 = var_10_2
                        *eax_26 -= ebx_4
                        edi_1 += 1
                    while (edi_1 u< esi_2)
                
                *arg3 += (edi_1 * ebx_4) << 3
                *arg2 += (esi_2 * i_6) << 2
                var_18_3 += 1
                
                if (var_18_3 u>= var_c)
                    break
                
                edi_1 = 0
        
        *arg1 += 0x1c
    else if (eax_3 == 2)
        int32_t var_1c_1 = 0
        
        if (var_c u> 0)
            while (true)
                int32_t* eax_12 = arg4
                
                if (*eax_12 == 0)
                    break
                
                if (esi_2 u> 0)
                    do
                        int32_t ecx_7 = *eax_12
                        
                        if (ecx_7 == 0)
                            break
                        
                        if (var_20_1 u> ecx_7)
                            i_5 = ecx_7 << 2
                            var_10_2 = ecx_7
                        
                        if (i_5 u> 0)
                            int32_t var_18_2 = edi_1 << 2
                            int32_t ebx_16 = edi_1 << 3
                            int32_t i_3 = i_5
                            int32_t i_1
                            
                            do
                                int32_t eax_18
                                eax_18, x87control =
                                    __ftol(x87control, fconvert.t(*(ebx_16 + *arg3)))
                                *(var_18_2 + *arg2) = eax_18
                                ebx_16 += esi_2 << 3
                                var_18_2 += esi_2 << 2
                                i_1 = i_3
                                i_3 -= 1
                            while (i_1 != 1)
                            eax_12 = arg4
                        
                        ebx_4 = var_10_2
                        *eax_12 -= ebx_4
                        edi_1 += 1
                    while (edi_1 u< esi_2)
                
                *arg3 += (edi_1 * ebx_4) << 3
                *arg2 += (esi_2 * i_6) << 2
                var_1c_1 += 1
                
                if (var_1c_1 u>= var_c)
                    break
                
                edi_1 = 0
        
        *arg1 += 0x1c
    else if (eax_3 != 3)
        var_14 = 0x80004005
    else
        int32_t var_18_1 = 0
        
        if (var_c u> 0)
            int32_t* edx_5 = arg4
            int32_t edi_3 = arg3
            
            do
                int32_t eax_7 = 0
                
                if (*edx_5 == 0)
                    break
                
                if (esi_2 u> 0)
                    do
                        int32_t ecx_1 = *edx_5
                        
                        if (ecx_1 == 0)
                            break
                        
                        if (var_20_1 u> ecx_1)
                            i_5 = ecx_1 << 2
                            var_10_2 = ecx_1
                        
                        if (i_5 u> 0)
                            int32_t edx_7 = eax_7 << 2
                            int32_t ecx_3 = eax_7 << 3
                            arg3 = i_5
                            int32_t i_2
                            
                            do
                                *(edx_7 + *arg2) = fconvert.s(fconvert.t(*(ecx_3 + *edi_3)))
                                ecx_3 += esi_2 << 3
                                edx_7 += esi_2 << 2
                                i_2 = arg3
                                arg3 -= 1
                            while (i_2 != 1)
                            edx_5 = arg4
                        
                        ebx_4 = var_10_2
                        *edx_5 -= ebx_4
                        eax_7 += 1
                    while (eax_7 u< esi_2)
                
                *edi_3 += (eax_7 * ebx_4) << 3
                *arg2 += (esi_2 * i_6) << 2
                var_18_1 += 1
            while (var_18_1 u< var_c)
        
        *arg1 += 0x1c
else if (ecx != 5)
    var_14 = 0x80004005
else
    int32_t var_10_1 = 0
    int32_t edi_2 = eax[5]
    *edx = &eax[6]
    
    if (var_c u> 0)
        int32_t* ebx_1 = arg4
        
        while (*ebx_1 != 0)
            arg4 = nullptr
            *edx = &eax[6]
            
            if (edi_2 u> 0)
                while (*ebx_1 != 0)
                    int32_t eax_1 = sub_442cce(arg1, arg2, arg3, ebx_1)
                    var_14 = eax_1
                    
                    if (eax_1 s< 0)
                        return 
                    
                    arg4 += 1
                    
                    if (arg4 u>= edi_2)
                        break
            
            var_10_1 += 1
            
            if (var_10_1 u>= var_c)
                break
            
            edx = arg1
