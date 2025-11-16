// 函数: sub_6c7ba0
// 地址: 0x6c7ba0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* result = arg1
int32_t* i = *result
int32_t* result_1 = result

for (; i != result[1]; i = &i[1])
    char* edi_1 = *i
    int32_t ebx_1 = *(edi_1 + 0x1c)
    
    if (sub_6c7340(edi_1, edi_1) != 0)
        if (ebx_1 != 0xffffffff)
            *(edi_1 + 0x1c) = ebx_1
            sub_6c7100(edi_1)
        
        sub_6c7670(edi_1, *(edi_1 + 8), *(edi_1 + 4))
    
    result = result_1

result.b = 0
return result
