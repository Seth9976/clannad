// 函数: sub_6dc2d0
// 地址: 0x6dc2d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* result = arg1
int32_t edi = *(result + 4)
int32_t ecx_2 = (zx.d(*(result + 0xb)) + 7) s>> 3
void* edx = ecx_2 + arg2

if (ecx_2 u< edi)
    result = edx - arg2
    char* esi_1 = arg2 - ecx_2
    
    do
        ecx_2.b = *(esi_1 + result)
        edx += 1
        *(edx - 1) += ecx_2.b
        result += 1
    while (result u< edi)

return result
