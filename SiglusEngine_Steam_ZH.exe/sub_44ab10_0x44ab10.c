// 函数: sub_44ab10
// 地址: 0x44ab10
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* eax = arg1[1]
double* edx = arg2
int32_t edi
int32_t var_24 = edi
void* var_10 = eax
int32_t* var_8 = *arg1
double* var_18 = edx
void* const ecx_3

if (arg3 == 0)
    ecx_3 = nullptr
else
    ecx_3 = *(arg4 + 0xc)

int16_t* i_4
uint32_t ecx_4
int16_t* i_5

if (arg3 == 0)
    ecx_4 = eax[1]
    i_5 = i_4
else
    i_5 = ecx_3 + arg3
    ecx_4 = zx.d(*i_5)

if (arg6 == 0xffffffff)
    int32_t* edi_2 = eax[4]
    arg1 = edi_2
    
    if (edi_2 == 0)
        arg1 = 1
else
    arg1 = arg6

if (ecx_4 s>= 0)
    if (ecx_4 s<= 1)
    label_44ad5f:
        int16_t* edi_7 = eax[5]
        int32_t ebx_5 = eax[6]
        int32_t esi_5 = *eax
        int32_t var_c_3 = ebx_5
        arg4 = nullptr
        
        if (ecx_4 == 3)
            arg4 = (4 - ebx_5) << 2
        
        double* edi_10
        
        if (esi_5 == 1)
            int16_t* i = i_4
            int32_t* ecx_16 = var_8
            edi_10 = edx
            arg6 = nullptr
            
            if (arg1 u> 0)
                while (i != 0)
                    int32_t eax_18 = 0
                    
                    if (ebx_5 u> 0)
                        while (i != 0)
                            int32_t edx_2 = 0
                            
                            if (edi_7 u> 0)
                                do
                                    edi_10[edx_2] = fconvert.d(float.t(ecx_16[edx_2]))
                                    edx_2 += 1
                                while (edx_2 u< edi_7)
                            
                            ebx_5 = var_c_3
                            edi_10 = &edi_10[4]
                            ecx_16 = &ecx_16[4]
                            i -= 1
                            eax_18 += 1
                            
                            if (eax_18 u>= ebx_5)
                                break
                    
                    arg6 += 1
                    ecx_16 = &ecx_16[arg4]
                    
                    if (arg6 u>= arg1)
                        break
            
            edx = edi_10
        else if (esi_5 == 2)
            int16_t* i_1 = i_4
            int32_t* ecx_15 = var_8
            edi_10 = edx
            arg6 = nullptr
            
            if (arg1 u> 0)
                while (i_1 != 0)
                    int32_t eax_15 = 0
                    
                    if (ebx_5 u> 0)
                        while (i_1 != 0)
                            int32_t edx_1 = 0
                            
                            if (edi_7 u> 0)
                                do
                                    edi_10[edx_1] = fconvert.d(float.t(ecx_15[edx_1]))
                                    edx_1 += 1
                                while (edx_1 u< edi_7)
                            
                            ebx_5 = var_c_3
                            edi_10 = &edi_10[4]
                            ecx_15 = &ecx_15[4]
                            i_1 -= 1
                            eax_15 += 1
                            
                            if (eax_15 u>= ebx_5)
                                break
                    
                    arg6 += 1
                    ecx_15 = &ecx_15[arg4]
                    
                    if (arg6 u>= arg1)
                        break
            
            edx = edi_10
        else if (esi_5 == 3)
            int16_t* i_2 = i_4
            float* ecx_14 = var_8
            int32_t eax_14 = 0
            
            if (arg1 u> 0)
                while (i_2 != 0)
                    int32_t edi_8 = 0
                    
                    if (ebx_5 u> 0)
                        while (i_2 != 0)
                            long double x87_r7_4 = fconvert.t(*ecx_14)
                            ecx_14 = &ecx_14[4]
                            *edx = fconvert.d(x87_r7_4)
                            edx = &edx[4]
                            i_2 -= 1
                            edx[-3] = fconvert.d(fconvert.t(ecx_14[-3]))
                            edi_8 += 1
                            edx[-2] = fconvert.d(fconvert.t(ecx_14[-2]))
                            edx[-1] = fconvert.d(fconvert.t(ecx_14[-1]))
                            
                            if (edi_8 u>= ebx_5)
                                break
                    
                    eax_14 += 1
                    ecx_14 = &ecx_14[arg4]
                    
                    if (eax_14 u>= arg1)
                        break
    else if (ecx_4 == 2)
        void* ecx_5 = eax[5]
        int16_t* ecx_6 = eax[6]
        int32_t eax_3 = *eax
        
        if (eax_3 == 1)
            arg6 = nullptr
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
                                    edx[eax_12] = fconvert.d(x87_r7_3)
                                    eax_12 += 1
                                while (eax_12 u< ecx_6)
                            
                            edx = &edx[4]
                            i_7 -= 1
                            edi_6 += 1
                        while (edi_6 u< ecx_5)
                    
                    arg6 += 1
                while (arg6 u< arg1)
        else if (eax_3 == 2)
            arg6 = nullptr
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
                                    edx[eax_10] = fconvert.d(x87_r7_2)
                                    eax_10 += 1
                                while (eax_10 u< ecx_6)
                            
                            edx = &edx[4]
                            i_6 -= 1
                            edi_5 += 1
                        while (edi_5 u< ecx_5)
                    
                    arg6 += 1
                while (arg6 u< arg1)
        else if (eax_3 == 3)
            int32_t var_c_2 = 0
            double* esi_4 = edx
            int16_t* i_3 = i_4
            arg6 = var_8
            
            if (arg1 u> 0)
                do
                    int32_t edi_4 = 0
                    
                    if (i_3 == 0)
                        break
                    
                    if (ecx_5 u> 0)
                        int32_t* ebx_2 = arg6
                        
                        while (i_3 != 0)
                            int32_t eax_8 = 0
                            
                            if (ecx_6 u> 0)
                                int32_t* ecx_7 = ebx_2
                                
                                do
                                    long double x87_r7_1 = fconvert.t(*ecx_7)
                                    ecx_7 = &ecx_7[4]
                                    esi_4[eax_8] = fconvert.d(x87_r7_1)
                                    eax_8 += 1
                                while (eax_8 u< ecx_6)
                            
                            esi_4 = &esi_4[4]
                            i_3 -= 1
                            edi_4 += 1
                            ebx_2 = &ebx_2[1]
                            
                            if (edi_4 u>= ecx_5)
                                break
                    
                    arg6 = &arg6[0x10]
                    var_c_2 += 1
                while (var_c_2 u< arg1)
            
            edx = esi_4
    else
        if (ecx_4 == 3)
            goto label_44ad5f
        
        if (ecx_4 == 5)
            void* var_c_1 = nullptr
            void* var_14
            
            if (arg3 != 0)
                var_14 = *(i_5 + 0xc) + arg3
            
            arg6 = nullptr
            int32_t edi_3 = eax[5]
            
            if (arg1 u> 0)
                while (i_4 != 0)
                    arg4 = nullptr
                    var_10 = &eax[6]
                    
                    if (edi_3 u> 0)
                        void** esi_3 = var_14 + 4
                        
                        while (i_4 != 0)
                            if (arg3 != 0)
                                var_c_1 = *esi_3
                            
                            sub_447682(&var_10, &var_8, &arg2, arg3, var_c_1, &i_4, 0xffffffff)
                            arg4 += 1
                            edx = arg2
                            esi_3 = &esi_3[2]
                            
                            if (arg4 u>= edi_3)
                                break
                    
                    arg6 += 1
                    
                    if (arg6 u>= arg1)
                        break

*arg5 = (edx - var_18) u>> 5
return arg5
