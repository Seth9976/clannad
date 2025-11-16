// 函数: sub_446550
// 地址: 0x446550
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* ebx = arg5
void* esi = arg2
int32_t edi = arg3

if (esi s> ebx)
    arg1 = esi
    esi = ebx
    ebx = arg1

if (edi == arg4 && edi s< 0x82)
    arg1 = (&data_63ecb0)[edi]

if (edi == arg4 && edi s< 0x82 && arg1 s> 0 && *((edi << 2) + &data_610fb0) == 0 && esi s>= 0
        && esi s< arg1 && ebx s>= 0 && ebx s< arg1)
    void* var_14_1
    
    if (arg6 != 0)
        var_14_1 = &data_1606c30
    
    if (arg6 == 0 || data_187a5c0 == 0)
        var_14_1 = nullptr
    
    void* var_10_1
    
    if (arg7 != 0)
        var_10_1 = &data_13932a0
    
    if (arg7 == 0 || data_139319c == 0)
        var_10_1 = nullptr
    
    void* i_2 = ebx - esi + 1
    
    if (*((edi << 2) + &data_6111b8) != 0)
        if (i_2 s> 0)
            void* i
            
            do
                int32_t var_24_3 = arg3
                arg3 = sub_4a4ac0(arg1, edi, 0x988ea4, esi)
                
                if (var_14_1 != 0)
                    int32_t var_24_4 = arg3
                    arg3 = sub_4a4ac0(var_14_1, edi, var_14_1 + 0x1317c, esi)
                
                arg1 = var_10_1
                
                if (arg1 != 0)
                    int32_t var_24_5 = arg3
                    arg1, arg3 = sub_4a4ac0(arg1, edi, arg1 + 0x1317c, esi)
                
                esi += 1
                i = i_2
                i_2 -= 1
            while (i != 1)
        
        if (data_702fc0 != 0)
            if (edi == 0xc || edi == 0x12)
                int32_t esi_1 = (&data_63ecb0)[edi]
                
                if (esi_1 s> 0 && sub_4a49e0(0x988ea4, edi) s< esi_1)
                    sub_4a4370(edi)
            
            if (var_14_1 != 0)
                sub_4a45e0(var_14_1 + 0x1317c, edi)
            
            if (var_10_1 != 0)
                sub_4a45e0(var_10_1 + 0x1317c, edi)
    else if (i_2 s> 0)
        void* i_1
        
        do
            int32_t var_c
            sub_4e8000(sub_4e76e0(&var_c, esi, edi, &var_c, &data_704898), esi, edi, var_c, 
                0x9778a0)
            
            if (var_14_1 != 0)
                sub_4e8000(var_14_1 + 0x16d8, esi, edi, var_c, var_14_1 + 0x16d8)
            
            if (var_10_1 != 0)
                sub_4e8000(var_10_1 + 0x16d8, esi, edi, var_c, var_10_1 + 0x16d8)
            
            esi += 1
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
else if (data_702fc0 != 0)
    sub_55f390(
        sub_55f1e0(sub_55ef70(arg1, data_72d6ac, data_719b6c, 0x616b24, 0x616b0c), data_72d6ac, 
            data_719b6c, 0x616b24, 0x616b0c), 
        data_72d6ac, data_719b6c, 0x616b24, 0x616b0c)
    sub_4a1e40(3)
