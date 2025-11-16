// 函数: sub_44a3d9
// 地址: 0x44a3d9
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int16_t* eax = arg1[1]
float* var_8 = *arg1
int32_t* arg_8
int32_t* ecx_2 = arg_8
int16_t* var_1c = eax
void* const ecx_4

if (arg2 == 0)
    ecx_4 = nullptr
else
    ecx_4 = *(arg3 + 0xc)

int32_t edi
int32_t var_28 = edi
uint32_t ecx_5
int16_t* esi

if (arg2 == 0)
    ecx_5 = *(eax + 4)
    esi = arg_8
else
    esi = ecx_4 + arg2
    ecx_5 = zx.d(*esi)

if (arg5 == 0xffffffff)
    int32_t* edx_2 = *(eax + 0x10)
    arg1 = edx_2
    
    if (edx_2 == 0)
        arg1 = 1
else
    arg1 = arg5

if (ecx_5 s>= 0)
    int32_t i_6
    int16_t x87control
    
    if (ecx_5 s<= 1)
    label_44a63c:
        int32_t k_4 = *(eax + 0x14)
        int16_t* esi_6 = *(eax + 0x18)
        int32_t edx_4 = *eax
        void* eax_18 = nullptr
        int32_t k_5 = k_4
        arg3 = nullptr
        
        if (ecx_5 == 3)
            eax_18 = (4 - esi_6) << 2
            arg3 = eax_18
        
        int32_t* edi_5
        
        if (edx_4 == 1)
            int32_t var_18_5 = 0
            edi_5 = arg_8
            int32_t i = i_6
            float* ecx_14 = var_8
            
            if (arg1 u> 0)
                while (i != 0)
                    arg5 = nullptr
                    
                    if (esi_6 u> 0)
                        while (i != 0)
                            if (k_4 u> 0)
                                int32_t* eax_28 = edi_5
                                int32_t k_3 = k_4
                                int32_t k
                                
                                do
                                    *eax_28 = *(ecx_14 - edi_5 + eax_28)
                                    eax_28 = &eax_28[1]
                                    k = k_3
                                    k_3 -= 1
                                while (k != 1)
                                eax_18 = arg3
                                k_4 = k_5
                            
                            edi_5 = &edi_5[4]
                            ecx_14 = &ecx_14[4]
                            i -= 1
                            arg5 += 1
                            
                            if (arg5 u>= esi_6)
                                break
                    
                    var_18_5 += 1
                    ecx_14 = &ecx_14[eax_18]
                    
                    if (var_18_5 u>= arg1)
                        break
            
            arg_8 = edi_5
        else if (edx_4 == 2)
            int32_t var_18_4 = 0
            edi_5 = arg_8
            int32_t i_1 = i_6
            float* ecx_13 = var_8
            
            if (arg1 u> 0)
                while (i_1 != 0)
                    arg5 = nullptr
                    
                    if (esi_6 u> 0)
                        while (i_1 != 0)
                            if (k_4 u> 0)
                                int32_t* eax_27 = edi_5
                                int32_t k_2 = k_4
                                int32_t k_1
                                
                                do
                                    *eax_27 = *(ecx_13 - edi_5 + eax_27)
                                    eax_27 = &eax_27[1]
                                    k_1 = k_2
                                    k_2 -= 1
                                while (k_1 != 1)
                                k_4 = k_5
                                eax_18 = arg3
                            
                            edi_5 = &edi_5[4]
                            ecx_13 = &ecx_13[4]
                            i_1 -= 1
                            arg5 += 1
                            
                            if (arg5 u>= esi_6)
                                break
                    
                    var_18_4 += 1
                    ecx_13 = &ecx_13[eax_18]
                    
                    if (var_18_4 u>= arg1)
                        break
            
            arg_8 = edi_5
        else if (edx_4 == 3)
            int32_t var_18_3 = 0
            edi_5 = arg_8
            int32_t i_2 = i_6
            float* esi_7 = var_8
            
            if (arg1 u> 0)
                while (i_2 != 0)
                    arg5 = nullptr
                    
                    if (esi_6 u> 0)
                        while (i_2 != 0)
                            int32_t eax_20
                            int16_t x87control_1
                            eax_20, x87control_1 = __ftol(x87control, fconvert.t(*esi_7))
                            *edi_5 = eax_20
                            int32_t eax_21
                            int16_t x87control_2
                            eax_21, x87control_2 = __ftol(x87control_1, fconvert.t(esi_7[1]))
                            edi_5[1] = eax_21
                            int32_t eax_22
                            int16_t x87control_3
                            eax_22, x87control_3 = __ftol(x87control_2, fconvert.t(esi_7[2]))
                            edi_5[2] = eax_22
                            int32_t eax_23
                            eax_23, x87control = __ftol(x87control_3, fconvert.t(esi_7[3]))
                            edi_5[3] = eax_23
                            edi_5 = &edi_5[4]
                            esi_7 = &esi_7[4]
                            i_2 -= 1
                            arg5 += 1
                            
                            if (arg5 u>= esi_6)
                                break
                    
                    var_18_3 += 1
                    esi_7 = &esi_7[arg3]
                    
                    if (var_18_3 u>= arg1)
                        break
            
            arg_8 = edi_5
    else if (ecx_5 == 2)
        void* ecx_6 = *(eax + 0x14)
        int16_t* ecx_7 = *(eax + 0x18)
        int32_t eax_3 = *eax
        int32_t* edx_3
        
        if (eax_3 == 1)
            arg5 = nullptr
            edx_3 = arg_8
            int32_t i_3 = i_6
            
            if (arg1 u> 0)
                do
                    int32_t edi_4 = 0
                    
                    if (i_3 == 0)
                        break
                    
                    if (ecx_6 u> 0)
                        while (i_3 != 0)
                            int32_t eax_16 = 0
                            
                            if (ecx_7 u> 0)
                                int32_t* ecx_12 = edi_4 << 2
                                
                                do
                                    edx_3[eax_16] = *(ecx_12 + var_8)
                                    eax_16 += 1
                                    ecx_12 = &ecx_12[4]
                                while (eax_16 u< ecx_7)
                            
                            edx_3 = &edx_3[4]
                            i_3 -= 1
                            edi_4 += 1
                            
                            if (edi_4 u>= ecx_6)
                                break
                    
                    arg5 += 1
                while (arg5 u< arg1)
            
            arg_8 = edx_3
        else if (eax_3 == 2)
            arg5 = nullptr
            edx_3 = arg_8
            int32_t i_4 = i_6
            
            if (arg1 u> 0)
                do
                    int32_t edi_3 = 0
                    
                    if (i_4 == 0)
                        break
                    
                    if (ecx_6 u> 0)
                        while (i_4 != 0)
                            int32_t eax_14 = 0
                            
                            if (ecx_7 u> 0)
                                int32_t* ecx_10 = edi_3 << 2
                                
                                do
                                    edx_3[eax_14] = *(ecx_10 + var_8)
                                    eax_14 += 1
                                    ecx_10 = &ecx_10[4]
                                while (eax_14 u< ecx_7)
                            
                            edx_3 = &edx_3[4]
                            i_4 -= 1
                            edi_3 += 1
                            
                            if (edi_3 u>= ecx_6)
                                break
                    
                    arg5 += 1
                while (arg5 u< arg1)
            
            arg_8 = edx_3
        else if (eax_3 == 3)
            int32_t var_18_2 = 0
            int32_t i_5 = i_6
            arg5 = arg_8
            float* var_14_1 = var_8
            
            if (arg1 u> 0)
                while (i_5 != 0)
                    int32_t var_10_1 = 0
                    
                    if (ecx_6 u> 0)
                        float* var_c_1 = var_14_1
                        
                        do
                            int32_t esi_5 = 0
                            
                            if (i_5 == 0)
                                break
                            
                            if (ecx_7 u> 0)
                                float* edi_2 = var_c_1
                                
                                do
                                    int32_t eax_10
                                    eax_10, x87control = __ftol(x87control, fconvert.t(*edi_2))
                                    arg5[esi_5] = eax_10
                                    esi_5 += 1
                                    edi_2 = &edi_2[4]
                                while (esi_5 u< ecx_7)
                            
                            arg5 = &arg5[4]
                            var_c_1 = &var_c_1[1]
                            i_5 -= 1
                            var_10_1 += 1
                        while (var_10_1 u< ecx_6)
                    
                    var_14_1 = &var_14_1[0x10]
                    var_18_2 += 1
                    
                    if (var_18_2 u>= arg1)
                        break
            
            arg_8 = arg5
    else
        if (ecx_5 == 3)
            goto label_44a63c
        
        if (ecx_5 == 5)
            int32_t var_18_1 = 0
            void* var_14
            
            if (arg2 != 0)
                var_14 = *(esi + 0xc) + arg2
            
            int32_t ebx_1 = *(eax + 0x14)
            arg5 = nullptr
            
            if (arg1 u> 0)
                while (i_6 != 0)
                    arg3 = nullptr
                    var_1c = &eax[0xc]
                    
                    if (ebx_1 u> 0)
                        int32_t* esi_4 = var_14 + 4
                        
                        while (i_6 != 0)
                            if (arg2 != 0)
                                var_18_1 = *esi_4
                            
                            sub_446e64(&var_1c, &var_8, &arg_8, arg2, var_18_1, &i_6, 0xffffffff)
                            arg3 += 1
                            esi_4 = &esi_4[2]
                            
                            if (arg3 u>= ebx_1)
                                break
                    
                    arg5 += 1
                    
                    if (arg5 u>= arg1)
                        break

uint32_t result = (arg_8 - ecx_2) u>> 4
*arg4 = result
return result
