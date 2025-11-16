// 函数: sub_4856a0
// 地址: 0x4856a0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (data_13702a0 == 0)
    if (data_13702a2 == 0)
        data_f8995c = 0xffffff9d
    else
        int32_t eax_2 = data_f89958
        
        if (eax_2 s< 0xffffffff)
            eax_2 = 0
            
            if (eax_2 != data_f8995c)
                goto label_485868
        else if (eax_2 s< 0 || eax_2 != data_f8995c)
        label_485868:
            data_f8995c = 0xffffff9d
            sub_445260()
            return 
        
        int32_t var_c_1 = eax_2
        data_715e98 = eax_2
        sub_4c84d0(&data_7027c0, "= %d")
        
        if (data_702fc0 != 0)
            int32_t eax_3 = 1
            
            if (data_13184f8 == 0)
                if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
                    eax_3 = 0
                
                if (data_1311178 != 0 && data_13184e8:4 == 0)
                    eax_3 = 0
                
                if (data_1af174c == 0 && eax_3 != 0)
                    sub_55f390(
                        sub_55f1e0(
                            sub_55ef70(eax_3, data_72d6ac, data_719b6c, 0x61a5ec, &data_7027c0), 
                            data_72d6ac, data_719b6c, 0x61a5ec, &data_7027c0), 
                        data_72d6ac, data_719b6c, 0x61a5ec, &data_7027c0)
        
        bool cond:0_1 = data_1af1768 == 0
        data_13701d8 = 0
        data_137010c = 1
        data_703670 = 0
        data_1372c14 = 1
        data_1af178c = 0
        data_1af1784 = 0
        
        if (not(cond:0_1))
            data_1af177c = 1
            data_1af1768 = 0
        
        sub_48d140()
        int32_t eax = data_1af1788
        
        if (data_71929c == 0x11)
            eax = 1
        
        bool cond:3_1 = data_1370842 == 0
        data_1af1788 = eax
        
        if (not(cond:3_1))
            data_1af4e78 = data_131d2cc
            int32_t eax_7 = data_1320e58
            data_1af1790 = 1
            data_1af4e74 = eax_7
else if (data_f8995c == 0xffffff9d)
    int32_t eax_1 = data_f89958
    
    if (eax_1 s< 0xffffffff)
        eax_1 = 0
    
    data_f8995c = eax_1
