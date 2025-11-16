// 函数: sub_470f13
// 地址: 0x470f13
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t edi = arg7
int32_t esi = 0
int32_t eax = 1
bool cond:1 = 0 != edi
int32_t* var_8 = nullptr
int32_t var_c = 1
int32_t* var_10 = 1

if (0 u< edi)
    do
        double var_1c
        
        if (sub_46e8bc(arg1, arg5[esi], &var_1c) s< 0)
            break
        
        long double x87_r7_1 = fconvert.t(0.0)
        long double x87_r6_1 = fconvert.t(var_1c)
        x87_r6_1 - x87_r7_1
        int32_t eax_2
        eax_2.w = (x87_r6_1 < x87_r7_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
            | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe
        bool p_1 = unimplemented  {test ah, 0x44}
        
        if (p_1)
            var_c = 0
        
        long double x87_r7_2 = fconvert.t(1.0)
        long double x87_r6_2 = fconvert.t(var_1c)
        x87_r6_2 - x87_r7_2
        eax_2.w = (x87_r6_2 < x87_r7_2 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_2, x87_r7_2) ? 1 : 0) << 0xa
            | (x87_r6_2 == x87_r7_2 ? 1 : 0) << 0xe
        bool p_2 = unimplemented  {test ah, 0x44}
        
        if (p_2)
            var_10 = nullptr
        
        esi += 1
    while (esi u< edi)
    
    eax = 1
    cond:1 = esi != edi

int32_t result
int32_t* var_34_1
char var_2c_4
void* edi_2

