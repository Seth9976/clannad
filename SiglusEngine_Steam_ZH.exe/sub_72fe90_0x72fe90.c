// 函数: sub_72fe90
// 地址: 0x72fe90
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
int32_t i = 0
int32_t result = *(arg1 + 0x5c)
void* ecx = (result << 1) + 4
void* var_8_1 = ecx

if (*(arg1 + 0x64) s> 0)
    void* edi_1 = *(arg1 + 0x1c0) + 0x44
    
    do
        result = (*(*(arg1 + 4) + 4))(arg1, 1, ecx)
        ecx = var_8_1
        edi_1 += 4
        *(edi_1 - 4) = result
        i += 1
    while (i s< *(arg1 + 0x64))

return result
