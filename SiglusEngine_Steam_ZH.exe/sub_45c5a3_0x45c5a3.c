// 函数: sub_45c5a3
// 地址: 0x45c5a3
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx = arg3
int32_t edi
int32_t var_40 = edi
int16_t* edi_1 = arg2
void* eax = &edi_1[ecx]
int32_t var_c = 0
int32_t var_18 = 0
int32_t var_1c = 0
int32_t* var_14 = arg1 + 0x490
int16_t* var_2c

if (edi_1 u< eax)
    while (true)
        int16_t* eax_2 = *var_14
        var_2c = eax_2
        
        if (eax_2 != 0)
            void* edx
            edx.w = *edi_1
            eax_2.w = *eax_2
            
            if (edx.w == eax_2.w)
                edi_1 = &edi_1[1]
                
                if (edi_1 u>= eax)
                    break
                
                var_14 = &var_2c[2]
                continue
            else if (edx.w u< eax_2.w)
                var_14 = &var_2c[4]
                continue
        
        if (edi_1 u>= eax)
            break
        
        while (true)
            int16_t* eax_6 = sub_745f3f(0x18)
            
            if (eax_6 == 0)
                eax_6 = nullptr
            else
                *(eax_6 + 4) = 0
                *(eax_6 + 8) = 0
                *(eax_6 + 0x10) = 0
                *(eax_6 + 0x14) = 0
            
            if (eax_6 == 0)
                goto label_45c84a_2
            
            int16_t** edx_1 = var_14
            *eax_6 = *edi_1
            int16_t* ecx_2 = *edx_1
            *(eax_6 + 0xc) = 0xffffffff
            *(eax_6 + 8) = ecx_2
            edi_1 = &edi_1[1]
            *(eax_6 + 4) = 0
            *edx_1 = eax_6
            
            if (edi_1 u>= eax)
                ecx = arg3
                break
            
            var_14 = &eax_6[2]
        
        break

int32_t eax_8 = *(*var_14 + 0xc)

if (eax_8 != 0xffffffff)
    *arg5 = eax_8
    *arg6 = *(*var_14 + 0x10)
    *arg7 = *(*var_14 + 0x14)
    return 0

if (data_b95af8 == 0)
    MoveToEx(*(arg1 + 0x10), 0, 0, nullptr)
    SetTextAlign(*(arg1 + 0x10), TA_NOUPDATECP)
    ecx = arg3

int32_t eax_14 = 0x10a0

if (arg4 != 0)
    eax_14 = 0x11a0

int32_t eax_16
int32_t edx_5
edx_5:eax_16 = sx.q(ecx * 3)
int32_t result_1 = data_b9733c(*(arg1 + 0x10), arg2, ecx, ((eax_16 - edx_5) s>> 1) + 0x10, 
    0xffffffff, eax_14, 0, arg1 + 0x88, arg1 + 0x84, 0, 0, 0, &var_c)
int32_t result = result_1

