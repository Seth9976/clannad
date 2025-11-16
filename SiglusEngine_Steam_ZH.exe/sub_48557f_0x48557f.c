// 函数: sub_48557f
// 地址: 0x48557f
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_10 = edi
int32_t* edi_1 = arg2
int32_t i = 4
int32_t* esi = arg1 + 0x10
bool cond:1 = false

while (i != 0)
    int32_t temp1_1 = *esi
    int32_t temp2_1 = *edi_1
    cond:1 = temp1_1 != temp2_1
    esi = &esi[1]
    edi_1 = &edi_1[1]
    i -= 1
    
    if (temp1_1 != temp2_1)
        break

void* result

if (cond:1)
    int32_t i_1 = 0
    
    if (*(arg1 + 0x34) u> 0)
        do
            if ((*(**(*(arg1 + 0x40) + (i_1 << 2)) + 0xc))(arg2, arg3).b != 0)
                goto label_4855a6
            
            i_1 += 1
        while (i_1 u< *(arg1 + 0x34))
    
    result.b = 0
else
    int32_t eax_1 = neg.d(arg1 - 4)
    *arg3 = sbb.d(eax_1, eax_1, arg1 != 4) & arg1
label_4855a6:
    result.b = 1

return result
