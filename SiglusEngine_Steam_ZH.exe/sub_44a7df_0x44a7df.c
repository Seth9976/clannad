// 函数: sub_44a7df
// 地址: 0x44a7df
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* eax = arg1[1]
int32_t* edx = arg2
int32_t edi
int32_t var_24 = edi
void* var_14 = eax
float* var_8 = *arg1
int32_t* var_18 = edx
void* const ecx_3

if (arg3 == 0)
    ecx_3 = nullptr
else
    ecx_3 = *(arg4 + 0xc)

int16_t* i_5
uint32_t ecx_4
int16_t* i_6

if (arg3 == 0)
    ecx_4 = *(eax + 4)
    i_6 = i_5
else
    i_6 = ecx_3 + arg3
    ecx_4 = zx.d(*i_6)

if (arg6 == 0xffffffff)
    int32_t* esi_1 = *(eax + 0x10)
    arg1 = esi_1
    
    if (esi_1 == 0)
        arg1 = 1
else
    arg1 = arg6

if (ecx_4 s>= 0)
    int16_t x87control
    
    if (ecx_4 s<= 1)
    label_44a9ce:
        int32_t esi_7 = *eax
        void* eax_13 = *(eax + 0x18)
        int32_t ebx_4 = 0
        int32_t var_c_1 = 0
        
        if (ecx_4 == 3)
            ebx_4 = (4 - eax_13) << 2
            var_c_1 = ebx_4
        
        if (esi_7 == 1)
            arg4 = nullptr
            int16_t* i = i_5
            float* eax_22 = var_8
            
            if (arg1 u> 0)
                while (i != 0)
                    int32_t esi_14 = 0
                    
                    if (eax_13 u> 0)
                        while (i != 0)
                            float edi_9 = *eax_22
                            eax_22 = &eax_22[4]
                            *edx = edi_9
                            edx = &edx[1]
                            i -= 1
                            esi_14 += 1
                            
                            if (esi_14 u>= eax_13)
                                break
                    
                    arg4 += 1
                    eax_22 = &eax_22[ebx_4]
                    
                    if (arg4 u>= arg1)
                        break
        else if (esi_7 == 2)
            arg4 = nullptr
            int16_t* i_1 = i_5
            float* eax_21 = var_8
            
            if (arg1 u> 0)
                while (i_1 != 0)
                    int32_t esi_12 = 0
                    
                    if (eax_13 u> 0)
                        while (i_1 != 0)
                            float edi_8 = *eax_21
                            eax_21 = &eax_21[4]
                            *edx = edi_8
                            edx = &edx[1]
                            i_1 -= 1
                            esi_12 += 1
                            
                            if (esi_12 u>= eax_13)
                                break
                    
                    arg4 += 1
                    eax_21 = &eax_21[ebx_4]
                    
                    if (arg4 u>= arg1)
                        break
        else if (esi_7 == 3)
            float* esi_11 = var_8
            arg4 = i_5
            int32_t* edi_7 = edx
            int32_t var_10_2 = 0
            
            if (arg1 u> 0)
                while (arg4 != 0)
                    arg6 = nullptr
                    
                    if (eax_13 u> 0)
                        while (arg4 != 0)
                            int32_t eax_15
                            int16_t x87control_1
                            eax_15, x87control_1 = __ftol(x87control, fconvert.t(*esi_11))
                            *edi_7 = eax_15
                            int32_t eax_16
                            int16_t x87control_2
                            eax_16, x87control_2 = __ftol(x87control_1, fconvert.t(esi_11[1]))
                            edi_7[1] = eax_16
                            int32_t eax_17
                            int16_t x87control_3
                            eax_17, x87control_3 = __ftol(x87control_2, fconvert.t(esi_11[2]))
                            edi_7[2] = eax_17
                            int32_t eax_18
                            eax_18, x87control = __ftol(x87control_3, fconvert.t(esi_11[3]))
                            esi_11 = &esi_11[4]
                            arg4 -= 1
                            arg6 += 1
                            edi_7[3] = eax_18
                            edi_7 = &edi_7[1]
                            ebx_4 = var_c_1
                            
                            if (arg6 u>= eax_13)
                                break
                    
                    var_10_2 += 1
                    esi_11 = &esi_11[ebx_4]
                    
                    if (var_10_2 u>= arg1)
                        break
            
            edx = edi_7
    else if (ecx_4 == 2)
        void* ecx_5 = *(eax + 0x14)
        int32_t eax_3 = *eax
        int32_t* ecx_6
        
        if (eax_3 == 1)
            int32_t esi_6 = 0
            ecx_6 = edx
            int16_t* i_2 = i_5
            
            if (arg1 u> 0)
                while (i_2 != 0)
                    int32_t eax_12 = 0
                    
                    if (ecx_5 u> 0)
                        while (i_2 != 0)
                            *ecx_6 = var_8[eax_12]
                            ecx_6 = &ecx_6[1]
                            i_2 -= 1
                            eax_12 += 1
                            
                            if (eax_12 u>= ecx_5)
                                break
                    
                    esi_6 += 1
                    
                    if (esi_6 u>= arg1)
                        break
            
            edx = ecx_6
        else if (eax_3 == 2)
            int32_t esi_5 = 0
            ecx_6 = edx
            int16_t* i_3 = i_5
            
            if (arg1 u> 0)
                while (i_3 != 0)
                    int32_t eax_11 = 0
                    
                    if (ecx_5 u> 0)
                        while (i_3 != 0)
                            *ecx_6 = var_8[eax_11]
                            ecx_6 = &ecx_6[1]
                            i_3 -= 1
                            eax_11 += 1
                            
                            if (eax_11 u>= ecx_5)
                                break
                    
                    esi_5 += 1
                    
                    if (esi_5 u>= arg1)
                        break
            
            edx = ecx_6
        else if (eax_3 == 3)
            arg6 = nullptr
            int16_t* i_4 = i_5
            int32_t* ebx_3 = edx
            arg4 = var_8
            
            if (arg1 u> 0)
                do
                    int32_t esi_4 = 0
                    
                    if (i_4 == 0)
                        break
                    
                    if (ecx_5 u> 0)
                        while (i_4 != 0)
                            int32_t eax_9
                            eax_9, x87control =
                                __ftol(x87control, fconvert.t(*(arg4 + (esi_4 << 2))))
                            *ebx_3 = eax_9
                            ebx_3 = &ebx_3[1]
                            i_4 -= 1
                            esi_4 += 1
                            
                            if (esi_4 u>= ecx_5)
                                break
                    
                    arg4 += 0x40
                    arg6 += 1
                while (arg6 u< arg1)
            
            edx = ebx_3
    else
        if (ecx_4 == 3)
            goto label_44a9ce
        
        if (ecx_4 == 5)
            int32_t* var_10_1 = nullptr
            void* var_c
            
            if (arg3 != 0)
                var_c = *(i_6 + 0xc) + arg3
            
            int32_t ebx_2 = *(eax + 0x14)
            arg6 = nullptr
            
            if (arg1 u> 0)
                while (i_5 != 0)
                    arg4 = nullptr
                    var_14 = eax + 0x18
                    
                    if (ebx_2 u> 0)
                        int32_t** esi_3 = var_c + 4
                        
                        while (i_5 != 0)
                            if (arg3 != 0)
                                var_10_1 = *esi_3
                            
                            sub_4472d6(&var_14, &var_8, &arg2, arg3, var_10_1, &i_5, 0xffffffff)
                            arg4 += 1
                            edx = arg2
                            esi_3 = &esi_3[2]
                            
                            if (arg4 u>= ebx_2)
                                break
                    
                    arg6 += 1
                    
                    if (arg6 u>= arg1)
                        break

*arg5 = (edx - var_18) u>> 2
return arg5
