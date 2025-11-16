// 函数: sub_470b6a
// 地址: 0x470b6a
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* eax = arg1[2]
int32_t ecx = *(eax + 0x6c)
int32_t* edi = arg8
int32_t edx_1

if (ecx.b s< 0)
    edx_1 = 0
    
    if (edi u> 0)
        do
            int32_t ecx_1 = arg7[edx_1]
            
            if ((**(*(eax + 0x14) + (ecx_1 << 2)) & 1) == 0)
                break
            
            if ((ecx.b & 4) != 0 && ecx_1 != *arg7)
                break
            
            edx_1 += 1
        while (edx_1 u< edi)

int32_t var_8_1
int32_t result
void* var_3c_2
int32_t var_38_2
int32_t* var_34_2
int32_t* var_30_3
int32_t* var_14
int32_t* var_10
int32_t* var_c

if (ecx.b s< 0 && edx_1 == edi)
    int32_t ecx_2 = sub_745f3f(edi * 0xc)
    var_8_1 = ecx_2
    
    if (ecx_2 == 0)
        result = 0x8007000e
    else
        int32_t i = 0
        int32_t edx_3 = edi << 2
        
        do
            (&var_14)[i] = ecx_2
            i += 1
            ecx_2 += edx_3
        while (i u< 3)
        
        if (edi u> 0)
            int32_t* eax_7 = var_10
            arg6 -= eax_7
            int32_t* ecx_4 = arg5 - eax_7
            void* edx_7 = var_c - eax_7
            arg5 = edi
            int32_t* i_1
            
            do
                *eax_7 = *(ecx_4 + eax_7)
                *(edx_7 + eax_7) = *(arg6 + eax_7)
                eax_7 = &eax_7[1]
                i_1 = arg5
                arg5 -= 1
            while (i_1 != 1)
        
        sub_46cc96(var_14, edi)
        sub_46cc96(arg4, edi)
        void* edi_1 = edi & 0xfffff
        result = sub_46ea58(arg1, arg3, edi_1 | 0x10100000, var_14, arg7, nullptr, 0x1a, arg2.b)
        
        if (result s>= 0)
            int32_t var_2c_3 = 0
            var_30_3 = edx_3 + var_8_1
            var_34_2 = var_14
            var_38_2 = arg4
            var_3c_2 = edi_1 | 0x30000000
        label_470da9:
            result = sub_46ea58(arg1, arg3, var_3c_2, var_38_2, var_34_2, var_30_3, 0, arg2.b)
            
            if (result s>= 0)
                result = 0
else if ((ecx:3.b & 2) != 0)
    int32_t eax_25 = sub_745f3f(edi * 0x14)
    var_8_1 = eax_25
    
    if (eax_25 != 0)
        int32_t edx_10 = var_8_1
        int32_t* var_1c
        
        for (int32_t i_2 = 0; i_2 u< 5; )
            (&var_1c)[i_2] = edx_10
            i_2 += 1
            edx_10 += edi << 2
        
        int32_t eax_26 = 0
        
        if (edi u> 0)
            do
                var_c[eax_26] = arg1[8]
                eax_26 += 1
            while (eax_26 u< edi)
        
        sub_46cc96(var_1c, edi)
        int32_t* var_18
        sub_46cc96(var_18, edi)
        sub_46cc96(var_14, edi)
        sub_46cc96(var_10, edi)
        sub_46cc96(arg4, edi)
        void* edi_6 = edi & 0xfffff
        result = sub_46ea58(arg1, arg3, edi_6 | 0x10100000, var_1c, arg7, nullptr, 0, arg2.b)
        
        if (result s>= 0)
            arg8:2.w = edi_6:2.w | 0x2040
            result = sub_46ea58(arg1, arg3, arg8, var_18, var_1c, var_c, 0)
            
            if (result s>= 0)
                void* edi_7 = edi_6 | 0x20500000
                result = sub_46ea58(arg1, arg3, edi_7, var_14, var_18, arg5, 0)
                
                if (result s>= 0)
                    result = sub_46ea58(arg1, arg3, edi_7, var_10, arg7, arg6, 0)
                    
                    if (result s>= 0)
                        int32_t var_2c_17 = 0
                        var_30_3 = var_10
                        var_34_2 = var_14
                        goto label_470d99
    else
        result = 0x8007000e
else
    int32_t eax_15 = sub_745f3f(edi * 0xc)
    var_8_1 = eax_15
    
    if (eax_15 == 0)
        result = 0x8007000e
    else
        int32_t ecx_10 = var_8_1
        
        for (int32_t i_3 = 0; i_3 u< 3; )
            (&var_14)[i_3] = ecx_10
            i_3 += 1
            ecx_10 += edi << 2
        
        sub_46cc96(var_14, edi)
        sub_46cc96(var_10, edi)
        sub_46cc96(var_c, edi)
        sub_46cc96(arg4, edi)
        void* edi_3 = edi & 0xfffff
        result = sub_46ea58(arg1, arg3, edi_3 | 0x10100000, var_14, arg5, nullptr, 0, arg2.b)
        
        if (result s>= 0)
            arg8:2.w = edi_3:2.w | 0x2040
            result = sub_46ea58(arg1, arg3, arg8, var_10, arg6, var_14, 0)
            
            if (result s>= 0)
                result = sub_46ea58(arg1, arg3, edi_3 | 0x20500000, var_c, arg7, var_10, 0)
                
                if (result s>= 0)
                    int32_t var_2c_9 = 0
                    var_30_3 = var_c
                    var_34_2 = arg5
                label_470d99:
                    var_38_2 = arg4
                    var_3c_2 = arg8
                    goto label_470da9
j__free(var_8_1)
return result
