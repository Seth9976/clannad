// 函数: sub_429d45
// 地址: 0x429d45
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t var_c = ecx
int32_t* edx = arg1
int32_t* eax = *edx
int32_t result = 0
int32_t ecx_1 = eax[1]
int32_t esi = *eax
int32_t edi
int32_t var_18 = edi
int32_t i_9 = eax[4]

if (i_9 u< 1)
    i_9 = 1

if (ecx_1 s>= 0)
    if (ecx_1 s<= 3)
        if (esi == 1 || esi == 2 || esi == 3)
            *arg2 += (eax[6] * eax[5] * i_9) << 2
            *edx += 0x1c
            return result
    else if (ecx_1 == 4)
        bool cond:7_1
        
        if (esi s> 0xf)
            if (esi == 0x10)
                if (i_9 == 0)
                    *edx += 0x14
                    return result
                
                int32_t i_8 = i_9
                int32_t i
                
                do
                    int32_t eax_37 = **arg2 << 2
                    void* esi_5 = *(*arg4 + 0x18) + *(eax_37 + arg4[2]) * 0x18
                    void* edi_5 = *(*arg3 + 0x18) + *(eax_37 + arg3[2]) * 0x18
                    
                    if (*(edi_5 + 4) != 0)
                        int32_t* eax_40 = *(edi_5 + 4)
                        (*(*eax_40 + 4))(eax_40)
                    
                    if (*(edi_5 + 8) != 0)
                        int32_t* eax_41 = *(edi_5 + 8)
                        (*(*eax_41 + 4))(eax_41)
                    
                    int32_t* eax_42 = *(esi_5 + 4)
                    
                    if (eax_42 != 0)
                        (*(*eax_42 + 8))(eax_42)
                        *(esi_5 + 4) = 0
                    
                    int32_t* eax_43 = *(esi_5 + 8)
                    
                    if (eax_43 != 0)
                        (*(*eax_43 + 8))(eax_43)
                        *(esi_5 + 8) = 0
                    
                    *(esi_5 + 4) = *(edi_5 + 4)
                    *(esi_5 + 8) = *(edi_5 + 8)
                    *(esi_5 + 0x14) ^= (*(edi_5 + 0x14) << 0x1e s>> 0x1e ^ *(esi_5 + 0x14)) & 2
                    *(esi_5 + 0xc) = *(edi_5 + 0xc)
                    *arg2 += 4
                    i = i_8
                    i_8 -= 1
                while (i != 1)
            label_42a059:
                *arg1 += 0x14
                return result
            
            if (esi s> 0x10)
                cond:7_1 = esi s<= 0x12
            label_429f95:
                
                if (cond:7_1)
                    *edx += 0x14
                    return result
        else
            if (esi == 0xf)
                if (i_9 == 0)
                    *edx += 0x14
                    return result
                
                int32_t i_7 = i_9
                int32_t i_1
                
                do
                    int32_t eax_19 = **arg2 << 2
                    void* esi_4 = *(*arg4 + 0x18) + *(eax_19 + arg4[2]) * 0x18
                    void* edi_3 = *(*arg3 + 0x18) + *(eax_19 + arg3[2]) * 0x18
                    
                    if (*(edi_3 + 4) != 0)
                        int32_t* eax_22 = *(edi_3 + 4)
                        (*(*eax_22 + 4))(eax_22)
                    
                    if (*(edi_3 + 8) != 0)
                        int32_t* eax_23 = *(edi_3 + 8)
                        (*(*eax_23 + 4))(eax_23)
                    
                    int32_t* eax_24 = *(esi_4 + 4)
                    
                    if (eax_24 != 0)
                        (*(*eax_24 + 8))(eax_24)
                        *(esi_4 + 4) = 0
                    
                    int32_t* eax_25 = *(esi_4 + 8)
                    
                    if (eax_25 != 0)
                        (*(*eax_25 + 8))(eax_25)
                        *(esi_4 + 8) = 0
                    
                    *(esi_4 + 4) = *(edi_3 + 4)
                    *(esi_4 + 8) = *(edi_3 + 8)
                    *(esi_4 + 0x14) ^= (*(edi_3 + 0x14) << 0x1e s>> 0x1e ^ *(esi_4 + 0x14)) & 2
                    *(esi_4 + 0xc) = *(edi_3 + 0xc)
                    *arg2 += 4
                    i_1 = i_7
                    i_7 -= 1
                while (i_1 != 1)
                goto label_42a059
            
            if (esi == 4)
                if (i_9 == 0)
                    *edx += 0x14
                    return result
                
                int32_t i_6 = i_9
                int32_t i_2
                
                do
                    int32_t eax_11 = **arg2 << 2
                    void* edi_2 = *(*arg4 + 0x18) + *(eax_11 + arg4[2]) * 0x18
                    void* esi_3 = *(*arg3 + 0x18) + *(eax_11 + arg3[2]) * 0x18
                    
                    if (*(esi_3 + 4) != 0)
                        int32_t* eax_14 = *(esi_3 + 4)
                        (*(*eax_14 + 4))(eax_14)
                    
                    int32_t* eax_15 = *(edi_2 + 4)
                    
                    if (eax_15 != 0)
                        (*(*eax_15 + 8))(eax_15)
                        *(edi_2 + 4) = 0
                    
                    *(edi_2 + 4) = *(esi_3 + 4)
                    *arg2 += 4
                    i_2 = i_6
                    i_6 -= 1
                while (i_2 != 1)
                goto label_42a059
            
            if (esi s> 4)
                if (esi s> 9)
                    cond:7_1 = esi s<= 0xe
                    goto label_429f95
                
                if (i_9 == 0)
                    *edx += 0x14
                    return result
                
                int32_t i_5 = i_9
                int32_t i_3
                
                do
                    int32_t eax_3 = **arg2 << 2
                    void* edi_1 = *(*arg4 + 0x18) + *(eax_3 + arg4[2]) * 0x18
                    void* esi_2 = *(*arg3 + 0x18) + *(eax_3 + arg3[2]) * 0x18
                    
                    if (*(esi_2 + 4) != 0)
                        int32_t* eax_6 = *(esi_2 + 4)
                        (*(*eax_6 + 4))(eax_6)
                    
                    int32_t* eax_7 = *(edi_1 + 4)
                    
                    if (eax_7 != 0)
                        (*(*eax_7 + 8))(eax_7)
                        *(edi_1 + 4) = 0
                    
                    *(edi_1 + 4) = *(esi_2 + 4)
                    *arg2 += 4
                    i_3 = i_5
                    i_5 -= 1
                while (i_3 != 1)
                goto label_42a059
    else if (ecx_1 == 5)
        int32_t ebx_1 = eax[5]
        *edx = &eax[6]
        
        if (i_9 != 0)
            int32_t i_4
            
            do
                int32_t var_c_1 = 0
                *edx = &eax[6]
                
                if (ebx_1 u> 0)
                    do
                        int32_t result_1 = sub_429d45(edx, arg2, arg3, arg4)
                        result = result_1
                        
                        if (result_1 s< 0)
                            return result
                        
                        var_c_1 += 1
                        edx = arg1
                    while (var_c_1 u< ebx_1)
                
                i_4 = i_9
                i_9 -= 1
            while (i_4 != 1)
        
        return result

return 0x80004005
