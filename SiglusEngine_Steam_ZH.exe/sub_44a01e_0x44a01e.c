// 函数: sub_44a01e
// 地址: 0x44a01e
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* ecx = arg1
void* eax = ecx[1]
int32_t* edx = arg2
int32_t edi
int32_t var_24 = edi
void* var_14 = eax
int32_t* var_8 = *ecx
int32_t* var_18 = edx
void* const ecx_3

if (arg3 == 0)
    ecx_3 = nullptr
else
    ecx_3 = *(arg4 + 0xc)

int16_t* i_4
uint32_t ecx_4
int16_t* i_5

if (arg3 == 0)
    ecx_4 = *(eax + 4)
    i_5 = i_4
else
    i_5 = ecx_3 + arg3
    ecx_4 = zx.d(*i_5)

if (arg6 == 0xffffffff)
    int32_t edi_2 = *(eax + 0x10)
    arg1 = edi_2
    
    if (edi_2 == 0)
        arg1 = 1
else
    arg1 = arg6

if (ecx_4 s>= 0)
    if (ecx_4 s<= 1)
    label_44a26d:
        void* k_4 = *(eax + 0x14)
        int32_t esi_5 = *eax
        int16_t* eax_14 = *(eax + 0x18)
        int32_t ebx_5 = 0
        arg6 = 0
        
        if (ecx_4 == 3)
            ebx_5 = (4 - eax_14) << 2
            arg6 = ebx_5
        
        int32_t* eax_16
        
        if (esi_5 == 1)
            int32_t var_c_3 = 0
            int16_t* i = i_4
            eax_16 = edx
            int32_t* edx_2 = var_8
            
            if (arg1 u> 0)
                while (i != 0)
                    int32_t var_10_3 = 0
                    
                    if (eax_14 u> 0)
                        while (i != 0)
                            if (k_4 u> 0)
                                void* k_3 = k_4
                                float* ecx_16 = eax_16
                                void* k
                                
                                do
                                    *ecx_16 = fconvert.s(float.t(*(edx_2 - eax_16 + ecx_16)))
                                    ecx_16 = &ecx_16[1]
                                    k = k_3
                                    k_3 -= 1
                                while (k != 1)
                                ebx_5 = arg6
                            
                            eax_16 = &eax_16[4]
                            edx_2 = &edx_2[4]
                            i -= 1
                            var_10_3 += 1
                            
                            if (var_10_3 u>= eax_14)
                                break
                    
                    var_c_3 += 1
                    edx_2 = &edx_2[ebx_5]
                    
                    if (var_c_3 u>= arg1)
                        break
            
            edx = eax_16
        else if (esi_5 == 2)
            int32_t var_10_2 = 0
            int16_t* i_1 = i_4
            eax_16 = edx
            int32_t* edx_1 = var_8
            
            if (arg1 u> 0)
                while (i_1 != 0)
                    int32_t var_c_2 = 0
                    
                    if (eax_14 u> 0)
                        while (i_1 != 0)
                            if (k_4 u> 0)
                                void* k_2 = k_4
                                float* ecx_13 = eax_16
                                void* k_1
                                
                                do
                                    *ecx_13 = fconvert.s(float.t(*(edx_1 - eax_16 + ecx_13)))
                                    ecx_13 = &ecx_13[1]
                                    k_1 = k_2
                                    k_2 -= 1
                                while (k_1 != 1)
                                ebx_5 = arg6
                            
                            eax_16 = &eax_16[4]
                            edx_1 = &edx_1[4]
                            i_1 -= 1
                            var_c_2 += 1
                            
                            if (var_c_2 u>= eax_14)
                                break
                    
                    var_10_2 += 1
                    edx_1 = &edx_1[ebx_5]
                    
                    if (var_10_2 u>= arg1)
                        break
            
            edx = eax_16
        else if (esi_5 == 3)
            int16_t* i_2 = i_4
            int32_t* ecx_12 = var_8
            int32_t eax_15 = 0
            
            if (arg1 u> 0)
                while (i_2 != 0)
                    int32_t edi_7 = 0
                    
                    if (eax_14 u> 0)
                        while (i_2 != 0)
                            *edx = *ecx_12
                            edx[1] = ecx_12[1]
                            edx[2] = ecx_12[2]
                            int32_t ebx_10 = ecx_12[3]
                            edx = &edx[4]
                            ecx_12 = &ecx_12[4]
                            edx[-1] = ebx_10
                            i_2 -= 1
                            edi_7 += 1
                            
                            if (edi_7 u>= eax_14)
                                break
                    
                    eax_15 += 1
                    ecx_12 = &ecx_12[arg6]
                    
                    if (eax_15 u>= arg1)
                        break
    else if (ecx_4 == 2)
        void* ecx_5 = *(eax + 0x14)
        int16_t* ecx_6 = *(eax + 0x18)
        int32_t eax_3 = *eax
        
        if (eax_3 == 1)
            arg6 = 0
            int16_t* i_7 = i_4
            
            if (arg1 u> 0)
                do
                    int32_t edi_6 = 0
                    
                    if (i_7 == 0)
                        break
                    
                    if (ecx_5 u> 0)
                        do
                            int32_t eax_12 = 0
                            
                            if (i_7 == 0)
                                break
                            
                            if (ecx_6 u> 0)
                                int32_t* ecx_11 = edi_6 << 2
                                
                                do
                                    long double x87_r7_3 = float.t(*(ecx_11 + var_8))
                                    ecx_11 = &ecx_11[4]
                                    edx[eax_12] = fconvert.s(x87_r7_3)
                                    eax_12 += 1
                                while (eax_12 u< ecx_6)
                            
                            edx = &edx[4]
                            i_7 -= 1
                            edi_6 += 1
                        while (edi_6 u< ecx_5)
                    
                    arg6 += 1
                while (arg6 u< arg1)
        else if (eax_3 == 2)
            arg6 = 0
            int16_t* i_6 = i_4
            
            if (arg1 u> 0)
                do
                    int32_t edi_5 = 0
                    
                    if (i_6 == 0)
                        break
                    
                    if (ecx_5 u> 0)
                        do
                            int32_t eax_10 = 0
                            
                            if (i_6 == 0)
                                break
                            
                            if (ecx_6 u> 0)
                                int32_t* ecx_9 = edi_5 << 2
                                
                                do
                                    long double x87_r7_2 = float.t(*(ecx_9 + var_8))
                                    ecx_9 = &ecx_9[4]
                                    edx[eax_10] = fconvert.s(x87_r7_2)
                                    eax_10 += 1
                                while (eax_10 u< ecx_6)
                            
                            edx = &edx[4]
                            i_6 -= 1
                            edi_5 += 1
                        while (edi_5 u< ecx_5)
                    
                    arg6 += 1
                while (arg6 u< arg1)
        else if (eax_3 == 3)
            int32_t var_c_1 = 0
            int32_t* esi_4 = edx
            int16_t* i_3 = i_4
            arg6 = var_8
            
            if (arg1 u> 0)
                do
                    int32_t edi_4 = 0
                    
                    if (i_3 == 0)
                        break
                    
                    if (ecx_5 u> 0)
                        int32_t ebx_2 = arg6
                        
                        while (i_3 != 0)
                            int32_t eax_8 = 0
                            
                            if (ecx_6 u> 0)
                                int32_t ecx_7 = ebx_2
                                
                                do
                                    long double x87_r7_1 = fconvert.t(*ecx_7)
                                    ecx_7 += 0x10
                                    esi_4[eax_8] = fconvert.s(x87_r7_1)
                                    eax_8 += 1
                                while (eax_8 u< ecx_6)
                            
                            esi_4 = &esi_4[4]
                            i_3 -= 1
                            edi_4 += 1
                            ebx_2 += 4
                            
                            if (edi_4 u>= ecx_5)
                                break
                    
                    arg6 += 0x40
                    var_c_1 += 1
                while (var_c_1 u< arg1)
            
            edx = esi_4
    else
        if (ecx_4 == 3)
            goto label_44a26d
        
        if (ecx_4 == 5)
            int32_t var_10_1 = 0
            void* var_c
            
            if (arg3 != 0)
                var_c = *(i_5 + 0xc) + arg3
            
            arg6 = 0
            int32_t edi_3 = *(eax + 0x14)
            
            if (arg1 u> 0)
                while (i_4 != 0)
                    arg4 = nullptr
                    var_14 = eax + 0x18
                    
                    if (edi_3 u> 0)
                        int32_t* esi_3 = var_c + 4
                        
                        while (i_4 != 0)
                            if (arg3 != 0)
                                var_10_1 = *esi_3
                            
                            sub_446a3d(&var_14, &var_8, &arg2, arg3, var_10_1, &i_4, 0xffffffff)
                            arg4 += 1
                            edx = arg2
                            esi_3 = &esi_3[2]
                            
                            if (arg4 u>= edi_3)
                                break
                    
                    arg6 += 1
                    
                    if (arg6 u>= arg1)
                        break

*arg5 = (edx - var_18) u>> 4
return arg5
