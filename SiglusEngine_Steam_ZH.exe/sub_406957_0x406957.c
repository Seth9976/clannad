// 函数: sub_406957
// 地址: 0x406957
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = arg1

if (esi != 0)
    int32_t eax_2 = (*(*esi + 0x28))(esi)
    
    if (eax_2 == 3 || eax_2 == 4 || eax_2 == 5)
        int32_t edi
        int32_t var_70_2 = edi
        
        if (arg4 == 0xffffffff)
            void var_64
            int32_t var_4c
            int32_t var_48
            
            if (eax_2 == 3)
                (*(*esi + 0x44))(esi, 0, &var_64)
                
                if ((var_4c & (var_4c - 1)) != 0 || (var_48 & (var_48 - 1)) != 0)
                    arg4 = 0
                label_406a31:
                    
                    arg4 = arg4 == 0 ? 0x80004 : 5
                else
                    arg4 = 5
            else
                int32_t eax_12
                
                if (eax_2 == 4)
                    void var_44
                    (*(*esi + 0x44))(esi, 0, &var_44)
                    int32_t var_34
                    int32_t var_30
                    
                    if ((var_34 & (var_34 - 1)) != 0 || (var_30 & (var_30 - 1)) != 0)
                        arg4 = 0x80004
                    else
                        int32_t var_2c
                        eax_12 = var_2c
                    label_4069ec:
                        
                        if ((eax_12 & (eax_12 - 1)) == 0)
                            arg4 = 5
                        else
                            arg4 = 0x80004
                else
                    if (eax_2 != 5)
                        goto label_406a31
                    
                    (*(*esi + 0x44))(esi, 0, &var_64)
                    
                    if ((var_4c & (var_4c - 1)) == 0)
                        eax_12 = var_48
                        goto label_4069ec
                    
                    arg4 = 0x80004
        
        if (eax_2 == 5)
            arg4:2.b |= 7
        
        if ((arg4:2.b & 0x40) == 0)
            arg4:2.b &= 0x9f
        else
            arg4:2.b |= 0x60
        
        int32_t eax_20 = (*(*esi + 0x34))(esi)
        
        if (arg3 == 0xffffffff)
            arg3 = 0
        
        int32_t result
        
        if (arg3 u< eax_20)
            arg1 = nullptr
            int32_t eax_21
            eax_21.b = eax_2 != 5
            int32_t* var_c = nullptr
            int32_t* var_8 = nullptr
            int32_t* var_10 = nullptr
            uint32_t eax_26 = zx.d(arg4.b)
            int32_t var_20_1
            
            if (eax_26 != 2)
                var_20_1 = 0
            
            if (eax_26 == 2 || eax_26 == 5)
                var_20_1 = 1
            
            int32_t var_18_1 = 0
            int32_t result_1
            
            if (((eax_21 - 1) & 5) + 1 u<= 0)
            label_406c01:
                result_1 = 0
            else
                result_1 = arg4
                
                while (true)
                    if (eax_2 == 3)
                        result_1 = (*(*esi + 0x48))(esi, arg3, &arg1)
                    else if (eax_2 == 4)
                        result_1 = (*(*esi + 0x48))(esi, arg3, &var_c)
                    else if (eax_2 == 5)
                        result_1 = (*(*esi + 0x48))(esi, var_18_1, arg3, &arg1)
                    
                    if (result_1 s< 0)
                        break
                    
                    int32_t edi_1 = arg3
                    
                    while (true)
                        edi_1 += 1
                        
                        if (edi_1 u>= eax_20)
                            int32_t* eax_52 = arg1
                            
                            if (eax_52 != 0)
                                (*(*eax_52 + 8))(eax_52)
                                arg1 = nullptr
                            
                            int32_t* eax_53 = var_c
                            
                            if (eax_53 != 0)
                                (*(*eax_53 + 8))(eax_53)
                                var_c = nullptr
                            
                            var_18_1 += 1
                            
                            if (var_18_1 u< ((eax_21 - 1) & 5) + 1)
                                break
                            
                            goto label_406c01
                        
                        if (eax_2 == 3)
                            result_1 = (*(*esi + 0x48))(esi, edi_1, &var_8)
                        else if (eax_2 == 4)
                            result_1 = (*(*esi + 0x48))(esi, edi_1, &var_10)
                        else if (eax_2 == 5)
                            result_1 = (*(*esi + 0x48))(esi, var_18_1, edi_1, &var_8)
                        
                        if (result_1 s< 0)
                            goto label_406c03
                        
                        if (eax_2 == 3)
                        label_406b3b:
                            int32_t var_74_9 = 0
                            int32_t var_78_5 = arg4
                            result_1 = sub_4066bb(var_8, arg2, nullptr, arg1, arg2, 0)
                        else if (eax_2 == 4)
                            result_1 = sub_4068cf(var_10, arg2, 0, var_c, arg2, 0, arg4, 0)
                        else if (eax_2 == 5)
                            goto label_406b3b
                        
                        if (result_1 s< 0)
                            goto label_406c03
                        
                        if (var_20_1 == 0)
                            int32_t* eax_50 = var_8
                            
                            if (eax_50 != 0)
                                (*(*eax_50 + 8))(eax_50)
                                var_8 = nullptr
                            
                            int32_t* eax_51 = var_10
                            
                            if (eax_51 == 0)
                                continue
                            else
                                (*(*eax_51 + 8))(eax_51)
                        else
                            int32_t* eax_46 = arg1
                            
                            if (eax_46 != 0)
                                (*(*eax_46 + 8))(eax_46)
                                arg1 = nullptr
                            
                            int32_t* eax_47 = var_c
                            
                            if (eax_47 != 0)
                                (*(*eax_47 + 8))(eax_47)
                            
                            arg1 = var_8
                            int32_t* eax_49 = var_10
                            var_8 = nullptr
                            var_c = eax_49
                        
                        var_10 = nullptr
            
        label_406c03:
            int32_t* eax_55 = arg1
            
            if (eax_55 != 0)
                (*(*eax_55 + 8))(eax_55)
                arg1 = nullptr
            
            int32_t* eax_56 = var_c
            
            if (eax_56 != 0)
                (*(*eax_56 + 8))(eax_56)
                var_c = nullptr
            
            int32_t* eax_57 = var_8
            
            if (eax_57 != 0)
                (*(*eax_57 + 8))(eax_57)
                var_8 = nullptr
            
            int32_t* eax_58 = var_10
            
            if (eax_58 != 0)
                (*(*eax_58 + 8))(eax_58)
            
            result = result_1
        else
            result = 0x8876086c
        
        return result

return 0x8876086c
