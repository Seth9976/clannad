// 函数: sub_687d70
// 地址: 0x687d70
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg1

if (data_4ebe328 == 0)
    return 

int32_t* ecx = data_4ebe324
int32_t* i = *ecx

if (i == ecx)
    return 

do
    void* ecx_2 = i[0xb]
    
    if (ecx_2 != 0 && *(ecx_2 + 4) == 1)
        int32_t* i_1 = i
        i = *sub_687e10(&data_4ebe324, &var_8)
    else if (*(i + 0xd) == 0)
        int32_t* i_2 = i[2]
        
        if (*(i_2 + 0xd) != 0)
            int32_t* i_4 = i[1]
            
            if (*(i_4 + 0xd) == 0)
                while (i == i_4[2])
                    i = i_4
                    i_4 = i_4[1]
                    
                    if (*(i_4 + 0xd) != 0)
                        break
            
            i = i_4
        else
            i = i_2
            int32_t* i_3 = *i
            
            while (*(i_3 + 0xd) == 0)
                i = i_3
                i_3 = *i
while (i != data_4ebe324)
