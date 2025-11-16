// 函数: sub_6d7f60
// 地址: 0x6d7f60
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

char result = arg1[2].b

if (result == 6)
    int32_t i_4 = *arg1
    
    if (*(arg1 + 9) != 8)
        if (i_4 != 0)
            int32_t i
            
            do
                arg2 += 8
                *(arg2 - 2) = 0xff - *(arg2 - 2)
                result = 0xff - *(arg2 - 1)
                *(arg2 - 1) = result
                i = i_4
                i_4 -= 1
            while (i != 1)
    else if (i_4 != 0)
        int32_t i_1
        
        do
            arg2 += 4
            result = 0xff - *(arg2 - 1)
            *(arg2 - 1) = result
            i_1 = i_4
            i_4 -= 1
        while (i_1 != 1)
else if (result == 4)
    if (*(arg1 + 9) != 8)
        int32_t i_5 = *arg1
        
        if (i_5 != 0)
            int32_t i_2
            
            do
                arg2 += 4
                *(arg2 - 2) = 0xff - *(arg2 - 2)
                result = 0xff - *(arg2 - 1)
                *(arg2 - 1) = result
                i_2 = i_5
                i_5 -= 1
            while (i_2 != 1)
    else
        int32_t i_6 = *arg1
        void* ecx = arg2
        
        if (i_6 != 0)
            int32_t i_3
            
            do
                arg2 += 2
                *(arg2 - 2) = *ecx
                ecx += 2
                result = 0xff - *(ecx - 1)
                *(arg2 - 1) = result
                i_3 = i_6
                i_6 -= 1
            while (i_3 != 1)

return result
