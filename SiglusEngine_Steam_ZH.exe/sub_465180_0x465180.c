// 函数: sub_465180
// 地址: 0x465180
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_28 = edi
int32_t* edi_1 = arg1[6]
int32_t eax = edi_1[1]
char* ebx = *edi_1
int32_t* var_1c = edi_1

if (*(arg1[0x6f] + 0x10) == 0)
    void* eax_1 = *arg1
    *(eax_1 + 0x14) = 0x3e
    (*eax_1)(arg1)

if (eax != 0)
    goto label_4651d0

if (edi_1[3](arg1) != 0)
    int32_t edx_1 = edi_1[1]
    ebx = *edi_1
    int32_t var_8_1 = edx_1
    eax = edx_1
label_4651d0:
    int32_t ecx_1
    ecx_1:1.b = *ebx
    int32_t eax_3 = eax - 1
    void* ebx_1 = &ebx[1]
    
    if (eax_3 != 0)
        goto label_4651f7
    
    if (edi_1[3](arg1) != 0)
        int32_t edx_2 = edi_1[1]
        ebx_1 = *edi_1
        int32_t var_8_2 = edx_2
        eax_3 = edx_2
    label_4651f7:
        int32_t edx_4 = ecx_1 + zx.d(*ebx_1)
        int32_t eax_5 = eax_3 - 1
        void* ebx_2 = ebx_1 + 1
        
        if (eax_5 != 0)
            goto label_465218
        
        if (edi_1[3](arg1) != 0)
            int32_t edx_5 = edi_1[1]
            ebx_2 = *edi_1
            int32_t var_8_3 = edx_5
            eax_5 = edx_5
        label_465218:
            uint32_t ecx_3 = zx.d(*ebx_2)
            int32_t var_8_4 = eax_5 - 1
            void* eax_8 = *arg1
            *(eax_8 + 0x14) = 0x67
            void* ebx_3 = ebx_2 + 1
            *(eax_8 + 0x18) = ecx_3
            (*(eax_8 + 4))(arg1, 1)
            uint32_t eax_9 = ecx_3
            
            if (edx_4 != eax_9 * 2 + 6 || eax_9 s< 1 || eax_9 s> 4)
                void* eax_10 = *arg1
                *(eax_10 + 0x14) = 0xb
                (*eax_10)(arg1)
                eax_9 = ecx_3
            
            arg1[0x53] = eax_9
            int32_t var_18_1 = 0
            
            if (eax_9 s> 0)
                void* var_10_1 = &arg1[0x54]
                bool cond:8_1
                
                do
                    if (var_8_4 == 0)
                        if (edi_1[3](arg1) == 0)
                            return 0
                        
                        ebx_3 = *edi_1
                        var_8_4 = edi_1[1]
                    
                    uint32_t i = zx.d(*ebx_3)
                    void* ebx_4 = ebx_3 + 1
                    int32_t var_8_5 = var_8_4 - 1
                    
                    if (var_8_4 == 1)
                        if (edi_1[3](arg1) == 0)
                            return 0
                        
                        ebx_4 = *edi_1
                        var_8_5 = edi_1[1]
                    
                    int32_t* edi_2 = arg1[0x37]
                    var_8_4 = var_8_5 - 1
                    uint32_t eax_19 = zx.d(*ebx_4)
                    ebx_3 = ebx_4 + 1
                    int32_t ecx_5 = 0
                    
                    if (arg1[9] s<= 0)
                    label_4652f2:
                        void* eax_20 = *arg1
                        *(eax_20 + 0x14) = 5
                        *(eax_20 + 0x18) = i
                        (*eax_20)(arg1)
                    else
                        while (i != *edi_2)
                            ecx_5 += 1
                            edi_2 = &edi_2[0x15]
                            
                            if (ecx_5 s>= arg1[9])
                                goto label_4652f2
                    
                    edi_2[6] = eax_19 & 0xf
                    *var_10_1 = edi_2
                    void* eax_22 = *arg1
                    edi_2[5] = eax_19 s>> 4 & 0xf
                    *(eax_22 + 0x18) = i
                    *(eax_22 + 0x1c) = edi_2[5]
                    *(eax_22 + 0x20) = edi_2[6]
                    *(eax_22 + 0x14) = 0x68
                    (*(eax_22 + 4))(arg1, 1)
                    edi_1 = var_1c
                    cond:8_1 = var_18_1 + 1 s< ecx_3
                    var_18_1 += 1
                    var_10_1 += 4
                while (cond:8_1)
            
            int32_t eax_26 = var_8_4
            
            if (eax_26 != 0)
                goto label_465376
            
            if (edi_1[3](arg1) != 0)
                eax_26 = edi_1[1]
                ebx_3 = *edi_1
                int32_t var_8_6 = eax_26
            label_465376:
                int32_t eax_27 = eax_26 - 1
                void* ebx_5 = ebx_3 + 1
                arg1[0x65] = zx.d(*ebx_3)
                
                if (eax_27 != 0)
                    goto label_465398
                
                if (edi_1[3](arg1) != 0)
                    int32_t ecx_13 = edi_1[1]
                    ebx_5 = *edi_1
                    int32_t var_8_7 = ecx_13
                    eax_27 = ecx_13
                label_465398:
                    void* ebx_6 = ebx_5 + 1
                    int32_t var_8_8 = eax_27 - 1
                    arg1[0x66] = zx.d(*ebx_5)
                    
                    if (eax_27 != 1)
                        goto label_4653be
                    
                    if (edi_1[3](arg1) != 0)
                        ebx_6 = *edi_1
                        var_8_8 = edi_1[1]
                    label_4653be:
                        uint32_t eax_32 = zx.d(*ebx_6)
                        int32_t edx_18 = arg1[0x65]
                        int32_t eax_33 = eax_32 & 0xf
                        int32_t ecx_17 = eax_32 s>> 4 & 0xf
                        arg1[0x68] = eax_33
                        void* eax_34 = *arg1
                        *(eax_34 + 0x18) = edx_18
                        int32_t edx_19 = arg1[0x66]
                        *(eax_34 + 0x20) = ecx_17
                        arg1[0x67] = ecx_17
                        *(eax_34 + 0x1c) = edx_19
                        *(eax_34 + 0x24) = eax_33
                        *(eax_34 + 0x14) = 0x69
                        (*(eax_34 + 4))(arg1, 1)
                        void* edx_20 = arg1[0x6f]
                        arg1[0x25] += 1
                        *(edx_20 + 0x14) = 0
                        *edi_1 = ebx_6 + 1
                        edi_1[1] = var_8_8 - 1
                        return 1

return 0
