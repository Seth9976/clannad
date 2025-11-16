// 函数: sub_4bc3e1
// 地址: 0x4bc3e1
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_5c = edi
int32_t* var_8 = nullptr
int32_t var_10 = 0
int32_t result

if (arg3 u<= 0)
label_4bc83b:
    result = 0
else
    int32_t* var_c_1 = arg2
    
    while (true)
        int32_t* edi_1 = *var_c_1
        
        if (edi_1 != 0)
            int32_t ebx_1 = *edi_1
            int32_t ebx_2 = ebx_1 & 0xfffff
            int32_t var_1c_1 = ebx_2
            int32_t i_4
            int32_t i_5
            void* var_14
            sub_4bc280(arg1, arg4, 4, edi_1, &i_5, &i_4, &var_14, 1, 1)
            
            if (var_14 != 0)
                if (ebx_2 != 2)
                    goto label_4bc504
            else if (ebx_2 == 2)
                int32_t ebx_4 = edi_1[2] + 8
                int32_t* var_20 = sub_4bc188(arg1, *(arg1 + 0x22c), *(arg1 + 0x220), ebx_4, 1, 0)
                int32_t* eax_5 = sub_4bc188(arg1, *(arg1 + 0x22c), *(arg1 + 0x220), ebx_4 + 4, 1, 0)
                int32_t* var_30 = eax_5
                
                if (var_20 != 0 && eax_5 != 0)
                    int32_t var_2c
                    sub_4bc280(arg1, arg4, 4, var_20, &i_5, &i_4, &var_2c, 1, 1)
                    
                    if (var_2c != 0)
                        sub_4bc280(arg1, arg4, 4, var_30, &i_5, &i_4, &var_14, 1, 1)
                        
                        if (var_2c == var_14)
                            ebx_2 = var_1c_1
                        label_4bc504:
                            
                            if (var_14 != 0)
                                int32_t i = 0
                                var_8 = nullptr
                                char* var_60_6
                                
                                if (ebx_2 == 3)
                                    int32_t eax_8 = ebx_1 & 0xfff00000
                                    
                                    if (eax_8 == 0x60f00000 || eax_8 == 0x60a00000)
                                        void* eax_9 = edi_1[2]
                                        int32_t ebx_6 = *(arg1 + 0x14)
                                        i_4 = 1
                                        int32_t* eax_10 = eax_9 + 0xc
                                        
                                        do
                                            void* ecx_7 = *(ebx_6 + (*eax_10 << 2))
                                            
                                            if (*(ecx_7 + 0x10) != i)
                                                i_4 = 0
                                            
                                            int32_t ecx_8 = *(ecx_7 + 0x3c)
                                            
                                            if (ecx_8 != 0 && ecx_8 != 0x60000)
                                                var_60_6 = "cannot match to texreg2rgb instruction "
                                                "because can only have input modifier _bx2"
                                                goto label_4bc89f
                                            
                                            i += 1
                                            eax_10 = &eax_10[1]
                                        while (i u< 3)
                                        
                                        if (i_4 != 0)
                                            if (zx.d((*(arg1 + 0xc8)).w) u< 0x102)
                                                uint32_t var_60_7 = zx.d((*(arg1 + 0xc8)).b)
                                                sub_4a4100(arg1, *(arg2[var_10] + 0x3c), 0x11b8, 
                                                    "expression can only be map to texreg2rgb, but this "
                                                "instruction is not supported on 1_%i")
                                            label_4bc8a7:
                                                return 0x80004005
                                            
                                            void* eax_13 = sub_49ec23(0x74)
                                            
                                            if (eax_13 == 0)
                                                var_8 = nullptr
                                            else
                                                var_8 = sub_49e789(eax_13)
                                            
                                            if (var_8 == 0)
                                            label_4bc8ae:
                                                result = 0x8007000e
                                                break
                                            
                                            result = sub_49ec6e(var_8, 0x72600003, 6, 4, 0)
                                            
                                            if (result s< 0)
                                                break
                                            
                                        label_4bc6a3:
                                            
                                            for (int32_t* i_1 = nullptr; i_1 u< 0x10; i_1 = &i_1[1])
                                                *(i_1 + var_8[4]) = *(i_1 + *(*var_c_1 + 0x10))
                                            
                                            int32_t eax_23 = *(arg1 + 0x14)
                                            void* ecx_23 = *(eax_23 + (**(*var_c_1 + 8) << 2))
                                            int32_t* eax_24 =
                                                *(eax_23 + (*(*(var_14 + 8) + 0xc) << 2))
                                            int32_t i_6
                                            
                                            if ((*(*(*(arg1 + 0x10) + (*(ecx_23 + 4) << 2)) + 5)
                                                    & 8) == 0)
                                                int32_t i_2
                                                
                                                for (i_2 = i_5; i_2 u< 4; i_2 += 1)
                                                    if (*(arg4 + (i_2 << 2)) == 0)
                                                        break
                                                
                                                if (i_2 == 4)
                                                    result = 0x80004005
                                                    break
                                                
                                                i_4 = i_2
                                                *(ecx_23 + 0xc) = i_2
                                                i_6 = i_2
                                            else
                                                i_6 = *(ecx_23 + 0xc)
                                                i_4 = i_6
                                                
                                                if (i_6 u> 3 || *(arg4 + (i_6 << 2)) != 0)
                                                    result = 0x80004005
                                                    break
                                            
                                            void* var_60_1 = ecx_23
                                            void* var_64_1 = ecx_23
                                            var_64_1.q = fconvert.d(float.t(0))
                                            int32_t eax_28 =
                                                sub_49f544(arg1, *(arg1 + 0x80), i_6, 0, var_64_1)
                                            
                                            if (eax_28 == 0xffffffff)
                                                goto label_4bc8ae
                                            
                                            int32_t* ebx_7 = *(*(arg1 + 0x14) + (eax_28 << 2))
                                            int32_t* ecx_26 = ebx_7
                                            sub_49f070(ecx_26, eax_24)
                                            ebx_7[0x1b] = i_6 << 8 | 3
                                            ebx_7[3] = i_6
                                            int32_t ebx_8 = 0
                                            
                                            if (var_1c_1 u> 0)
                                                int32_t var_24_2 = var_1c_1 << 2
                                                
                                                do
                                                    int32_t* var_60_3 = ecx_26
                                                    int32_t* var_64_2 = ecx_26
                                                    var_64_2.q = fconvert.d(float.t(0))
                                                    int32_t* eax_34 = sub_49f544(arg1, 
                                                        *(arg1 + 0x80), i_5, ebx_8, var_64_2)
                                                    
                                                    if (eax_34 == 0xffffffff)
                                                        goto label_4bc8ae
                                                    
                                                    int32_t eax_35 = *(arg1 + 0x14)
                                                    int32_t* edi_7 = *(eax_35 + (eax_34 << 2))
                                                    void* eax_36 = *(eax_35 +
                                                        (*((var_1c_1 << 2) + *(*var_c_1 + 8)) << 2))
                                                    sub_49f070(edi_7, eax_24)
                                                    edi_7[3] = i_5
                                                    edi_7[4] = ebx_8
                                                    edi_7[0xf] = *(eax_36 + 0x3c)
                                                    *(var_8[2] + (ebx_8 << 2)) = eax_28
                                                    int32_t edx_12 = var_24_2
                                                    ecx_26 = eax_34
                                                    var_24_2 += 4
                                                    ebx_8 += 1
                                                    *(edx_12 + var_8[2]) = ecx_26
                                                while (ebx_8 u< var_1c_1)
                                                
                                                i_6 = i_4
                                            
                                            *(arg4 + (i_6 << 2)) = var_8
                                            result = sub_49f431(arg1, var_8)
                                            
                                            if (result s< 0)
                                                break
                                            
                                            *var_c_1 = 0
                                            var_8 = nullptr
                                else if (ebx_2 == 2 && (ebx_1 & 0xfff00000) == 0x60500000)
                                    int32_t i_3 = 0
                                    int32_t edi_2 = 1
                                    int32_t var_48 = 3
                                    int32_t var_44_1 = 0
                                    int32_t var_50 = 1
                                    int32_t var_4c_1 = 2
                                    i_4 = 1
                                    
                                    do
                                        int32_t* eax_16 = var_20
                                        
                                        if (i_3 != 0)
                                            eax_16 = var_30
                                        
                                        void* eax_19 = *(*(arg1 + 0x14) + (*eax_16[2] << 2))
                                        int32_t ecx_12 = *(eax_19 + 0x10)
                                        
                                        if (ecx_12 != (&var_48)[i_3])
                                            i_4 = 0
                                        
                                        if (ecx_12 != (&var_50)[i_3])
                                            edi_2 = 0
                                        
                                        if (*(eax_19 + 0x3c) != 0)
                                            var_60_6 = "cannot match to texreg2ar or texreg2gb "
                                            "instruction because cannot have input modifiers"
                                        label_4bc89f:
                                            sub_4a4100(arg1, *(arg2[var_10] + 0x3c), 0x11b7, 
                                                var_60_6)
                                            goto label_4bc8a7
                                        
                                        i_3 += 1
                                    while (i_3 u< 2)
                                    
                                    if (i_4 != 0 || edi_2 != 0)
                                        void* eax_20 = sub_49ec23(0x74)
                                        
                                        if (eax_20 == 0)
                                            var_8 = nullptr
                                        else
                                            var_8 = sub_49e789(eax_20)
                                        
                                        if (var_8 == 0)
                                            goto label_4bc8ae
                                        
                                        int32_t edi_3 = neg.d(edi_2)
                                        result = sub_49ec6e(var_8, 
                                            (sbb.d(edi_3, edi_3, edi_2 != 0) & 0x100000)
                                                + 0x72700002, 
                                            4, 4, 0)
                                        
                                        if (result s< 0)
                                            break
                                        
                                        goto label_4bc6a3
        
        var_10 += 1
        var_c_1 = &var_c_1[1]
        
        if (var_10 u>= arg3)
            goto label_4bc83b

if (var_8 != 0)
    sub_46cb59(var_8, 1)

return result
