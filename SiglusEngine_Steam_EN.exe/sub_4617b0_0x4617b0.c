// 函数: sub_4617b0
// 地址: 0x4617b0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* const __return_addr_1 = __return_addr
int32_t eax = data_1b144cc
int32_t edx = data_1b144b0
int32_t ecx = data_1b144c8
data_1b144e0 = eax
int32_t result_1 = data_1b144d0
data_1b144e4 = result_1
int32_t result_2 = data_1b144d4
int32_t esi = 0
data_1b144e8 = result_2
int32_t result_3 = data_1b144d8
data_1b144ec = result_3
int32_t result = data_71929c
data_1b144cc = 0
int32_t edi = data_1b144dc
data_1b144f0 = edi
data_1b144d0.o = zx.o(0)

if (edx != 0 && ecx != 0 && result == 0x23)
    int32_t ecx_2 = data_131d2cc - data_1b14a14
    int32_t edx_3 = data_1320e58 - data_1b14a18 + data_1b14a20
    int32_t result_4 = ecx_2 + data_1b14a1c
    bool cond:0_1 = ecx_2 + data_1b14a1c s>= 0
    data_13132ac = edx_3
    
    if (cond:0_1)
        result = data_70300c - data_1299910 - 1
        
        if (result_4 s> result)
            result_4 = result
        
        data_13132a8 = result_4
    else
        data_13132a8 = 0
    
    if (edx_3 s>= 0)
        result = data_7030dc - data_1299914 - 1
        
        if (edx_3 s> result)
            data_13132ac = result
    else
        data_13132ac = 0
else if (result == 0x22)
    if (edx == 0 || ecx == 0)
        if (data_1320e5c == 0xffffffff)
        label_461a47:
            
            if (data_1372c24.b == 0 || data_1372c24:1.b == 0)
            label_461abb:
                
                for (void* i = &data_139329c; i s>= &data_13931a0; i -= 4)
                    int32_t edi_4 = *i
                    
                    if (*(edi_4 * 0x3920 + &data_f89ba4) != 0)
                        if (sub_4882f0(edi_4, 3) != 0)
                            break
                        
                        if (sub_4882f0(edi_4, 4) != 0)
                            break
                        
                        if (sub_4882f0(edi_4, 0xf) != 0)
                            break
                
                if (data_1320e5c == 1)
                    int32_t ecx_11 = 0xffffffff
                    int32_t eax_41 = data_1320e60
                    
                    if (data_13702a0 != 0)
                        ecx_11 = eax_41
                    
                    data_1320e74 = eax_41
                    data_1320e78 = ecx_11
                
                esi = 0
            else
                void* eax_32 = sub_488780()
                
                if (sub_4887c0(eax_32, 3) != 0)
                label_461a90:
                    int32_t ecx_7 = data_1320e60
                    int32_t eax_36 = 0xffffffff
                    bool cond:2_1 = data_13702a0 != 0
                    data_1320e68 = ecx_7
                    
                    if (cond:2_1)
                        eax_36 = ecx_7
                    
                    data_1320e6c = eax_36
                else
                    if (sub_4887c0(eax_32, 4) != 0)
                        goto label_461a90
                    
                    if (sub_4887c0(eax_32, 0xf) != 0)
                        goto label_461a90
                
                if (data_1320e5c == 0xffffffff)
                    goto label_461abb
                
                esi = 0
    else if (data_1320e5c == 0xffffffff)
        int32_t esi_1 = data_1299950
        int32_t edx_4 = data_131d2cc
        int32_t ecx_3 = data_1320e58
        
        if (esi_1 s<= 0)
        label_46195c:
            int32_t esi_2 = data_1299964
            
            if (esi_2 s<= 0)
            label_4619d1:
                int32_t edi_3 = data_129993c
                
                if (edi_3 s<= 0 || data_1299940 s<= 0)
                    goto label_461a47
                
                int32_t eax_26 = data_1299934 + data_13132a8
                int32_t esi_4 = data_13132ac + data_1299938
                
                if (edx_4 s< eax_26 || edx_4 s> eax_26 - 1 + edi_3 || ecx_3 s< esi_4
                        || ecx_3 s> data_1299940 - 1 + esi_4)
                    goto label_461a47
                
                esi = 1
                data_1320e5c = 2
                data_1b144cc = 1
                data_1320e60 = 2
            else
                int32_t edi_2 = data_1299968
                
                if (edi_2 s<= 0)
                    goto label_4619d1
                
                int32_t eax_16 = data_129995c + data_13132a8
                ecx_3 = data_1320e58
                int32_t eax_18 = data_1299960 + data_13132ac
                
                if (edx_4 s< eax_16 || edx_4 s> eax_16 - 1 + esi_2 || ecx_3 s< eax_18
                        || ecx_3 s> eax_18 - 1 + edi_2)
                    goto label_4619d1
                
                data_1b144d4 = 1
                data_1320e5c = 2
                data_1320e60 = 1
                esi = 0
        else
            int32_t edi_1 = data_1299954
            
            if (edi_1 s<= 0)
                goto label_46195c
            
            int32_t eax_6 = data_1299948 + data_13132a8
            int32_t eax_8 = data_129994c + data_13132ac
            
            if (edx_4 s< eax_6 || edx_4 s> eax_6 - 1 + esi_1 || ecx_3 s< eax_8
                    || ecx_3 s> eax_8 - 1 + edi_1)
                goto label_46195c
            
            data_1b144d0 = 1
            data_1320e5c = 2
            data_1320e60 = 0
            esi = 0
    
    int32_t ecx_12 = data_1311170
    
    if (ecx_12 == data_1af4e94 || ecx_12 == 0x3e7)
        data_1b144d8 = 1
    
    result = data_1b144dc
    
    if (ecx_12 == 0)
        result = 1
    
    data_1b144dc = result

if (eax != esi)
    data_1b14568 += 1
else
    result = result_1
    
    if (result != data_1b144d0)
        data_1b14568 += 1
    else
        result = result_2
        
        if (result != data_1b144d4)
            data_1b14568 += 1
        else
            result = result_3
            
            if (result != data_1b144d8 || edi != data_1b144dc)
                data_1b14568 += 1

return result
