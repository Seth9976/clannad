// 函数: sub_5dcbe0
// 地址: 0x5dcbe0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t i = 0

if ((*(arg1 + 0x1b0) - *(arg1 + 0x1ac)) s/ 0x3b4 s> 0)
    int32_t esi_2 = 0
    
    do
        sub_5db390(*(arg1 + 0x1ac) + esi_2)
        i += 1
        esi_2 += 0x3b4
    while (i s< (*(arg1 + 0x1b0) - *(arg1 + 0x1ac)) s/ 0x3b4)

int32_t* result = *(arg1 + 0x1b8)
int32_t* i_1 = *result

if (i_1 != result)
    do
        __builtin_memset(&i_1[6], 0, 0x36)
        i_1[0x14] = 0
        int32_t* edi = i_1[0x15]
        i_1[0x15] = 0
        
        if (edi != 0)
            result = &edi[1]
            bool cond:0_1 = *result != 1
            *result
            *result -= 1
            
            if (not(cond:0_1))
                (*(*edi + 4))()
                result = &edi[2]
                bool cond:1_1 = *result != 1
                *result
                *result -= 1
                void* ecx_3
                
                if (not(cond:1_1))
                    result, ecx_3 = (*(*edi + 8))()
        
        if (*(i_1 + 0xd) == 0)
            int32_t* i_2 = i_1[2]
            
            if (*(i_2 + 0xd) != 0)
                result = i_1[1]
                
                if (*(result + 0xd) == 0)
                    while (i_1 == result[2])
                        i_1 = result
                        result = result[1]
                        
                        if (*(result + 0xd) != 0)
                            break
                
                i_1 = result
            else
                i_1 = i_2
                result = *i_1
                
                while (*(result + 0xd) == 0)
                    i_1 = result
                    result = *i_1
    while (i_1 != *(arg1 + 0x1b8))

return result
