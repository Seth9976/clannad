// 函数: sub_45bf9c
// 地址: 0x45bf9c
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = arg4
int32_t edx = arg5
int32_t edi
int32_t var_24 = edi

if (eax u< edx)
    char* ecx_2 = *(arg1 + 0x508) + (edx << 4) - 4
    
    while ((*ecx_2 & 3) != 0)
        edx -= 1
        ecx_2 -= 0x10
        arg3 -= 1
        arg5 = edx
        
        if (eax u>= edx)
            break

int32_t ecx_3 = arg3

if (arg6 == 0)
    ecx_3 = arg2

int32_t var_8 = ecx_3
int32_t var_c = eax

if (eax u< edx)
    do
        int32_t eax_1 = *(arg1 + 0x508)
        int32_t edi_3 = *((var_c << 4) + eax_1 + 0xc) & 8
        int32_t var_14_1 = var_c
        
        if (var_c u>= edx)
            eax = arg4
            break
        
        int32_t i
        i.b = edi_3 == 0
        int32_t* var_10_1 = (var_c << 4) + eax_1 + 0xc
        
        while ((not.d(*var_10_1 u>> 3) & 1) == i)
            var_c += 1
            var_10_1 = &var_10_1[4]
            
            if (var_c u>= edx)
                break
        
        if (var_14_1 == var_c)
            eax = arg4
        else
            int32_t j_1 = *((var_14_1 << 4) + eax_1 + 8)
            int32_t ecx_13 = var_c << 4
            int32_t eax_2 = *(ecx_13 + eax_1 + 8)
            int32_t var_10_2 = eax_2
            
            if (j_1 u< arg2)
                j_1 = arg2
            
            if (eax_2 u> arg3)
                eax_2 = arg3
                var_10_2 = eax_2
            
            if (arg6 != 0)
                var_8 += j_1 - eax_2
            
            if (edi_3 == 0)
                int32_t j_2 = j_1
                
                if (j_1 u< var_10_2)
                    do
                        int32_t edi_4 = var_8
                        var_8 += 1
                        *(*(arg1 + 0x528) + (edi_4 << 2)) = j_2
                        j_2 += 1
                    while (j_2 u< var_10_2)
            else if (var_c u> var_14_1)
                int32_t var_18_1 = ecx_13
                int32_t i_4 = var_c - var_14_1
                int32_t i_1
                
                do
                    var_18_1 -= 0x10
                    void* ecx_16 = var_18_1 + *(arg1 + 0x508)
                    int32_t j = *(ecx_16 + 8)
                    int32_t ecx_17 = *(ecx_16 + 0x18)
                    
                    if (j u< j_1)
                        j = j_1
                    
                    if (ecx_17 u> var_10_2)
                        ecx_17 = var_10_2
                    
                    for (; j u< ecx_17; j += 1)
                        int32_t ebx_4 = var_8
                        var_8 += 1
                        *(*(arg1 + 0x528) + (ebx_4 << 2)) = j
                    
                    i_1 = i_4
                    i_4 -= 1
                while (i_1 != 1)
            
            eax = arg4
            
            if (arg6 != 0)
                var_8 += j_1 - var_10_2
            
            edx = arg5
    while (var_c u< edx)

int32_t edi_5 = 0

if (arg6 != 0)
    if (eax u< edx)
        if ((*((eax << 4) + *(arg1 + 0x508) + 0xc) & 8) == 0)
            int32_t ecx_21 = arg3
            
            while (ecx_21 u> arg2)
                ecx_21 -= 1
                int32_t eax_15 = *(*(arg1 + 0x528) + (ecx_21 << 2))
                int32_t ebx_7
                ebx_7.w = *(*(arg1 + 0x548) + (eax_15 << 1))
                
                if (ebx_7.w != *(arg1 + 0x78))
                    break
                
                *(*(arg1 + 0x558) + (eax_15 << 2)) = 0
        
        if ((*((edx << 4) + *(arg1 + 0x508) - 4) & 8) != 0)
            for (int32_t i_2 = arg2; i_2 u< arg3; i_2 += 1)
                int32_t eax_18 = *(*(arg1 + 0x528) + (i_2 << 2))
                int32_t edx_8
                edx_8.w = *(*(arg1 + 0x548) + (eax_18 << 1))
                
                if (edx_8.w != *(arg1 + 0x78))
                    break
                
                *(*(arg1 + 0x558) + (eax_18 << 2)) = 0
else if (eax u< edx)
    if ((*((eax << 4) + *(arg1 + 0x508) + 0xc) & 8) != 0)
        for (int32_t i_3 = arg2; i_3 u< arg3; i_3 += 1)
            int32_t eax_9 = *(*(arg1 + 0x528) + (i_3 << 2))
            int32_t ebx_5
            ebx_5.w = *(*(arg1 + 0x548) + (eax_9 << 1))
            
            if (ebx_5.w != *(arg1 + 0x78))
                break
            
            *(*(arg1 + 0x558) + (eax_9 << 2)) = 0
    
    if ((*((edx << 4) + *(arg1 + 0x508) - 4) & 8) == 0)
        int32_t ecx_19 = arg3
        
        while (ecx_19 u> arg2)
            ecx_19 -= 1
            int32_t eax_12 = *(*(arg1 + 0x528) + (ecx_19 << 2))
            int32_t edx_5
            edx_5.w = *(*(arg1 + 0x548) + (eax_12 << 1))
            
            if (edx_5.w != *(arg1 + 0x78))
                break
            
            *(*(arg1 + 0x558) + (eax_12 << 2)) = 0

int32_t ecx_22 = arg2

if (ecx_22 u< arg3)
    int32_t eax_19 = *(arg1 + 0x528)
    
    do
        *(*(arg1 + 0x560) + (*(eax_19 + (ecx_22 << 2)) << 2)) = edi_5
        eax_19 = *(arg1 + 0x528)
        edi_5 += *(*(arg1 + 0x558) + (*(eax_19 + (ecx_22 << 2)) << 2))
        ecx_22 += 1
    while (ecx_22 u< arg3)

int32_t result = sub_45b052(arg1 + 0x57c, *(arg1 + 0x578) + 1, 0)

if (result s< 0)
    return result

*(*(arg1 + 0x57c) + *(arg1 + 0x578) * 0xc) = arg2
*(*(arg1 + 0x57c) + *(arg1 + 0x578) * 0xc + 4) = arg3
*(*(arg1 + 0x57c) + *(arg1 + 0x578) * 0xc + 8) = edi_5
*(arg1 + 0x578) += 1

if (*arg7 s< edi_5)
    *arg7 = edi_5

*arg8 += *(arg1 + 0x30)
return 0
