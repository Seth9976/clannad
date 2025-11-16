// 函数: sub_728910
// 地址: 0x728910
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = arg1[6]
void* ebx = esi[0xa]

if (ebx u>= 0x1000)
    ebx = 0x1000

sub_748840(esi[0xb], esi[7], ebx)
esi[7] += ebx
esi[9] += ebx
esi[0xa] -= ebx

if (ebx == 0)
    if (esi[0xc].b != ebx.b)
        *(*arg1 + 0x14) = 0x2b
        (**arg1)(arg1)
    
    *(*arg1 + 0x14) = 0x7b
    (*(*arg1 + 4))(arg1, 0xffffffff)
    ebx = 2
    *esi[0xb] = 0xff
    *(esi[0xb] + 1) = 0xd9

*esi = esi[0xb]
int32_t result
result.b = 1
esi[1] = ebx
esi[0xc].b = 0
return result
