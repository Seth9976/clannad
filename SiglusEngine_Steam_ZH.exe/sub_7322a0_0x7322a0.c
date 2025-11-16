// 函数: sub_7322a0
// 地址: 0x7322a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t i = arg5
void* edx = *(arg1 + 0x5c)
int32_t* edi = arg4
arg4 = edx
int32_t* result = arg3
int32_t* ebx = *arg2 + (result << 2)

for (; i s> 0; i -= 1)
    int32_t* ecx_1 = *ebx
    ebx = &ebx[1]
    int32_t* eax_2 = *edi
    edi = &edi[1]
    result = sub_748840(eax_2, ecx_1, edx)
    edx = arg4

return result
