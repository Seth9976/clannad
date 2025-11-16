// 函数: sub_753dd3
// 地址: 0x753dd3
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int16_t* result = arg1
int16_t i = *result

if (i != 0)
    int16_t j_1 = *arg2
    
    do
        int16_t* esi_1 = arg2
        
        if (j_1 != 0)
            int16_t j = j_1
            
            do
                if (j == i)
                    return result
                
                esi_1 = &esi_1[1]
                j = *esi_1
            while (j != 0)
        
        result = &result[1]
        i = *result
    while (i != 0)

return nullptr
