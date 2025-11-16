// 函数: sub_7338a0
// 地址: 0x7338a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax_1 = *(*(arg1 + 0x1c0) + 0x18)
int32_t eax_2 = *arg2
int32_t edi = arg2[1]
int32_t ebx = arg2[2]
int32_t ecx = arg2[3]
int32_t edx = arg2[4]
int32_t esi_1 = arg2[5]
int32_t var_10 = eax_2
int32_t var_14 = edi
int32_t var_c = ebx
int32_t var_18 = ecx
int32_t var_8 = edx
int32_t var_24 = esi_1
int32_t edi_3

if (edi s<= eax_2)
    edi_3 = eax_2
else
    int32_t var_28_1 = eax_2
    
    while (eax_2 s<= edi)
        int32_t edi_1 = ebx
        
        if (ebx s<= ecx)
            int16_t* ebx_1 = *(eax_1 + (eax_2 << 2)) + (((ebx << 5) + edx) << 1)
            int32_t eax_4 = var_8
            
            do
                int16_t* edx_2 = ebx_1
                int32_t ecx_4 = eax_4
                
                if (eax_4 s<= esi_1)
                    do
                        eax_4.w = *edx_2
                        edx_2 = &edx_2[1]
                        
                        if (eax_4.w != 0)
                            edi = var_14
                            var_10 = var_28_1
                            *arg2 = var_28_1
                            goto label_733962
                        
                        ecx_4 += 1
                    while (ecx_4 s<= esi_1)
                    
                    eax_4 = var_8
                
                ecx = var_18
                edi_1 += 1
                ebx_1 = &ebx_1[0x20]
            while (edi_1 s<= ecx)
            
            eax_2 = var_28_1
            edx = var_8
            ebx = var_c
        
        edi = var_14
        eax_2 += 1
        var_28_1 = eax_2
    
label_733962:
    ecx = var_18
    ebx = var_c
    
    if (edi s<= var_10)
        edx = var_8
        edi_3 = var_10
    else
        int32_t eax_6 = edi
        int32_t var_28_2 = edi
        
        do
            int32_t edi_2 = ebx
            
            if (ebx s<= ecx)
                int16_t* ebx_2 = *(eax_1 + (eax_6 << 2)) + (((ebx << 5) + var_8) << 1)
                int32_t eax_8 = var_8
                
                do
                    int16_t* edx_4 = ebx_2
                    int32_t ecx_9 = eax_8
                    
                    if (eax_8 s<= esi_1)
                        do
                            eax_8.w = *edx_4
                            edx_4 = &edx_4[1]
                            
                            if (eax_8.w != 0)
                                edx = var_8
                                ebx = var_c
                                edi_3 = var_10
                                arg2[1] = var_28_2
                                ecx = var_18
                                var_14 = var_28_2
                                goto label_7339f8
                            
                            ecx_9 += 1
                        while (ecx_9 s<= esi_1)
                        
                        eax_8 = var_8
                    
                    ecx = var_18
                    edi_2 += 1
                    ebx_2 = &ebx_2[0x20]
                while (edi_2 s<= ecx)
                
                eax_6 = var_28_2
                ebx = var_c
            
            edi_3 = var_10
            eax_6 -= 1
            var_28_2 = eax_6
        while (eax_6 s>= edi_3)
        
        edx = var_8

label_7339f8:
int32_t ecx_16

if (ecx s<= ebx)
label_733aeb:
    ecx_16 = var_c
else
    int32_t eax_10 = ebx
    int32_t var_28_3 = eax_10
    int32_t ebx_5 = ((ebx << 5) + edx) * 2
    int32_t ebx_6
    
    while (true)
        esi_1 = var_24
        
        if (var_10 s<= var_14)
            int32_t eax_11 = var_14
            int32_t edi_4 = edi_3
            
            do
                if (var_8 s<= esi_1)
                    int16_t* ecx_14 = *(eax_1 + (edi_4 << 2)) + ebx_5
                    
                    do
                        eax_11.w = *ecx_14
                        ecx_14 = &ecx_14[1]
                        
                        if (eax_11.w != 0)
                            ebx_6 = var_28_3
                            var_c = var_28_3
                            arg2[2] = var_28_3
                            ecx = var_18
                            goto label_733a77
                        
                        edx += 1
                    while (edx s<= esi_1)
                    
                    eax_11 = var_14
                
                edx = var_8
                edi_4 += 1
            while (edi_4 s<= eax_11)
            
            eax_10 = var_28_3
            ecx = var_18
        
        eax_10 += 1
        ebx_5 += 0x40
        var_28_3 = eax_10
        
        if (eax_10 s> ecx)
            break
        
        edi_3 = var_10
    
    ebx_6 = var_c
