// 函数: sub_44aea9
// 地址: 0x44aea9
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* eax = arg1[1]
float* var_8 = *arg1
double* arg_8
double* ecx_2 = arg_8
int32_t edi
int32_t var_24 = edi
void* var_c = eax
double* var_18 = ecx_2
void* const edx_1

if (arg2 == 0)
    edx_1 = nullptr
else
    edx_1 = *(arg3 + 0xc)

void* i_6
uint32_t edx_2
int16_t* i_7

if (arg2 == 0)
    edx_2 = *(eax + 4)
    i_7 = i_6
else
    i_7 = edx_1 + arg2
    edx_2 = zx.d(*i_7)

if (arg5 == 0xffffffff)
    int32_t* edi_2 = *(eax + 0x10)
    arg1 = edi_2
    
    if (edi_2 == 0)
        arg1 = 1
else
    arg1 = arg5

if (edx_2 s>= 0)
    double* edx_3
    
    if (edx_2 s<= 1)
    label_44b08f:
        void* edi_7 = *(eax + 0x18)
        int32_t esi_7 = *eax
        int32_t ebx_3 = 0
        arg2 = 0
        
        if (edx_2 == 3)
            ebx_3 = (4 - edi_7) << 2
            arg2 = ebx_3
        
        if (esi_7 == 1)
            arg3 = nullptr
            int32_t* eax_14 = var_8
            edx_3 = ecx_2
            void* i = i_6
            
            if (arg1 u> 0)
                while (i != 0)
                    int32_t esi_13 = 0
                    
                    if (edi_7 u> 0)
                        while (i != 0)
                            long double x87_r7_9 = float.t(*eax_14)
                            eax_14 = &eax_14[4]
                            *edx_3 = fconvert.d(x87_r7_9)
                            edx_3 = &edx_3[1]
                            i -= 1
                            esi_13 += 1
                            
                            if (esi_13 u>= edi_7)
                                break
                    
                    arg3 += 1
                    eax_14 = &eax_14[ebx_3]
                    
                    if (arg3 u>= arg1)
                        break
                    
                    ebx_3 = arg2
            
            ecx_2 = edx_3
        else if (esi_7 == 2)
            arg3 = nullptr
            float* eax_13 = var_8
            edx_3 = ecx_2
            void* i_1 = i_6
            
            if (arg1 u> 0)
                while (i_1 != 0)
                    int32_t esi_11 = 0
                    
                    if (edi_7 u> 0)
                        while (i_1 != 0)
                            long double x87_r7_8 = float.t(*eax_13)
                            eax_13 = &eax_13[4]
                            *edx_3 = fconvert.d(x87_r7_8)
                            edx_3 = &edx_3[1]
                            i_1 -= 1
                            esi_11 += 1
                            
                            if (esi_11 u>= edi_7)
                                break
                    
                    arg3 += 1
                    eax_13 = &eax_13[ebx_3]
                    
                    if (arg3 u>= arg1)
                        break
                    
                    ebx_3 = arg2
            
            ecx_2 = edx_3
        else if (esi_7 == 3)
            void* i_2 = i_6
            float* eax_12 = var_8
            int32_t ebx_5 = 0
            
            if (arg1 u> 0)
                while (i_2 != 0)
                    int32_t edi_8 = 0
                    
                    if (edi_7 u> 0)
                        while (i_2 != 0)
                            *ecx_2 = fconvert.d(fconvert.t(*eax_12))
                            eax_12 = &eax_12[4]
                            i_2 -= 1
                            ecx_2[1] = fconvert.d(fconvert.t(eax_12[-3]))
                            edi_8 += 1
                            ecx_2[2] = fconvert.d(fconvert.t(eax_12[-2]))
                            ecx_2[3] = fconvert.d(fconvert.t(eax_12[-1]))
                            ecx_2 = &ecx_2[1]
                            
                            if (edi_8 u>= edi_7)
                                break
                    
                    ebx_5 += 1
                    eax_12 = &eax_12[arg2]
                    
                    if (ebx_5 u>= arg1)
                        break
    else if (edx_2 == 2)
        int32_t ebx_2 = *(eax + 0x14)
        int32_t eax_5 = *eax
        
        if (eax_5 == 1)
            void* i_3 = i_6
            int32_t esi_6 = 0
            
            if (arg1 u> 0)
                while (i_3 != 0)
                    int32_t eax_11 = 0
                    
                    if (ebx_2 u> 0)
                        while (i_3 != 0)
                            *ecx_2 = fconvert.d(float.t(var_8[eax_11]))
                            ecx_2 = &ecx_2[1]
                            i_3 -= 1
                            eax_11 += 1
                            
                            if (eax_11 u>= ebx_2)
                                break
                    
                    esi_6 += 1
                    
                    if (esi_6 u>= arg1)
                        break
        else if (eax_5 == 2)
            void* i_4 = i_6
            int32_t esi_5 = 0
            
            if (arg1 u> 0)
                while (i_4 != 0)
                    int32_t eax_10 = 0
                    
                    if (ebx_2 u> 0)
                        while (i_4 != 0)
                            *ecx_2 = fconvert.d(float.t(var_8[eax_10]))
                            ecx_2 = &ecx_2[1]
                            i_4 -= 1
                            eax_10 += 1
                            
                            if (eax_10 u>= ebx_2)
                                break
                    
                    esi_5 += 1
                    
                    if (esi_5 u>= arg1)
                        break
        else if (eax_5 == 3)
            float* esi_4 = var_8
            int32_t edi_4 = 0
            edx_3 = ecx_2
            void* i_5 = i_6
            
            if (arg1 u> 0)
                while (i_5 != 0)
                    int32_t eax_9 = 0
                    
                    if (ebx_2 u> 0)
                        while (i_5 != 0)
                            *edx_3 = fconvert.d(fconvert.t(esi_4[eax_9]))
                            edx_3 = &edx_3[1]
                            i_5 -= 1
                            eax_9 += 1
                            
                            if (eax_9 u>= ebx_2)
                                break
                    
                    esi_4 = &esi_4[0x10]
                    edi_4 += 1
                    
                    if (edi_4 u>= arg1)
                        break
            
            ecx_2 = edx_3
    else
        if (edx_2 == 3)
            goto label_44b08f
        
        if (edx_2 == 5)
            arg5 = nullptr
            void* var_14
            
            if (arg2 != 0)
                var_14 = *(i_7 + 0xc) + arg2
            
            int32_t edi_3 = *(eax + 0x14)
            arg3 = nullptr
            
            if (arg1 u> 0)
                while (i_6 != 0)
                    int32_t ebx_1 = 0
                    var_c = eax + 0x18
                    
                    if (edi_3 u> 0)
                        int32_t* esi_3 = var_14 + 4
                        
                        while (i_6 != 0)
                            if (arg2 != 0)
                                arg5 = *esi_3
                            
                            sub_447a8c(&var_c, &var_8, &arg_8, arg2, arg5, &i_6, 0xffffffff)
                            ecx_2 = arg_8
                            ebx_1 += 1
                            esi_3 = &esi_3[2]
                            
                            if (ebx_1 u>= edi_3)
                                break
                    
                    arg3 += 1
                    
                    if (arg3 u>= arg1)
                        break

*arg4 = (ecx_2 - var_18) u>> 3
return arg4
