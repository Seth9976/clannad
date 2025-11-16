// 函数: sub_72f470
// 地址: 0x72f470
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
int32_t (** eax_2)(void* arg1) = (**(arg1 + 4))(arg1, 1, 0xd8)
*(arg1 + 0x1b0) = eax_2
*eax_2 = sub_72eee0

if (*(arg1 + 0xc9) == 0)
    __builtin_memset(&eax_2[0x10], 0, 0x20)
    return eax_2

int32_t eax_6 = (**(arg1 + 4))(arg1, 1, *(arg1 + 0x24) << 8)
int32_t edx = eax_6
bool cond:0 = *(arg1 + 0x24) s<= 0
*(arg1 + 0x8c) = edx

if (not(cond:0))
    int32_t i = 0
    
    do
        eax_6 = 0xffffffff
        i += 1
        __builtin_memset(edx, 0xffffffff, 0x100)
        edx += 0x100
    while (i s< *(arg1 + 0x24))

eax_2[0xb] = 0
eax_2[0xc] = 0
eax_2[0xd] = 0
eax_2[0xe] = 0
return eax_6
