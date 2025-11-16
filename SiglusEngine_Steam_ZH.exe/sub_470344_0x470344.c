// 函数: sub_470344
// 地址: 0x470344
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_20 = 0
void* var_128
int32_t var_124_1
int32_t* var_120_1
int32_t* var_11c

if ((*(arg1[2] + 0x6d) & 2) != 0)
    void* eax_2 = arg7 & 0xfffff
    int32_t var_118 = 0
    void* eax_3
    
    if (arg5 == 0)
        var_11c = nullptr
        eax_3 = eax_2 | 0x10c00000
    else
        var_11c = arg5
        eax_3 = eax_2 | 0x20600000
    
    var_120_1 = arg4
    var_124_1 = arg6
    var_128 = eax_3
    goto label_470b50

void* ecx = arg1[2]
void* var_118_1 = ecx
void* var_11c_1 = ecx
var_11c_1.q = fconvert.d(fconvert.t(0.020835099999999999))
int32_t eax_4 = sub_49f544(ecx, *(ecx + 0x78), 0, 0, var_11c_1)
void* ecx_1 = arg1[2]
void* var_118_2 = ecx_1
void* var_11c_2 = ecx_1
var_11c_2.q = fconvert.d(fconvert.t(-0.085133))
int32_t eax_5 = sub_49f544(ecx_1, *(ecx_1 + 0x78), 0, 0, var_11c_2)
void* ecx_2 = arg1[2]
void* var_118_3 = ecx_2
void* var_11c_3 = ecx_2
var_11c_3.q = fconvert.d(fconvert.t(0.180141))
int32_t eax_6 = sub_49f544(ecx_2, *(ecx_2 + 0x78), 0, 0, var_11c_3)
void* ecx_3 = arg1[2]
void* var_118_4 = ecx_3
void* var_11c_4 = ecx_3
var_11c_4.q = fconvert.d(fconvert.t(-0.33029950000000002))
int32_t eax_7 = sub_49f544(ecx_3, *(ecx_3 + 0x78), 0, 0, var_11c_4)
void* ecx_4 = arg1[2]
void* var_118_5 = ecx_4
void* var_11c_5 = ecx_4
var_11c_5.q = fconvert.d(fconvert.t(0.99986600000000003))
int32_t eax_8 = sub_49f544(ecx_4, *(ecx_4 + 0x78), 0, 0, var_11c_5)
void* ecx_5 = arg1[2]
void* var_118_6 = ecx_5
void* var_11c_6 = ecx_5
var_11c_6.q = fconvert.d(fconvert.t(-2.0))
int32_t eax_9 = sub_49f544(ecx_5, *(ecx_5 + 0x78), 0, 0, var_11c_6)
void* ecx_6 = arg1[2]
void* var_118_7 = ecx_6
void* var_11c_7 = ecx_6
var_11c_7.q = fconvert.d(fconvert.t(1.5707963705062866))
int32_t eax_10 = sub_49f544(ecx_6, *(ecx_6 + 0x78), 0, 0, var_11c_7)
void* ecx_7 = arg1[2]
void* var_118_8 = ecx_7
void* var_11c_8 = ecx_7
var_11c_8.q = fconvert.d(fconvert.t(-3.1415927410125732))
int32_t eax_11 = sub_49f544(ecx_7, *(ecx_7 + 0x78), 0, 0, var_11c_8)
void* edi = arg7
int32_t edx_1 = sub_745f3f(edi * 0xc0)
var_20 = edx_1
int32_t result

