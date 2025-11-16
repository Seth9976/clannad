// 函数: sub_6333e0
// 地址: 0x6333e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg1 != arg2)
    int32_t* i_1 = arg1
    
    for (int32_t* i = &arg1[2]; i != arg2; i = &i[2])
        if (*i_1 == *i && i_1[1] == i[1])
            for (void* j = &i[2]; j != arg2; j += 8)
                if (*i_1 != *j || i_1[1] != *(j + 4))
                    i_1 = &i_1[2]
                    *i_1 = *j
                    i_1[1] = *(j + 4)
            
            return &i_1[2]
        
        i_1 = i

return arg2
