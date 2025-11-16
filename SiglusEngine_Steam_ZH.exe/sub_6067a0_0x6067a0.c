// 函数: sub_6067a0
// 地址: 0x6067a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

char* esi = arg1
void* result = *(esi + 8)

if (result u> 8)
    esi = *esi

int32_t ebx
ebx.b = arg2
int32_t edi = result + esi
void* i = edi - esi

while (i s> 0)
    int32_t eax_1
    int32_t edx_1
    edx_1:eax_1 = sx.q(i)
    int32_t i_1 = (eax_1 - edx_1) s>> 1
    
    if (esi[i_1] s>= ebx.b)
        i = i_1
    else
        esi = &esi[i_1 + 1]
        i += 0xffffffff - i_1

if (esi != edi && ebx.b s>= *esi)
    result.b = 1
    return result

result.b = 0
return result
