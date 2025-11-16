// 函数: sub_69db50
// 地址: 0x69db50
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

data_4ebe3a0 = 0
bool cond:0 = data_4ebe384 != 0
data_4ebe390 = 0
data_4ebe3a4 = 0

if (not(cond:0))
    return 0

int32_t* esi = data_4ebe380
int64_t var_c = 0
int32_t edi = 0
int32_t result = 0
int32_t* i = *esi

while (i != esi)
    int32_t eax_3
    int32_t edx_2
    edx_2:eax_3 = sx.q(i[0xe])
    int32_t temp1_1 = data_4ebe390.d
    data_4ebe390.d += eax_3
    data_4ebe390:4 = adc.d(data_4ebe390:4, edx_2, temp1_1 + eax_3 u< temp1_1)
    void* eax_4 = i[0xa]
    
    if (eax_4 != 0 && *(eax_4 + 4) s> 1)
        int32_t eax_7
        int32_t edx_3
        edx_3:eax_7 = sx.q(i[0xe])
        int32_t result_1 = result
        result += eax_7
        edi = adc.d(edi, edx_3, result_1 + eax_7 u< result_1)
    
    if (i[0xc].b == 0)
        data_4ebe3a4 += 1
    else
        data_4ebe3a0 += 1
    
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

int32_t eax_8 = data_4ebe39c
int32_t temp0 = data_4ebe390:4

if (eax_8 s<= temp0 && (eax_8 s< temp0 || data_4ebe398 u< data_4ebe390.d))
    data_4ebe398 = data_4ebe390.d
    data_4ebe39c = data_4ebe390:4

return result
