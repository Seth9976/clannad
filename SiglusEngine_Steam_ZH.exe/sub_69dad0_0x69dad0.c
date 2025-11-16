// 函数: sub_69dad0
// 地址: 0x69dad0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (data_4ebe384 == 0)
    return 0

int32_t* ecx = data_4ebe380
int32_t result = 0
int32_t* i = *ecx

while (i != ecx)
    void* edx_1 = i[0xa]
    
    if (edx_1 != 0 && *(edx_1 + 4) s> 1)
        result += 1
    
    if (*(i + 0xd) == 0)
        int32_t* i_1 = i[2]
        
        if (*(i_1 + 0xd) != 0)
            int32_t* i_3 = i[1]
            
            if (*(i_3 + 0xd) == 0)
                while (i == i_3[2])
                    i = i_3
                    i_3 = i_3[1]
                    
                    if (*(i_3 + 0xd) != 0)
                        break
            
            i = i_3
        else
            i = i_1
            int32_t* i_2 = *i
            
            while (*(i_2 + 0xd) == 0)
                i = i_2
                i_2 = *i

return result
