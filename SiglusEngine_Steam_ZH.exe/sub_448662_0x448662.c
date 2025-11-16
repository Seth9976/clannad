// 函数: sub_448662
// 地址: 0x448662
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_3c = edi
int32_t edi_3 = arg2 * 0x64 + *(arg1 + 0x2c)
void* esi_2 = arg3 * 0x64 + *(edi_3 + 4)
int32_t* eax = *(esi_2 + 0x38)
int32_t* eax_1 = (*(*eax + 0xc))(eax)
int32_t ecx_2 = eax_1[3] + *edi_3
int32_t result = 0
arg2 = ecx_2
int32_t i = *eax_1
int32_t i_2 = i
void* eax_2 = *(esi_2 + 0xc)
void* var_2c = eax_2
arg3 = *(esi_2 + 8)
int32_t esi_3 = *(eax_2 + 0x10)
int32_t edx_1 = *(eax_2 + 4)
int32_t var_10 = esi_3

if (esi_3 == 0)
    var_10 = 1

if (edx_1 s>= 0)
    if (edx_1 s<= 3)
        int32_t k_7 = *(eax_2 + 0x14)
        int32_t esi_5 = *(eax_2 + 0x18)
        int32_t eax_4 = *eax_2
        int32_t edx_3 = k_7 & 3
        char temp1_1 = edx_3.b
        edx_3.b = neg.b(edx_3.b)
        int32_t i_3 = neg.d(sbb.d(edx_3, edx_3, temp1_1 != 0)) + (k_7 u>> 2)
        int32_t k_6 = k_7
        int32_t i_1 = i_3
        int16_t x87control
        
        if (eax_4 == 1)
            int32_t var_20_3 = 0
            
            if (var_10 u> 0)
                while (i != 0)
                    int32_t edi_11 = 0
                    
                    if (esi_5 u> 0)
                        while (i != 0)
                            if (i_3 u> i)
                                k_6 = i << 2
                                i_1 = i
                            
                            if (k_6 u> 0)
                                int32_t var_24_2 = edi_11 << 2
                                int32_t ebx_3 = edi_11 << 3
                                int32_t k_4 = k_6
                                int32_t k
                                
                                do
                                    int32_t eax_29
                                    eax_29, x87control =
                                        __ftol(x87control, fconvert.t(*(ebx_3 + ecx_2)))
                                    *(var_24_2 + arg3) = eax_29
                                    ecx_2 = arg2
                                    ebx_3 += esi_5 << 3
                                    var_24_2 += esi_5 << 2
                                    k = k_4
                                    k_4 -= 1
                                while (k != 1)
                                i = i_2
                            
                            i -= i_1
                            edi_11 += 1
                            i_2 = i
                            
                            if (edi_11 u>= esi_5)
                                break
                    
                    var_20_3 += 1
                    arg3 += (esi_5 * k_7) << 2
                    ecx_2 += (edi_11 * i_1) << 3
                    arg2 = ecx_2
                    
                    if (var_20_3 u>= var_10)
                        break
            
            return result
        
        if (eax_4 == 2)
            int32_t var_24_1 = 0
            
            if (var_10 u> 0)
                while (i != 0)
                    int32_t edi_9 = 0
                    
                    if (esi_5 u> 0)
                        while (i != 0)
                            if (i_3 u> i)
                                k_6 = i << 2
                                i_1 = i
                            
                            if (k_6 u> 0)
                                int32_t var_20_2 = edi_9 << 2
                                int32_t ebx_1 = edi_9 << 3
                                int32_t k_3 = k_6
                                int32_t k_1
                                
                                do
                                    int32_t eax_17
                                    eax_17, x87control =
                                        __ftol(x87control, fconvert.t(*(ebx_1 + ecx_2)))
                                    *(var_20_2 + arg3) = eax_17
                                    ecx_2 = arg2
                                    ebx_1 += esi_5 << 3
                                    var_20_2 += esi_5 << 2
                                    k_1 = k_3
                                    k_3 -= 1
                                while (k_1 != 1)
                                i = i_2
                            
                            i -= i_1
                            edi_9 += 1
                            i_2 = i
                            
                            if (edi_9 u>= esi_5)
                                break
                    
                    var_24_1 += 1
                    arg3 += (esi_5 * k_7) << 2
                    ecx_2 += (edi_9 * i_1) << 3
                    arg2 = ecx_2
                    
                    if (var_24_1 u>= var_10)
                        break
            
            return result
        
        if (eax_4 == 3)
            int32_t var_20_1 = 0
            
            if (var_10 u> 0)
                while (i != 0)
                    int32_t eax_8 = 0
                    
                    if (esi_5 u> 0)
                        while (i != 0)
                            if (i_3 u> i)
                                k_6 = i << 2
                                i_1 = i
                            
                            if (k_6 u> 0)
                                int32_t k_5 = k_6
                                int32_t edi_8 = eax_8 << 2
                                int32_t edx_9 = eax_8 << 3
                                int32_t k_2
                                
                                do
                                    *(edi_8 + arg3) = fconvert.s(fconvert.t(*(edx_9 + ecx_2)))
                                    edx_9 += esi_5 << 3
                                    edi_8 += esi_5 << 2
                                    k_2 = k_5
                                    k_5 -= 1
                                    ecx_2 = arg2
                                while (k_2 != 1)
                                i = i_2
                            
                            i -= i_1
                            eax_8 += 1
                            i_2 = i
                            
                            if (eax_8 u>= esi_5)
                                break
                    
                    ecx_2 += (eax_8 * i_1) << 3
                    var_20_1 += 1
                    arg3 += (esi_5 * k_7) << 2
                    arg2 = ecx_2
                    
                    if (var_20_1 u>= var_10)
                        break
            
            return result
    else if (edx_1 == 5)
        int32_t var_14_1 = 0
        int32_t edi_4 = *(eax_2 + 0x14)
        
        if (var_10 u> 0)
            while (i != 0)
                int32_t var_18_1 = 0
                var_2c = eax_2 + 0x18
                
                if (edi_4 u> 0)
                    while (i != 0)
                        int32_t result_1 = sub_442cce(&var_2c, &arg3, &arg2, &i_2)
                        int16_t top = top - 1
                        unimplemented  {call 0x442cce}
                        result = result_1
                        
                        if (result_1 s< 0)
                            return result
                        
                        var_18_1 += 1
                        i = i_2
                        
                        if (var_18_1 u>= edi_4)
                            break
                
                var_14_1 += 1
                
                if (var_14_1 u>= var_10)
                    break
        
        return result

return 0x80004005