if (result_1 s>= 0)
    int16_t* eax_21 = *data_b9734c(var_c)
    bool cond:6_1 = eax_21 s<= *(arg1 + 0x24)
    int32_t edi_4 = *(arg1 + 0x28)
    int16_t* var_34 = eax_21
    int32_t var_30_1 = edi_4
    
    if (cond:6_1)
        goto label_45c749
    
    HBITMAP h = sub_45ad2f(arg1, &var_34, &arg2)
    
    if (h == 0)
    label_45c84a:
        result = 0x8007000e
    else
        HDC hdc = *(arg1 + 0x10)
        *(arg1 + 0x2c) = arg2
        int16_t* ecx_9 = var_34
        *(arg1 + 0x1c) = h
        *(arg1 + 0x24) = ecx_9
        *(arg1 + 0x28) = edi_4
        DeleteObject(SelectObject(hdc, h))
    label_45c749:
        int32_t eax_23 = *(arg1 + 0x28)
        
        if (edi_4 s> eax_23)
            var_30_1 = eax_23
        
        int32_t result_2 = data_b97340(var_c, 0, 0, 2, 0, 0, 0, 0)
        result = result_2
        
        if (result_2 s>= 0)
            int32_t var_50_2 = var_c
            arg2 = nullptr
            int16_t* var_8
            data_b97348(var_50_2, 0, 0, &var_8)
            int16_t* var_10
            data_b97348(var_c, 0, 0, &var_10)
            arg4 = nullptr
            
            if (arg3 s> 0)
                do
                    data_b97348(var_c, arg4, 1, &var_2c)
                    int16_t* eax_24 = var_2c
                    int16_t* ecx_10 = var_10
                    
                    if (eax_24 != ecx_10)
                        var_8 = ecx_10
                        bool cond:12_1 = var_8 s>= 0
                        int16_t* ecx_11 = eax_24
                        var_10 = ecx_11
                        
                        if (cond:12_1)
                            int16_t* edx_6 = var_34
                            
                            if (var_8 s> edx_6)
                                var_8 = edx_6
                        else
                            var_8 = nullptr
                        
                        if (eax_24 s< 0)
                            ecx_11 = nullptr
                            var_10 = ecx_11
                        else if (eax_24 s> var_34)
                            ecx_11 = var_34
                            var_10 = ecx_11
                        
                        void* edx_7 = var_8
                        
                        if (var_8 s>= ecx_11)
                            edx_7 = ecx_11
                            ecx_11 = var_8
                        
                        if (edx_7 s< ecx_11)
                            void* edi_5 = *(arg1 + 0x4e4)
                            
                            do
                                void* eax_26 = ecx_11 - edx_7
                                
                                if (eax_26 s> edi_5)
                                    eax_26 = edi_5
                                
                                edx_7 += eax_26
                                arg2 += 1
                            while (edx_7 s< ecx_11)
                    
                    arg4 += 1
                while (arg4 s< arg3)
            
            int16_t* edi_6 = arg2
            int32_t eax_30 = sub_745f3f(edi_6 << 4)
            var_18 = eax_30
            
            if (eax_30 == 0)
            label_45c84a_1:
                result = 0x8007000e
            else
                int32_t eax_33 = sub_745f3f(edi_6 << 2)
                var_1c = eax_33
                
                if (eax_33 != 0)
                    int32_t var_50_5 = var_c
                    int16_t* edi_7 = nullptr
                    arg2 = nullptr
                    data_b97348(var_50_5, 0, 0, &var_8)
                    data_b97348(var_c, 0, 0, &var_10)
                    int32_t var_28_1 = 0
                    
                    if (arg3 s<= 0)
                    label_45c958:
                        *arg5 = edi_7
                        *(*var_14 + 0xc) = edi_7
                        *arg6 = var_18
                        *(*var_14 + 0x10) = var_18
                        *arg7 = var_1c
                        *(*var_14 + 0x14) = var_1c
                        var_18 = 0
                        var_1c = 0
                        result = 0
                    else
                        while (true)
                            data_b97348(var_c, var_28_1, 1, &var_2c)
                            int16_t* ecx_14 = var_2c
                            int16_t* eax_34 = var_10
                            
                            if (ecx_14 != eax_34)
                                var_8 = eax_34
                                var_10 = ecx_14
                                
                                if (eax_34 s< 0)
                                    eax_34 = nullptr
                                    var_8 = eax_34
                                else if (eax_34 s> var_34)
                                    eax_34 = var_34
                                    var_8 = eax_34
                                
                                if (ecx_14 s>= 0)
                                    int16_t* edx_8 = var_34
                                    
                                    if (ecx_14 s> edx_8)
                                        var_10 = edx_8
                                else
                                    var_10 = nullptr
                                
                                int16_t* ecx_15 = var_10
                                arg4 = eax_34
                                int16_t* var_24_1
                                
                                if (eax_34 s< ecx_15)
                                    var_24_1 = ecx_15
                                else
                                    arg4 = ecx_15
                                    var_24_1 = eax_34
                                
                                if (arg4 s< var_24_1)
                                    int32_t* ebx_3 = (edi_7 << 4) + var_18
                                    
                                    while (true)
                                        void* edi_9 = var_24_1 - arg4
                                        void* eax_36 = *(arg1 + 0x4e4)
                                        
                                        if (edi_9 s> eax_36)
                                            edi_9 = eax_36
                                        
                                        *(var_1c + (arg2 << 2)) = edi_9
                                        int32_t result_3
                                        int16_t x87control
                                        result_3, x87control = sub_45ba31(arg1, x87control, arg4, 
                                            edi_9, var_30_1, arg1 + 0x4dc, ebx_3)
                                        result = result_3
                                        
                                        if (result_3 s< 0)
                                            break
                                        
                                        arg4 += edi_9
                                        arg2 += 1
                                        ebx_3 = &ebx_3[4]
                                        
                                        if (arg4 s>= var_24_1)
                                            edi_7 = arg2
                                            goto label_45c943
                                    
                                    break
                            
                        label_45c943:
                            var_28_1 += 1
                            
                            if (var_28_1 s>= arg3)
                                goto label_45c958
                else
                label_45c84a_2:
                    result = 0x8007000e

if (var_c != 0)
    data_b97344(&var_c)

if (data_b95af8 == 0)
    MoveToEx(*(arg1 + 0x10), 0, 0, nullptr)
    SetTextAlign(*(arg1 + 0x10), TA_UPDATECP)

j__free(var_18)
j__free(var_1c)
return result
