// 函数: sub_6ffb00
// 地址: 0x6ffb00
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* edx = data_4ebe4a8
int32_t* i = *edx

while (i != edx)
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

sub_688290(&data_4ebe4a8, edx[1])
void* eax = data_4ebe4a8
*(eax + 4) = eax
int32_t* eax_1 = data_4ebe4a8
*eax_1 = eax_1
void* result = data_4ebe4a8
*(result + 8) = result
data_4ebe4ac = 0
return result
