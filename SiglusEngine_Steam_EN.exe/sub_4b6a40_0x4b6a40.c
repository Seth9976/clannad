// 函数: sub_4b6a40
// 地址: 0x4b6a40
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = arg2 + (arg1 << 3)
void* result = eax * 0xff8 + &data_109a7e4
void* result_1 = result

if (*(eax * 0x374 + 0x1b1bd90) == 0 && *(eax * 0x374 + 0x1b1bd94) == 0)
    if (*result != 0 && *(eax * 0x374 + 0x1b1bd98) == 0)
        int32_t eax_2 = sub_4b7200(result, arg2, arg1, nullptr)
        
        if (eax_2 != 1)
            void* result_2 = result_1
            int32_t var_40_2 = arg2
            int32_t var_44_1 = arg1
            
            if (data_702fc0 != 0)
                char* eax_4 = sub_4c84d0(&data_7027c0, 0x618cdc)
                
                if (data_702fc0 != 0)
                    sub_55f390(
                        sub_55f1e0(
                            sub_55ef70(eax_4, data_72d6ac, data_719b6c, 0x618cb0, &data_7027c0), 
                            data_72d6ac, data_719b6c, 0x618cb0, &data_7027c0), 
                        data_72d6ac, data_719b6c, 0x618cb0, &data_7027c0)
                    sub_4a1e40(3)
            else
                sub_4c84d0(&data_7027c0, 0x61c1b0)
                sub_446a50()
            
            *(eax * 0x374 + 0x1b1bd90) = 1
        else
            int32_t eax_3 = sub_427370(eax_2, result_1, eax * 0x374 + 0x1b1bd98, 0xffffffff, 0, 
                eax_2, 0, nullptr, eax_2, 0)
            
            if (*(eax * 0x374 + 0x1b1bd98) != 0)
                sub_4b68c0(eax_3, arg1, eax * 0x374 + 0x1b1bd90, result_1)
                data_137010c = 1
        
        result = result_1
    
    if (*(result + 0x24) != 0 && *(eax * 0x374 + 0x1b1bdb0) == 0)
        int32_t eax_7 = sub_4b7360(result, arg2, arg1, nullptr)
        
        if (eax_7 != 1)
            void* var_3c_4 = result_1 + 0x24
            int32_t var_40_6 = arg2
            int32_t var_44_4 = arg1
            
            if (data_702fc0 != 0)
                char* eax_20 = sub_4c84d0(&data_7027c0, 0x618cf8)
                
                if (data_702fc0 != 0)
                    sub_55f390(
                        sub_55f1e0(
                            sub_55ef70(eax_20, data_72d6ac, data_719b6c, 0x61c3c4, &data_7027c0), 
                            data_72d6ac, data_719b6c, 0x61c3c4, &data_7027c0), 
                        data_72d6ac, data_719b6c, 0x61c3c4, &data_7027c0)
                    sub_4a1e40(3)
            else
                sub_4c84d0(&data_7027c0, 0x61c378)
                sub_446a50()
            
            *(eax * 0x374 + 0x1b1bd90) = 1
        else
            sub_427370(eax_7, result_1 + 0x24, eax * 0x374 + 0x1b1bdb0, 0xffffffff, 0, eax_7, 0, 
                nullptr, eax_7, 0)
            
            if (*(eax * 0x374 + 0x1b1bdb0) != 0)
                sub_4b6980(result_1 + 0x24, arg1, eax * 0x374 + 0x1b1bd90, result_1 + 0x24)
                data_137010c = 1
            
            if (*((arg1 << 2) + &data_12997e4) != 5)
                if (*(eax * 0x374 + 0x1b1c000) != 1)
                    void* var_3c_3 = result_1 + 0x24
                    int32_t var_40_5 = arg2
                    int32_t var_44_3 = arg1
                    
                    if (data_702fc0 != 0)
                        char* eax_15 = sub_4c84d0(&data_7027c0, 0x618cf8)
                        
                        if (data_702fc0 != 0)
                            sub_55f390(
                                sub_55f1e0(
                                    sub_55ef70(eax_15, data_72d6ac, data_719b6c, 0x61c330, 
                                        &data_7027c0), 
                                    data_72d6ac, data_719b6c, 0x61c330, &data_7027c0), 
                                data_72d6ac, data_719b6c, 0x61c330, &data_7027c0)
                            sub_4a1e40(3)
                    else
                        sub_4c84d0(&data_7027c0, &data_61c2c8)
                        sub_446a50()
                else if (*(eax * 0x374 + 0x1b1bd98) != 0 && *(eax * 0x374 + 0x1b1bef8) != 1)
                    void* result_3 = result_1
                    int32_t var_40_4 = arg2
                    int32_t var_44_2 = arg1
                    
                    if (data_702fc0 != 0)
                        char* eax_10 = sub_4c84d0(&data_7027c0, 0x618cdc)
                        
                        if (data_702fc0 != 0)
                            sub_55f390(
                                sub_55f1e0(
                                    sub_55ef70(eax_10, data_72d6ac, data_719b6c, 0x61c270, 
                                        &data_7027c0), 
                                    data_72d6ac, data_719b6c, 0x61c270, &data_7027c0), 
                                data_72d6ac, data_719b6c, 0x61c270, &data_7027c0)
                            sub_4a1e40(3)
                    else
                        sub_4c84d0(&data_7027c0, &data_61c1f8)
                        sub_446a50()
    
    if (*(result_1 + 0x48) != 0 && *(eax * 0x374 + 0x1b1bdc8) == 0xffffffff)
        int32_t eax_25
        uint32_t ecx_18
        eax_25, ecx_18 = sub_4b74c0(result_1 + 0x48, arg2, arg1, nullptr)
        
        if (eax_25 != 1)
            void* var_3c_6 = result_1 + 0x48
            int32_t var_40_8 = arg2
            int32_t var_44_6 = arg1
            
            if (data_702fc0 != 0)
                char* eax_27 = sub_4c84d0(&data_7027c0, 0x618d14)
                
                if (data_702fc0 != 0)
                    sub_55f390(
                        sub_55f1e0(
                            sub_55ef70(eax_27, data_72d6ac, data_719b6c, 0x61c44c, &data_7027c0), 
                            data_72d6ac, data_719b6c, 0x61c44c, &data_7027c0), 
                        data_72d6ac, data_719b6c, 0x61c44c, &data_7027c0)
                    sub_4a1e40(3)
            else
                sub_4c84d0(&data_7027c0, 0x61c3f8)
                sub_446a50()
            
            *(eax * 0x374 + 0x1b1bd90) = 1
        else
            int32_t var_3c_5 = 0
            *(eax * 0x374 + 0x1b1bdc8) =
                sub_4254a0(eax_25, result_1 + 0x48, ecx_18, 0xffffffff, 0, eax_25, eax_25, eax_25)
    
    int32_t i = 0
    void* ecx_23 = result_1 + 0x57c
    int32_t i_3 = 0
    void* var_28_2 = ecx_23
    
    do
        if (*ecx_23 != 0)
            void* eax_33 = (i << 2) + 0x3c + eax * 0x374 + 0x1b1bd90
            
            if (*eax_33 == 0xffffffff)
                int32_t eax_34
                uint32_t ecx_25
                eax_34, ecx_25 = sub_4b75d0(eax_33, arg2, arg1, i, nullptr)
                
                if (eax_34 != 1)
                    void* var_3c_8 = var_28_2
                    int32_t var_40_11 = (&data_611580)[i]
                    int32_t var_44_8 = arg2
                    int32_t var_48_4 = arg1
                    
                    if (data_702fc0 != 0)
                        char* eax_37 = sub_4c84d0(&data_7027c0, 0x618d30)
                        
                        if (data_702fc0 != 0)
                            sub_55f390(
                                sub_55f1e0(
                                    sub_55ef70(eax_37, data_72d6ac, data_719b6c, 0x61c44c, 
                                        &data_7027c0), 
                                    data_72d6ac, data_719b6c, 0x61c44c, &data_7027c0), 
                                data_72d6ac, data_719b6c, 0x61c44c, &data_7027c0)
                            sub_4a1e40(3)
                    else
                        sub_4c84d0(&data_7027c0, 0x61c488)
                        sub_446a50()
                    
                    *(eax * 0x374 + 0x1b1bd90) = 1
                else
                    int32_t var_3c_7 = 0
                    *eax_33 =
                        sub_4254a0(eax_34, var_28_2, ecx_25, 0xffffffff, 0, eax_34, eax_34, eax_34)
                
                i = i_3
                ecx_23 = var_28_2
        
        i += 1
        ecx_23 += 0x24
        i_3 = i
        var_28_2 = ecx_23
    while (i s< 0xa)
    
    int32_t i_1 = 0
    void* edi_3 = result_1 + 0x6e4
    
    do
        for (int32_t j = 0; j s< 8; )
            if (*edi_3 == 0)
                result = eax * 0x374 + 0x1b1bd90
            else
                void* eax_41 = (i_1 << 3) + 0x19 + j
                void* eax_42 = &(eax * 0x374 + 0x1b1bd90)[eax_41]
                
                if ((eax * 0x374 + 0x1b1bd90)[eax_41] != 0xffffffff)
                    result = eax * 0x374 + 0x1b1bd90
                else
                    int32_t eax_43
                    uint32_t ecx_32
                    eax_43, ecx_32 = sub_4b76f0(eax_42, arg2, arg1, i_1, j, nullptr)
                    
                    if (eax_43 != 1)
                        void* var_3c_10 = edi_3
                        int32_t j_1 = j
                        int32_t i_2 = i_1
                        int32_t var_48_6 = arg2
                        int32_t var_4c_3 = arg1
                        
                        if (data_702fc0 != 0)
                            char* eax_45 = sub_4c84d0(&data_7027c0, 0x618d4c)
                            
                            if (data_702fc0 != 0)
                                sub_55f390(
                                    sub_55f1e0(
                                        sub_55ef70(eax_45, data_72d6ac, data_719b6c, 0x61c44c, 
                                            &data_7027c0), 
                                        data_72d6ac, data_719b6c, 0x61c44c, &data_7027c0), 
                                    data_72d6ac, data_719b6c, 0x61c44c, &data_7027c0)
                                sub_4a1e40(3)
                            
                            result = eax * 0x374 + 0x1b1bd90
                            *result = 1
                        else
                            sub_4c84d0(&data_7027c0, 0x61c4e0)
                            
                            if (data_702fc0 != 0 || data_641ad0 s< 6)
                                MessageBoxA(data_7027bc, &data_7027c0, 0x616ce4, MB_OK)
                                result = eax * 0x374 + 0x1b1bd90
                                data_641ad0 += 1
                                *result = 1
                            else
                                result = eax * 0x374 + 0x1b1bd90
                                *result = 1
                    else
                        int32_t var_3c_9 = 0
                        *eax_42 =
                            sub_4254a0(eax_43, edi_3, ecx_32, 0xffffffff, 0, eax_43, eax_43, eax_43)
                        result = eax * 0x374 + 0x1b1bd90
            
            j += 1
            edi_3 += 0x24
        
        i_1 += 1
    while (i_1 s< 8)
    
    *(result + 4) = 1

return result
