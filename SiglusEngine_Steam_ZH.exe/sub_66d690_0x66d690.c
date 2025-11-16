// 函数: sub_66d690
// 地址: 0x66d690
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int16_t* esi = arg1
void* result = *(esi + 0x10)

if (result u> 8)
    esi = *esi

int32_t edi
edi.w = arg2
void* ebx = &esi[result]
int32_t i = (ebx - esi) s>> 1

while (i s> 0)
    int32_t eax_1
    int32_t edx_1
    edx_1:eax_1 = sx.q(i)
    int32_t i_1 = (eax_1 - edx_1) s>> 1
    
    if (esi[i_1] u>= edi.w)
        i = i_1
    else
        esi = &esi[i_1 + 1]
        i += 0xffffffff - i_1

if (esi != ebx && edi.w u>= *esi)
    result.b = 1
    return result

result.b = 0
return result
