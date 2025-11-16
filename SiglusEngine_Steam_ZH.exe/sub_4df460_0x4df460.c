// 函数: sub_4df460
// 地址: 0x4df460
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* edx = arg1
int32_t eax = edx[0x66]
char ecx = (edx[0x68]).b
int32_t eax_1 = 1 << ecx
void* ebx = edx[0x70]
void* var_8 = ebx
int32_t eax_2 = 0xffffffff << ecx

if (edx[0x46] != 0 && *(ebx + 0x28) == 0)
    int32_t result = sub_4deea0()
    
    if (result == 0)
        return result
    
    ebx = var_8
    edx = arg1

int32_t edi
int32_t var_14c = edi

if (*(ebx + 8) == 0)
    int32_t* eax_6 = edx[6]
    int32_t* var_20_1 = edx
    int32_t var_30 = *eax_6
    int32_t eax_7 = eax_6[1]
    int32_t eax_9 = *arg2
    int32_t ecx_2 = *(ebx + 0x14)
    int32_t edi_1 = *(ebx + 0xc)
    int32_t esi_1 = *(ebx + 0x10)
    void* eax_10 = *(ebx + 0x3c)
    int32_t* eax_11 = edx[0x65]
    int32_t var_c_1 = ecx_2
    int32_t i_1 = 0
    arg2 = eax_11
    int32_t var_28
    int32_t var_24
    
    if (ecx_2 == 0)
        if (eax_11 s> eax)
            goto label_4df7a8
        
        while (true)
            int32_t eax_13
            void* edx_1
            
            if (esi_1 s< 8)
                if (sub_4de6a0(&var_30, edi_1, esi_1, 0) == 0)
                    goto label_4df7d4
                
                esi_1 = var_24
                edi_1 = var_28
                
                if (esi_1 s>= 8)
                    goto label_4df54f
                
                edx_1 = eax_10
                eax_13 = 1
                goto label_4df585
            
        label_4df54f:
            edx_1 = eax_10
            uint32_t eax_16 = zx.d((edi_1 s>> (esi_1.b - 8)).b)
            int32_t ecx_4 = *(edx_1 + (eax_16 << 2) + 0x90)
            uint32_t var_10_1
            
            if (ecx_4 == 0)
                eax_13 = 9
            label_4df585:
                uint32_t eax_17 = sub_4de7c0(&var_30, edi_1, esi_1, edx_1, eax_13)
                var_10_1 = eax_17
                
                if (eax_17 s< 0)
                    goto label_4df7d4
                
                edi_1 = var_28
                esi_1 = var_24
            else
                esi_1 -= ecx_4
                var_10_1 = zx.d(*(eax_16 + edx_1 + 0x490))
            
            int32_t ebx_3 = var_10_1 s>> 4
            int32_t eax_19 = var_10_1 & 0xf
            int32_t var_1c_1 = ebx_3
            int32_t var_10_2 = eax_19
            
            if (eax_19 != 0)
                if (eax_19 != 1)
                    void* eax_20 = *arg1
                    *(eax_20 + 0x14) = 0x76
                    (*(eax_20 + 4))(arg1, 0xffffffff)
                
                if (esi_1 s< 1)
                    if (sub_4de6a0(&var_30, edi_1, esi_1, 1) == 0)
                        goto label_4df7d4
                    
                    edi_1 = var_28
                    esi_1 = var_24
                
                esi_1 -= 1
                
                if (((edi_1 s>> esi_1.b).b & 1) == 0)
                    var_10_2 = eax_2
                else
                    var_10_2 = eax_1
            else if (ebx_3 != 0xf)
                int32_t eax_35 = 1 << ebx_3.b
                var_c_1 = eax_35
                
                if (ebx_3 != 0)
                    if (esi_1 s< ebx_3)
                        if (sub_4de6a0(&var_30, edi_1, esi_1, ebx_3) == 0)
                            goto label_4df7d4
                        
                        edi_1 = var_28
                        esi_1 = var_24
                    
                    esi_1 -= ebx_3
                    var_c_1 += edi_1 s>> esi_1.b & (eax_35 - 1)
                
                ebx = var_8
                edx = arg1
                eax_11 = arg2
                break
            
            bool cond:9_1
            
            do
                int32_t eax_23 = *((arg2 << 2) + &data_ac7e28)
                int16_t* ebx_5 = eax_9 + (eax_23 << 1)
                
                if (*(eax_9 + (eax_23 << 1)) == 0)
                    int32_t temp1_1 = var_1c_1
                    var_1c_1 -= 1
                    
                    if (temp1_1 - 1 s< 0)
                        break
                else
                    if (esi_1 s< 1)
                        if (sub_4de6a0(&var_30, edi_1, esi_1, 1) == 0)
                            goto label_4df7d4
                        
                        edi_1 = var_28
                        esi_1 = var_24
                    
                    esi_1 -= 1
                    
                    if (((edi_1 s>> esi_1.b).b & 1) != 0)
                        int16_t eax_27 = *ebx_5
                        
                        if ((eax_1 & sx.d(eax_27)) == 0)
                            if (eax_27 s< 0)
                                *ebx_5 = eax_27 + eax_2.w
                            else
                                *ebx_5 = eax_27 + eax_1.w
                
                cond:9_1 = arg2 + 1 s<= eax
                arg2 += 1
            while (cond:9_1)
            
            if (var_10_2 != 0)
                int32_t eax_32 = *((arg2 << 2) + &data_ac7e28)
                *(eax_9 + (eax_32 << 1)) = var_10_2.w
                int32_t var_140[0x40]
                var_140[i_1] = eax_32
                i_1 += 1
            
            bool cond:10_1 = arg2 + 1 s<= eax
            arg2 += 1
            
            if (not(cond:10_1))
                ebx = var_8
                edx = arg1
                goto label_4df7a8
    
    if (var_c_1 u<= 0)
        goto label_4df7a8
    
    if (eax_11 s<= eax)
        while (true)
            int32_t eax_38 = *((eax_11 << 2) + &data_ac7e28)
            int16_t* eax_39 = eax_9 + (eax_38 << 1)
            
            if (*(eax_9 + (eax_38 << 1)) != 0)
                if (esi_1 s< 1)
                    if (sub_4de6a0(&var_30, edi_1, esi_1, 1) == 0)
                        break
                    
                    edi_1 = var_28
                    esi_1 = var_24
                    edx = arg1
                
                esi_1 -= 1
                
                if (((edi_1 s>> esi_1.b).b & 1) != 0)
                    int32_t ecx_23 = eax_1
                    
                    if ((ecx_23 & sx.d(*eax_39)) == 0)
                        int16_t eax_45 = *eax_39
                        
                        if (eax_45 s< 0)
                            ecx_23 = eax_2
                        
                        *eax_39 = eax_45 + ecx_23.w
            
            eax_11 = arg2 + 1
            arg2 = eax_11
            
            if (eax_11 s> eax)
                goto label_4df7a2
        
    label_4df7d4:
        int32_t i = i_1
        
        while (i s> 0)
            int32_t __saved_ebx
            int32_t edx_14 = (&__saved_ebx)[i]
            i -= 1
            *(eax_9 + (edx_14 << 1)) = 0
        
        return 0
    
label_4df7a2:
    var_c_1 -= 1
label_4df7a8:
    int32_t* edx_12 = edx[6]
    *edx_12 = var_30
    edx_12[1] = eax_7
    *(ebx + 0xc) = edi_1
    *(ebx + 0x10) = esi_1
    *(ebx + 0x14) = var_c_1

*(ebx + 0x28) -= 1
return 1