if (edx_1 != 0)
    int32_t* var_e0
    
    for (int32_t i = 0; i u< 0x30; )
        (&var_e0)[i] = edx_1
        i += 1
        edx_1 += edi << 2
    
    int32_t edx_2 = 0
    
    while (true)
        sub_46cc96((&var_e0)[edx_2], edi)
        edx_2 += 1
        
        if (edx_2 u>= 0x27)
            break
        
        edi = arg7
    
    int32_t* var_44
    int32_t* var_40
    int32_t* var_3c
    int32_t* var_38
    int32_t* var_34
    int32_t* var_30
    int32_t* var_2c
    int32_t* var_28
    int32_t* var_24
    
    if (arg7 u> 0)
        int32_t* eax_15 = var_40
        int32_t* edi_2 = var_38 - eax_15
        int32_t* edi_4 = var_34 - eax_15
        int32_t* edi_6 = var_30 - eax_15
        int32_t* edi_8 = var_2c - eax_15
        void* edi_10 = var_28 - eax_15
        int32_t* edx_4 = var_3c - eax_15
        int32_t* ecx_13 = var_44 - eax_15
        int32_t* edi_12 = var_24 - eax_15
        int32_t* var_18_1 = edx_4
        void* var_14_1 = arg7
        
        while (true)
            *(ecx_13 + eax_15) = eax_4
            *eax_15 = eax_5
            *(edx_4 + eax_15) = eax_6
            *(edi_2 + eax_15) = eax_7
            *(edi_4 + eax_15) = eax_8
            *(edi_6 + eax_15) = eax_9
            *(edi_8 + eax_15) = eax_10
            *(edi_10 + eax_15) = eax_11
            *(edi_12 + eax_15) = arg1[8]
            eax_15 = &eax_15[1]
            void* temp1_1 = var_14_1
            var_14_1 -= 1
            
            if (temp1_1 == 1)
                break
            
            edx_4 = var_18_1
    
    if (arg5 == 0)
        arg5 = var_24
    
    void* eax_18 = arg7 & 0xfffff
    void* var_10_2
    var_10_2:2.w = eax_18:2.w | 0x1010
    result = sub_46ea58(arg1, arg3, var_10_2, var_e0, arg4, nullptr, 0, arg2.b)
    
    if (result s>= 0)
        void* eax_21 = eax_18 | 0x20100000
        int32_t* var_dc
        result = sub_46ea58(arg1, arg3, eax_21, var_dc, arg4, var_e0, 4)
        
        if (result s>= 0)
            int32_t* var_d8
            result = sub_46ea58(arg1, arg3, var_10_2, var_d8, arg5, nullptr, 0)
            
            if (result s>= 0)
                int32_t* var_d4
                result = sub_46ea58(arg1, arg3, eax_21, var_d4, arg5, var_d8, 4)
                
                if (result s>= 0)
                    void* eax_26 = eax_18 | 0x20000000
                    int32_t* var_d0
                    result = sub_46ea58(arg1, arg3, eax_26, var_d0, var_dc, var_d4, 4)
                    
                    if (result s>= 0)
                        int32_t* var_cc
                        result = sub_46ea58(arg1, arg3, eax_21, var_cc, var_dc, var_d4, 4)
                        
                        if (result s>= 0)
                            int32_t* var_c8
                            result = sub_46ea58(arg1, arg3, eax_18 | 0x10300000, var_c8, var_cc, 
                                nullptr, 4)
                            
                            if (result s>= 0)
                                void* eax_33 = eax_18 | 0x20500000
                                int32_t* var_c4
                                result =
                                    sub_46ea58(arg1, arg3, eax_33, var_c4, var_d0, var_c8, 0x14)
                                
                                if (result s>= 0)
                                    int32_t* var_c0
                                    result =
                                        sub_46ea58(arg1, arg3, eax_33, var_c0, var_c4, var_c4, 0x14)
                                    
                                    if (result s>= 0)
                                        int32_t* var_bc
                                        result = sub_46ea58(arg1, arg3, eax_33, var_bc, var_c0, 
                                            var_44, 0)
                                        
                                        if (result s>= 0)
                                            void* eax_38 = eax_18 | 0x20400000
                                            int32_t* var_b8
                                            result = sub_46ea58(arg1, arg3, eax_38, var_b8, var_bc, 
                                                var_40, 0)
                                            
                                            if (result s>= 0)
                                                int32_t* var_b4
                                                result = sub_46ea58(arg1, arg3, eax_33, var_b4, 
                                                    var_c0, var_b8, 0)
                                                
                                                if (result s>= 0)
                                                    int32_t* var_b0
                                                    result = sub_46ea58(arg1, arg3, eax_38, var_b0, 
                                                        var_b4, var_3c, 0)
                                                    
                                                    if (result s>= 0)
                                                        int32_t* var_ac
                                                        result = sub_46ea58(arg1, arg3, eax_33, 
                                                            var_ac, var_c0, var_b0, 0)
                                                        
                                                        if (result s>= 0)
                                                            int32_t* var_a8
                                                            result = sub_46ea58(arg1, arg3, eax_38, 
                                                                var_a8, var_ac, var_38, 0)
                                                            
                                                            if (result s>= 0)
                                                                int32_t* var_a4
                                                                result = sub_46ea58(arg1, arg3, eax_33, 
                                                                    var_a4, var_c0, var_a8, 0)
                                                                
                                                                if (result s>= 0)
                                                                    int32_t* var_a0
                                                                    result = sub_46ea58(arg1, arg3, eax_38, 
                                                                        var_a0, var_a4, var_34, 0)
                                                                    
                                                                    if (result s>= 0)
                                                                        int32_t* var_9c
                                                                        result = sub_46ea58(arg1, arg3, eax_33, 
                                                                            var_9c, var_c4, var_a0, 0)
                                                                        
                                                                        if (result s>= 0)
                                                                            void* eax_48 = eax_18 | 0x20200000
                                                                            int32_t* var_98
                                                                            result = sub_46ea58(arg1, arg3, eax_48, 
                                                                                var_98, var_d4, var_dc, 0x17)
                                                                            
                                                                            if (result s>= 0)
                                                                                int32_t* var_94
                                                                                result = sub_46ea58(arg1, arg3, eax_33, 
                                                                                    var_94, var_9c, var_30, 0)
                                                                                
                                                                                if (result s>= 0)
                                                                                    int32_t* var_90
                                                                                    result = sub_46ea58(arg1, arg3, eax_38, 
                                                                                        var_90, var_94, var_2c, 0)
                                                                                    
                                                                                    if (result s>= 0)
                                                                                        int32_t* var_8c
                                                                                        result = sub_46ea58(arg1, arg3, eax_33, 
                                                                                            var_8c, var_90, var_98, 0)
                                                                                        
                                                                                        if (result s>= 0)
                                                                                            int32_t* var_88
                                                                                            result = sub_46ea58(arg1, arg3, eax_38, 
                                                                                                var_88, var_8c, var_9c, 0)
                                                                                            
                                                                                            if (result s>= 0)
                                                                                                int32_t* var_78
                                                                                                result = sub_46ea58(arg1, arg3, eax_48, 
                                                                                                    var_78, arg5, var_d8, 0x17)
                                                                                                
                                                                                                if (result s>= 0)
                                                                                                    int32_t* var_74
                                                                                                    result = sub_46ea58(arg1, arg3, eax_33, 
                                                                                                        var_74, var_78, var_28, 0)
                                                                                                    
                                                                                                    if (result s>= 0)
                                                                                                        int32_t* var_70
                                                                                                        result = sub_46ea58(arg1, arg3, eax_38, 
                                                                                                            var_70, var_88, var_74, 0)
                                                                                                        
                                                                                                        if (result s>= 0)
                                                                                                            int32_t* var_6c
                                                                                                            result = sub_46ea58(arg1, arg3, eax_26, 
                                                                                                                var_6c, arg4, arg5, 0)
                                                                                                            
                                                                                                            if (result s>= 0)
                                                                                                                int32_t* var_68
                                                                                                                result = sub_46ea58(arg1, arg3, eax_21, 
                                                                                                                    var_68, arg4, arg5, 0)
                                                                                                                
                                                                                                                if (result s>= 0)
                                                                                                                    int32_t* var_64
                                                                                                                    result = sub_46ea58(arg1, arg3, 
                                                                                                                        var_10_2, var_64, var_6c, nullptr, 0)
                                                                                                                    
                                                                                                                    if (result s>= 0)
                                                                                                                        int32_t* var_60
                                                                                                                        result = sub_46ea58(arg1, arg3, eax_48, 
                                                                                                                            var_60, var_6c, var_64, 0x17)
                                                                                                                        
                                                                                                                        if (result s>= 0)
                                                                                                                            int32_t* var_5c
                                                                                                                            result = sub_46ea58(arg1, arg3, 
                                                                                                                                var_10_2, var_5c, var_68, nullptr, 0)
                                                                                                                            
                                                                                                                            if (result s>= 0)
                                                                                                                                int32_t* var_58
                                                                                                                                result = sub_46ea58(arg1, arg3, 
                                                                                                                                    eax_18 | 0x20300000, var_58, var_68, 
                                                                                                                                    var_5c, 0x17)
                                                                                                                                
                                                                                                                                if (result s>= 0)
                                                                                                                                    int32_t* var_54
                                                                                                                                    result = sub_46ea58(arg1, arg3, eax_33, 
                                                                                                                                        var_54, var_60, var_58, 0x17)
                                                                                                                                    
                                                                                                                                    if (result s>= 0)
                                                                                                                                        int32_t* var_50
                                                                                                                                        result = sub_46ea58(arg1, arg3, eax_38, 
                                                                                                                                            var_50, var_70, var_70, 0)
                                                                                                                                        
                                                                                                                                        if (result s>= 0)
                                                                                                                                            int32_t* var_4c
                                                                                                                                            result = sub_46ea58(arg1, arg3, 
                                                                                                                                                var_10_2, var_4c, var_50, nullptr, 0)
                                                                                                                                            
                                                                                                                                            if (result s>= 0)
                                                                                                                                                int32_t* var_48
                                                                                                                                                result = sub_46ea58(arg1, arg3, eax_33, 
                                                                                                                                                    var_48, var_54, var_4c, 0)
                                                                                                                                                
                                                                                                                                                if (result s>= 0)
                                                                                                                                                    int32_t var_118_11 = 0
                                                                                                                                                    var_11c = var_48
                                                                                                                                                    var_120_1 = var_70
                                                                                                                                                    var_124_1 = arg6
                                                                                                                                                    var_128 = eax_38
                                                                                                                                                label_470b50:
                                                                                                                                                    result = sub_46ea58(arg1, arg3, 
                                                                                                                                                        var_128, var_124_1, var_120_1, var_11c, 
                                                                                                                                                        0, arg2.b)
                                                                                                                                                    
                                                                                                                                                    if (result s>= 0)
                                                                                                                                                        result = 0
else
    result = 0x8007000e

j__free(var_20)
return result
