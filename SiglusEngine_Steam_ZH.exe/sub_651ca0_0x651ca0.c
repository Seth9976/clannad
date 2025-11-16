// 函数: sub_651ca0
// 地址: 0x651ca0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* i = arg4

if (i != arg5)
    int32_t esi_1 = *arg3
    
    do
        esi_1 += 1
        
        if (*(i + 0xd) == 0)
            int32_t* i_1 = i[2]
            
            if (*(i_1 + 0xd) != 0)
                int32_t* i_3 = i[1]
                
                if (*(i_3 + 0xd) == 0)
                    while (i == i_3[2])
                        i = i_3
                        arg4 = i
                        i_3 = i_3[1]
                        
                        if (*(i_3 + 0xd) != 0)
                            break
                
                i = i_3
            else
                i = i_1
                int32_t* i_4 = *i
                
                if (*(i_4 + 0xd) == 0)
                    int32_t* i_2 = i_4
                    
                    do
                        i = i_2
                        i_2 = *i
                    while (*(i_2 + 0xd) == 0)
            
            arg4 = i
    while (i != arg5)
    
    *arg3 = esi_1

return i