if (cond:1 || (var_c == 0 && var_10 == 0))
    bool cond:3_1 = 1 != edi
    
    if (1 u< edi)
        while (*arg6 == arg6[eax])
            eax += 1
            
            if (eax u>= edi)
                break
        
        cond:3_1 = eax != edi
    
    double var_14
    
    if (cond:3_1)
    label_47125b:
        int32_t* eax_38 = sub_745f3f(edi << 3)
        var_8 = eax_38
        
        if (eax_38 != 0)
            int32_t* edx_11 = var_8
            
            for (int32_t i = 0; i u< 2; )
                *(&var_14 + (i << 2)) = edx_11
                i += 1
                edx_11 = &edx_11[edi]
            
            sub_46cc96(var_14.d, edi)
            sub_46cc96(var_10, edi)
            sub_46cc96(arg4, edi)
            int32_t edi_4 = edi & 0xfffff
            result = sub_46ea58(arg1, arg3, edi_4 | 0x10600000, var_14.d, arg5, nullptr, 0, arg2.b)
            
            if (result s>= 0)
                result = sub_46ea58(arg1, arg3, edi_4 | 0x20500000, var_10, arg6, var_14.d, 0)
                
                if (result s>= 0)
                    var_2c_4 = 4
                    int32_t var_30_16 = 0
                    var_34_1 = var_10
                    edi_2 = edi_4 | 0x10500000
                    goto label_471317
        else
            result = 0x8007000e
    else
        int32_t eax_7
        int16_t x87control_1
        eax_7, x87control_1 = sub_46e8bc(arg1, *arg6, &var_14)
        
        if (eax_7 s< 0)
            goto label_47125b
        
        int32_t var_c_1 = __ftol(x87control_1, fconvert.t(var_14))
        long double x87_r7_6 = fabs(fconvert.t(var_14) - float.t(var_c_1))
        long double temp1_1 = fconvert.t(9.9999999999999995e-07)
        x87_r7_6 - temp1_1
        int32_t eax_8
        eax_8.w = (x87_r7_6 < temp1_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_6, temp1_1) ? 1 : 0) << 0xa
            | (x87_r7_6 == temp1_1 ? 1 : 0) << 0xe
        bool p_3 = unimplemented  {test ah, 0x5}
        void* var_3c_5
        int32_t* var_38_5
        
        if (p_3)
            long double x87_r7_10 = fabs(fabs(fconvert.t(var_14)) - fconvert.t(0.5))
            long double temp2_1 = fconvert.t(9.9999999999999995e-07)
            x87_r7_10 - temp2_1
            eax_8.w = (x87_r7_10 < temp2_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_10, temp2_1) ? 1 : 0) << 0xa
                | (x87_r7_10 == temp2_1 ? 1 : 0) << 0xe
            bool p_4 = unimplemented  {test ah, 0x5}
            
            if (p_4)
                goto label_47125b
            
            sub_46cc96(arg4, edi)
            int32_t edi_3 = edi & 0xfffff
            result = sub_46ea58(arg1, arg3, edi_3 | 0x10700000, arg4, arg5, nullptr, 4, arg2.b)
            
            if (result s>= 0)
                long double x87_r7_11 = fconvert.t(var_14)
                long double temp6_1 = fconvert.t(0.0)
                x87_r7_11 - temp6_1
                int32_t eax_35
                eax_35.w = (x87_r7_11 < temp6_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_11, temp6_1) ? 1 : 0) << 0xa
                    | (x87_r7_11 == temp6_1 ? 1 : 0) << 0xe
                
                if ((eax_35:1.b & 1) != 0)
                    result = 0
                else
                    var_2c_4 = 4
                    int32_t var_30_11 = 0
                    var_34_1 = arg4
                    edi_2 = edi_3 | 0x10300000
                label_471317:
                    var_38_5 = arg4
                    var_3c_5 = edi_2
                label_471325:
                    result = sub_46ea58(arg1, arg3, var_3c_5, var_38_5, var_34_1, nullptr, 
                        var_2c_4, arg2.b)
                    
                    if (result s>= 0)
                        result = 0
        else
            int32_t eax_10
            int32_t edx_3
            edx_3:eax_10 = sx.q(var_c_1)
            int32_t eax_11 = eax_10 ^ edx_3
            int32_t ecx_6 = 0
            uint32_t i_1 = eax_11 - edx_3
            arg7 = i_1
            int32_t edx_4 = 0
            
            if (eax_11 != edx_3)
                do
                    ecx_6 += 1
                    edx_4 += i_1 & 1
                    i_1 u>>= 1
                while (i_1 != 0)
            
            int32_t eax_13 = neg.d(edx_4)
            int32_t edx_7 = neg.d(ecx_6)
            int32_t eax_16 = (sbb.d(eax_13, eax_13, edx_4 != 0) & (edx_4 - 1))
                + (sbb.d(edx_7, edx_7, ecx_6 != 0) & (ecx_6 - 1))
            
            if (var_c_1 s< 0)
                eax_16 += edi
            
            void* ecx_8 = arg1[1].d
            int32_t ecx_9
            
            if ((*(ecx_8 + 0x6c) & 0x40) == 0 || (*(arg1 + 0x14) & 0x20) == 0)
                int32_t ecx_10 = *(ecx_8 + 0x64)
                
                if (ecx_10 == 0)
                    ecx_10 += 1
                
                ecx_9 = ecx_10 * edi * 2 + 1
            else
                ecx_9 = edi + 1
            
            if (eax_16 u> ecx_9)
                goto label_47125b
            
            int32_t* eax_19 = sub_745f3f(edi << 2)
            var_8 = eax_19
            
            if (eax_19 == 0)
                result = 0x8007000e
            else
                int32_t eax_20 = 0
                
                if (edi u> 0)
                    do
                        var_8[eax_20] = arg1[4].d
                        eax_20 += 1
                    while (eax_20 u< edi)
                
                sub_46cc96(arg4, edi)
                int32_t* eax_22 = edi & 0xfffff
                arg6:3.b = eax_22:3.b | 0x10
                result = sub_46ea58(arg1, arg3, arg6, arg4, var_8, nullptr, 0, arg2.b)
                
                if (result s>= 0)
                    if (arg7 == 0)
                    label_4711b5:
                        
                        if (var_c_1 s< 0)
                            var_2c_4 = 0
                            int32_t var_30_9 = 0
                            var_34_1 = arg4
                            var_38_5 = arg4
                            var_3c_5 = eax_22 | 0x10300000
                            goto label_471325
                        
                        result = 0
                    else
                        sub_46cc96(var_8, edi)
                        result = sub_46ea58(arg1, arg3, arg6, var_8, arg5, nullptr, 0)
                        
                        if (result s>= 0)
                            while (true)
                                if ((arg7.b & 1) != 0)
                                    result = sub_46ea58(arg1, arg3, eax_22 | 0x20500000, arg4, 
                                        arg4, var_8, 0)
                                    
                                    if (result s< 0)
                                        goto label_471330
                                
                                uint32_t temp7_1 = arg7 u>> 1
                                arg7 = temp7_1
                                
                                if (temp7_1 == 0)
                                    break
                                
                                result = sub_46ea58(arg1, arg3, eax_22 | 0x20500000, var_8, var_8, 
                                    var_8, 4)
                                
                                if (result s< 0)
                                    goto label_471330
                            
                            goto label_4711b5
else
    int32_t* eax_5 = sub_745f3f(edi << 2)
    var_8 = eax_5
    
    if (eax_5 != 0)
        int32_t ecx_2 = 0
        
        if (edi u> 0)
            do
                int32_t eax_6
                
                if (var_c == 0)
                    eax_6 = arg1[4].d
                else
                    eax_6 = *(arg1 + 0x24)
                
                eax_5[ecx_2] = eax_6
                ecx_2 += 1
            while (ecx_2 u< edi)
        
        sub_46cc96(arg4, edi)
        var_2c_4 = 0
        int32_t var_30_3 = 0
        var_34_1 = eax_5
        edi_2 = (edi & 0xfffff) | 0x10000000
        goto label_471317
    
    result = 0x8007000e
label_471330:
j__free(var_8)
return result