label_733a77:
    
    if (ecx s<= ebx_6)
    label_733aeb_1:
        ecx_16 = var_c
    else
        int32_t edx_5 = var_14
        int32_t eax_13 = ecx
        ecx_16 = var_c
        int32_t ebx_10 = ((ecx << 5) + var_8) * 2
        int32_t var_28_4 = eax_13
        
        do
            int32_t edi_5 = var_10
            
            if (edi_5 s<= edx_5)
                int32_t eax_14 = var_8
                
                do
                    int32_t edx_6 = eax_14
                    int16_t* ecx_19 = *(eax_1 + (edi_5 << 2)) + ebx_10
                    
                    if (eax_14 s<= esi_1)
                        do
                            eax_14.w = *ecx_19
                            ecx_19 = &ecx_19[1]
                            
                            if (eax_14.w != 0)
                                var_18 = var_28_4
                                arg2[3] = var_28_4
                                goto label_733aeb_1
                            
                            edx_6 += 1
                        while (edx_6 s<= esi_1)
                        
                        eax_14 = var_8
                    
                    edi_5 += 1
                while (edi_5 s<= var_14)
                
                eax_13 = var_28_4
                ecx_16 = var_c
                edx_5 = var_14
            
            eax_13 -= 1
            ebx_10 -= 0x40
            var_28_4 = eax_13
        while (eax_13 s>= ecx_16)

int32_t edi_11 = var_8

if (esi_1 s> edi_11)
    int32_t eax_16 = var_14
    int32_t ebx_11 = edi_11
    int32_t edi_6 = var_10
    
    while (true)
        int32_t edx_7 = edi_6
        
        if (edi_6 s<= eax_16)
            int32_t edi_9 = (ecx_16 << 5) + ebx_11
            
            while (true)
                int16_t* eax_19 = *(eax_1 + (edx_7 << 2)) + edi_9 * 2
                esi_1 = var_24
                
                if (var_c s<= var_18)
                    while (*eax_19 == 0)
                        ecx_16 += 1
                        eax_19 = &eax_19[0x20]
                        
                        if (ecx_16 s> var_18)
                            goto label_733b37
                    
                    edi_11 = ebx_11
                    var_8 = edi_11
                    arg2[4] = ebx_11
                    break
                
            label_733b37:
                eax_16 = var_14
                edx_7 += 1
                
                if (edx_7 s> eax_16)
                    edi_6 = var_10
                    goto label_733b42
                
                ecx_16 = var_c
            
            break
        
    label_733b42:
        ebx_11 += 1
        
        if (ebx_11 s> esi_1)
            edi_11 = var_8
            break
        
        ecx_16 = var_c
    
    if (esi_1 s> edi_11)
        int32_t eax_21 = var_14
        int32_t ebx_12 = esi_1
        int32_t ecx_21 = var_10
        
        do
            int32_t edx_8 = ecx_21
            
            if (ecx_21 s<= eax_21)
                int32_t ecx_22 = var_c
                int32_t edi_14 = (ecx_22 << 5) + ebx_12
                
                while (true)
                    int16_t* eax_24 = *(eax_1 + (edx_8 << 2)) + edi_14 * 2
                    esi_1 = var_24
                    
                    if (var_c s<= var_18)
                        while (*eax_24 == 0)
                            ecx_22 += 1
                            eax_24 = &eax_24[0x20]
                            
                            if (ecx_22 s> var_18)
                                goto label_733ba5
                        
                        esi_1 = ebx_12
                        edi_11 = var_8
                        arg2[5] = ebx_12
                        break
                    
                label_733ba5:
                    eax_21 = var_14
                    edx_8 += 1
                    
                    if (edx_8 s> eax_21)
                        edi_11 = var_8
                        ecx_21 = var_10
                        goto label_733bb3
                    
                    ecx_22 = var_c
                
                break
            
        label_733bb3:
            ebx_12 -= 1
        while (ebx_12 s>= edi_11)

int32_t ebx_13 = var_18
int32_t eax_27 = ebx_13 - var_c
int32_t edx_11 = (var_14 - var_10) << 4
int32_t ecx_24 = eax_27 * 0xc
int32_t eax_29 = esi_1 - edi_11
int32_t eax_30 = eax_29 << 3
int32_t edx_13 = 0
arg2[6] = eax_30 * eax_30 + ecx_24 * ecx_24 + edx_11 * edx_11

if (var_10 s> var_14)
    arg2[7] = 0
    return var_10

int32_t eax_35 = var_c
int32_t ecx_27 = var_14

do
    if (eax_35 s<= ebx_13)
        int32_t i_1 = eax_27 + 1
        int32_t ecx_31 = var_8
        int16_t* edi_17 = *(eax_1 + (var_10 << 2)) + (((eax_35 << 5) + edi_11) << 1)
        int32_t i
        
        do
            int16_t* eax_38 = edi_17
            
            if (ecx_31 s<= esi_1)
                int32_t j_1 = eax_29 + 1
                int32_t j
                
                do
                    if (*eax_38 != 0)
                        edx_13 += 1
                    
                    eax_38 = &eax_38[1]
                    j = j_1
                    j_1 -= 1
                while (j != 1)
                ecx_31 = var_8
            
            edi_17 = &edi_17[0x20]
            i = i_1
            i_1 -= 1
        while (i != 1)
        ebx_13 = var_18
        edi_11 = var_8
        eax_35 = var_c
        ecx_27 = var_14
    
    var_10 += 1
while (var_10 s<= ecx_27)

arg2[7] = edx_13
return arg2
