// 函数: sub_45e320
// 地址: 0x45e320
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* i_4 = arg3[4]
int32_t* i_1 = i_4

if (i_4 s> 0)
    arg1 = arg3[3]
    
    if (arg1 != 0)
        arg3.b = 0
        char var_6 = 1
        char var_5 = 0
        
        if (i_4 s> 0)
            int32_t* i_5 = i_1
            int32_t* i_2 = i_1
            int32_t* i_3 = i_1
            int32_t* i_6 = i_1
            int32_t* i
            
            do
                arg3 = arg1[0x15]
                
                if (arg3 != 0xffffffff || arg1[0x16] != arg3 || arg1[0x17] != arg3
                        || arg1[0x18] != arg3)
                    if (var_6 == 0)
                        if (arg3 s< i_3)
                            i_3 = arg3
                        
                        arg3 = arg1[0x18]
                        
                        if (arg1[0x16] s< i_6)
                            i_6 = arg1[0x16]
                        
                        if (arg1[0x17] s> i_5)
                            i_5 = arg1[0x17]
                        
                        if (arg3 s> i_2)
                            i_2 = arg3
                    else
                        i_6 = arg1[0x16]
                        i_3 = arg3
                        i_5 = arg1[0x17]
                        i_2 = arg1[0x18]
                        var_5 = 1
                        var_6 = 0
                
                arg1 += *arg1
                i = i_1
                i_1 -= 1
            while (i != 1)
            arg3.b = var_5
            
            if (arg3.b != 0)
                if (*arg2 == 0xffffffff && *arg4 == 0xffffffff && *arg5 == 0xffffffff
                        && *arg6 == 0xffffffff)
                    *arg2 = i_3
                    *arg4 = i_6
                    *arg5 = i_5
                    int32_t* ecx_1
                    ecx_1.b = var_5
                    *arg6 = i_2
                    int32_t* eax_2
                    eax_2.b = ecx_1.b
                    return eax_2
                
                arg1 = arg6
                
                if (i_3 s< *arg2)
                    *arg2 = i_3
                    arg1 = arg6
                
                if (i_6 s< *arg4)
                    *arg4 = i_6
                
                if (i_5 s> *arg5)
                    *arg5 = i_5
                
                if (i_2 s> *arg1)
                    *arg1 = i_2
                
                arg3.b = var_5
        
        arg1.b = arg3.b
        return arg1

arg1.b = 0
return arg1
