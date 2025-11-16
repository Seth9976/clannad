// 函数: sub_411d9a
// 地址: 0x411d9a
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax_1 = arg4 - arg5
int32_t edi
int32_t var_58 = edi
int32_t var_8 = 0
int32_t var_18 = 0xffffffff
int32_t var_14 = 0xffffffff
int32_t var_1c = 0xffffffff
int32_t var_20 = 0xffffffff
int32_t result_1 = sub_40c3aa(arg1)
int32_t result = result_1

if (result_1 s>= 0)
    int32_t result_2 = sub_410dfd(arg2, arg6, arg7, 0)
    result = result_2
    
    if (result_2 s>= 0)
        arg7 = 0
        int32_t edi_1 = sub_40c2e9(arg2)
        bool cond:2_1 = edi_1 != 0xffffffff
        
        while (true)
            var_18 = edi_1
            
            if (not(cond:2_1))
                break
            
            int32_t* ecx_4 = *(arg2 + 4) + edi_1 * 0xc
            int32_t eax_4 = *ecx_4
            int32_t eax_5
            
            if (eax_4 != 0xffffffff)
                eax_5 = eax_4 - *(arg2 + 0x1c)
            
            int32_t var_14_1
            
            if (eax_4 == 0xffffffff || *(*(arg2 + 0x18) + eax_5 * 0xc) != 0)
                int32_t eax_7 = ecx_4[1]
                int32_t eax_8
                
                if (eax_7 != 0xffffffff)
                    eax_8 = eax_7 - *(arg2 + 0x1c)
                
                if (eax_7 == 0xffffffff || *(*(arg2 + 0x18) + eax_8 * 0xc) != 0)
                    var_14_1 = 0
                else
                    var_14_1 = 2
            else
                var_14_1 = 1
            
        label_411e50:
            
            if (var_20 != 0xffffffff)
                arg5 = 1
                int32_t var_28 = edi_1
                int32_t var_24_1 = var_14_1
                
                while (true)
                    void var_30
                    int32_t* eax_14 = sub_40d1d1(&var_30, &var_28, arg2)
                    int32_t ecx_6 = *eax_14
                    int32_t edx_2 = eax_14[1]
                    
                    if (ecx_6 == 0xffffffff)
                        break
                    
                    if (*(*(arg2 + 0x18) + (ecx_6 - *(arg2 + 0x1c)) * 0xc) != 0)
                        break
                    
                    arg5 += 1
                    var_28 = ecx_6
                    int32_t var_24_2 = edx_2
                
                if (arg5 + var_8 - 1 s> eax_1)
                    if (*(*(arg2 + 0x18) + (var_20 - *(arg2 + 0x1c)) * 0xc) == 0)
                        edi_1 = var_20
                        var_18 = edi_1
                        int32_t var_14_2 = var_1c
                    
                    var_20 = 0xffffffff
            
            while (true)
                sub_410eeb(arg2, edi_1)
                int32_t ecx_11 = arg7 + arg6
                arg7 += 1
                *(arg3 + (edi_1 << 2)) = ecx_11
                
                for (int32_t i = 0; i u< 3; i += 1)
                    sub_4102ab(arg1, *(arg8 + edi_1 * 0xc + (i << 2)), &arg4:3)
                    var_8 += 1 - zx.d(arg4:3.b)
                
                void var_38
                int32_t* eax_25 = sub_40d1d1(&var_38, &var_18, arg2)
                int32_t edi_3 = *eax_25
                int32_t var_3c_1 = eax_25[1]
                void var_50
                void var_48
                int32_t* eax_28 = sub_40d1d1(&var_50, sub_40d21d(&var_48, &var_18), arg2)
                int32_t ecx_15 = *eax_28
                int32_t var_3c_2 = eax_28[1]
                int32_t edi_4
                
                if (edi_3 != 0xffffffff)
                    edi_4 = edi_3 - *(arg2 + 0x1c)
                
                int32_t edx_3
                
                if (edi_3 == 0xffffffff || *(*(arg2 + 0x18) + edi_4 * 0xc) != 0)
                    edx_3.b = 0
                else
                    edx_3.b = 1
                
                int32_t ecx_16
                
                if (ecx_15 != 0xffffffff)
                    ecx_16 = ecx_15 - *(arg2 + 0x1c)
                
                if (ecx_15 == 0xffffffff || *(*(arg2 + 0x18) + ecx_16 * 0xc) != 0)
                    ecx_15.b = 0
                else
                    ecx_15.b = 1
                
                if (edx_3.b == 0)
                    if (ecx_15.b != 0)
                        edi_1 = *eax_28
                        int32_t eax_37 = eax_28[1]
                        var_18 = edi_1
                        var_14_1 = eax_37
                        goto label_411e50
                    
                    edi_1 = var_20
                    var_20 = 0xffffffff
                    var_18 = edi_1
                    int32_t var_14_4 = var_1c
                    
                    if (edi_1 != 0xffffffff
                            && *(*(arg2 + 0x18) + (edi_1 - *(arg2 + 0x1c)) * 0xc) == 0)
                        continue
                    
                    edi_1 = sub_40c2e9(arg2)
                    cond:2_1 = edi_1 != 0xffffffff
                    break
                
                if (ecx_15.b != 0 && var_20 == 0xffffffff)
                    var_8 = 0
                    var_20 = *eax_28
                    var_1c = eax_28[1]
                
                edi_1 = *eax_25
                int32_t eax_30 = eax_25[1]
                var_18 = edi_1
                int32_t var_14_3 = eax_30

return result
