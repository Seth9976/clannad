// 函数: sub_4677ab
// 地址: 0x4677ab
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* result = arg1
char edx = *(result + 8)

if ((edx & 2) != 0)
    int32_t i_8 = *result
    result.b = *(result + 9)
    
    if (result.b != 8)
        if (result.b == 0x10)
            if (edx != 2)
                if (edx == 6 && i_8 u> 0)
                    result = arg2 + 1
                    int32_t i_7 = i_8
                    int32_t i
                    
                    do
                        i_8.b = *(result - 1)
                        *(result - 1) = *(result + 3)
                        edx = *(result + 4)
                        *(result + 3) = i_8.b
                        i_8.b = *result
                        *result = edx
                        *(result + 4) = i_8.b
                        result += 8
                        i = i_7
                        i_7 -= 1
                    while (i != 1)
            else if (i_8 u> 0)
                result = arg2 + 1
                int32_t i_6 = i_8
                int32_t i_1
                
                do
                    i_8.b = *(result - 1)
                    *(result - 1) = *(result + 3)
                    edx = *(result + 4)
                    *(result + 3) = i_8.b
                    i_8.b = *result
                    *result = edx
                    *(result + 4) = i_8.b
                    result += 6
                    i_1 = i_6
                    i_6 -= 1
                while (i_1 != 1)
    else if (edx == 2)
        result = arg2
        
        if (i_8 u> 0)
            int32_t i_4 = i_8
            int32_t i_2
            
            do
                edx = *result
                i_8.b = *(result + 2)
                *result = i_8.b
                *(result + 2) = edx
                result += 3
                i_2 = i_4
                i_4 -= 1
            while (i_2 != 1)
    else if (edx == 6)
        result = arg2
        
        if (i_8 u> 0)
            int32_t i_5 = i_8
            int32_t i_3
            
            do
                edx = *result
                i_8.b = *(result + 2)
                *result = i_8.b
                *(result + 2) = edx
                result += 4
                i_3 = i_5
                i_5 -= 1
            while (i_3 != 1)

return result
