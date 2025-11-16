// 函数: sub_484289
// 地址: 0x484289
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_10 = edi
int32_t* edi_1 = arg2
int32_t i = 4
void* esi = arg1 + 8
bool cond:1 = false

while (i != 0)
    int32_t temp1_1 = *esi
    int32_t temp2_1 = *edi_1
    cond:1 = temp1_1 != temp2_1
    esi += 4
    edi_1 = &edi_1[1]
    i -= 1
    
    if (temp1_1 != temp2_1)
        break

if (not(cond:1))
    return arg1 - 4

int32_t i_1 = 0

if (*(arg1 + 0x24) u> 0)
    do
        void* result = (*(**(*(arg1 + 0x30) + (i_1 << 2)) + 0x1c))(arg2)
        
        if (result != 0)
            return result
        
        i_1 += 1
    while (i_1 u< *(arg1 + 0x24))

return nullptr
