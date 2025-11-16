// 函数: sub_484174
// 地址: 0x484174
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
void* eax = *(arg1 + 0x24)

if (*(eax + 0x24) == 0)
    return 1

int32_t* ebx_1 = *(eax + 0x20)
int32_t edi
int32_t var_14_1 = edi
int32_t var_8_1

if (ebx_1 != 0)
    var_8_1 = 0

int32_t result

if (ebx_1 == 0 || *ebx_1 u<= 0)
label_4841e6:
    result = 0
else
    while (true)
        if (2 == CompareStringA(0x409, 1, **((var_8_1 << 2) + ebx_1[3]), 0xffffffff, *(arg2 + 4), 
                0xffffffff))
            int32_t i = 4
            int32_t* edi_4 = ebx_1[3][var_8_1] + 4
            void* esi_2 = arg2 + 8
            bool cond:3_1 = true
            
            while (i != 0)
                int32_t temp2_1 = *esi_2
                int32_t temp3_1 = *edi_4
                cond:3_1 = temp2_1 == temp3_1
                esi_2 += 4
                edi_4 = &edi_4[1]
                i -= 1
                
                if (temp2_1 != temp3_1)
                    break
            
            if (cond:3_1)
                result = 1
                break
        
        var_8_1 += 1
        
        if (var_8_1 u>= *ebx_1)
            goto label_4841e6

return result
