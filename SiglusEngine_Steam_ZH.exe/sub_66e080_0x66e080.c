// 函数: sub_66e080
// 地址: 0x66e080
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax_3
int32_t edx
edx:eax_3 = sx.q((arg4 - arg2) s>> 1)
int32_t var_28 = arg5
int16_t* i = &arg2[(eax_3 - edx) s>> 1]
sub_66ec40(arg4 - 2, i, arg2, arg4 - 2)
int16_t* edx_2 = &i[1]
void* var_8 = edx_2

for (; arg2 u< i; i = &i[-1])
    int16_t ecx_2 = i[-1]
    int16_t edi_1 = *i
    
    if (ecx_2 u< edi_1)
        break
    
    if (edi_1 u< ecx_2)
        break

int32_t eax_7 = arg4

if (edx_2 u< eax_7)
    int16_t edi_2 = *i
    
    do
        int16_t ecx_3 = *edx_2
        
        if (ecx_3 u< edi_2)
            break
        
        if (edi_2 u< ecx_3)
            break
        
        edx_2 = &edx_2[1]
    while (edx_2 u< eax_7)
    
    var_8 = edx_2

int16_t* i_2 = i
int16_t* ebx_1 = edx_2
int16_t* i_3 = i_2

while (true)
    int16_t* var_10_1 = ebx_1
    
    while (true)
        if (ebx_1 u< eax_7)
            do
                int16_t eax_8 = *i
                int16_t ecx_4 = *ebx_1
                
                if (eax_8 u>= ecx_4)
                    if (ecx_4 u< eax_8)
                        break
                    
                    int16_t* eax_9 = edx_2
                    edx_2 = &edx_2[1]
                    
                    if (eax_9 != ebx_1)
                        int16_t eax_10 = edx_2[-1]
                        edx_2[-1] = ecx_4
                        *ebx_1 = eax_10
                
                ebx_1 = &ebx_1[1]
            while (ebx_1 u< arg4)
            
            i_2 = i_3
            var_8 = edx_2
            var_10_1 = ebx_1
        
        bool cond:0_1 = i_2 != arg2
        
        if (i_2 u> arg2)
            void* ecx_5 = &i_2[-1]
            
            do
                int16_t eax_11 = *ecx_5
                int16_t edx_3 = *i
                
                if (eax_11 u>= edx_3)
                    if (edx_3 u< eax_11)
                        break
                    
                    i -= 2
                    
                    if (i != ecx_5)
                        int16_t eax_12 = *i
                        *i = eax_11
                        *ecx_5 = eax_12
                
                i_2 -= 2
                ecx_5 -= 2
            while (arg2 u< i_2)
            
            cond:0_1 = i_2 != arg2
            ebx_1 = var_10_1
            edx_2 = var_8
            i_3 = i_2
        
        int16_t* eax_13
        
        if (not(cond:0_1))
            if (ebx_1 == arg4)
                *arg3 = i
                arg3[1] = edx_2
                return arg3
            
            if (edx_2 != ebx_1)
                eax_13.w = *edx_2
                int16_t ecx_6 = *i
                *i = eax_13.w
                *edx_2 = ecx_6
            
            int16_t* edi_4 = ebx_1
            var_8 = &edx_2[1]
            int16_t* i_1 = i
            i = &i[1]
            ebx_1 = &ebx_1[1]
            eax_13.w = *edi_4
            int16_t ecx_7 = *i_1
            *i_1 = eax_13.w
            edx_2 = var_8
            eax_7 = arg4
            *edi_4 = ecx_7
            i_2 = i_3
            break
        
        i_2 -= 2
        i_3 = i_2
        
        if (ebx_1 != arg4)
            eax_13.w = *i_2
            int16_t ecx_10 = *ebx_1
            *ebx_1 = eax_13.w
            ebx_1 = &ebx_1[1]
            eax_7 = arg4
            *i_2 = ecx_10
            break
        
        i -= 2
        
        if (i_2 != i)
            eax_13.w = *i
            int16_t ecx_8 = *i_2
            *i_2 = eax_13.w
            *i = ecx_8
        
        eax_13.w = edx_2[-1]
        edx_2 -= 2
        int16_t ecx_9 = *i
        *i = eax_13.w
        eax_7 = arg4
        var_8 = edx_2
        *edx_2 = ecx_9
