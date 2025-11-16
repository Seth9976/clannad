// 函数: sub_46fdc6
// 地址: 0x46fdc6
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_14 = 0
int32_t result
int32_t* var_c8_2
void* eax_7

if ((*(arg1[2] + 0x6d) & 2) == 0)
    void* ecx_2 = arg1[2]
    void* var_c0_3 = ecx_2
    void* var_c4_2 = ecx_2
    var_c4_2.q = fconvert.d(fconvert.t(-0.018729300000000001))
    int32_t eax_10 = sub_49f544(ecx_2, *(ecx_2 + 0x78), 0, 0, var_c4_2)
    void* ecx_3 = arg1[2]
    void* var_c0_4 = ecx_3
    void* var_c4_3 = ecx_3
    var_c4_3.q = fconvert.d(fconvert.t(0.074260999999999994))
    int32_t eax_11 = sub_49f544(ecx_3, *(ecx_3 + 0x78), 0, 0, var_c4_3)
    void* ecx_4 = arg1[2]
    void* var_c0_5 = ecx_4
    void* var_c4_4 = ecx_4
    var_c4_4.q = fconvert.d(fconvert.t(-0.21211440000000001))
    int32_t eax_12 = sub_49f544(ecx_4, *(ecx_4 + 0x78), 0, 0, var_c4_4)
    void* ecx_5 = arg1[2]
    void* var_c0_6 = ecx_5
    void* var_c4_5 = ecx_5
    var_c4_5.q = fconvert.d(fconvert.t(1.5707287999999999))
    int32_t eax_13 = sub_49f544(ecx_5, *(ecx_5 + 0x78), 0, 0, var_c4_5)
    void* ecx_6 = arg1[2]
    void* var_c0_7 = ecx_6
    void* var_c4_6 = ecx_6
    var_c4_6.q = fconvert.d(fconvert.t(-2.0))
    int32_t eax_14 = sub_49f544(ecx_6, *(ecx_6 + 0x78), 0, 0, var_c4_6)
    void* ecx_7 = arg1[2]
    void* var_c0_8 = ecx_7
    void* var_c4_7 = ecx_7
    var_c4_7.q = fconvert.d(fconvert.t(3.1415927410125732))
    int32_t eax_15 = sub_49f544(ecx_7, *(ecx_7 + 0x78), 0, 0, var_c4_7)
    void* ecx_8 = arg1[2]
    void* var_c0_9 = ecx_8
    void* var_c4_8 = ecx_8
    var_c4_8.q = fconvert.d(fconvert.t(1.5707963705062866))
    int32_t eax_16 = sub_49f544(ecx_8, *(ecx_8 + 0x78), 0, 0, var_c4_8)
    int32_t eax_19 = sub_745f3f(arg7 * 0x70)
    var_14 = eax_19
    
    if (eax_19 != 0)
        int32_t* var_84
        
        for (int32_t i = 0; i u< 0x1c; )
            (&var_84)[i] = eax_19
            i += 1
            eax_19 += arg7 << 2
        
        for (int32_t i_1 = 0; i_1 u< 0x14; i_1 += 1)
            sub_46cc96((&var_84)[i_1], arg7)
        
        int32_t* var_34
        int32_t* var_30
        int32_t* var_2c
        int32_t* var_28
        int32_t* var_24
        int32_t* var_20
        int32_t* var_1c
        int32_t* var_18
        
        if (arg7 u> 0)
            int32_t* eax_20 = var_30
            void* edx_4 = var_2c - eax_20
            void* edx_6 = var_28 - eax_20
            int32_t* edx_8 = var_24 - eax_20
            void* edx_10 = var_20 - eax_20
            void* edx_12 = var_1c - eax_20
            void* ecx_12 = var_34 - eax_20
            void* edx_14 = var_18 - eax_20
            void* i_3 = arg7
            void* i_2
            
            do
                *(ecx_12 + eax_20) = arg1[8]
                *eax_20 = eax_10
                *(edx_4 + eax_20) = eax_11
                *(edx_6 + eax_20) = eax_12
                *(edx_8 + eax_20) = eax_13
                *(edx_10 + eax_20) = eax_14
                *(edx_12 + eax_20) = eax_15
                *(edx_14 + eax_20) = eax_16
                eax_20 = &eax_20[1]
                i_2 = i_3
                i_3 -= 1
            while (i_2 != 1)
        
        void* eax_22 = arg7 & 0xfffff
        void* var_8_1
        var_8_1:2.w = eax_22:2.w | 0x1010
        result = sub_46ea58(arg1, arg3, var_8_1, var_84, arg4, nullptr, 0, arg2.b)
        
        if (result s>= 0)
            int32_t* var_80
            result = sub_46ea58(arg1, arg3, eax_22 | 0x20100000, var_80, arg4, var_84, 4)
            
            if (result s>= 0)
                int32_t* var_7c
                result = sub_46ea58(arg1, arg3, var_8_1, var_7c, var_80, nullptr, 8)
                
                if (result s>= 0)
                    void* eax_29 = eax_22 | 0x20400000
                    int32_t* var_78
                    result = sub_46ea58(arg1, arg3, eax_29, var_78, var_7c, var_34, 0)
                    
                    if (result s>= 0)
                        int32_t* var_74
                        result =
                            sub_46ea58(arg1, arg3, eax_22 | 0x10700000, var_74, var_78, nullptr, 4)
                        
                        if (result s>= 0)
                            int32_t* var_70
                            result = sub_46ea58(arg1, arg3, eax_22 | 0x10300000, var_70, var_74, 
                                nullptr, 4)
                            
                            if (result s>= 0)
                                void* eax_38 = eax_22 | 0x20500000
                                int32_t* var_6c
                                result = sub_46ea58(arg1, arg3, eax_38, var_6c, var_30, var_80, 0)
                                
                                if (result s>= 0)
                                    int32_t* var_68
                                    result =
                                        sub_46ea58(arg1, arg3, eax_29, var_68, var_6c, var_2c, 0)
                                    
                                    if (result s>= 0)
                                        int32_t* var_64
                                        result = sub_46ea58(arg1, arg3, eax_38, var_64, var_68, 
                                            var_80, 0)
                                        
                                        if (result s>= 0)
                                            int32_t* var_60
                                            result = sub_46ea58(arg1, arg3, eax_29, var_60, var_64, 
                                                var_28, 0)
                                            
                                            if (result s>= 0)
                                                int32_t* var_5c
                                                result = sub_46ea58(arg1, arg3, eax_38, var_5c, 
                                                    var_60, var_80, 0)
                                                
                                                if (result s>= 0)
                                                    int32_t* var_58
                                                    result = sub_46ea58(arg1, arg3, eax_29, var_58, 
                                                        var_5c, var_24, 0)
                                                    
                                                    if (result s>= 0)
                                                        int32_t* var_54
                                                        result = sub_46ea58(arg1, arg3, eax_38, 
                                                            var_54, var_58, var_70, 0)
                                                        
                                                        if (result s>= 0)
                                                            int32_t* var_50
                                                            result = sub_46ea58(arg1, arg3, eax_38, 
                                                                var_50, var_54, var_20, 0)
                                                            
                                                            if (result s>= 0)
                                                                int32_t* var_4c
                                                                result = sub_46ea58(arg1, arg3, eax_29, 
                                                                    var_4c, var_50, var_1c, 0)
                                                                
                                                                if (result s>= 0)
                                                                    int32_t* var_48
                                                                    result = sub_46ea58(arg1, arg3, 
                                                                        eax_22 | 0x20200000, var_48, arg4, 
                                                                        var_84, 0x17)
                                                                    
                                                                    if (result s>= 0)
                                                                        int32_t* var_44
                                                                        result = sub_46ea58(arg1, arg3, eax_38, 
                                                                            var_44, var_4c, var_48, 0)
                                                                        
                                                                        if (result s>= 0)
                                                                            int32_t* var_40
                                                                            result = sub_46ea58(arg1, arg3, eax_29, 
                                                                                var_40, var_54, var_44, 4)
                                                                            
                                                                            if (result s>= 0)
                                                                                int32_t* var_3c
                                                                                result = sub_46ea58(arg1, arg3, 
                                                                                    var_8_1, var_3c, var_40, nullptr, 8)
                                                                                
                                                                                if (result s>= 0)
                                                                                    int32_t* var_38
                                                                                    result = sub_46ea58(arg1, arg3, eax_29, 
                                                                                        var_38, var_3c, var_18, 0)
                                                                                    
                                                                                    if (result s>= 0)
                                                                                        if (arg5 == 0)
                                                                                        label_470328:
                                                                                            
                                                                                            if (arg6 != 0)
                                                                                                int32_t var_c0_12 = 4
                                                                                                int32_t var_c4_25 = 0
                                                                                                var_c8_2 = var_40
                                                                                                eax_7 = eax_22 | 0x10000000
                                                                                                goto label_46fe33
                                                                                            
                                                                                            result = 0
                                                                                        else
                                                                                            result = sub_46ea58(arg1, arg3, 
                                                                                                eax_22 | 0x10000000, arg5, var_38, 
                                                                                                nullptr, 0)
                                                                                            
                                                                                            if (result s>= 0)
                                                                                                goto label_470328
    else
        result = 0x8007000e
else if (arg5 == 0)
label_46fe0d:
    
    if (arg6 == 0)
        result = 0
    else
        int32_t var_c0_1 = 4
        int32_t var_c4_1 = 0
        var_c8_2 = arg4
        eax_7 = (arg7 & 0xfffff) | 0x10b00000
    label_46fe33:
        result = sub_46ea58(arg1, arg3, eax_7, arg6, var_c8_2, nullptr, 4, arg2.b)
        
        if (result s>= 0)
            result = 0
else
    result = sub_46ea58(arg1, arg3, (arg7 & 0xfffff) | 0x10a00000, arg5, arg4, nullptr, 0, arg2.b)
    
    if (result s>= 0)
        goto label_46fe0d
j__free(var_14)
return result
