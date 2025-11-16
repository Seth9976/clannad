// 函数: sub_5be4b0
// 地址: 0x5be4b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_c = arg1
void* result = arg1
int32_t esi = arg2
void* result_1 = result

if (esi s< arg3)
    int32_t edi_1 = esi * 0xb8
    
    do
        sub_5be080(*(result + 0xa4) + edi_1, esi)
        result = result_1
        esi += 1
        edi_1 += 0xb8
    while (esi s< arg3)

return result
