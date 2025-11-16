// 函数: sub_633820
// 地址: 0x633820
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax_3
int32_t edx
edx:eax_3 = sx.q((arg4 - arg2) s>> 3)
int32_t* i = &arg2[((eax_3 - edx) s>> 1) * 2]
sub_633df0(arg4 - 8, i, arg2, arg4 - 8, arg5)
int32_t* eax_7 = arg2
int32_t* edi_1 = &i[2]
int32_t* var_c = edi_1

for (; eax_7 u< i; i = &i[-2])
    int32_t ecx_1 = i[-2]
    int32_t edx_2 = *i
    
    if (ecx_1 s< edx_2)
        break
    
    if (ecx_1 s<= edx_2)
        if (i[-1] s< i[1])
            break
        
        eax_7 = arg2
    
    if (edx_2 s< ecx_1)
        break
    
    if (edx_2 s<= ecx_1)
        if (i[1] s< i[-1])
            break
        
        eax_7 = arg2

if (edi_1 u< arg4)
    int32_t edx_3 = *i
    
    do
        int32_t ecx_2 = *edi_1
        
        if (ecx_2 s< edx_3)
            break
        
        if (ecx_2 s<= edx_3 && edi_1[1] s< i[1])
            break
        
        if (edx_3 s< ecx_2)
            break
        
        if (edx_3 s<= ecx_2 && i[1] s< edi_1[1])
            break
        
        edi_1 = &edi_1[2]
    while (edi_1 u< arg4)
    
    var_c = edi_1

int32_t* i_1 = i
int32_t* ebx_1 = edi_1
int32_t* i_3 = i_1

while (true)
    int32_t* var_10_1 = ebx_1
    
    while (true)
        if (ebx_1 u< arg4)
            void* var_10_2 = &edi_1[-2]
            void* eax_13 = arg4
            
            do
                int32_t ecx_3 = *i
                int32_t edx_4 = *ebx_1
                
                if (ecx_3 s>= edx_4)
                    if (ecx_3 s> edx_4 || i[1] s>= ebx_1[1])
                        if (edx_4 s< ecx_3)
                            break
                        
                        if (edx_4 s<= ecx_3 && ebx_1[1] s< i[1])
                            break
                        
                        int32_t* eax_16 = edi_1
                        edi_1 = &edi_1[2]
                        void* edx_6 = var_10_2 + 8
                        var_c = edi_1
                        var_10_2 = edx_6
                        
                        if (eax_16 != ebx_1)
                            int32_t ecx_4 = *edx_6
                            int32_t edx_7 = *(edx_6 + 4)
                            *var_10_2 = *ebx_1
                            *(var_10_2 + 4) = ebx_1[1]
                            edi_1 = var_c
                            *ebx_1 = ecx_4
                            ebx_1[1] = edx_7
                    
                    eax_13 = arg4
                
                ebx_1 = &ebx_1[2]
            while (ebx_1 u< eax_13)
            
            i_1 = i_3
            var_10_1 = ebx_1
        
        bool cond:2_1 = i_1 != arg2
        
        if (i_1 u> arg2)
            void* edi_3 = &i_1[-2]
            
            do
                int32_t ecx_5 = *edi_3
                int32_t eax_20 = *i
                
                if (ecx_5 s>= eax_20)
                    if (ecx_5 s> eax_20)
                        goto label_633964
                    
                    if (*(edi_3 + 4) s>= i[1])
                        eax_20 = *i
                    label_633964:
                        
                        if (eax_20 s< ecx_5)
                            break
                        
                        if (eax_20 s<= ecx_5 && i[1] s< *(edi_3 + 4))
                            break
                        
                        i -= 8
                        
                        if (i != edi_3)
                            int32_t ecx_6 = *i
                            int32_t edx_8 = i[1]
                            *i = *edi_3
                            i[1] = *(edi_3 + 4)
                            *(edi_3 + 4) = edx_8
                            i_1 = i_3
                            *edi_3 = ecx_6
                
                i_1 -= 8
                edi_3 -= 8
                i_3 = i_1
            while (arg2 u< i_1)
            
            cond:2_1 = i_1 != arg2
            ebx_1 = var_10_1
            edi_1 = var_c
        
        if (cond:2_1)
            i_3 = i_1 - 8
            
            if (ebx_1 != arg4)
                int32_t ecx_11 = *ebx_1
                int32_t edx_14 = ebx_1[1]
                *ebx_1 = *i_3
                ebx_1[1] = i_3[1]
                ebx_1 = &ebx_1[2]
                i_3[1] = edx_14
                i_1 = i_3
                *i_3 = ecx_11
                break
            
            i -= 8
            
            if (i_1 - 8 != i)
                int32_t ecx_9 = *(i_1 - 8)
                int32_t edx_12 = *(i_1 - 4)
                *i_3 = *i
                i_3[1] = i[1]
                ebx_1 = var_10_1
                *i = ecx_9
                i[1] = edx_12
            
            int32_t eax_32 = edi_1[-2]
            edi_1 -= 8
            int32_t ecx_10 = *i
            int32_t edx_13 = i[1]
            *i = eax_32
            i[1] = edi_1[1]
            edi_1[1] = edx_13
            i_1 = i_3
            var_c = edi_1
            *edi_1 = ecx_10
        else
            if (ebx_1 == arg4)
                arg3[1] = edi_1
                *arg3 = i
                return arg3
            
            if (edi_1 != ebx_1)
                int32_t ecx_7 = *i
                int32_t edx_9 = i[1]
                *i = *edi_1
                i[1] = edi_1[1]
                *edi_1 = ecx_7
                edi_1[1] = edx_9
            
            var_c = &edi_1[2]
            int32_t* i_2 = i
            i = &i[2]
            var_10_1 = &var_10_1[2]
            int32_t ecx_8 = *i_2
            int32_t edx_10 = i_2[1]
            *i_2 = *ebx_1
            i_2[1] = ebx_1[1]
            edi_1 = var_c
            ebx_1[1] = edx_10
            i_1 = i_3
            *ebx_1 = ecx_8
            ebx_1 = var_10_1
