// 函数: sub_419520
// 地址: 0x419520
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char* var_c = arg1
int32_t edi = arg2
char* eax = sub_4190e0(arg1)

if (eax != 0)
    if (edi == 0 || data_702fc0 == 0)
    label_41971e:
        int32_t ecx_7 = 0
        
        if (data_12dc4bc != 0)
            ecx_7 = 0x1a
            
            if (edi != 0)
                edi = 1
        
        if (sub_4e8000(1, *(eax + 0x20), ecx_7 + 0x19, edi, &data_704898) != 0)
            return 1
    else
        int32_t ecx = 0
        
        if (data_12dc4bc != 0)
            ecx = 0x1a
        
        if (sub_4e76e0(&var_c, *(eax + 0x20), ecx + 0x19, &var_c, &data_704898) != 0)
            int32_t var_1c_1 = *(eax + 0x20)
            char* var_20_2 = arg1
            char const* const var_24_1
            
            if (data_12dc4bc == 0)
                var_24_1 = "%s : Z[%04d]"
            else
                var_24_1 = "%s : Z[%05d]"
            
            sub_4c84d0(&data_7027c0, var_24_1)
            
            if (var_c == 0)
                if (data_702fc0 != 0)
                    int32_t eax_6 = 1
                    
                    if (data_13184f8 == 0)
                        if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
                            eax_6 = 0
                        
                        if (data_13184e4 == 0)
                            eax_6 = 0
                        
                        if (data_1311178 != 0 && data_13184e8:4 == 0)
                            eax_6 = 0
                        
                        if (data_1af174c == 0 && eax_6 != 0)
                            void* var_2c_2 = &data_7027c0
                            sub_55f390(
                                sub_55f1e0(
                                    sub_55ef70(eax_6, data_72d6ac, data_719b6c, &data_613690, 
                                        &data_7027c0), 
                                    data_72d6ac, data_719b6c, &data_613690, &data_7027c0), 
                                data_72d6ac, data_719b6c, &data_613690, &data_7027c0)
            else if (data_702fc0 != 0)
                int32_t eax_3 = 1
                
                if (data_13184f8 == 0)
                    if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
                        eax_3 = 0
                    
                    if (data_13184e4 == 0)
                        eax_3 = 0
                    
                    if (data_1311178 != 0 && data_13184e8:4 == 0)
                        eax_3 = 0
                    
                    if (data_1af174c == 0 && eax_3 != 0)
                        void* var_2c_1 = &data_7027c0
                        sub_55f390(
                            sub_55f1e0(
                                sub_55ef70(eax_3, data_72d6ac, data_719b6c, &data_613658, 
                                    &data_7027c0), 
                                data_72d6ac, data_719b6c, &data_613658, &data_7027c0), 
                            data_72d6ac, data_719b6c, &data_613658, &data_7027c0)
            
            goto label_41971e
    
    sub_418fc0(arg1, *(eax + 0x20))

return 0
