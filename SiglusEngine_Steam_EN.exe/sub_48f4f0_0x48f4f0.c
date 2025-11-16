// 函数: sub_48f4f0
// 地址: 0x48f4f0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_c = arg3
int32_t* var_c_1 = arg3
LRESULT esi

if (data_702fc0 == 0 || arg7 == 4)
    esi = arg5
else
    esi = arg5
    char* eax_1
    
    if (esi != 0xffffffff)
        LRESULT var_1c_2 = esi
        void* var_20_2 = arg4
        int32_t var_24_1 = *arg3
        eax_1 = sub_4c84d0(&data_7027c0, "Seen%04d ")
    else
        void* var_1c_1 = arg4
        int32_t var_20_1 = *arg3
        esi = 0
        eax_1 = sub_4c84d0(&data_7027c0, "Seen%04d ")
    
    int32_t ecx = 8
    
    if (arg7 u<= 7)
        ecx = arg7
    
    sub_55fa50(eax_1, &data_7027c0, (&data_6114f8)[ecx], 0, *((ecx << 2) + &data_610f84))
    arg3 = var_c_1

int32_t eax_3 = arg2[8] - arg2[6]
arg3[2] = eax_3
sub_4d1c30(eax_3, arg2[6] + eax_3, &arg3[5], 0x20)

if (sub_48e950(sub_48ef60(var_c_1, arg2), arg2, var_c_1, arg4, 0) == 0)
    if (data_702fc0 != 0)
        int32_t eax_19 = 8
        
        if (arg7 u<= 7)
            eax_19 = arg7
        
        int32_t var_1c_5 = (&data_6114f8)[eax_19]
        char* eax_20 = sub_4c84d0(&data_7027c0, 0x613844)
        
        if (data_702fc0 != 0)
            sub_55f390(
                sub_55f1e0(sub_55ef70(eax_20, data_72d6ac, data_719b6c, &data_7027c0, nullptr), 
                    data_72d6ac, data_719b6c, &data_7027c0, nullptr), 
                data_72d6ac, data_719b6c, &data_7027c0, nullptr)
            sub_4a1e40(3)
    
    *arg2 = 1
    return 0

int32_t eax_6 = 0

if (arg2[1] != 0)
    if (esi == 0xffffffff)
        eax_6 = *(arg2[3] + 0x2c)
    else if (esi == 0xfffffffe)
        eax_6 = *(arg2[3] + 0x30)
    else if (esi s< 0x64)
        eax_6 = *(arg2[3] + (esi << 2) + 0x34)

sub_48f070(eax_6, arg2, var_c_1, arg4, esi, eax_6, 1, arg7)

if (arg6 != 0 && arg7 == 0)
    if (arg6 != 1)
        return 2
    
    data_1af1728 = arg7
    
    if (data_7035c8 != arg7 && data_976f94 != arg7)
        void* eax_11 = data_976f9c
        
        if (data_12a2934 != arg7)
            if (*(eax_11 + 0x1cc) == 2)
                return 1
            
            goto label_48f66d
        
        if (*(eax_11 + 0x1cc) == 1)
        label_48f66d:
            int32_t eax_13 = sub_57fac0(0)
            
            if (eax_13 == 0 && data_1311178 == eax_13 && data_13926a4 == eax_13
                    && data_13926a0 == eax_13 && data_702fe4 == eax_13 && data_702fd8 == eax_13
                    && data_702fcc == eax_13 && data_91e8fc s< 0x80 && sub_475310() == 0)
                var_c_1[2] = arg2[8] - arg2[6]
                sub_4977f0(6, nullptr)

return 1
