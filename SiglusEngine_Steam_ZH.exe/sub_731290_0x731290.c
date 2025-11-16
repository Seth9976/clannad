// 函数: sub_731290
// 地址: 0x731290
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* edi = arg1
void* esi = edi[0x6c]

if (edi[0x3f] != 0)
    if (*(esi + 0x34) == 0)
        sub_730db0(edi)
    
    *(esi + 0x34) -= 1

char* result = esi + 0xb8
arg1 = result
int32_t i = 0
int16_t ebx = (1 << (edi[0x61]).b).w

if (edi[0x53] s> 0)
    do
        if (sub_730c20(edi, result) != 0)
            int16_t* eax_2 = *(arg2 + (i << 2))
            *eax_2 |= ebx
        
        result = arg1
        i += 1
    while (i s< edi[0x53])

result.b = 1
return result
