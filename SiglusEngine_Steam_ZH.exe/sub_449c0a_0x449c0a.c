// 函数: sub_449c0a
// 地址: 0x449c0a
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = arg2
bool cond:0 = esi[2] != 0xffffffff
arg2 = *esi
int32_t* eax_1 = esi[1]
int32_t edi
int32_t var_24 = edi
int32_t* var_c = eax_1
int32_t i_12

if (not(cond:0))
    i_12 = eax_1[4]

if (cond:0 || i_12 u< 1)
    i_12 = 1

int32_t edx = eax_1[1]
int32_t ebx = *eax_1
int32_t i_11 = i_12

if (edx s>= 0)
    int32_t** arg_8
    
    if (edx s<= 1)
        int32_t j_8 = eax_1[5]
        int32_t** i = arg2
        int32_t** esi_7 = arg_8
        
        for (; i u< &i[i_12 * 4]; i = &i[4 - j_8])
            if (j_8 u> 0)
                int32_t j_6 = j_8
                int32_t j
                
                do
                    *i = *esi_7
                    i = &i[1]
                    esi_7 = &esi_7[1]
                    j = j_6
                    j_6 -= 1
                while (j != 1)
        
        return 0
    
    if (edx s<= 3)
        int32_t j_9 = eax_1[5]
        int32_t eax_22 = eax_1[6]
        int32_t j_10 = j_9
        
        if (ebx == 1)
            if (i_12 u> 0)
                int32_t i_10 = i_12
                int32_t i_1
                
                do
                    int32_t var_8_2 = 0
                    
                    if (eax_22 u> 0)
                        do
                            if (j_9 u> 0)
                                int32_t* edx_10 = var_8_2 << 4
                                int32_t esi_6 = var_8_2 << 2
                                int32_t j_5 = j_9
                                int32_t j_1
                                
                                do
                                    int32_t ecx_17
                                    ecx_17.b = *(esi_6 + arg_8) != 0
                                    *(edx_10 + arg2) = ecx_17
                                    edx_10 = &edx_10[1]
                                    esi_6 += eax_22 << 2
                                    j_1 = j_5
                                    j_5 -= 1
                                while (j_1 != 1)
                                j_9 = j_10
                            
                            var_8_2 += 1
                        while (var_8_2 u< eax_22)
                    
                    arg2 = &arg2[0x10]
                    arg_8 = &arg_8[eax_22 * j_9]
                    i_1 = i_10
                    i_10 -= 1
                while (i_1 != 1)
        else if (ebx == 2)
            if (i_12 u> 0)
                int32_t i_9 = i_12
                int32_t i_2
                
                do
                    int32_t var_8_1 = 0
                    
                    if (eax_22 u> 0)
                        do
                            if (j_9 u> 0)
                                int32_t* edx_8 = var_8_1 << 4
                                int32_t* esi_4 = var_8_1 << 2
                                int32_t j_4 = j_9
                                int32_t j_2
                                
                                do
                                    *(edx_8 + arg2) = *(esi_4 + arg_8)
                                    edx_8 = &edx_8[1]
                                    esi_4 = &esi_4[eax_22]
                                    j_2 = j_4
                                    j_4 -= 1
                                while (j_2 != 1)
                                j_9 = j_10
                            
                            var_8_1 += 1
                        while (var_8_1 u< eax_22)
                    
                    arg2 = &arg2[0x10]
                    arg_8 = &arg_8[eax_22 * j_9]
                    i_2 = i_9
                    i_9 -= 1
                while (i_2 != 1)
        else if (ebx == 3 && i_12 u> 0)
            int32_t i_8 = i_12
            int32_t i_3
            
            do
                int32_t var_8 = 0
                
                if (eax_22 u> 0)
                    do
                        if (j_9 u> 0)
                            float* edx_6 = var_8 << 4
                            float* esi_2 = var_8 << 2
                            int32_t j_7 = j_9
                            int32_t j_3
                            
                            do
                                *(edx_6 + arg2) = fconvert.s(fconvert.t(*(esi_2 + arg_8)))
                                edx_6 = &edx_6[1]
                                esi_2 = &esi_2[eax_22]
                                j_3 = j_7
                                j_7 -= 1
                            while (j_3 != 1)
                            j_9 = j_10
                        
                        var_8 += 1
                    while (var_8 u< eax_22)
                
                arg2 = &arg2[0x10]
                arg_8 = &arg_8[eax_22 * j_9]
                i_3 = i_8
                i_8 -= 1
            while (i_3 != 1)
        
        return 0
    
    int32_t result
    
    if (edx == 4)
        if (ebx == 4)
            if (i_12 != 0)
                while (true)
                    result =
                        sub_444948(arg1, *arg_8, *arg2, *(*(*(arg1 + 0xb0) + (esi[5] << 2)) + 0x40))
                    
                    if (result s< 0)
                        return result
                    
                    arg2 = &arg2[1]
                    arg_8 = &arg_8[1]
                    int32_t i_13 = i_11
                    i_11 -= 1
                    
                    if (i_13 == 1)
                        return 0
        else if (ebx s> 4)
            if (ebx s<= 9)
                if (i_12 != 0)
                    int32_t i_4
                    
                    do
                        sub_4448a4(arg1, *arg_8, *arg2, *(*(*(arg1 + 0xb0) + (esi[5] << 2)) + 0x40))
                        arg2 = &arg2[1]
                        arg_8 = &arg_8[1]
                        i_4 = i_11
                        i_11 -= 1
                    while (i_4 != 1)
            else if (ebx == 0xf)
                if (i_12 != 0)
                    int32_t i_5
                    
                    do
                        sub_4447ec(arg1, *arg_8, *arg2, *(*(*(arg1 + 0xb0) + (esi[5] << 2)) + 0x40))
                        arg2 = &arg2[1]
                        arg_8 = &arg_8[1]
                        i_5 = i_11
                        i_11 -= 1
                    while (i_5 != 1)
            else if (ebx == 0x10 && i_12 != 0)
                int32_t i_6
                
                do
                    sub_4447ec(arg1, *arg_8, *arg2, *(*(*(arg1 + 0xb0) + (esi[5] << 2)) + 0x40))
                    arg2 = &arg2[1]
                    arg_8 = &arg_8[1]
                    i_6 = i_11
                    i_11 -= 1
                while (i_6 != 1)
        
        return 0
    
    if (edx == 5)
        int32_t ebx_1 = eax_1[5]
        
        if (i_12 != 0)
            int32_t i_7
            
            do
                int32_t var_10_1 = 0
                var_c = &eax_1[6]
                
                if (ebx_1 u> 0)
                    do
                        int32_t eax_5 = var_c[4]
                        
                        if (eax_5 u< 1)
                            eax_5 = 1
                        
                        result = sub_4459a4(arg1, &var_c, &arg2, &arg_8, eax_5, esi)
                        
                        if (result s< 0)
                            return result
                        
                        var_10_1 += 1
                    while (var_10_1 u< ebx_1)
                
                i_7 = i_11
                i_11 -= 1
            while (i_7 != 1)
        
        return 0

return 0x80004005
