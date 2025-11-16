// 函数: sub_69e060
// 地址: 0x69e060
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg1
int32_t* edx = data_4ebe380
int32_t* i = arg3

if (i == *edx && arg4 == edx)
    sub_69df20(&data_4ebe380, edx[1])
    void* eax = data_4ebe380
    *(eax + 4) = eax
    int32_t* eax_1 = data_4ebe380
    *eax_1 = eax_1
    void* eax_2 = data_4ebe380
    *(eax_2 + 8) = eax_2
    int32_t* eax_3 = data_4ebe380
    data_4ebe384 = 0
    *arg2 = *eax_3
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
    
    sub_69dc80(&var_8, i_1)

*arg2 = i
return arg2
