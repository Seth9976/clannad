// 函数: sub_6b0eb0
// 地址: 0x6b0eb0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* esi = arg2
int32_t ecx = arg1[1]
void* eax

if (esi u< ecx)
    eax = *arg1

if (esi u< ecx && eax u<= esi)
    if (ecx == arg1[2])
        int32_t var_14_1 = ecx
        sub_6b0f90(arg1)
    
    esi = (esi - eax) s/ 0x11c * 0x11c + *arg1
else if (ecx == arg1[2])
    int32_t var_14_2 = ecx
    sub_6b0f90(arg1)

int32_t edi = arg1[1]

if (edi != 0)
    __builtin_memcpy(edi, esi, 0x11c)

arg1[1] += 0x11c
