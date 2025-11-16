// 函数: sub_4145e1
// 地址: 0x4145e1
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t eax = *(arg1 + 0x264)
int32_t* var_24_1
__builtin_memset(&var_24_1, 0, 0x1c)
int32_t var_44_1
__builtin_memset(&var_44_1, 0, 0x1c)
int32_t var_3c
int32_t var_34_1
int32_t var_30
int32_t var_2c_1
int32_t* var_1c
int32_t var_18
int16_t* var_14_1
int32_t var_10_1
int16_t* var_c_1
int32_t result

if (arg3 != 0 && (arg3 & 0x3fefff) == 0 && (arg4 != 0 || arg5 == 0)
        && ((arg3 & 0x40000000) == 0 || *(arg1 + 0x260) != 0))
    arg3:3.b |= 1
    
    if ((arg3 & 0xc000000) != 0)
        arg3 |= &data_2000000
    
    void* edx_2 = arg3 & &data_2000000
    int32_t var_40_1
    int32_t var_20
    
    if (edx_2 == 0 || (arg3 & 0x40000000) != 0)
    label_4146d0:
        var_c_1 = sub_745f3f(*(arg1 + 0x264) << 2)
        var_14_1 = sub_745f3f(*(arg1 + 0x264) << 2)
        int32_t eax_10 = sub_745f3f(*(arg1 + 0x23c) << 2)
        var_10_1 = eax_10
        
        if (var_c_1 == 0 || var_14_1 == 0 || eax_10 == 0)
            result = 0x8007000e
        else
            int32_t eax_11 = *(arg1 + 0x23c)
            void* eax_13 = arg3 & 0xc000000
            int32_t eax_16
            
            if (eax_13 != 0)
                eax_16 = sub_745f3f(*(arg1 + 0x264) << 2)
                var_2c_1 = eax_16
            
            if (eax_13 != 0 && eax_16 == 0)
                result = 0x8007000e
            else
                if ((arg3 & &data_1000000) == 0 || (arg3 & 0x40000000) != 0)
                    int32_t i = 0
                    
                    if (*(arg1 + 0x264) u> 0)
                        int16_t* ecx_3 = var_c_1
                        void* edx_4 = var_14_1 - ecx_3
                        
                        do
                            *(edx_4 + ecx_3) = i
                            *ecx_3 = i
                            i += 1
                            ecx_3 = &ecx_3[2]
                        while (i u< *(arg1 + 0x264))
                    
                    int32_t i_1 = 0
                    
                    if (*(arg1 + 0x23c) u> 0)
                        do
                            *(var_10_1 + (i_1 << 2)) = i_1
                            i_1 += 1
                        while (i_1 u< *(arg1 + 0x23c))
                    
                    goto label_4147ae
                
                int32_t result_2 = sub_40c448(arg1, var_c_1, var_14_1, var_10_1)
                result = result_2
                
                if (result_2 s>= 0)
                label_4147ae:
                    
                    if (edx_2 == 0 || (arg3 & 0x40000000) != 0)
                    label_4147da:
                        void* temp1_1 = arg3 & 0x10000000
                        
                        if (temp1_1 != 0)
                            int32_t i_2 = 0
                            
                            if (*(arg1 + 0x23c) u> 0)
                                do
                                    *(var_10_1 + (i_2 << 2)) = i_2
                                    i_2 += 1
                                while (i_2 u< *(arg1 + 0x23c))
                        
                        int32_t result_4 = sub_4106c5(arg1, var_c_1, var_10_1)
                        result = result_4
                        
                        if (result_4 s>= 0)
                            if (eax_13 == 0)
                            label_41495d:
                                int32_t var_38_1
                                
                                if (arg7 != 0 || var_20 u> 0 || *(arg1 + 0x240) == 0)
                                    int32_t** var_3f4_11 = &var_1c
                                    int32_t var_3f8_9 = *(arg1 + 0x23c) << 2
                                    int32_t result_7 = sub_458de2()
                                    result = result_7
                                    
                                    if (result_7 s>= 0)
                                        int32_t* eax_25 = var_1c
                                        int32_t eax_26 = (*(*eax_25 + 0xc))(eax_25)
                                        int32_t i_3 = 0
                                        var_38_1 = eax_26
                                        
                                        if (*(arg1 + 0x23c) u> 0)
                                            do
                                                *(eax_26 + (i_3 << 2)) = 0xffffffff
                                                i_3 += 1
                                            while (i_3 u< *(arg1 + 0x23c))
                                        
                                        int32_t ecx_25 = 0
                                        
                                        if (eax_11 u> 0)
                                            do
                                                int32_t edx_9 = *(var_10_1 + (ecx_25 << 2))
                                                
                                                if (edx_9 != 0xffff)
                                                    *(eax_26 + (edx_9 << 2)) = ecx_25
                                                
                                                ecx_25 += 1
                                            while (ecx_25 u< eax_11)
                                        
                                        if (var_20 u> 0)
                                            int32_t i_4 = 0
                                            
                                            if (*(arg1 + 0x23c) u> 0)
                                                do
                                                    int32_t ecx_26 = *(eax_26 + (i_4 << 2))
                                                    
                                                    if (ecx_26 != 0xffffffff && ecx_26 u>= var_40_1)
                                                        *(eax_26 + (i_4 << 2)) =
                                                            *(var_3c + ((ecx_26 - var_40_1) << 2))
                                                    
                                                    i_4 += 1
                                                while (i_4 u< *(arg1 + 0x23c))
                                        
                                        goto label_414a07
                                else
                                label_414a07:
                                    
                                    if (var_20 == 0 && *(arg1 + 0x240) u> 0)
                                        int32_t result_8 = sub_40bed2(arg1, &var_18, 0)
                                        result = result_8
                                        
                                        if (result_8 s>= 0)
                                            int32_t result_9 = sub_41055d(arg1, var_10_1, var_18)
                                            result = result_9
                                            
                                            if (result_9 s>= 0)
                                                goto label_414c0c
                                    else if ((*(arg1 + 0x218) & 0x20) != 0)
                                    label_414c0c:
                                        
                                        if (arg6 != 0)
                                            int16_t* esi_11 = var_c_1
                                            int32_t ecx_46 = *(arg1 + 0x264) << 2
                                            
                                            if ((arg3:3.b & 0x80) == 0)
                                                esi_11 = var_14_1
                                            
                                            int32_t esi_12
                                            int32_t edi_9
                                            edi_9, esi_12 =
                                                __builtin_memcpy(arg6, esi_11, ecx_46 u>> 2 << 2)
                                            __builtin_memcpy(edi_9, esi_12, ecx_46 & 3)
                                        
                                        int32_t i_5 = 0
                                        
                                        if (arg5 == 0)
                                        label_414ca4:
                                            
                                            if (arg7 != 0)
                                                int32_t* eax_43 = var_1c
                                                var_1c = nullptr
                                                *arg7 = eax_43
                                        else
                                            if (arg5 != arg4)
                                                if (*(arg1 + 0x264) u> 0)
                                                    arg3 = arg5
                                                    
                                                    do
                                                        int32_t* eax_42 = arg3
                                                        void* ecx_52 =
                                                            &arg4[*(var_14_1 + (i_5 << 2)) * 3]
                                                            - eax_42
                                                        arg9 = 3
                                                        int16_t* j
                                                        
                                                        do
                                                            int32_t esi_13 = *(ecx_52 + eax_42)
                                                            
                                                            if (esi_13 == 0xffffffff)
                                                                *eax_42 = 0xffffffff
                                                            else
                                                                *eax_42 = *(var_c_1 + (esi_13 << 2))
                                                            
                                                            eax_42 = &eax_42[1]
                                                            j = arg9
                                                            arg9 -= 1
                                                        while (j != 1)
                                                        arg3 = &arg3[3]
                                                        i_5 += 1
                                                    while (i_5 u< *(arg1 + 0x264))
                                                
                                                goto label_414ca4
                                            
                                            int32_t result_13 = sub_40ae87(var_c_1, arg5, eax)
                                            result = result_13
                                            
                                            if (result_13 s>= 0)
                                                goto label_414ca4
                                    else
                                        int32_t edi_4 = *(arg1 + 0x23c)
                                        var_24_1 = *(arg1 + 0x234)
                                        var_44_1 = *(arg1 + 0x244)
                                        
                                        if (*(arg1 + 0x240) == 0)
                                            int32_t ecx_31 = *arg8
                                            var_24_1 = arg8
                                            (*(ecx_31 + 4))(arg8)
                                        
                                        int32_t* var_3f8_12 = *(arg1 + 0x264)
                                        *(arg1 + 0x234) = 0
                                        *(arg1 + 0x23c) = 0
                                        *(arg1 + 0x240) = 0
                                        *(arg1 + 0x244) = 0
                                        int32_t result_10 = sub_40dd7c(arg1, var_3f8_12, edi_4)
                                        result = result_10
                                        
                                        if (result_10 s>= 0)
                                            int32_t result_11 = sub_40bed2(arg1, &var_18, 0)
                                            result = result_11
                                            
                                            if (result_11 s>= 0)
                                                int32_t* eax_30 = var_24_1
                                                int32_t result_12 = (*(*eax_30 + 0x2c))(eax_30, 0, 
                                                    0, &var_30, 0x810)
                                                result = result_12
                                                
                                                if (result_12 s>= 0)
                                                    if (arg9 == 0)
                                                    label_414b59:
                                                        int32_t eax_34 = var_18
                                                        arg9 = nullptr
                                                        
                                                        if (*(arg1 + 0x23c) u> 0)
                                                            do
                                                                int32_t edx_11 =
                                                                    *(var_38_1 + (arg9 << 2))
                                                                
                                                                if (edx_11 != 0xffffffff)
                                                                    int32_t ecx_39 = *(arg1 + 0x238)
                                                                    int32_t esi_9
                                                                    int32_t edi_6
                                                                    edi_6, esi_9 = __builtin_memcpy(eax_34, 
                                                                        ecx_39 * edx_11 + var_30, 
                                                                        ecx_39 u>> 2 << 2)
                                                                    __builtin_memcpy(edi_6, esi_9, 
                                                                        ecx_39 & 3)
                                                                    eax_34 += *(arg1 + 0x238)
                                                                
                                                                arg9 += 1
                                                            while (arg9 u< *(arg1 + 0x23c))
                                                    else
                                                        if (sub_408829(arg9, arg1 + 0xc) != 0)
                                                            goto label_414b59
                                                        
                                                        void var_3e4
                                                        sub_409105(&var_3e4, arg9, arg1 + 0xc)
                                                        sub_408746(&var_3e4, var_30, var_18)
                                                        int32_t i_6 = 0
                                                        
                                                        if (*(arg1 + 0x23c) u> 0)
                                                            do
                                                                int32_t eax_33 =
                                                                    *(var_38_1 + (i_6 << 2))
                                                                
                                                                if (eax_33 != 0xffffffff)
                                                                    sub_408771(&var_3e4, eax_33, i_6, 1)
                                                                
                                                                i_6 += 1
                                                            while (i_6 u< *(arg1 + 0x23c))
                                                    
                                                    int32_t ecx_44 = var_44_1
                                                    
                                                    if (ecx_44 != 0)
                                                        int32_t i_7 = 0
                                                        
                                                        if (*(arg1 + 0x23c) u> 0)
                                                            do
                                                                uint32_t edx_15
                                                                edx_15.w = *(var_10_1 + (zx.d(*(ecx_44
                                                                    + (*(var_38_1 + (i_7 << 2)) << 1)))
                                                                    << 2))
                                                                *(*(arg1 + 0x244) + (i_7 << 1)) =
                                                                    edx_15.w
                                                                i_7 += 1
                                                            while (i_7 u< *(arg1 + 0x23c))
                                                    
                                                    int32_t i_8 = 0
                                                    int32_t edx_16 = 0
                                                    
                                                    if (*(arg1 + 0x23c) u> 0)
                                                        do
                                                            int32_t* eax_36 = var_10_1 + (i_8 << 2)
                                                            
                                                            if (*eax_36 == 0xffff)
                                                                *eax_36 = 0xffffffff
                                                            else
                                                                edx_16 += 1
                                                            
                                                            i_8 += 1
                                                        while (i_8 u< *(arg1 + 0x23c))
                                                    
                                                    *(arg1 + 0x23c) = edx_16
                                                    goto label_414c0c
                            else
                                int32_t ecx_9 = *(arg1 + 0x264) << 2
                                int32_t esi_2
                                int32_t edi_2
                                edi_2, esi_2 =
                                    __builtin_memcpy(var_2c_1, var_14_1, ecx_9 u>> 2 << 2)
                                __builtin_memcpy(edi_2, esi_2, ecx_9 & 3)
                                int32_t result_5 =
                                    sub_413fa2(arg1, arg3, var_c_1.b, var_14_1, arg4, arg2)
                                result = result_5
                                
                                if (result_5 s>= 0)
                                    int32_t eax_20 = sub_745f3f(*(arg1 + 0x23c) << 2)
                                    var_34_1 = eax_20
                                    
                                    if (eax_20 == 0)
                                        result = 0x8007000e
                                    else
                                        if (temp1_1 != 0)
                                            int32_t i_9 = 0
                                            
                                            if (*(arg1 + 0x23c) u> 0)
                                                do
                                                    *(eax_20 + (i_9 << 2)) = i_9
                                                    i_9 += 1
                                                while (i_9 u< *(arg1 + 0x23c))
                                        else
                                            sub_40ca32(arg1, var_14_1, eax_20)
                                            result = 0
                                            eax_20 = var_34_1
                                            int32_t i_10 = 0
                                            
                                            if (*(arg1 + 0x23c) u> 0)
                                                do
                                                    int32_t* ecx_17 = var_10_1 + (i_10 << 2)
                                                    int32_t edx_5 = *ecx_17
                                                    
                                                    if (edx_5 != 0xffff)
                                                        *ecx_17 = *(eax_20 + (edx_5 << 2))
                                                    
                                                    i_10 += 1
                                                while (i_10 u< *(arg1 + 0x23c))
                                        
                                        int32_t result_6 = sub_4106c5(arg1, var_c_1, eax_20)
                                        result = result_6
                                        
                                        if (result_6 s>= 0)
                                            int32_t i_11 = 0
                                            
                                            if (*(arg1 + 0x264) u> 0)
                                                do
                                                    void* eax_22 = &var_14_1[i_11 * 2]
                                                    int32_t ecx_19 = *eax_22
                                                    
                                                    if (ecx_19 == 0xffffffff)
                                                        *eax_22 = 0xffffffff
                                                    else
                                                        *eax_22 = *(var_2c_1 + (ecx_19 << 2))
                                                    
                                                    i_11 += 1
                                                while (i_11 u< *(arg1 + 0x264))
                                            
                                            int32_t i_12 = 0
                                            
                                            if (*(arg1 + 0x264) u> 0)
                                                do
                                                    *(var_c_1 + (i_12 << 2)) = 0xffff
                                                    i_12 += 1
                                                while (i_12 u< *(arg1 + 0x264))
                                            
                                            int32_t i_13 = 0
                                            
                                            if (*(arg1 + 0x264) u> 0)
                                                do
                                                    int32_t ecx_23 = *(var_14_1 + (i_13 << 2))
                                                    
                                                    if (ecx_23 != 0xffff)
                                                        *(var_c_1 + (ecx_23 << 2)) = i_13
                                                    
                                                    i_13 += 1
                                                while (i_13 u< *(arg1 + 0x264))
                                            
                                            goto label_41495d
                    else
                        int32_t result_3 = sub_40c566(arg1, var_c_1, var_14_1, var_10_1, arg3)
                        result = result_3
                        
                        if (result_3 s>= 0)
                            goto label_4147da
    else
        var_40_1 = *(arg1 + 0x23c)
        
        if ((arg3:3.b & 0x20) != 0)
            goto label_4146d0
        
        int32_t result_1 = sub_4102d3(arg1, &var_3c, &var_20)
        result = result_1
        
        if (result_1 s>= 0)
            if (var_20 u<= 0 || (arg3:3.b & 0x10) == 0)
                goto label_4146d0
            
            result = 0x88760b56
else
    result = 0x8876086c

j__free(var_10_1)
j__free(var_c_1)
j__free(var_14_1)
j__free(var_2c_1)
j__free(var_3c)
j__free(var_34_1)
int32_t eax_44 = var_44_1

if (*(arg1 + 0x244) != eax_44)
    j__free(eax_44)

if (var_18 != 0)
    int32_t* ebx_1 = *(arg1 + 0x234)
    (*(*ebx_1 + 0x30))(ebx_1)

int32_t* esi_15 = var_24_1

if (var_30 != 0)
    (*(*esi_15 + 0x30))(esi_15)

int32_t* eax_47 = var_1c

if (eax_47 != 0)
    (*(*eax_47 + 8))(eax_47)
    var_1c = nullptr

if (esi_15 != 0)
    (*(*esi_15 + 8))(esi_15)

return result
