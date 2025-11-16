// 函数: sub_641c90
// 地址: 0x641c90
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg1
int32_t* i = arg3
int32_t* esi = *arg1

if (i == *esi && arg4 == esi)
    sub_6422e0(arg1)
    *arg2 = **arg1
    return arg2

for (; i != arg4; i = arg3)
    int32_t* i_1 = i
    
    if (*(i + 0xd) == 0)
        int32_t* i_2 = i[2]
        
        if (*(i_2 + 0xd) != 0)
            i_2 = i[1]
            
            if (*(i_2 + 0xd) == 0)
                while (i == i_2[2])
                    i = i_2
                    arg3 = i
                    i_2 = i_2[1]
                    
                    if (*(i_2 + 0xd) != 0)
                        break
        else
            int32_t* i_3 = *i_2
            
            while (*(i_3 + 0xd) == 0)
                i_2 = i_3
                i_3 = *i_2
        
        arg3 = i_2
    
    sub_642090(arg1, &var_8, i_1)

*arg2 = i
return arg2
