// 函数: sub_4d7940
// 地址: 0x4d7940
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t i = 0
int32_t i_2 = 0xffffffff
int32_t i_1 = 0xffffffff

if (data_20c3e30 s> 0)
    void* ecx = &data_20c39bc
    int32_t var_20
    arg1 = var_20
    void* var_8_1 = &data_20c39bc
    int32_t var_14
    int32_t var_10
    
    do
        if (arg3[1] s< *ecx + 6)
            int32_t ecx_4 = *(var_8_1 - 8)
            
            if (arg3[3] s> ecx_4 - 6)
                int32_t ecx_7 = *(var_8_1 - 4)
                
                if (*arg3 s< ecx_7 + 6)
                    int32_t ecx_10 = *(var_8_1 - 0xc)
                    
                    if (arg3[2] s> ecx_10 - 6)
                        if (arg4 == 3 || arg4 == 4 || arg4 == 5)
                            int32_t ecx_12 = arg3[1]
                            
                            if (ecx_4 - ecx_12 + 6 u<= 0xc)
                                i_1 = i
                                var_10 = 0
                            
                            arg1 = *var_8_1 - ecx_12
                            
                            if (arg1 + 6 u<= 0xc)
                                i_1 = i
                                var_10 = 1
                        
                        if (arg4 == 6 || arg4 == 7 || arg4 == 8)
                            int32_t ecx_14 = arg3[3]
                            
                            if (ecx_4 - ecx_14 + 6 u<= 0xc)
                                i_1 = i
                                var_10 = 2
                            
                            arg1 = *var_8_1 - ecx_14
                            
                            if (arg1 + 6 u<= 0xc)
                                i_1 = i
                                var_10 = 3
                        
                        if (arg4 == 1 || arg4 == 4 || arg4 == 7)
                            int32_t ecx_16 = *arg3
                            
                            if (ecx_10 - ecx_16 + 6 u<= 0xc)
                                i_2 = i
                                var_14 = 0
                            
                            arg1 = ecx_7 - ecx_16
                            
                            if (arg1 + 6 u<= 0xc)
                                i_2 = i
                                var_14 = 1
                        
                        if (arg4 == 2 || arg4 == 5 || arg4 == 8)
                            int32_t ecx_18 = arg3[2]
                            
                            if (ecx_10 - ecx_18 + 6 u<= 0xc)
                                i_2 = i
                                var_14 = 2
                            
                            arg1 = ecx_7 - ecx_18
                            
                            if (arg1 + 6 u<= 0xc)
                                i_2 = i
                                var_14 = 3
        
        i += 1
        ecx = var_8_1 + 0x10
        var_8_1 = ecx
    while (i s< data_20c3e30)
    
    if (i_1 != 0xffffffff)
        int32_t ecx_24
        
        if (var_10 u> 3)
            ecx_24 = arg3[1]
        else
            switch (var_10)
                case 0
                    ecx_24 = arg3[1]
                    arg1 = *((i_1 << 4) + 0x20c39b4) - ecx_24
                case 1
                    ecx_24 = arg3[1]
                    arg1 = *((i_1 << 4) + &data_20c39bc) - ecx_24
                case 2
                    arg1 = *((i_1 << 4) + 0x20c39b4) - arg3[3]
                    ecx_24 = arg3[1]
                case 3
                    arg1 = *((i_1 << 4) + &data_20c39bc) - arg3[3]
                    ecx_24 = arg3[1]
        
        if (arg4 == 3 || arg4 == 4 || arg4 == 5)
            arg3[1] = ecx_24 + arg1
        
        if (arg4 == 6 || arg4 == 7 || arg4 == 8)
            arg3[3] += arg1
    
    if (i_2 != 0xffffffff)
        switch (var_14)
            case 0
                arg1 = *((i_2 << 4) + &data_20c39b0) - *arg3
            case 1
                arg1 = *((i_2 << 4) + 0x20c39b8) - *arg3
            case 2
                arg1 = *((i_2 << 4) + &data_20c39b0) - arg3[2]
            case 3
                arg1 = *((i_2 << 4) + 0x20c39b8) - arg3[2]
        
        if (arg4 == 1 || arg4 == 4 || arg4 == 7)
            *arg3 += arg1
        
        if (arg4 == 2 || arg4 == 5 || arg4 == 8)
            arg3[2] += arg1

sub_4d1c30(arg1, arg3, arg5, 0x10)
