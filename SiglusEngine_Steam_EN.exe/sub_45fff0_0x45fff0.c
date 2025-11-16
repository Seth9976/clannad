// 函数: sub_45fff0
// 地址: 0x45fff0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* const var_10
int32_t esi_1

switch (arg3)
    case 0
        if (arg2:1.b u< 0x80 || (arg2:1.b u>= 0xa0 && arg2:1.b u<= 0xdf) || arg2:1.b u>= 0xfe)
            arg1 = data_13570fc
            
            if (arg1 s< 0x18ffe)
                *(arg1 + &data_1357100) = arg2.b
                data_13570fc = arg1 + 1
                data_1cd5368 = 1
                return 
        else
            arg1 = data_13570fc
            
            if (arg1 s< 0x18ffd)
                *(arg1 + &data_1357100) = arg2:1.b
                *(arg1 + 0x1357101) = arg2.b
                data_13570fc = arg1 + 2
                data_1cd5368 = 1
                return 
    case 1
        esi_1 = data_13570fc
        
        if (esi_1 s< 0x18ff7)
            int32_t var_c = arg4
            var_10 = &data_619aa8
        label_460089:
            sub_4c84d0(&(&data_1357100)[esi_1], var_10)
            data_1cd5368 = 1
            data_13570fc = esi_1 + 8
            return 
    case 2
        esi_1 = data_13570fc
        
        if (esi_1 s< 0x18ff7)
            int32_t var_c_1 = arg4
            var_10 = &data_619ab4
            goto label_460089
    case 3
        arg1 = data_13570fc
        
        if (arg1 s< 0x18ffd)
            *(arg1 + &data_1357100) = 0xa0d
            data_13570fc = arg1 + 2

data_1cd5368 = 1
